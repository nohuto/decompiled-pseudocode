/*
 * XREFs of ?RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180015E28
 * Callers:
 *     ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30 (--$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpriteVisual::RuntimeClassInitialize(
        Windows::UI::Composition::SpriteVisual *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(this, a2, 0xB2u);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspritevisual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
