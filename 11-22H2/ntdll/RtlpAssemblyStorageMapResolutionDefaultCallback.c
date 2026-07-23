/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18000973C (RtlDoesFileExists_UEx.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009F430 (NtEnumerateKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  const WCHAR *NtSystemRoot; // rax
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  const WCHAR *v14; // rcx
  NTSTATUS v15; // eax
  int v16; // r14d
  HANDLE v17; // r12
  int v18; // r15d
  __int64 Length; // [rsp+20h] [rbp-E0h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v25; // [rsp+8Ch] [rbp-74h]
  char v26; // [rsp+90h] [rbp-70h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180131980;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = NtOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v16 = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      v10 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v10;
      return v10;
    }
    LOBYTE(v10) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180131980, v15);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v10) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v10) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      v8 = DestinationString.Length;
      v9 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LOBYTE(v10) = v8 + 16;
      if ( (int)v8 + 16 > v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned int)v8);
        v10 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)(v8 + v10) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = v8 + 16;
      }
      return v10;
    }
    LOBYTE(v10) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
      goto LABEL_37;
    v17 = *(HANDLE *)a2;
    v18 = *(_DWORD *)(a2 + 8);
    LODWORD(KeyHandle) = 0;
    if ( !v17 )
      goto LABEL_37;
    LODWORD(v10) = NtEnumerateKey(v17, v18 - 2, KeyBasicInformation, KeyInformation, 0x220u, (PULONG)&KeyHandle);
    v16 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v10 != -2147483622 )
      {
        LOBYTE(v10) = DbgPrintEx(
                        0x33u,
                        0,
                        "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                        v18 - 2,
                        v10);
LABEL_31:
        *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
        if ( a3 )
          *a3 = v16;
        return v10;
      }
LABEL_37:
      *(_BYTE *)(a2 + 17) = 1;
      return v10;
    }
    LOBYTE(v10) = v25;
    if ( v25 <= 0xFFFE )
    {
      DestinationString.Length = v25;
      DestinationString.MaximumLength = v25;
      DestinationString.Buffer = (wchar_t *)&v26;
      LODWORD(v10) = RtlpGetAssemblyStorageMapRootLocation(v17, &DestinationString, a2 + 24);
      v16 = v10;
      if ( (v10 & 0x80000000) == 0LL )
        return v10;
      LODWORD(Length) = v10;
      LOBYTE(v10) = DbgPrintEx(
                      0x33u,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      &DestinationString,
                      Length);
      goto LABEL_31;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v10 = (unsigned __int64)NtCurrentPeb();
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 32) + 96LL);
    if ( v11 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a2 + 26);
      if ( v11 + 16 > v10 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v13 = *(char **)(a2 + 32);
        memmove(v13, Buffer, v11);
        *(_OWORD *)&v13[v11] = xmmword_18013C388;
        v14 = *(const WCHAR **)(a2 + 32);
        *(_WORD *)(a2 + 24) = v11 + 14;
        LOBYTE(v10) = RtlDoesFileExists_UEx(v14, 1);
        if ( !(_BYTE)v10 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v10;
}
