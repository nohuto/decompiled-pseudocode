/*
 * XREFs of ?OnAnimatedPropertyChanged@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18013F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 *     ?OnAnimatedPropertyChanged@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180191710 (-OnAnimatedPropertyChanged@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int16 a8)
{
  unsigned int v8; // r13d
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+38h] [rbp-50h]
  _QWORD v18[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a4;
  v18[1] = &Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::k_rgAnimDef;
  v18[0] = 3LL;
  if ( Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(a1, a2, a3, a4, a5, a6, a7, a8, v18) )
    return 0LL;
  LOWORD(v17) = a8;
  LOBYTE(v16) = a6;
  LOBYTE(v15) = a5;
  v12 = Windows::UI::Composition::Scenes::ScenePbrMaterial::OnAnimatedPropertyChanged(a1, a2, a3, v8, v15, v16, a7, v17);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmetallicroughnessmaterial.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
