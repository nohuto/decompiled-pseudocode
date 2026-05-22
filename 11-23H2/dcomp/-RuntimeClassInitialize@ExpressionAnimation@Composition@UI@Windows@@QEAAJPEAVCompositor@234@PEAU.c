/*
 * XREFs of ?RuntimeClassInitialize@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHSTRING__@@@Z @ 0x18006019C
 * Callers:
 *     ??$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUHSTRING__@@@Z @ 0x18005EA68 (--$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8 (-SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::ExpressionAnimation *this,
        struct Windows::UI::Composition::Compositor *a2,
        HSTRING a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
      (const char *)v6);
    return v6;
  }
  else
  {
    *((_DWORD *)this + 75) = 0;
    *((_DWORD *)this + 74) = 1;
    if ( a3 && (v8 = Windows::UI::Composition::ExpressionAnimation::SetExpression(this, a3), v9 = v8, v8 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
}
