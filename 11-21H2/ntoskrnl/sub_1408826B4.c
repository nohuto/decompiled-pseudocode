/*
 * XREFs of sub_1408826B4 @ 0x1408826B4
 * Callers:
 *     sub_1405E2E00 @ 0x1405E2E00 (sub_1405E2E00.c)
 *     sub_1405E33F8 @ 0x1405E33F8 (sub_1405E33F8.c)
 *     sub_1409ADDA4 @ 0x1409ADDA4 (sub_1409ADDA4.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 *     sub_1409BFCA0 @ 0x1409BFCA0 (sub_1409BFCA0.c)
 *     sub_1409C019C @ 0x1409C019C (sub_1409C019C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408826B4(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
