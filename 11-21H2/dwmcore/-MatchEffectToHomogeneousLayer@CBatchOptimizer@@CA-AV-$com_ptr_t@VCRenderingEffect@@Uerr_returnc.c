/*
 * XREFs of ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1801F0E50
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x180018D14 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C662C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBatchOptimizer::MatchEffectToHomogeneousLayer(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD))
{
  __int64 v3; // rax
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a2 + 32);
  if ( v3
    || *(_DWORD *)(a2 + 20) == 1
    && (v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1) + 40) + 8LL),
        (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6)) != 0) )
  {
    CRenderingEffect::GetCommonSuperset(a1, v3, (__int64)a3);
  }
  else
  {
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a1,
      a3);
  }
  return a1;
}
