/*
 * XREFs of _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x1400385DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Do_call @ 0x140038860 (std--_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14006F82C (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FB14 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1400706A4 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall lambda_d3d8473ab69012044bcca3ea676e23db_::operator()(__int64 a1)
{
  int result; // eax
  _BYTE v3[88]; // [rsp+20h] [rbp-58h] BYREF
  void *v4; // [rsp+80h] [rbp+8h] BYREF

  memset_0(v3, 0, 0x48uLL);
  result = CopyNotification((struct APO_NOTIFICATION *)v3, *(struct APO_NOTIFICATION **)a1);
  if ( result >= 0 )
  {
    v4 = 0LL;
    wil::details::weak_query_policy::query(
      *(struct IWeakReference **)(a1 + 16),
      &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
      &v4);
    if ( v4 )
      (*(void (__fastcall **)(void *, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v3);
    CleanupApoNotification((struct APO_NOTIFICATION *)v3);
    return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v4);
  }
  return result;
}
