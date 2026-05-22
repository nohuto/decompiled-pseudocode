/*
 * XREFs of ?EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x180142254
 * Callers:
 *     ?get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@3456@@Z @ 0x180144DF0 (-get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@345.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VSceneModelTransform@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneModelTransform@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180140350 (--$MakeAndInitialize2@VSceneModelTransform@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 *     ?SetTransform@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneModelTransform@2345@@Z @ 0x180144574 (-SetTransform@-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composit.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::EnsureTransform(
        Windows::UI::Composition::Scenes::SceneNode *this)
{
  struct Windows::UI::Composition::Compositor *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 19) )
    return 0LL;
  v2 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
  v8 = 0LL;
  v9 = v2;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneModelTransform,Windows::UI::Composition::Scenes::SceneModelTransform,Windows::UI::Composition::Compositor *>(
         &v8,
         &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v8;
    Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::SetTransform(
      this,
      v8);
    if ( v6 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnode.cpp",
    (const char *)(unsigned int)v3);
  if ( v8 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  return v4;
}
