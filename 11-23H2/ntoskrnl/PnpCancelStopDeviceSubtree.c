/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x14096E684
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14096E684 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x14096E5F4 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x14096E684 (PnpCancelStopDeviceSubtree.c)
 */

__int64 __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx

  result = PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpCancelStopDeviceSubtree(i);
  return result;
}
