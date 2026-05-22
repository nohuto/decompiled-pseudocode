/*
 * XREFs of ?RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180192C4C
 * Callers:
 *     ??$MakeAndInitialize2@VSceneModelTransform@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneModelTransform@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180140350 (--$MakeAndInitialize2@VSceneModelTransform@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransform@Scenes@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVSceneModelTransform@Scenes@456@@Z @ 0x1801929B8 (--$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVSceneModelTransfor.c)
 *     ?SetTransform@?$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVComponentTransform3D@345@@Z @ 0x180193048 (-SetTransform@-$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Sce.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneModelTransform *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::ComponentTransform3D *v10; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::UI::Composition::CompositionObject *v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 160, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = 0LL;
    v11 = this;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Scenes::SceneModelTransform *>(
           &v10,
           &v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = Windows::UI::Composition::Scenes::SceneModelTransformGeneratedT<Windows::UI::Composition::CompositionTransform>::SetTransform(
             this,
             v10);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 46LL;
    }
    else
    {
      v6 = 44LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v10, v7);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
