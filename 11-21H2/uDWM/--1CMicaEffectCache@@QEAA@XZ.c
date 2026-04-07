/*
 * XREFs of ??1CMicaEffectCache@@QEAA@XZ @ 0x1800629B8
 * Callers:
 *     ??R?$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z @ 0x1800629E8 (--R-$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMicaEffectCache::~CMicaEffectCache(CMicaEffectCache *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
