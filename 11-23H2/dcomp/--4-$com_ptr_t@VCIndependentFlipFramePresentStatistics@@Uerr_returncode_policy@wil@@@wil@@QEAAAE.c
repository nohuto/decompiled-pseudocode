/*
 * XREFs of ??4?$com_ptr_t@VCIndependentFlipFramePresentStatistics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCIndependentFlipFramePresentStatistics@@@Z @ 0x1801B1080
 * Callers:
 *     ?Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B1118 (-Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CIndependentFlipFramePresentStatistics,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
