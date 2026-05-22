/*
 * XREFs of ?OnAnimatedPropertyChanged@SpotLight@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800B7EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::SpotLight::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        float *a7,
        __int16 a8)
{
  unsigned int v8; // r13d
  float *v12; // rdi
  __int16 v13; // r14
  char v14; // r15
  char v15; // r12
  int v16; // eax
  unsigned int v17; // ebx
  _QWORD v19[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v21; // [rsp+98h] [rbp+10h] BYREF

  v8 = a4;
  if ( a2 == *(_DWORD *)(a1 + 128) && (a3 == 9 || a3 == 14) )
  {
    v12 = &v21;
    v21 = *a7 * 0.017453292;
  }
  else
  {
    v12 = a7;
  }
  v13 = a8;
  v14 = a6;
  v15 = a5;
  v19[1] = &Windows::UI::Composition::SpotLight::k_rgAnimDef;
  v19[0] = 15LL;
  if ( Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(a1, a2, a3, a4, a5, a6, (__int64)v12, a8, v19) )
    return 0LL;
  v16 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
          a1,
          a2,
          a3,
          v8,
          v15,
          v14,
          (__int64)v12,
          v13);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x210,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspotlight.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
