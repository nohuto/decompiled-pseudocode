/*
 * XREFs of _lambda_4cf3c136a642c8dee72a13c9ea3c1a02_::operator() @ 0x180049AFC
 * Callers:
 *     wil::details::lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___::_lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___ @ 0x18011C744 (wil--details--lambda_call__lambda_4cf3c136a642c8dee72a13c9ea3c1a02___--_lambda_call__lambda_4cf3.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180017948 (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_4cf3c136a642c8dee72a13c9ea3c1a02_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 528LL));
  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 448LL);
  *(_OWORD *)v3 = 0LL;
  EnterCriticalSection(v2);
  std::shared_ptr<std::function<void (void)>>::operator=(v3, (__int64 *)(*(_QWORD *)a1 + 488LL));
  if ( v2 )
    LeaveCriticalSection(v2);
  std::shared_ptr<CPowerReference>::reset(v3);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
}
