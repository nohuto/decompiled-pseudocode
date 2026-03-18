/*
 * XREFs of PnpIrpQueryID @ 0x1407981CC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1407980D8 (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x140963BC4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140963D14 (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD v7[20]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v7, 0, 0x48uLL);
  v7[2] = a2;
  LOWORD(v7[0]) = 4891;
  result = IopSynchronousCall(a1, (__int64)v7, -1073741637, 0LL, a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
