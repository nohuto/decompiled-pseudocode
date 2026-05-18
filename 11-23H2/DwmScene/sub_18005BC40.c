/*
 * XREFs of sub_18005BC40 @ 0x18005BC40
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 * Callees:
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 */

__int64 __fastcall sub_18005BC40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_18005E124() )
    sub_18005D990(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
