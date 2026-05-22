/*
 * XREFs of ?OnAnimatedPropertyChanged@InsetClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180015690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180015770 (-OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESS.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int16 a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+38h] [rbp-50h]
  _QWORD v18[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18[1] = &Windows::UI::Composition::InsetClip::k_rgAnimDef;
  v18[0] = 4LL;
  if ( (unsigned __int8)Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(
                          a1,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          (__int64)v18) )
    return 0LL;
  LOWORD(v17) = a8;
  LOBYTE(v16) = a6;
  LOBYTE(v15) = a5;
  v12 = Windows::UI::Composition::CompositionClip::OnAnimatedPropertyChanged(a1, a2, a3, a4, v15, v16, a7, v17);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEF,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinsetclip.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
