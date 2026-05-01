/*
 * XREFs of ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x1803440CC
 * Callers:
 *     ?HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180342234 (-HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803428E4 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180342FB8 (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180343F74 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___ @ 0x180340F74 (Windows--Internal--ComTaskPool--QueueTask__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___.c)
 *     ??$get_weak@VSnapFlyoutHost@@@?$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1803411C8 (--$get_weak@VSnapFlyoutHost@@@-$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Window.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 60) != a3 )
  {
    *(_DWORD *)(a1 + 60) = a3;
    winrt::impl::root_implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak<SnapFlyoutHost>(
      (volatile signed __int64 *)a1,
      &v14);
    v5 = v14;
    v6 = *(_DWORD *)(a1 + 184);
    v14 = 0LL;
    v11 = v5;
    *(_QWORD *)v10 = a1;
    v12 = a3;
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___(v8, v7, v6, (__int64)v10);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x369,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v9);
    if ( v11 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
    if ( v14 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
  }
}
