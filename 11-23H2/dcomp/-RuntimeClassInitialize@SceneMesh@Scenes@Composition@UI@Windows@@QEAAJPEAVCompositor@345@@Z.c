/*
 * XREFs of ?RuntimeClassInitialize@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180132ABC
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMesh@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMesh@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180131EB0 (--$MakeAndInitialize2@VSceneMesh@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BH@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2D48 (--$InitApiData@AEAY0CI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 *     ??$MakeAndInitialize2@VSceneBoundingBox@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneBoundingBox@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@@Z @ 0x180131DD0 (--$MakeAndInitialize2@VSceneBoundingBox@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionObject **this,
        struct Windows::UI::Composition::Compositor *a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rbx
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v9; // [rsp+38h] [rbp+10h] BYREF
  volatile int *v10; // [rsp+40h] [rbp+18h] BYREF
  const char *v11; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v2 = a2;
  if ( !wil::ProcessShutdownInProgress((wil *)this) )
  {
    if ( _InterlockedIncrement(&dword_1802208E0) == 1 )
    {
      v11 = 0LL;
      v10 = &dword_1802208E0;
      wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[23],std::nullptr_t,long volatile *>(
        L"Windows.UI.Composition.Scenes.SceneMesh",
        v4,
        &v11,
        &v10);
    }
    v2 = v9;
  }
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)this,
         v2,
         157,
         0);
  if ( v5 < 0 )
  {
    v6 = 51LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneBoundingBox,Windows::UI::Composition::Scenes::SceneBoundingBox,Windows::UI::Composition::Compositor * &>(
         this + 21,
         &v9);
  if ( v5 < 0 )
  {
    v6 = 55LL;
    goto LABEL_7;
  }
  return 0LL;
}
