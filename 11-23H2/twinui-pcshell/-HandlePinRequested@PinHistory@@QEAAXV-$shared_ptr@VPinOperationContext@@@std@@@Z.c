/*
 * XREFs of ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A2CDC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x180251DE0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x18069A87C (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x18069C844 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@5@@Z @ 0x1806A113C (-ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV-$deque@U-$pair@V-$s.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x1806A9AA4 (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PinHistory::HandlePinRequested(PSRWLOCK SRWLock, _QWORD **a2)
{
  __int64 *v4; // r8
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  void ***v7; // rdx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-41h]
  __int64 v12; // [rsp+50h] [rbp-39h]
  void **v13; // [rsp+60h] [rbp-29h] BYREF
  __int128 v14; // [rsp+68h] [rbp-21h]
  void ***v15; // [rsp+98h] [rbp+Fh]
  _QWORD **v16; // [rsp+A0h] [rbp+17h] BYREF
  int v17; // [rsp+A8h] [rbp+1Fh] BYREF
  PSRWLOCK v18[2]; // [rsp+B0h] [rbp+27h] BYREF

  v16 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v18[0] = SRWLock;
  std::chrono::steady_clock::now(v9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v10,
    a2);
  v12 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    &SRWLock[8].Ptr,
    &v10);
  v6 = v11;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( SRWLock[12].Ptr > SRWLock[18].Ptr )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(&SRWLock[8]);
  v17 = 0;
  v9[0] = (std::_Ref_count_base *)&v17;
  v9[1] = (std::_Ref_count_base *)SRWLock;
  v13 = &std::_Func_impl_no_alloc<_lambda_d1465830bf7ff245d54538fb3dd3c5c6_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v14 = *(_OWORD *)v9;
  v15 = &v13;
  PinHistory::ForEachOperationInTimeWindow((__int64)v6, v5, &SRWLock[8].Ptr, (__int64)SRWLock[20].Ptr, (__int64)&v13);
  if ( v15 )
  {
    v7 = &v13;
    LOBYTE(v7) = v15 != &v13;
    ((void (__fastcall *)(void ***, void ***))(*v15)[4])(v15, v7);
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v9,
    *a2);
  v16 = *(_QWORD ***)PinRequestContext::RequestorBestAvailableAppId(v9[0], v18);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>((__int64 *)&v16, &v17);
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  ReleaseSRWLockExclusive(SRWLock);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
