/*
 * XREFs of ?RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005D6B4
 * Callers:
 *     ??$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVShapeVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005D4B4 (--$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??$MakeAndInitialize2@VCompositionShapeCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVShapeContainer@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionShapeCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVShapeContainer@456@@Z @ 0x18005CFD8 (--$MakeAndInitialize2@VCompositionShapeCollection@Composition@UI@Windows@@V1234@AEAPEAVComposito.c)
 */

__int64 __fastcall Windows::UI::Composition::ShapeVisual::RuntimeClassInitialize(
        Windows::UI::Composition::ShapeVisual *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  Windows::UI::Composition::CompositorCommon **v6; // rbx
  int v7; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::CompositorCommon **v11; // [rsp+40h] [rbp+18h] BYREF
  Windows::UI::Composition::CompositorCommon *v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 168, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcontainervisual.cpp",
      (const char *)v5);
    v9 = 47LL;
  }
  else
  {
    *((_DWORD *)this + 65) &= 0xFFFFFE00;
    *((_WORD *)this + 132) = 256;
    v6 = (Windows::UI::Composition::CompositorCommon **)((char *)this + 312);
    v12 = a2;
    v11 = v6;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::ShapeContainer *>(
           v6 + 4,
           &v12,
           (__int64 *)&v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v6[3] = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)a2 + 57);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\shapecontainer.cpp",
      (const char *)(unsigned int)v7);
    v9 = 49LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtshapevisual.cpp",
    (const char *)v5);
  return v5;
}
