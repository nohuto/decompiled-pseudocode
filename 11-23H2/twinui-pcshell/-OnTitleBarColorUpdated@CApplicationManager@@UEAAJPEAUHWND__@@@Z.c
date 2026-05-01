/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003FF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180040048 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6fee417e2be08ceb392cfd1fd48038f4___ @ 0x1801D00E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_6fee417e2be08ceb392cfd1fd48038f4___.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  CApplicationManager *v3; // rbx
  __int64 v4; // rcx
  int FrameByHwnd; // ebx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationFrameProxy *v10; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v10);
  if ( FrameByHwnd >= 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_6fee417e2be08ceb392cfd1fd48038f4___(v4, &v11);
    FrameByHwnd = v6;
    if ( v6 >= 0 )
      FrameByHwnd = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2057,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v8);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v11);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return (unsigned int)FrameByHwnd;
}
