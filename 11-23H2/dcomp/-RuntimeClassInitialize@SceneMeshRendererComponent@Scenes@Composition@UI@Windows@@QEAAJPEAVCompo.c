/*
 * XREFs of ?RuntimeClassInitialize@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801339CC
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180133104 (--$MakeAndInitialize2@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@V12345@PEAVComp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneMeshRendererComponent@4567@@Z @ 0x180133048 (--$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPE.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v9; // [rsp+38h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass **v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)this,
         a2,
         158,
         0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialcomponent.cpp",
      (const char *)(unsigned int)v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialrenderercomponent.cpp",
      (const char *)v5);
    v6 = 38LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshrenderercomponent.cpp",
      (const char *)v5);
    return v5;
  }
  v10 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap,Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Scenes::SceneMeshRendererComponent *>(
         this + 31,
         &v9,
         (struct Windows::UI::Composition::Scenes::SceneMeshRendererComponent **)&v10);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 43LL;
    goto LABEL_3;
  }
  this[26] = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)a2 + 57);
  return 0LL;
}
