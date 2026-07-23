/*
 * XREFs of SmCrEncInitialize @ 0x1407B8428
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344714 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SmCrEncInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x90uLL);
  result = 1LL;
  a1[14] = 88;
  a1[2] = 1;
  a1[15] = 1;
  return result;
}
