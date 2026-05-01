/*
 * XREFs of sub_180013624 @ 0x180013624
 * Callers:
 *     sub_180016454 @ 0x180016454 (sub_180016454.c)
 *     sub_1800166CC @ 0x1800166CC (sub_1800166CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013624(unsigned int a1, __int64 a2)
{
  if ( a1 >= *(_DWORD *)(a2 + 80) )
    return a1 != *(_DWORD *)(a2 + 80);
  else
    return 0xFFFFFFFFLL;
}
