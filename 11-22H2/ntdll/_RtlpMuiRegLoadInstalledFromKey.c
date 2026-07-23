/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x180113D84
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180113CA4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009F430 (NtEnumerateKey.c)
 *     RtlpMuiRegAddLanguageByName @ 0x180110FC4 (RtlpMuiRegAddLanguageByName.c)
 *     ValidateRegistrLangType @ 0x1801133E8 (ValidateRegistrLangType.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  ULONG v3; // edi
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rax
  void *v7; // rcx
  __int16 v8; // cx
  unsigned int v9; // ecx
  char v10; // dl
  int v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_DWORD *)v1 = 0;
  v3 = 0;
  *(_WORD *)(v1 + 4) = -1;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
  *(_OWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( NtOpenKey((PHANDLE)(v1 + 24), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) < 0 )
    return 0LL;
  do
  {
    v5 = NtEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
           v3,
           KeyBasicInformation,
           (PVOID)(v1 + 128),
           0x200u,
           (PULONG)(v1 + 32));
    if ( v5 < 0 )
    {
      if ( v5 != -2147483622 )
        goto LABEL_22;
    }
    else
    {
      v6 = *(unsigned int *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
      if ( v6 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v6 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), (PCWSTR)(v1 + 144));
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 0x18);
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 40;
        *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
        *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
        *(_OWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
        if ( NtOpenKey((PHANDLE)(v1 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
          v7 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 4;
          *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 4;
          if ( (int)LdrpQueryValueKey(
                      v7,
                      (PUNICODE_STRING)(v1 + 40),
                      (_DWORD *)(v1 + 16),
                      (void *)((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL),
                      (ULONG *)(v1 + 36)) >= 0
            && (int)ValidateRegistrLangType(*(_DWORD *)v1) >= 0 )
          {
            v9 = v8 & 0x419F;
            *(_DWORD *)v1 = v9;
            if ( (v9 & 7) != 0 && (v9 & 7 & -(v9 & 7)) == (v9 & 7) )
            {
              if ( (v9 & 0x180) == 0 || (v10 = v9, (v9 & 0x180 & -(v9 & 0x180)) != (v9 & 0x180)) )
              {
                v9 = v9 & 0xFFFFFE7F | 0x80;
                *(_DWORD *)v1 = v9;
                v10 = v9;
              }
              v11 = v10 & 0x18;
              if ( v11 && (v11 & -v11) == v11 && (v9 & 0xC) != 8 )
                RtlpMuiRegAddLanguageByName(
                  a1,
                  *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  (wchar_t *)(v1 + 144),
                  v9,
                  Length,
                  v1 + 4);
            }
          }
        }
      }
    }
    v12 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v12 )
    {
      NtClose(v12);
      *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
    ++v3;
  }
  while ( v5 != -2147483622 );
  v5 = 0;
LABEL_22:
  v13 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v13 )
    NtClose(v13);
  return (unsigned int)v5;
}
