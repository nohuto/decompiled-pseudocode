/*
 * XREFs of ??$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA?AV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@0@XZ @ 0x180032114
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001361C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x18003217C (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CStreamClassPolicyGains **__fastcall std::make_unique<CStreamClassPolicyGains,,0>(CStreamClassPolicyGains **a1)
{
  CStreamClassPolicyGains *v2; // rbx
  CStreamClassPolicyGains *v3; // rax
  CStreamClassPolicyGains *v4; // rsi

  v2 = 0LL;
  v3 = (CStreamClassPolicyGains *)operator new(0x1A8uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x1A8uLL);
    v2 = CStreamClassPolicyGains::CStreamClassPolicyGains(v4);
  }
  *a1 = v2;
  return a1;
}
