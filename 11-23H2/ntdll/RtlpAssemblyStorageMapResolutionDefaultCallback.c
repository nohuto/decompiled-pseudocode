/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18000951C (RtlDoesFileExists_UEx.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A14F0 (NtEnumerateKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  const WCHAR *v11; // rcx
  const WCHAR *NtSystemRoot; // rax
  size_t v13; // r14
  unsigned int v14; // ecx
  HANDLE v15; // r12
  int v16; // r15d
  int v17; // r14d
  NTSTATUS v18; // eax
  __int64 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v25; // [rsp+8Ch] [rbp-74h]
  char v26; // [rsp+90h] [rbp-70h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    ObjectAttributes.Length = 48;
    *(_QWORD *)ResultLength = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180133DF0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = NtOpenKey((PHANDLE)ResultLength, 8u, &ObjectAttributes);
    v17 = v18;
    if ( v18 >= 0 || v18 == -1073741772 || v18 == -1073741431 )
    {
      v7 = *(_QWORD *)ResultLength;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LOBYTE(v7) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180133DF0, v18);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v7) = NtClose(*(HANDLE *)a2);
    return v7;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v7 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) != 0 )
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v8 + 16 <= 0xFFFE )
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v8 + 16 <= v7 )
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = *(char **)(a2 + 32);
          memmove(v10, Buffer, v8);
          *(_OWORD *)&v10[v8] = xmmword_180145E28;
          v11 = *(const WCHAR **)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LOBYTE(v7) = RtlDoesFileExists_UEx(v11, 1);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v7;
  }
  if ( *(_QWORD *)(a2 + 8) == 1LL )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    v13 = DestinationString.Length;
    v14 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LOBYTE(v7) = v13 + 16;
    if ( (int)v13 + 16 <= v14 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, v13);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(v13 + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = v13 + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v7;
  }
  LOBYTE(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
    goto LABEL_35;
  v15 = *(HANDLE *)a2;
  v16 = *(_DWORD *)(a2 + 8);
  ResultLength[0] = 0;
  if ( !v15 )
    goto LABEL_35;
  LODWORD(v7) = NtEnumerateKey(v15, v16 - 2, KeyBasicInformation, KeyInformation, 0x220u, ResultLength);
  v17 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LOBYTE(v7) = DbgPrintEx(
                     0x33u,
                     0,
                     "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                     v16 - 2,
                     v7);
LABEL_29:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
      if ( a3 )
        *a3 = v17;
      return v7;
    }
LABEL_35:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LOBYTE(v7) = v25;
  if ( v25 <= 0xFFFE )
  {
    DestinationString.Length = v25;
    DestinationString.MaximumLength = v25;
    DestinationString.Buffer = (wchar_t *)&v26;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v15, &DestinationString, a2 + 24);
    v17 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(Length) = v7;
    LOBYTE(v7) = DbgPrintEx(
                   0x33u,
                   0,
                   "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                   &DestinationString,
                   Length);
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
