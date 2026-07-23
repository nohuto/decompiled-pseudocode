/*
 * XREFs of PnpStopDeviceSubtree @ 0x14096EE90
 * Callers:
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x14096EE90 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x14096D264 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x14096EE90 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 779 )
  {
    IopQueryReconfiguration(4, *(_QWORD **)(a1 + 32));
    return PipSetDevNodeState(a1, 780);
  }
  return result;
}
