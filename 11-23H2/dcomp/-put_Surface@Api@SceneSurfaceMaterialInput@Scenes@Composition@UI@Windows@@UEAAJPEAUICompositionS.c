/*
 * XREFs of ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@456@@Z @ 0x180145750
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DI@$$CBGAEAY0M@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0M@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3358 (--$InitApiData@AEAY0DI@$$CBGAEAY0M@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBG.c)
 *     ?SetSurface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@345@@Z @ 0x180145228 (-SetSurface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAUICompositionSurfac.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api::put_Surface(
        Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api *this,
        struct IUnknown *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  volatile int *v9; // [rsp+30h] [rbp+8h] BYREF
  const char *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220958) == 1 )
  {
    v10 = 0LL;
    v9 = &dword_180220958;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[12],std::nullptr_t,long volatile *>(
      v4,
      L"put_Surface",
      &v10,
      &v9);
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::SetSurface(
           (Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api *)((char *)this - 168),
           a2);
    v6 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0xBDu);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v6;
}
