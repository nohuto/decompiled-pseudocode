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

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v6; // ecx
  __int64 v7; // rcx
  const WCHAR *NtSystemRoot; // rax
  __int64 Length; // r14
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  size_t v12; // r15
  wchar_t *Buffer; // rdx
  char *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r14d
  HANDLE v18; // r12
  int v19; // r15d
  __int64 v21; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  void *v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+8Ch] [rbp-74h]
  char v31; // [rsp+90h] [rbp-70h] BYREF

  v6 = a1 - 1;
  if ( !v6 )
  {
    v24 = 48;
    v22 = 0LL;
    v25 = 0LL;
    v27 = 64;
    v26 = &unk_180131980;
    v28 = 0LL;
    v16 = NtOpenKey(&v22, 8LL, &v24);
    v17 = v16;
    if ( v16 >= 0 || v16 == -1073741772 || v16 == -1073741431 )
    {
      v11 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v11;
      return v11;
    }
    LOBYTE(v11) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180131980, v16);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    LOBYTE(v11) = 2;
    if ( (_DWORD)v7 == 2 && *(_QWORD *)a2 )
      LOBYTE(v11) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v7, a2, (__int64)a3, a4);
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v10 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LOBYTE(v11) = Length + 16;
      if ( (int)Length + 16 > v10 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned int)Length);
        v11 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)(Length + v11) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = Length + 16;
      }
      return v11;
    }
    LOBYTE(v11) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
      goto LABEL_37;
    v18 = *(HANDLE *)a2;
    v19 = *(_DWORD *)(a2 + 8);
    LODWORD(v22) = 0;
    if ( !v18 )
      goto LABEL_37;
    LODWORD(v11) = NtEnumerateKey(v18, (unsigned int)(v19 - 2), 0LL, v29, 544, &v22);
    v17 = v11;
    if ( (v11 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v11 != -2147483622 )
      {
        LOBYTE(v11) = DbgPrintEx(
                        51,
                        0,
                        "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                        v19 - 2,
                        v11);
LABEL_31:
        *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
        if ( a3 )
          *a3 = v17;
        return v11;
      }
LABEL_37:
      *(_BYTE *)(a2 + 17) = 1;
      return v11;
    }
    LOBYTE(v11) = v30;
    if ( v30 <= 0xFFFE )
    {
      DestinationString.Length = v30;
      DestinationString.MaximumLength = v30;
      DestinationString.Buffer = (wchar_t *)&v31;
      LODWORD(v11) = RtlpGetAssemblyStorageMapRootLocation(v18, &DestinationString, a2 + 24);
      v17 = v11;
      if ( (v11 & 0x80000000) == 0LL )
        return v11;
      LODWORD(v21) = v11;
      LOBYTE(v11) = DbgPrintEx(
                      51,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      &DestinationString,
                      v21);
      goto LABEL_31;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v11 = (unsigned __int64)NtCurrentPeb();
    v12 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 32) + 96LL);
    if ( v12 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v11 = *(unsigned __int16 *)(a2 + 26);
      if ( v12 + 16 > v11 )
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
        v14 = *(char **)(a2 + 32);
        memmove(v14, Buffer, v12);
        *(_OWORD *)&v14[v12] = xmmword_18013C388;
        v15 = *(_QWORD *)(a2 + 32);
        *(_WORD *)(a2 + 24) = v12 + 14;
        LOBYTE(v11) = RtlDoesFileExists_UEx(v15, 1);
        if ( !(_BYTE)v11 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v11;
}
