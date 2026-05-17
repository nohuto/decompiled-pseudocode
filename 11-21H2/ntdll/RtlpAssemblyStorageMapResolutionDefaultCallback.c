/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     RtlDoesFileExists_UEx @ 0x180063E54 (RtlDoesFileExists_UEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A46B0 (NtEnumerateKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EB360 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const WCHAR *NtSystemRoot; // rax
  size_t Length; // r14
  unsigned int v15; // ecx
  HANDLE v16; // r12
  int v17; // r15d
  int v18; // r14d
  int v19; // eax
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

  v5 = a1 - 1;
  if ( !v5 )
  {
    v24 = 48;
    v22 = 0LL;
    v25 = 0LL;
    v27 = 64;
    v26 = &unk_18012CDD0;
    v28 = 0LL;
    v19 = NtOpenKey(&v22, 8LL, &v24);
    v18 = v19;
    if ( v19 >= 0 || v19 == -1073741772 || v19 == -1073741431 )
    {
      v7 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_18012CDD0, v19);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = NtClose(*(HANDLE *)a2);
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
          LOBYTE(v11) = 1;
          *(_OWORD *)&v10[v8] = xmmword_180139B70;
          v12 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LODWORD(v7) = RtlDoesFileExists_UEx(v12, v11);
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
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    Length = DestinationString.Length;
    v15 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LODWORD(v7) = Length + 16;
    if ( (int)Length + 16 <= v15 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, Length);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(Length + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = Length + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v7;
  }
  LODWORD(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
    goto LABEL_35;
  v16 = *(HANDLE *)a2;
  v17 = *(_DWORD *)(a2 + 8);
  LODWORD(v22) = 0;
  if ( !v16 )
    goto LABEL_35;
  LODWORD(v7) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned __int64 *))NtEnumerateKey)(
                  v16,
                  (unsigned int)(v17 - 2),
                  0LL,
                  v29,
                  544,
                  &v22);
  v18 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LODWORD(v7) = DbgPrintEx(
                      51,
                      0,
                      "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                      v17 - 2,
                      v7);
LABEL_29:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
      if ( a3 )
        *a3 = v18;
      return v7;
    }
LABEL_35:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = v30;
  if ( v30 <= 0xFFFE )
  {
    DestinationString.Length = v30;
    DestinationString.MaximumLength = v30;
    DestinationString.Buffer = (wchar_t *)&v31;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v16, &DestinationString, a2 + 24);
    v18 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(v21) = v7;
    LODWORD(v7) = DbgPrintEx(
                    51,
                    0,
                    "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                    &DestinationString,
                    v21);
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
