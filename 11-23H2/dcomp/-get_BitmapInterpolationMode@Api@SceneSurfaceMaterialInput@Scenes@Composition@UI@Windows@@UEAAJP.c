/*
 * XREFs of ?get_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4CompositionBitmapInterpolationMode@456@@Z @ 0x180145360
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DI@$$CBGAEAY0BM@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0BM@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A32F4 (--$InitApiData@AEAY0DI@$$CBGAEAY0BM@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api::get_BitmapInterpolationMode(
        Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api *this,
        enum Windows::UI::Composition::CompositionBitmapInterpolationMode *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220954) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_180220954;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[28],std::nullptr_t,long volatile *>(
      v4,
      L"get_BitmapInterpolationMode",
      &v9,
      &v8);
  }
  *(_DWORD *)a2 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 6);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v5;
}
