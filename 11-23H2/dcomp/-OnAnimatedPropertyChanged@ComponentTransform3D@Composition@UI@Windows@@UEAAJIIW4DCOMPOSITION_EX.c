/*
 * XREFs of ?OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800722E0
 * Callers:
 *     ?OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180072060 (-OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?OnAnimatedPropertyChanged@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180180FF0 (-OnAnimatedPropertyChanged@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJIIW4DCOMP.c)
 *     ?OnAnimatedPropertyChanged@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180192BC0 (-OnAnimatedPropertyChanged@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSIT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform3D::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        float *a7,
        __int16 a8)
{
  float *v12; // rbx
  __int16 v13; // r15
  char v14; // r12
  char v15; // r13
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD v19[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v21; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 5 )
  {
    v12 = &v21;
    v21 = (float)(*a7 * 3.1415927) / 180.0;
  }
  else
  {
    v12 = a7;
  }
  v13 = a8;
  v14 = a6;
  v15 = a5;
  v19[1] = &Windows::UI::Composition::ComponentTransform3D::k_rgAnimDef;
  v19[0] = 9LL;
  if ( (unsigned __int8)Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(
                          a1,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          (__int64)v12,
                          a8,
                          (__int64)v19) )
    return 0LL;
  v17 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
          a1,
          a2,
          a3,
          a4,
          v15,
          v14,
          (__int64)v12,
          v13);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x185,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform3d.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
