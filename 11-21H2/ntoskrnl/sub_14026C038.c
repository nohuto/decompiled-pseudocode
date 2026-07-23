/*
 * XREFs of sub_14026C038 @ 0x14026C038
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 * Callees:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14026C0E4 @ 0x14026C0E4 (sub_14026C0E4.c)
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 */

__int64 __fastcall sub_14026C038(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rbx

  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v6 = *(unsigned __int8 *)(a3 + 34);
  if ( (((unsigned __int8)v6 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    sub_140267E78(a2, v6 >> 6, 2);
  result = sub_14026C124(0LL, v5, 1073741840LL, 0LL);
  v8 = result;
  if ( result )
  {
    sub_140424FF0(result, a4);
    sub_14026C0E4(v8);
    return 1LL;
  }
  return result;
}
