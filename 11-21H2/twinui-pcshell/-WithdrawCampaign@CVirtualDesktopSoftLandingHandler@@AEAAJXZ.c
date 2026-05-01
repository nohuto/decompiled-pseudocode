/*
 * XREFs of ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18055C1E8
 * Callers:
 *     ?CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18055C110 (-CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVir.c)
 *     ?VirtualDesktopCreated@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18055C1D0 (-VirtualDesktopCreated@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVirtualDes.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::WithdrawCampaign(
        CVirtualDesktopSoftLandingHandler *this,
        __int64 a2)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, int *, __int64))(**((_QWORD **)this + 4) + 32LL))(
    *((_QWORD *)this + 4),
    a2,
    0LL,
    L"VDSoftLandingCampaignDone",
    4,
    &v4,
    4LL);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return 0LL;
}
