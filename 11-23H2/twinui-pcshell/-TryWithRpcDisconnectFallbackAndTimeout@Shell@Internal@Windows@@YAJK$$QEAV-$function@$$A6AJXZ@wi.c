/*
 * XREFs of ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180187780
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x180187594 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806955F0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695810 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695B50 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180187820 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801878C0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??R?$function@$$A6AJXZ@wistd@@QEBAJXZ @ 0x180187914 (--R-$function@$$A6AJXZ@wistd@@QEBAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
        DWORD DueTime,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+58h] [rbp+10h] BYREF

  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v13, DueTime);
  v7 = wistd::function<long (void)>::operator()(a2);
  v15 = v7;
  v8 = *(_QWORD *)(a4 + 112);
  if ( !v8 )
    __fastfail(7u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 32LL))(v8, &v15) )
  {
    v10 = wistd::function<long (void)>::operator()(a3);
    v7 = v10;
    if ( v10 >= 0 )
      goto LABEL_4;
    v11 = (unsigned int)v10;
    v12 = 64LL;
  }
  else
  {
    if ( v7 >= 0 )
    {
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
    v11 = (unsigned int)v7;
    v12 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\internal\\shell\\inc\\restartabilityhelpers.h",
    (const char *)v11);
LABEL_5:
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (int)"onecoreuap\\internal\\shell\\inc\\restartabilityhelpers.h",
      (const char *)(unsigned int)v7);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v13);
    return (unsigned int)v7;
  }
  else
  {
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v13);
    return 0LL;
  }
}
