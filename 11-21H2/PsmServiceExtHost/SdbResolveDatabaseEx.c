/*
 * XREFs of SdbResolveDatabaseEx @ 0x18009737C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x180096158 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180095C6C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x180097280 (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x180097350 (SdbGetPathSystemSdb.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x18009E1C4 (AslRegistryGetUInt32_UStr.c)
 *     AslGuidToString_UStr @ 0x18009E43C (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x18009EE80 (AslUnicodeStringFree.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 v11; // rbx
  WCHAR *v12; // r12
  GUID **v13; // rdx
  unsigned int v14; // ecx
  GUID *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  USHORT v23; // r15
  WCHAR *Heap; // rax
  __int64 v25; // rdx
  int v26; // [rsp+38h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v32; // [rsp+E8h] [rbp+77h]

  a6 = 0;
  v26 = 0;
  KeyHandle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_1800DC470;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v13;
    v16 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v16 )
      v16 = *(_QWORD *)v15->Data4 - a2[1];
    if ( !v16 )
      break;
    ++v14;
    v13 += 3;
    if ( v14 >= 3 )
      goto LABEL_20;
  }
  v17 = 3LL * (int)v14;
  v15 = (GUID *)*((unsigned int *)&off_1800DC470 + 2 * v17 + 4);
  v18 = *((_DWORD *)&off_1800DC470 + 2 * v17 + 2);
  v19 = *((_DWORD *)&off_1800DC470 + 2 * v17 + 3);
  a6 = v18;
  v32 = v19;
  if ( !(_DWORD)v15 )
  {
LABEL_20:
    if ( (int)AslGuidToString_UStr(&Source, a2, v15, a1) >= 0 )
    {
      v23 = Source.Length + 184;
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Source.Length + 184);
      v12 = Heap;
      if ( Heap )
      {
        Destination.MaximumLength = v23;
        Destination.Buffer = Heap;
        Destination.Length = 0;
        RtlAppendUnicodeToString(
          &Destination,
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
        {
          if ( a3 )
          {
            if ( (int)AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType) < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2053,
                (unsigned int)"Failed to get database type [%x]");
              *a3 = 0;
              goto LABEL_38;
            }
            *a3 = a6 & 0x7FFFFFFF;
          }
          if ( a4 )
          {
            if ( (int)AslRegistryGetUInt32_UStr(&v26, KeyHandle, L".0") < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2069,
                (unsigned int)"Failed to get runtime platform [%x]");
              *a4 = 0;
              goto LABEL_38;
            }
            *a4 = v26;
          }
          if ( SdbGetPathCustomSdb((int)a5, v25, (__int64)a2, a1 + 576) )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( a5[v11] );
          }
          else
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbResolveDatabaseEx",
              2078,
              (unsigned int)"SdbGetPathCustomSdb failed to get the database path.");
          }
          goto LABEL_38;
        }
        AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2041, (unsigned int)"Failed to open Key \"%ws\" [%x]");
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2025,
          (unsigned int)"Failed to allocate %ld bytes for key path");
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabaseEx",
        2004,
        (unsigned int)"Failed to convert guid to string [%x]");
    }
LABEL_38:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v12 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    if ( Source.Buffer )
      AslUnicodeStringFree(&Source);
    return (unsigned int)v11;
  }
  if ( SdbGetPathSystemSdb((int)a5, (int)v13, (int)v15, a1 + 576) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 1981, (unsigned int)"SdbGetPathSystemSdb failed.");
  }
  if ( a3 )
    *a3 = v18;
  if ( a4 )
  {
    v21 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v20);
    *a4 = v21;
    if ( v32 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v11;
}
