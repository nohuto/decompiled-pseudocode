/*
 * XREFs of ?SetFinalValueParameter@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180175DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801742F8 (-SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRadialGradientBrush::SetFinalValueParameter(
        Windows::UI::Composition::ComponentTransform2D **this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 3LL;
  v11[1] = &Windows::UI::Composition::CompositionRadialGradientBrush::k_rgAnimDef;
  if ( Windows::UI::Composition::ProxyObject::SetFinalValueParameterHelper((__int64)this, a2, a3, a4, v11) )
    return 0LL;
  v8 = Windows::UI::Composition::CompositionGradientBrush::SetFinalValueParameter(this, a2, a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionradialgradientbrush.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
