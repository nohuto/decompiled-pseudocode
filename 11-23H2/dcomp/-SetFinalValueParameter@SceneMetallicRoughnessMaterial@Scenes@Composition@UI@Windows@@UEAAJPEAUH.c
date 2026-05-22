/*
 * XREFs of ?SetFinalValueParameter@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x18013F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x180191850 (-SetFinalValueParameter@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::SetFinalValueParameter(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned __int8)Windows::UI::Composition::ProxyObject::SetFinalValueParameterHelper(this) )
    return 0LL;
  v8 = Windows::UI::Composition::Scenes::ScenePbrMaterial::SetFinalValueParameter(this, a2, a3, a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmetallicroughnessmaterial.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
