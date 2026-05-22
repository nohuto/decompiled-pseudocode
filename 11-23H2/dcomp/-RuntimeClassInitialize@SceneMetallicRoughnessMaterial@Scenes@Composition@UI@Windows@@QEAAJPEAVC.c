/*
 * XREFs of ?RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18013F4E0
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013EC74 (--$MakeAndInitialize2@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@V12345@PEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BH@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3004 (--$InitApiData@AEAY0DN@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 *     ?RuntimeClassInitialize@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_N@Z @ 0x180191800 (-RuntimeClassInitialize@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  bool v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v12; // [rsp+40h] [rbp+18h] BYREF
  const char *v13; // [rsp+48h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220920) == 1 )
  {
    v13 = 0LL;
    v12 = &dword_180220920;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[23],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v13,
      &v12);
  }
  v8 = Windows::UI::Composition::Scenes::ScenePbrMaterial::RuntimeClassInitialize(this, a2, v6, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      11,
      *((float *)this + 72));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmetallicroughnessmaterial.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
