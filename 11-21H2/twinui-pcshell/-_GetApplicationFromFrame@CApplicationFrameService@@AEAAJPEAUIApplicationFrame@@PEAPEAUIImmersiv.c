/*
 * XREFs of ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18006EA80
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18006E930 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006EB70 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_GetApplicationFromFrame(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        struct IImmersiveApplication **a3)
{
  int FrameByWindow; // ebx
  struct IApplicationFrameProxy *v7; // [rsp+48h] [rbp+10h] BYREF
  HWND v8; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  FrameByWindow = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v8);
  if ( FrameByWindow >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
    FrameByWindow = CApplicationFrameService::GetFrameByWindow((CApplicationFrameService *)((char *)this + 40), v8, &v7);
    if ( FrameByWindow >= 0 )
      FrameByWindow = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrameProxy *, GUID *, struct IImmersiveApplication **))(**((_QWORD **)this + 21) + 48LL))(
                        *((_QWORD *)this + 21),
                        v7,
                        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                        a3);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  }
  return (unsigned int)FrameByWindow;
}
