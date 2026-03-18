/*
 * XREFs of DrvOcclusionStateChangeNotify @ 0x1C011E478
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvOcclusionStateChangeNotify()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v1[1] = retaddr;
  v1[0] = 1LL;
  result = ((__int64 (__fastcall *)(_QWORD *))gDxgkInterface[52])(v1);
  if ( (int)result < 0 )
    return WdLogSingleEntry0(1LL);
  return result;
}
