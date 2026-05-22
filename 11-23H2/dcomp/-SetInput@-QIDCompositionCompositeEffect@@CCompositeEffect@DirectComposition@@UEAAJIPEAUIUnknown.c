/*
 * XREFs of ?SetInput@?QIDCompositionCompositeEffect@@CCompositeEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F55D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _SetInput__QIDCompositionCompositeEffect__CCompositeEffect_DirectComposition__UEAAJIPEAUIUnknown__I_Z(
        __int64 a1,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  return DirectComposition::CFilterEffect::SetInput((DirectComposition::CFilterEffect *)(a1 + 8), a2, a3, a4);
}
