/*
 * XREFs of ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801742F8
 * Callers:
 *     ?SetFinalValueParameter@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180175DD0 (-SetFinalValueParameter@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING_.c)
 *     ?SetFinalValueParameter@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180177270 (-SetFinalValueParameter@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C (-GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801958B0 (-SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::SetFinalValueParameter(
        Windows::UI::Composition::ComponentTransform2D **this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-1Ch] BYREF
  unsigned int v13[6]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( Windows::UI::Composition::ComponentTransform2D::GetAnimatablePropertyInfo(
         a2,
         (enum Windows::UI::Composition::AnimationBindingDirection *)((char *)&v11 + 4),
         &v12,
         v13,
         (enum DCOMPOSITION_EXPRESSION_TYPE *)&v11) )
  {
    v8 = Windows::UI::Composition::ComponentTransform2D::SetFinalValueParameter(this[29], a2, a3, a4);
    if ( v8 < 0 )
    {
      v9 = 197LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
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
      v9 = 201LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
