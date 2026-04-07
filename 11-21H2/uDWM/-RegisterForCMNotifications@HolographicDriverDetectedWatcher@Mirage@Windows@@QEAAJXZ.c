/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180055118
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180054C44 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x1800551B0 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009DC00 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  void *v2; // rdx
  int v4; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v5[4]; // [rsp+24h] [rbp-1B4h] BYREF
  int v6; // [rsp+28h] [rbp-1B0h]
  GUID v7; // [rsp+30h] [rbp-1A8h]

  v4 = 416;
  memset_0(v5, 0, 0x19CuLL);
  v6 = 0;
  v7 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  ((void (__fastcall *)(int *, wil::details **, void *, wil::details **))CM_Register_Notification)(
    &v4,
    this,
    &_lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_,
    this + 4);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v2);
  return 0LL;
}
