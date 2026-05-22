/*
 * XREFs of ?CheckCompositionTextureSupport@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A2358
 * Callers:
 *     ?CheckCompositionTextureSupport@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A22A0 (-CheckCompositionTextureSupport@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CheckCompositionTextureSupport(
        Windows::UI::Composition::Compositor *this,
        struct IUnknown *a2,
        int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, int *))(*(_QWORD *)(*((_QWORD *)this + 57) + 8LL) + 296LL))(
           *((_QWORD *)this + 57) + 8LL,
           a2,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
