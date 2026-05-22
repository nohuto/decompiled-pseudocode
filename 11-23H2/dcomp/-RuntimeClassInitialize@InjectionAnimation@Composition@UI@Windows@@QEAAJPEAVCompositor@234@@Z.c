/*
 * XREFs of ?RuntimeClassInitialize@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180162834
 * Callers:
 *     ??$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInjectionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120EDC (--$MakeAndInitialize2@VInjectionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Deta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18014F3F8 (-RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::InjectionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 94) = 0;
    *((_DWORD *)this + 74) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinjectionanimation.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
