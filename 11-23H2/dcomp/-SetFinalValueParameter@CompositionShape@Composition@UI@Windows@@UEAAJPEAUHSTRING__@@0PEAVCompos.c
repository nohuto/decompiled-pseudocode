/*
 * XREFs of ?SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180189970
 * Callers:
 *     ?SetFinalValueParameter@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180171890 (-SetFinalValueParameter@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C (-GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801958B0 (-SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetFinalValueParameter(
        Windows::UI::Composition::ComponentTransform2D **this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  if ( this[19]
    || Windows::UI::Composition::ComponentTransform2D::GetAnimatablePropertyInfo(
         a2,
         (enum Windows::UI::Composition::AnimationBindingDirection *)&v13,
         &v12,
         &v11,
         (enum DCOMPOSITION_EXPRESSION_TYPE *)&v15) )
  {
    v8 = Windows::UI::Composition::CompositionShape::EnsureComponentTransform((Windows::UI::Composition::CompositionShape *)this);
    if ( v8 < 0 )
    {
      v9 = 138LL;
      goto LABEL_7;
    }
    v8 = Windows::UI::Composition::ComponentTransform2D::SetFinalValueParameter(this[19], a2, a3, a4);
    if ( v8 < 0 )
    {
      v9 = 140LL;
      goto LABEL_7;
    }
  }
  else
  {
    v8 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(
           (Windows::UI::Composition::CompositionObject *)this,
           a2,
           a3,
           a4);
    if ( v8 < 0 )
    {
      v9 = 144LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  return 0LL;
}
