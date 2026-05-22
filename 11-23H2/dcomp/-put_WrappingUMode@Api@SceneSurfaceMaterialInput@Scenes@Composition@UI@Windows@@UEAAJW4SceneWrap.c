/*
 * XREFs of ?put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z @ 0x180145830
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DI@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0BC@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3234 (--$InitApiData@AEAY0DI@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CB.c)
 *     ?SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z @ 0x1801473F8 (-SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api::put_WrappingUMode(wil *a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_18022094C) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_18022094C;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[18],std::nullptr_t,long volatile *>(
      v4,
      L"put_WrappingUMode",
      &v9,
      &v8);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)a1 - 136) & 2) != 0 )
  {
    if ( (_DWORD)v2 != *((_DWORD *)a1 + 7) )
    {
      Windows::UI::Composition::ProxyObject::SetScalarIntegerProperty((wil *)((char *)a1 - 168), 2u, v2);
      *((_DWORD *)a1 + 7) = v2;
    }
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
