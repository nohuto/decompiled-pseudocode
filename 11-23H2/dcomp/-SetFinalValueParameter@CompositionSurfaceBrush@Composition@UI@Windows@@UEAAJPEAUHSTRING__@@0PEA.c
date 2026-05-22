/*
 * XREFs of ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180159A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C (-GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801958B0 (-SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::SetFinalValueParameter(
        Windows::UI::Composition::ComponentTransform2D **this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v14[4]; // [rsp+3Ch] [rbp-1Ch] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15[0] = 4LL;
  v15[1] = &Windows::UI::Composition::CompositionSurfaceBrush::k_rgAnimDef;
  if ( !Windows::UI::Composition::ProxyObject::SetFinalValueParameterHelper((__int64)this, a2, a3, a4, v15) )
  {
    if ( Windows::UI::Composition::ComponentTransform2D::GetAnimatablePropertyInfo(
           a2,
           (enum Windows::UI::Composition::AnimationBindingDirection *)v14,
           &v13,
           &v12,
           (enum DCOMPOSITION_EXPRESSION_TYPE *)&v11) )
    {
      v8 = Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform((Windows::UI::Composition::CompositionSurfaceBrush *)this);
      if ( v8 < 0 )
      {
        v9 = 675LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
      v8 = Windows::UI::Composition::ComponentTransform2D::SetFinalValueParameter(this[36], a2, a3, a4);
      if ( v8 < 0 )
      {
        v9 = 680LL;
        goto LABEL_5;
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
        v9 = 684LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
