/*
 * XREFs of ?RuntimeClassInitialize@CompositionBackdropBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionBackdropType@234@@Z @ 0x180069DB8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionBackdropType@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBackdropBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionBackdropType@456@@Z @ 0x180069CEC (--$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBackdropBrush::RuntimeClassInitialize(
        Windows::UI::Composition::ProxyObject *a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v3; // r8d
  int v4; // ebx
  int v6; // r8d
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v4 = -2147024809;
        v7 = 45LL;
        goto LABEL_11;
      }
      v3 = 15;
    }
    else
    {
      v3 = 203;
    }
  }
  else
  {
    v3 = 9;
  }
  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(a1, a2, v3, 0);
  if ( v4 >= 0 )
    return 0LL;
  v7 = 51LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbackdropbrush.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
