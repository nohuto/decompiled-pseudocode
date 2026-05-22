/*
 * XREFs of ?RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x180161E74
 * Callers:
 *     ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC (--$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVComposit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18014F3F8 (-RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ConditionalExpressionAnimation::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnimation *a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v6 = Windows::UI::Composition::CompositionAnimation::RuntimeClassInitialize(a1, a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)a1 + 75) = 0;
      result = 0LL;
      *((_DWORD *)a1 + 92) = a3;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtconditionalexpressionanimation.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtconditionalexpressionanimation.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
