/*
 * XREFs of sub_140A815FC @ 0x140A815FC
 * Callers:
 *     sub_140A9FE70 @ 0x140A9FE70 (sub_140A9FE70.c)
 * Callees:
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A815FC(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rbp
  signed __int64 v6; // rsi
  __int64 result; // rax

  v2 = BugCheckParameter2 >> 12;
  v3 = ((BugCheckParameter2 & 0xFFF) + BugCheckParameter3 + 4095) >> 12;
  v6 = 48 * (BugCheckParameter2 >> 12);
  do
  {
    result = sub_1402B2E00(v2);
    if ( (_DWORD)result )
    {
      result = 0xFFFFDE0000000020uLL;
      if ( !*(_WORD *)(v6 - 0x21FFFFFFFFE0LL) )
        result = sub_140A8C924(
                   0xC4u,
                   0x83uLL,
                   BugCheckParameter2,
                   BugCheckParameter3,
                   0xAAAAAAAAAAAAAAABuLL * (v6 >> 4));
    }
    v6 += 48LL;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
