/*
 * XREFs of ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18010DA74
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___ @ 0x18010D8E0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_EffectP.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1801349A0 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180135808 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x180138140 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CXvmPowerReference>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
