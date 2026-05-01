/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x1805FE858
 * Callers:
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180600F20 (-CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IRemoteSessionWindowManager@Shell@Internal@Windows@@$BJI@AA @ 0x1802A86B0 (--_9IRemoteSessionWindowManager@Shell@Internal@Windows@@$BJI@AA.c)
 *     ??$com_weak_query_failfast@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x1805FE620 (--$com_weak_query_failfast@AEAPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::IRemoteSessionWindowManager,long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::Shell::IRemoteSessionWindowManager::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *> *>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        ...)
{
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  __int64 v10[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *));
  v14 = va_arg(va1, _QWORD);
  v4 =  Windows::Internal::Shell::IRemoteSessionWindowManager::`vcall'{152,{flat}}((__int64)a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v9);
  v12 = a2;
  *a1 = v14;
  a1[1] = 0LL;
  a1[2] =  Windows::Internal::Shell::IRemoteSessionWindowManager::`vcall'{160,{flat}};
  v5 = wil::com_weak_query_failfast<Windows::Internal::Shell::IRemoteSessionWindowManager * &>(
         v10,
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))va);
  v6 = *v5;
  *v5 = 0LL;
  v7 = a1[1];
  a1[1] = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v10);
  return a1;
}
