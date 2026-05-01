/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802D8B1E
 * Callers:
 *     wistd::__function::__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_const_&)_::operator() @ 0x1804D42A0 (wistd--__function--__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(un_ea_1804D42A0.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac_____lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x1804D4150 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--CTaskW.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1804D45B4 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this)
{
  std::_Ref_count_base *v1; // rcx
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rdi
  int v4; // r9d
  __int64 v5; // r8
  unsigned int v6; // esi
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-30h]
  _QWORD *v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+58h] [rbp-10h]

  v11 = 0LL;
  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v1 || !std::_Ref_count_base::_Incref_nz(v1) )
    std::_Throw_bad_weak_ptr();
  v10 = *v2;
  v3 = (std::_Ref_count_base *)v2[1];
  v11 = v3;
  v12 = v2;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v13,
    &v10);
  v15 = v4;
  v6 = *(_DWORD *)(v5 + 16);
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac_____lambda_279b59b1da187398d137b7ca9bd87eac___(
           v7,
           &v12);
  else
    v8 = 0LL;
  SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return 0LL;
}
