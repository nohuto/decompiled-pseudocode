/*
 * XREFs of ?SetFinalValueParameter@CompositionRectangleGeometry@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180178DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801894C0 (-SetFinalValueParameter@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCom.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRectangleGeometry::SetFinalValueParameter(
        Windows::UI::Composition::CompositionRectangleGeometry *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 2LL;
  v11[1] = &Windows::UI::Composition::CompositionRectangleGeometry::k_rgAnimDef;
  if ( Windows::UI::Composition::ProxyObject::SetFinalValueParameterHelper((__int64)this, a2, a3, a4, v11) )
    return 0LL;
  v8 = Windows::UI::Composition::CompositionGeometry::SetFinalValueParameter(this, a2, a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionrectanglegeometry.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
