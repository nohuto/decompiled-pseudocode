/*
 * XREFs of ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802E6210
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18001DD50 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnDesiredTitlebarOverlayStateUpdated(CApplicationManager *this, HWND a2)
{
  CApplicationManager *v3; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rbx
  __int64 (__fastcall *v6)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v12);
  if ( FrameByHwnd >= 0 )
  {
    v11 = 0LL;
    v5 = v12;
    v6 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v12 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v7 = v6(v5, &v11);
    FrameByHwnd = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11);
      FrameByHwnd = v7;
      if ( v7 >= 0 )
      {
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v8 = 8429LL;
    }
    else
    {
      v8 = 8428LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_8:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  return (unsigned int)FrameByHwnd;
}
