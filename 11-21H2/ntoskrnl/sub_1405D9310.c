/*
 * XREFs of sub_1405D9310 @ 0x1405D9310
 * Callers:
 *     <none>
 * Callees:
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_140565198 @ 0x140565198 (sub_140565198.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405D9310(__int64 a1, __int64 a2, char a3)
{
  if ( byte_140D06A49 )
    sub_1405CAE6C(0x61EuLL, 0LL, 0LL, 0LL);
  if ( a3 )
  {
    sub_140565198(1u);
    return KdPowerTransitionEx(-2147483647, 1);
  }
  else
  {
    KdPowerTransitionEx(-2147483644, 1);
    return sub_140565198(4u);
  }
}
