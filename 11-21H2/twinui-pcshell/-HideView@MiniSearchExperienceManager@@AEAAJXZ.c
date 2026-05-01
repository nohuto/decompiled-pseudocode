/*
 * XREFs of ?HideView@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A1B70
 * Callers:
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698 (-OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?9UIMessageTimer@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIMessageTimer@@@01@$$T@Z @ 0x18009E540 (--$-9UIMessageTimer@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIMessageTimer@@@01@$$T@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall MiniSearchExperienceManager::HideView(MiniSearchExperienceManager *this)
{
  ExperienceManagerUtils **v2; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  HWND v4; // rbx
  HWND WindowW; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (ExperienceManagerUtils **)((char *)this + 40);
  if ( Microsoft::WRL::operator!=<IMessageTimer>((_QWORD *)this + 5) )
  {
    v4 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*v2, v3);
    if ( !v4 )
      return 2147947423LL;
    if ( v4 == GetForegroundWindow() )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
        PostMessageW(WindowW, 0x111u, 0xA031uLL, 0LL);
    }
    v12 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v2,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 987LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v12);
      return v8;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 988LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v12);
  }
  if ( Microsoft::WRL::operator!=<IMessageTimer>(v2) )
  {
    v10 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)*v2 + 344LL))(*v2, 1LL);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return v8;
    }
    *(_OWORD *)((char *)this + 88) = 0LL;
  }
  LODWORD(v12) = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (_QWORD *)this + 23,
    (unsigned int *)&v12);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  return 0LL;
}
