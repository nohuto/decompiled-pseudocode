/*
 * XREFs of ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180053EA0
 * Callers:
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180053E60 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CloseView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  void (__fastcall *v4)(CDesktopPositioner *, GUID *, IUnknown **); // rbx
  HRESULT v5; // ebx
  int v6; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  IUnknown *punk; // [rsp+60h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v4 = *(void (__fastcall **)(CDesktopPositioner *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  v4(this, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v5 = IUnknown_QueryService(punk, &guidService, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 2498LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v8,
      v10);
    goto LABEL_4;
  }
  v10 = 22;
  v6 = ApplicationViewHelpers::CloseView(a2, ppvOut, 8LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 2501LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
