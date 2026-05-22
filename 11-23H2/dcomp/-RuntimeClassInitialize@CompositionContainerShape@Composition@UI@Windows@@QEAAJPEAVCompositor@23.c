/*
 * XREFs of ?RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005CE64
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionContainerShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005CD24 (--$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??$MakeAndInitialize2@VCompositionShapeCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVShapeContainer@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionShapeCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVShapeContainer@456@@Z @ 0x18005CFD8 (--$MakeAndInitialize2@VCompositionShapeCollection@Composition@UI@Windows@@V1234@AEAPEAVComposito.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionContainerShape::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionContainerShape *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v11; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 46, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncontainershape.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = (char *)this + 176;
    v12 = a2;
    v11 = (char *)this + 176;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::ShapeContainer *>(
           (char *)this + 208,
           &v12,
           &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\shapecontainer.cpp",
        (const char *)(unsigned int)v7);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncontainershape.cpp",
        (const char *)v8);
      return v8;
    }
    else
    {
      *((_QWORD *)v6 + 3) = *((_QWORD *)a2 + 57);
      return 0LL;
    }
  }
}
