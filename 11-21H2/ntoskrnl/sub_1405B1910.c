/*
 * XREFs of sub_1405B1910 @ 0x1405B1910
 * Callers:
 *     sub_14023A710 @ 0x14023A710 (sub_14023A710.c)
 *     sub_140B52548 @ 0x140B52548 (sub_140B52548.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall sub_1405B1910(__int64 a1, _RTL_RB_TREE *a2, __int64 a3)
{
  RtlRbRemoveNode(a2, (PRTL_BALANCED_NODE)a3);
  if ( a2[1].Min == (PRTL_BALANCED_NODE)a3 )
    a2[1].Min = 0LL;
  a2[2].Root = (PRTL_BALANCED_NODE)((char *)a2[2].Root - *(unsigned int *)(a3 + 132));
  --a2[2].Min;
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17536), 0xFFFFFFFFFFFFFE00uLL);
}
