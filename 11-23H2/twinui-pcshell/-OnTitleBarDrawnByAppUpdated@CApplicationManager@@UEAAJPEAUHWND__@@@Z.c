/*
 * XREFs of ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180040048 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarDrawnByAppUpdated(CApplicationManager *this, HWND a2)
{
  CApplicationManager *v3; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rbx
  __int64 (__fastcall *v6)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v7; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v13);
  if ( FrameByHwnd >= 0 )
  {
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v13 + 144LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v7 = v6(v5, &v12);
    FrameByHwnd = v7;
    if ( v7 < 0 )
    {
      v9 = 8290LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
      FrameByHwnd = v7;
      if ( v7 >= 0 )
      {
        FrameByHwnd = 0;
LABEL_5:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        goto LABEL_6;
      }
      v9 = 8291LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v7,
      v10);
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return (unsigned int)FrameByHwnd;
}
