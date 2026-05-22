/*
 * XREFs of ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x18008A580
 * Callers:
 *     ?RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A47C (-RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A4D8 (-RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x180091C34 (-RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18017A2F0 (-RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionLight *this,
        struct Windows::UI::Composition::Compositor *a2,
        int a3,
        unsigned __int8 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    *((_BYTE *)this + 256) = 1;
    result = 0LL;
    *((_BYTE *)this + 257) = a4;
  }
  return result;
}
