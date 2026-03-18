/*
 * XREFs of PipForAllChildDeviceNodes @ 0x140764D6C
 * Callers:
 *     PipForDeviceNodeSubtree @ 0x140764CE4 (PipForDeviceNodeSubtree.c)
 *     PipForAllDeviceNodesCallback @ 0x140764D24 (PipForAllDeviceNodesCallback.c)
 *     PnprCollectResources @ 0x140951DE0 (PnprCollectResources.c)
 * Callees:
 *     PipForAllDeviceNodesCallback @ 0x140764D24 (PipForAllDeviceNodesCallback.c)
 */

__int64 __fastcall PipForAllChildDeviceNodes(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = *(_QWORD **)(a1 + 8);
  for ( result = 0LL; v3 && (int)result >= 0; result = PipForAllDeviceNodesCallback(v6, a3) )
  {
    v6 = (__int64)v3;
    v3 = (_QWORD *)*v3;
  }
  return result;
}
