/*
 * XREFs of ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804AE51C
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804AA880 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804AAB00 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData__ @ 0x1804A90A8 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804ADDD4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::_EnsureShellStateForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int v3; // r9d
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  struct IApplicationView **v11; // rsi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 112);
  *a3 = v3 == 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 112) == 1 )
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::DenyAppViewDuringOOBE<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 2126LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
    else if ( *((_QWORD *)this + 54) )
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::QueueAppViewPending<unsigned short const *>);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 54) + 24LL))(
             *((_QWORD *)this + 54),
             a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x854,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v11 = (struct IApplicationView **)((char *)this + 424);
      v12 = *((_QWORD *)this + 53);
      if ( v12 )
      {
        LogEventWithApplicationViewData__(
          v12,
          (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::PreviousPendingViewClosed<unsigned short const *>);
        v6 = HolographicPositioner::_CloseView(this, *v11);
        if ( v6 < 0 )
        {
          v7 = 2139LL;
          goto LABEL_5;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v11);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v11, (__int64)a2);
    }
    else
    {
      LogEventWithApplicationViewData__(
        (__int64)a2,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::DenyAppViewPending<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView(this, a2);
      if ( v6 < 0 )
      {
        v7 = 2150LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
