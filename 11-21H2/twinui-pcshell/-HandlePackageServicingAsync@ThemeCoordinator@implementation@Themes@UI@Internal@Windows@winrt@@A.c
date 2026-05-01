/*
 * XREFs of ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1800B4818
 * Callers:
 *     ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x1800B47C0 (-perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_b02690e03f8043e191825a2fb9cefb41_@@@Z @ 0x1800B4924 (--$Make@V-$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        char a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  int v7; // esi
  int v9; // [rsp+20h] [rbp-28h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v13);
  v10 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v10);
  v11 = a2;
  v4 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b02690e03f8043e191825a2fb9cefb41_>,_lambda_b02690e03f8043e191825a2fb9cefb41_>(
                    &v13,
                    &v10);
  v5 = *v4;
  *v4 = 0LL;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x101,
      (unsigned int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v7,
      v9);
  if ( this )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
