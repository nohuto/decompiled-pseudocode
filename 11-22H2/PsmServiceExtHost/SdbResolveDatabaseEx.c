/*
 * XREFs of SdbResolveDatabaseEx @ 0x1800923F4
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1800912B0 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180090C64 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x1800922F8 (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x1800923C8 (SdbGetPathSystemSdb.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x180098BDC (AslRegistryGetUInt32_UStr.c)
 *     AslGuidToString_UStr @ 0x180098E54 (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x180099898 (AslUnicodeStringFree.c)
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
  int v23; // eax
  unsigned int v24; // r15d
  WCHAR *Heap; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  int UInt32_UStr; // eax
  int v29; // eax
  int v30; // [rsp+38h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v36; // [rsp+E8h] [rbp+77h]

  a6 = 0;
  v30 = 0;
  KeyHandle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_1800DB420;
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
  v15 = (GUID *)*((unsigned int *)&off_1800DB420 + 2 * v17 + 4);
  v18 = *((_DWORD *)&off_1800DB420 + 2 * v17 + 2);
  v19 = *((_DWORD *)&off_1800DB420 + 2 * v17 + 3);
  a6 = v18;
  v36 = v19;
  if ( !(_DWORD)v15 )
  {
LABEL_20:
    v23 = AslGuidToString_UStr(&Source, a2, v15, a1);
    if ( v23 >= 0 )
    {
      v24 = Source.Length + 184;
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v24);
      v12 = Heap;
      if ( Heap )
      {
        Destination.MaximumLength = v24;
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
        v26 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
        if ( v26 >= 0 )
        {
          if ( a3 )
          {
            UInt32_UStr = AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType);
            if ( UInt32_UStr < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2349,
                (unsigned int)"Failed to get database type [%x]",
                UInt32_UStr);
              *a3 = 0;
              goto LABEL_38;
            }
            *a3 = a6 & 0x7FFFFFFF;
          }
          if ( a4 )
          {
            v29 = AslRegistryGetUInt32_UStr(&v30, KeyHandle, L".0");
            if ( v29 < 0 )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbResolveDatabaseEx",
                2365,
                (unsigned int)"Failed to get runtime platform [%x]",
                v29);
              *a4 = 0;
              goto LABEL_38;
            }
            *a4 = v30;
          }
          if ( SdbGetPathCustomSdb((int)a5, v27, (__int64)a2, a1 + 584) )
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
              2374,
              (unsigned int)"SdbGetPathCustomSdb failed to get the database path.");
          }
          goto LABEL_38;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2337,
          (unsigned int)"Failed to open Key \"%ws\" [%x]",
          Destination.Buffer,
          v26);
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabaseEx",
          2321,
          (unsigned int)"Failed to allocate %ld bytes for key path",
          v24);
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabaseEx",
        2300,
        (unsigned int)"Failed to convert guid to string [%x]",
        v23);
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
  if ( SdbGetPathSystemSdb((int)a5, (int)v13, (int)v15, a1 + 584) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2277, (unsigned int)"SdbGetPathSystemSdb failed.");
  }
  if ( a3 )
    *a3 = v18;
  if ( a4 )
  {
    v21 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v20);
    *a4 = v21;
    if ( v36 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v11;
}
