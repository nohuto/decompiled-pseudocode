/*
 * XREFs of sub_1403C6028 @ 0x1403C6028
 * Callers:
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140830168 @ 0x140830168 (sub_140830168.c)
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 *     sub_140830280 @ 0x140830280 (sub_140830280.c)
 *     sub_14083071C @ 0x14083071C (sub_14083071C.c)
 */

__int64 __fastcall sub_1403C6028(int a1)
{
  unsigned int *v1; // rbp
  ULONG v3; // edi
  __int64 v4; // r8
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  void *v8; // rcx
  __int16 v9; // r11
  unsigned int v10; // r11d
  char v11; // dl
  void *v12; // rcx
  void *v13; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL);
  v1[6] = 0;
  *((_QWORD *)v1 + 1) = 0LL;
  *v1 = 0;
  *((_WORD *)v1 + 2) = -1;
  v3 = 0;
  *((_QWORD *)v1 + 2) = 0LL;
  *(_OWORD *)(v1 + 10) = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( (int)sub_14083071C(v1 + 10, 0LL, v4, v1 + 4) < 0 )
    return 0LL;
  do
  {
    v5 = ZwEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           v3,
           KeyBasicInformation,
           v1 + 16,
           0x200u,
           v1 + 6);
    if ( v5 < 0 )
    {
      if ( v5 != -2147483622 )
        goto LABEL_19;
    }
    else
    {
      v6 = *(unsigned int *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
      if ( v6 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v6 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), (PCWSTR)v1 + 40);
        if ( (int)sub_14083071C(
                    v1 + 10,
                    *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                    v7,
                    v1 + 2) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), L"Type");
          v8 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
          *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
          if ( (int)sub_140830280(v8, (PUNICODE_STRING)(v1 + 10), (__int64)(v1 + 7)) >= 0
            && (int)sub_140830168(*v1) >= 0 )
          {
            v10 = v9 & 0x419F;
            *v1 = v10;
            if ( (v10 & 7) != 0 && (v10 & 7 & -(v10 & 7)) == (v10 & 7) )
            {
              if ( (v10 & 0x180) == 0 || (v11 = v10, (v10 & 0x180 & -(v10 & 0x180)) != (v10 & 0x180)) )
              {
                v10 = v10 & 0xFFFFFE7F | 0x80;
                *v1 = v10;
                v11 = v10;
              }
              if ( (v11 & 0x18) != 0
                && (v11 & 0x18 & -(v11 & 0x18)) == (v11 & 0x18)
                && ((v11 & 8) == 0 || (v11 & 4) != 0) )
              {
                sub_1408301C0(
                  a1,
                  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  (_DWORD)v1 + 80,
                  v10,
                  Length,
                  (__int64)(v1 + 1));
              }
            }
          }
        }
      }
    }
    v12 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v12 )
    {
      NtClose(v12);
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
    ++v3;
  }
  while ( v5 != -2147483622 );
  v5 = 0;
LABEL_19:
  v13 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  if ( v13 )
    NtClose(v13);
  return (unsigned int)v5;
}
