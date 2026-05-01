/*
 * XREFs of ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x18019D124
 * Callers:
 *     ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x1800A3240 (-perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a89b23c60a349d7b14f7d2b756a2fd89_____lambda_a89b23c60a349d7b14f7d2b756a2fd89___ @ 0x18019D230 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a89b23c60a349.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        char a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  int v8; // esi
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = this;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v13);
  v10 = this;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v10);
  v11 = a2;
  v4 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a89b23c60a349d7b14f7d2b756a2fd89_____lambda_a89b23c60a349d7b14f7d2b756a2fd89___(
                    &v13,
                    &v10);
  v5 = *v4;
  *v4 = 0LL;
  v6 = (volatile signed __int32 *)v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x204,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v8);
  if ( this )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
