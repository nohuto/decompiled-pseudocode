/*
 * XREFs of ?RuntimeClassInitialize@SceneVisual@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180145D04
 * Callers:
 *     ??$MakeAndInitialize2@VSceneVisual@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneVisual@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801459C8 (--$MakeAndInitialize2@VSceneVisual@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Det.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 *     ??$InitApiData@AEAY0CK@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CK@$$CBGAEAY0BH@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3470 (--$InitApiData@AEAY0CK@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CK@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneVisual::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneVisual *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v10; // [rsp+40h] [rbp+18h] BYREF
  const char *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220968) == 1 )
  {
    v11 = 0LL;
    v10 = &dword_180220968;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[42],unsigned short const (&)[23],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v11,
      &v10);
  }
  v6 = Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(this, a2, 0xA6u);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
