/*
 * XREFs of ?RuntimeClassInitialize@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVVisualInteractionSource@2345@@Z @ 0x180161F04
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVVisualInteractionSource@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVVisualInteractionSource@4567@@Z @ 0x18011C4C8 (--$MakeAndInitialize2@VInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@V1234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionSourceConfiguration::RuntimeClassInitialize(
        Windows::UI::Composition::Interactions::InteractionSourceConfiguration *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::Interactions::VisualInteractionSource *a3)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  _DWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = 0;
  v7 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)this + 18) = a3;
    v9 = (_DWORD *)((char *)this + 152);
    do
    {
      ++v6;
      *v9++ = 1;
    }
    while ( v6 < 3 );
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractionsourceconfiguration.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
