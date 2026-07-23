/*
 * XREFs of sub_14045DEFE @ 0x14045DEFE
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     PoFxCompleteIdleState @ 0x14045DD10 (PoFxCompleteIdleState.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045E5E0 @ 0x14045E5E0 (sub_14045E5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_14045DEFE(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 result; // rax

  if ( a4 )
    memset(a4, 0, 0x40uLL);
  result = sub_14045E5E0(*(_QWORD *)(a1 + 56), a2, a3, a4);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      sub_1405CAE6C(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
