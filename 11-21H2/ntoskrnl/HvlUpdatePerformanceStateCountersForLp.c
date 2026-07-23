/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0
 * Callers:
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 * Callees:
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall HvlUpdatePerformanceStateCountersForLp(unsigned int a1)
{
  unsigned __int16 v1; // ax

  v1 = HvlInvokeHypercall(65774LL, a1, 0LL);
  if ( v1 )
    return sub_14054CA70(v1);
  else
    return 0LL;
}
