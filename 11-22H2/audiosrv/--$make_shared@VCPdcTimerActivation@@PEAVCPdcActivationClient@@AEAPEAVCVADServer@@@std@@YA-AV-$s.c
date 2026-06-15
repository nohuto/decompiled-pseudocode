/*
 * XREFs of ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18003A3B8
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18003A080 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18003A814 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(
        _QWORD *a1,
        struct CPdcActivationClient **a2,
        struct CVADServer **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = operator new(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<CPdcTimerActivation>::`vftable';
    CPdcTimerActivation::CPdcTimerActivation((CPdcTimerActivation *)(v6 + 4), *a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
