/*
 * XREFs of ?RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18014518C
 * Callers:
 *     ??$MakeAndInitialize2@VSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180144EFC (--$MakeAndInitialize2@VSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@V12345@PEAVCompo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0BH@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3298 (--$InitApiData@AEAY0DI@$$CBGAEAY0BH@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v10; // [rsp+40h] [rbp+18h] BYREF
  const char *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_18022095C) == 1 )
  {
    v11 = 0LL;
    v10 = &dword_18022095C;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[23],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v11,
      &v10);
  }
  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 165, 0);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialsurfacematerialinput.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
