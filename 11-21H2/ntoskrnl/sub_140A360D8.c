/*
 * XREFs of sub_140A360D8 @ 0x140A360D8
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     sub_140830280 @ 0x140830280 (sub_140830280.c)
 *     sub_140A35BC0 @ 0x140A35BC0 (sub_140A35BC0.c)
 */

__int64 __fastcall sub_140A360D8(__int64 a1, void *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v7; // edi
  ULONG v8; // r12d
  __int64 v9; // rsi
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)(v3 + 8) = 0LL;
  memset((void *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 32), 0, 0xAAuLL);
  LODWORD(v9) = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), L"DefaultFallback");
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 170;
  if ( (int)sub_140830280(
              a2,
              (PUNICODE_STRING)(v3 + 8),
              (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
              (void *)(v3 + 32),
              (ULONG *)(v3 + 24)) < 0
    || *(_DWORD *)v3 != 1 )
  {
    goto LABEL_16;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 32));
  *(_DWORD *)v3 = 7;
  v10 = sub_140830280(
          a2,
          (PUNICODE_STRING)(v3 + 8),
          (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
          0LL,
          0LL);
  v11 = v10;
  if ( (!v10 || v10 == -2147483643)
    && (*(_DWORD *)v3 == 7 || *(_DWORD *)v3 == 1)
    && (int)sub_140A35BC0(a1, (__int64)a3, 0, (WCHAR *)(v3 + 32)) >= 0 )
  {
    v7 = 1;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20 + 2 * v9) );
  }
  if ( v11 != -2147483622 )
  {
LABEL_16:
    while ( v7 < 4
         && ZwEnumerateValueKey(a2, v8, KeyValueFullInformation, (PVOID)(v3 + 224), 0x200u, (PULONG)(v3 + 28)) >= 0 )
    {
      if ( *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 7
        || *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 1 )
      {
        v12 = *(unsigned int *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0);
        if ( v12 + 24 <= 0x200 )
        {
          *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF4 + 2 * (v12 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 244));
          if ( (!(_DWORD)v9
             || RtlCompareUnicodeStrings(
                  *(PCWCH *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                  (unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >> 1,
                  (PCWCH)(v3 + 32),
                  (unsigned int)v9,
                  1u))
            && (int)sub_140A35BC0(
                      a1,
                      (__int64)a3,
                      v7,
                      *(WCHAR **)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) >= 0 )
          {
            ++v7;
          }
        }
      }
      ++v8;
    }
  }
  return 0LL;
}
