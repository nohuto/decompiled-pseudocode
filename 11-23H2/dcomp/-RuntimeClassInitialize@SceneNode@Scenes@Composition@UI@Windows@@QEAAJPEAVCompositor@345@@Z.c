/*
 * XREFs of ?RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801440EC
 * Callers:
 *     ??$MakeAndInitialize2@VSceneNode@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneNode@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180140438 (--$MakeAndInitialize2@VSceneNode@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BH@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2D48 (--$InitApiData@AEAY0CI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 *     ??$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneNode@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneComponentCollection@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneNode@4567@@Z @ 0x180140294 (--$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCom.c)
 *     ??$MakeAndInitialize2@VSceneNodeCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneNode@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneNodeCollection@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneNode@4567@@Z @ 0x1801404F0 (--$MakeAndInitialize2@VSceneNodeCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVComposit.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Compositor *a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rsi
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v14; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::UI::Composition::Compositor *v16; // [rsp+58h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+68h] [rbp+38h] BYREF

  v16 = a2;
  v2 = a2;
  if ( !wil::ProcessShutdownInProgress((wil *)this) )
  {
    if ( _InterlockedIncrement(&dword_180220938) == 1 )
    {
      v18 = 0LL;
      v17 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_180220938;
      wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[23],std::nullptr_t,long volatile *>(
        L"Windows.UI.Composition.Scenes.SceneNode",
        v4,
        (const char **)&v18,
        (volatile int **)&v17);
    }
    v2 = v16;
  }
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)this,
         v2,
         161,
         0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = 0LL;
    v17 = (Microsoft::WRL2::NestableRuntimeClass *)this;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Scenes::SceneNode *>(
           &v18,
           &v16,
           &v17);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = v18;
      if ( this[20] != v18 )
      {
        if ( v18 )
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v18);
        v9 = this[20];
        this[20] = v8;
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      v17 = 0LL;
      v14 = this;
      v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Scenes::SceneNode *>(
              &v17,
              &v16,
              (struct Windows::UI::Composition::Scenes::SceneNode **)&v14);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v11 = v17;
        if ( this[21] != v17 )
        {
          if ( v17 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v17);
          v12 = this[21];
          this[21] = v11;
          if ( v12 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
        }
        this[25] = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v2 + 57);
        this[29] = (Microsoft::WRL2::NestableRuntimeClass *)this;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnode.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnode.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialnode.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
