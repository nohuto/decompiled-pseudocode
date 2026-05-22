/*
 * XREFs of ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801958B0
 * Callers:
 *     ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180159A00 (-SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEA.c)
 *     ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801742F8 (-SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PE.c)
 *     ?SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180189970 (-SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform2D::SetFinalValueParameter(
        Windows::UI::Composition::ComponentTransform2D *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  PCWSTR StringRawBuffer; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7[0] = 7LL;
  v7[1] = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  if ( Windows::UI::Composition::ProxyObject::SetFinalValueParameterHelper((__int64)this, a2, a3, a4, v7) )
    return 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::UI::Composition::OriginateInvalidArgument(12, (__int64)StringRawBuffer);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EA,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
