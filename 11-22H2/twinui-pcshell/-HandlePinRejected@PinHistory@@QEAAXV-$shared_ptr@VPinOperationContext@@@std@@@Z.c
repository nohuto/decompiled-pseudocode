/*
 * XREFs of ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A2A60
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x180251DE0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x18069A87C (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@QEAU21@$$QEAU21@@Z @ 0x18069BAF0 (--$_Emplace_reallocate@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_clo.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x18069C844 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@5@@Z @ 0x1806A113C (-ForEachOperationInTimeWindow@PinHistory@@AEAAXUread_lock_required@wil@@AEBV-$deque@U-$pair@V-$s.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x1806A9AA4 (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall PinHistory::HandlePinRejected(PSRWLOCK SRWLock, std::_Ref_count_base *a2)
{
  __int64 *v4; // r8
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  void ***v7; // rdx
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rax
  std::_Ref_count_base *v10; // rcx
  _QWORD *Ptr; // rdx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14[2]; // [rsp+30h] [rbp-69h] BYREF
  PSRWLOCK v15; // [rsp+40h] [rbp-59h]
  std::_Ref_count_base *v16; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-41h]
  __int64 v18; // [rsp+60h] [rbp-39h]
  _QWORD v19[3]; // [rsp+68h] [rbp-31h] BYREF
  void **v20; // [rsp+80h] [rbp-19h] BYREF
  __int128 v21; // [rsp+88h] [rbp-11h]
  PSRWLOCK v22; // [rsp+98h] [rbp-1h]
  void ***v23; // [rsp+B8h] [rbp+1Fh]
  std::_Ref_count_base *v24; // [rsp+C0h] [rbp+27h] BYREF
  int v25; // [rsp+C8h] [rbp+2Fh] BYREF
  PSRWLOCK v26; // [rsp+D0h] [rbp+37h]

  v24 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v26 = SRWLock;
  std::chrono::steady_clock::now(v19);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v16,
    a2);
  v18 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    &SRWLock[13].Ptr,
    &v16);
  v6 = v17;
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( SRWLock[17].Ptr > SRWLock[19].Ptr )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(&SRWLock[13]);
  v25 = 0;
  v14[0] = a2;
  v14[1] = (std::_Ref_count_base *)&v25;
  v15 = SRWLock;
  v20 = &std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v21 = *(_OWORD *)v14;
  v22 = SRWLock;
  v23 = &v20;
  PinHistory::ForEachOperationInTimeWindow((__int64)v6, v5, &SRWLock[13].Ptr, (__int64)SRWLock[23].Ptr, (__int64)&v20);
  if ( v23 )
  {
    v7 = &v20;
    LOBYTE(v7) = v23 != &v20;
    ((void (__fastcall *)(void ***, void ***))(*v23)[4])(v23, v7);
  }
  if ( v25 >= SLODWORD(SRWLock[24].Ptr) )
  {
    std::chrono::steady_clock::now(v19);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v14,
      *(_QWORD **)a2);
    v9 = v14[0];
    v16 = v14[0];
    v10 = v14[1];
    v17 = v14[1];
    v14[0] = 0LL;
    v14[1] = 0LL;
    v18 = v8;
    Ptr = SRWLock[3].Ptr;
    if ( Ptr == SRWLock[4].Ptr )
    {
      std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Emplace_reallocate<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
        (__int64 *)&SRWLock[2],
        (__int64)Ptr,
        &v16);
      v12 = v17;
    }
    else
    {
      *Ptr = v9;
      Ptr[1] = v10;
      v12 = 0LL;
      Ptr[2] = v8;
      SRWLock[3].Ptr = (char *)SRWLock[3].Ptr + 24;
    }
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v14,
    *(_QWORD **)a2);
  v24 = *(std::_Ref_count_base **)PinRequestContext::RequestorBestAvailableAppId(v14[0], v19);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>((__int64 *)&v24, &v25);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  ReleaseSRWLockExclusive(SRWLock);
  v13 = (std::_Ref_count_base *)*((_QWORD *)a2 + 1);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
