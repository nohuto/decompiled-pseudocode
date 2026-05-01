/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$2 @ 0x1801BA220 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 * Callees:
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x18000A0D0 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x18001C170 (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x18001C1CC (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x18001C220 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x18001C934 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18001D9FC (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$await_transform@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@QEAA?AU?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@$$QEAV?$duration@_JU?$ratio@$00$00@std@@@chrono@3@@Z @ 0x18002F2BC (--$await_transform@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@promise_type@-$coroutine_tra.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x1800445E4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800989E4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801228B4 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAAXXZ @ 0x18015E254 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ?await_ready@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x180168050 (-await_ready@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x180238938 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x180577070 (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1(
        char *a1)
{
  char *v2; // r13
  __int64 *v3; // rbx
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rax
  __int64 v11; // rcx
  void *v12; // rbx
  RTL_SRWLOCK **v13; // r15
  RTL_SRWLOCK *v14; // rcx
  __int64 v15; // rcx
  const unsigned __int8 *v16; // r12
  void **v17; // rax
  RTL_SRWLOCK *v18; // rdx
  PVOID Ptr; // rdx
  PVOID v20; // rax
  unsigned __int64 v21; // rcx
  RTL_SRWLOCK *v22; // rsi
  _OWORD *v23; // r14
  bool v24; // bl
  char v25; // r13
  HWND ForegroundWindow; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v29; // rbx
  HWND TabProxyWindowOwnerWindow; // r15
  HWND TabProxyWindowHwnd; // rax
  __int16 v32; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        v2 = a1 + 1;
        *((_QWORD *)a1 + 60) = a1 + 1;
        v3 = (__int64 *)(a1 + 1169);
        *((_QWORD *)a1 + 62) = a1 + 1169;
        v4 = *(RTL_SRWLOCK **)(a1 + 1169);
        *((_QWORD *)a1 + 64) = *v3;
        v4 += 75;
        *((_QWORD *)a1 + 66) = v4;
        *((_QWORD *)a1 + 28) = v4;
        wil::srwlock::lock_shared(v4, (RTL_SRWLOCK **)a1 + 2);
        *((_QWORD *)a1 + 68) = v3;
        v5 = *v3;
        *((_QWORD *)a1 + 70) = *v3;
        v5 += 608LL;
        *((_QWORD *)a1 + 72) = v5;
        *((_QWORD *)a1 + 30) = v5;
        *((_QWORD *)a1 + 74) = a1 + 9;
        *((_QWORD *)a1 + 76) = a1 + 1177;
        v6 = std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
               v5,
               (_QWORD *)a1 + 3,
               (__int64)(a1 + 1177));
        *((_QWORD *)a1 + 32) = v6;
        *((_QWORD *)a1 + 78) = v3;
        v7 = (__int64 *)*v3;
        *((_QWORD *)a1 + 80) = *v3;
        v7 += 77;
        *((_QWORD *)a1 + 82) = v7;
        *((_QWORD *)a1 + 52) = v7;
        v8 = *v7;
        *((_QWORD *)a1 + 84) = v8;
        v9 = *v6;
        *((_QWORD *)a1 + 86) = v9;
        if ( v9 == v8 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 2);
        }
        else
        {
          v10 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                 *((_QWORD *)v2 + 146) + 608LL,
                                 (const unsigned __int8 *)(*((_QWORD *)a1 + 74) + 1168LL));
          *((_OWORD *)a1 + 2) = *winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
                                   v10,
                                   (_OWORD *)a1 + 3);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 2);
          *((_QWORD *)a1 + 9) = 1LL;
          v12 = (void *)std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type::await_transform<std::chrono::duration<__int64,std::ratio<1,1>>>(
                          v11,
                          (__int64)(a1 + 80),
                          (_QWORD *)a1 + 9);
          *((_QWORD *)a1 + 8) = v12;
          if ( !winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_ready((__int64)v12) )
          {
            *((_WORD *)a1 + 4) = 4;
            winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(v12);
            return;
          }
LABEL_8:
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(*((_QWORD *)a1 + 8));
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 80);
          v13 = (RTL_SRWLOCK **)(*((_QWORD *)a1 + 60) + 1168LL);
          *((_QWORD *)a1 + 88) = v13;
          v14 = *v13;
          *((_QWORD *)a1 + 90) = *v13;
          v14 += 75;
          *((_QWORD *)a1 + 92) = v14;
          *((_QWORD *)a1 + 36) = v14;
          wil::srwlock::lock_shared(v14, (RTL_SRWLOCK **)a1 + 15);
          *((_QWORD *)a1 + 94) = v13;
          v15 = (__int64)*v13;
          *((_QWORD *)a1 + 96) = *v13;
          v15 += 608LL;
          *((_QWORD *)a1 + 98) = v15;
          *((_QWORD *)a1 + 38) = v15;
          v16 = (const unsigned __int8 *)(*((_QWORD *)a1 + 74) + 1168LL);
          *((_QWORD *)a1 + 138) = v16;
          v17 = (void **)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                           v15,
                           (_QWORD *)a1 + 16,
                           (__int64)v16);
          *((_QWORD *)a1 + 40) = v17;
          *((_QWORD *)a1 + 100) = v13;
          v18 = *v13;
          *((_QWORD *)a1 + 102) = *v13;
          v18 += 77;
          *((_QWORD *)a1 + 104) = v18;
          *((_QWORD *)a1 + 54) = v18;
          Ptr = v18->Ptr;
          *((_QWORD *)a1 + 106) = Ptr;
          v20 = *v17;
          *((_QWORD *)a1 + 108) = v20;
          if ( v20 != Ptr )
          {
            *((_QWORD *)a1 + 110) = v13;
            v21 = (unsigned __int64)*v13;
            *((_QWORD *)a1 + 112) = *v13;
            v21 += 608LL;
            *((_QWORD *)a1 + 114) = v21;
            *((_QWORD *)a1 + 42) = v21;
            *((_QWORD *)a1 + 140) = v16;
            v22 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                   v21,
                                   v16);
            *((_QWORD *)a1 + 34) = v22;
            *((_QWORD *)a1 + 17) = v22;
            v23 = a1 + 144;
            winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(v22, (_OWORD *)a1 + 9);
            v24 = winrt::operator==((_QWORD *)a1 + 18, (_QWORD *)a1 + 4);
            a1[352] = v24;
            a1[160] = v24;
            *((_OWORD *)a1 + 11) = *((_OWORD *)a1 + 9);
            v25 = winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(
                    v22,
                    (__int64)(a1 + 176));
            a1[161] = v25;
            ForegroundWindow = GetForegroundWindow();
            *((_QWORD *)a1 + 53) = ForegroundWindow;
            *((_QWORD *)a1 + 116) = v16;
            *((_DWORD *)a1 + 236) = (_DWORD)ForegroundWindow;
            v27 = (unsigned int)ForegroundWindow;
            *((_QWORD *)a1 + 120) = (unsigned int)ForegroundWindow;
            v28 = *(_QWORD *)v16;
            *((_QWORD *)a1 + 122) = *(_QWORD *)v16;
            a1[1136] = v27 == v28;
            a1[162] = v27 == v28;
            if ( v24 && v25 && v27 == v28 )
            {
              *((_QWORD *)a1 + 124) = v13;
              v29 = (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)*v13;
              *((_QWORD *)a1 + 126) = *v13;
              *((_QWORD *)a1 + 46) = v29;
              *((_OWORD *)a1 + 12) = *v23;
              TabProxyWindowOwnerWindow = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(
                                                  v22,
                                                  (__int64)(a1 + 192));
              *((_QWORD *)a1 + 56) = TabProxyWindowOwnerWindow;
              *((_OWORD *)a1 + 13) = *v23;
              TabProxyWindowHwnd = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(
                                           v22,
                                           (__int64)(a1 + 208));
              *((_QWORD *)a1 + 58) = TabProxyWindowHwnd;
              winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
                v29,
                TabProxyWindowHwnd,
                TabProxyWindowOwnerWindow);
            }
            else
            {
              WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>(a1 + 160, a1 + 161);
            }
          }
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 15);
        }
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
          (__int64)a1,
          a1 + 163);
LABEL_16:
        *((_QWORD *)a1 + 128) = a1 + 10;
        v32 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 520) = v32;
        if ( v32 )
        {
          *((_QWORD *)a1 + 132) = 1185LL;
          *((_QWORD *)a1 + 50) = 1185LL;
          *((_QWORD *)a1 + 48) = a1;
          *((_QWORD *)a1 + 144) = a1 + 10;
          operator delete(a1);
        }
        break;
      case 4:
        goto LABEL_8;
      case 5:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 80);
        goto LABEL_16;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
