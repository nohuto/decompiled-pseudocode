/*
 * XREFs of ??4?$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180259E50
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18025A000 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IEffectInstance>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
    {
      (**a2)(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = (__int64)a2;
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(&v6);
  }
  return a1;
}
