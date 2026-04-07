/*
 * XREFs of ??R?$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z @ 0x1800629E8
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180062968 (--1-$out_param_t@V-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@st.c)
 *     ??1?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ @ 0x180062998 (--1-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1CMicaEffectCache@@QEAA@XZ @ 0x1800629B8 (--1CMicaEffectCache@@QEAA@XZ.c)
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180097908 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 */

void __fastcall std::default_delete<CMicaEffectCache>::operator()(__int64 a1, CMicaEffectCache *a2)
{
  WPF *v3; // rcx
  void *v4; // r8

  if ( a2 )
  {
    CMicaEffectCache::~CMicaEffectCache(a2);
    WPF::Free(v3, a2, v4);
  }
}
