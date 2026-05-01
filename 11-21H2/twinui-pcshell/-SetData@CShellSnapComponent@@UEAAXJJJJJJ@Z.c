/*
 * XREFs of ?SetData@CShellSnapComponent@@UEAAXJJJJJJ@Z @ 0x180595BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

void __fastcall CShellSnapComponent::SetData(
        CShellSnapComponent *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // esi
  int v8; // edi

  v7 = a4;
  v8 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *((_DWORD *)this + 264) = a2;
  *((_DWORD *)this + 265) = v8;
  *((_DWORD *)this + 266) = v7;
  *((_DWORD *)this + 267) = a5;
  *((_DWORD *)this + 268) = a6;
  *((_DWORD *)this + 269) = a7;
}
