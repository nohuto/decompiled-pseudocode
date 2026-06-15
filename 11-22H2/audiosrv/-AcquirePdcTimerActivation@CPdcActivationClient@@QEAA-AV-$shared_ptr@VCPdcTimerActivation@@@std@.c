/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18003A080
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18003A3B8 (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAPEAPEAVCVADServer@@QEAPEAV2@AEBQEAV2@@Z @ 0x180064464 (--$_Emplace_reallocate@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  _BYTE v11[8]; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v6 = (struct _Mtx_internal_imp_t *)(a1 + 32);
    v13 = a1 + 32;
    v7 = _Mtx_lock((_Mtx_t)(a1 + 32));
    if ( v7 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
      __debugbreak();
      JUMPOUT(0x1800801B0LL);
    }
    v8 = *(_QWORD **)(a1 + 16);
    if ( v8 == *(_QWORD **)(a1 + 24) )
    {
      std::vector<CVADServer *>::_Emplace_reallocate<CVADServer * const &>(a1 + 8, v8, &v15);
    }
    else
    {
      *v8 = a3;
      *(_QWORD *)(a1 + 16) += 8LL;
    }
    _Mtx_unlock(v6);
    v13 = a1;
    v9 = (__int64 *)std::make_shared<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(v11, &v13, &v15);
    std::shared_ptr<std::function<void (void)>>::operator=(a2, v9);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  return a2;
}
