/*
 * XREFs of ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800321A8
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001360C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800320B4 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x1800320D4 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CStreamClassPolicyGains>::operator()(__int64 a1, CStreamClassPolicyGains *a2)
{
  if ( a2 )
  {
    CStreamClassPolicyGains::~CStreamClassPolicyGains(a2);
    operator delete(a2);
  }
}
