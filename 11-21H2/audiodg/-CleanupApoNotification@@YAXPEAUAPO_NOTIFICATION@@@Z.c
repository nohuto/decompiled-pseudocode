/*
 * XREFs of ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140067CE8
 * Callers:
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___ @ 0x140064CEC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___--__Temp.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___::_Destroy @ 0x1400666D0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___--_Destro.c)
 *     std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Do_call @ 0x1400687B0 (std--_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_--_Do_call.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CleanupApoNotification(struct APO_NOTIFICATION *a1)
{
  int v2; // ecx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx

  v2 = *(_DWORD *)a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = *((_QWORD *)a1 + 1);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = *((_QWORD *)a1 + 5);
    }
    else
    {
      v6 = *((_QWORD *)a1 + 1);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v5 = *((_QWORD *)a1 + 2);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 1);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = (void *)*((_QWORD *)a1 + 2);
    if ( v8 )
      operator delete(v8);
  }
}
