/*
 * XREFs of ?AppLayoutChanged@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x18059C020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18059CA9C (-QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::AppLayoutChanged(
        CSnapAssistControllerBase *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  int (__fastcall *v5)(struct IAppLayoutOperation *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v5 = *(int (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a3 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( v5(a3, &v10) < 0
    || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 80LL))(v10, 4LL) == 1
    || (v6 = CSnapAssistControllerBase::QueueSnapAssistDismissal((CSnapAssistControllerBase *)((char *)this - 24)),
        v7 = v6,
        v6 >= 0) )
  {
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v7;
}
