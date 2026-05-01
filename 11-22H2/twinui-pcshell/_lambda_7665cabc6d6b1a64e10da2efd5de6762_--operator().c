/*
 * XREFs of _lambda_7665cabc6d6b1a64e10da2efd5de6762_::operator() @ 0x18025C828
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAUDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAUDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1806F7620 (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAUDiscoverabi.c)
 */

__int64 __fastcall lambda_7665cabc6d6b1a64e10da2efd5de6762_::operator()(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, __int64); // rbp
  int v5; // ebx
  int v6; // r8d
  int v7; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[1];
  v3 = **a1;
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64))(*(_QWORD *)v3 + 24LL);
  if ( v2[15] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2 + 15);
  v5 = v4(
         v3,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         (__int64)(v2 + 15));
  if ( v5 >= 0 )
  {
    v5 = SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *>(
           (unsigned int)a1[1] + 256,
           a1[1][15],
           v6,
           v7,
           (__int64)a1[1]);
    if ( v5 >= 0 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
