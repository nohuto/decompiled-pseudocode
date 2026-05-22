/*
 * XREFs of ?get_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z @ 0x180132E90
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BG@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BG@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2CE4 (--$InitApiData@AEAY0CI@$$CBGAEAY0BG@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::Api::get_PrimitiveTopology(
        Windows::UI::Composition::Scenes::SceneMesh::Api *this,
        enum Windows::Graphics::DirectX::DirectXPrimitiveTopology *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_1802208D8) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_1802208D8;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[22],std::nullptr_t,long volatile *>(
      v4,
      L"get_PrimitiveTopology",
      &v9,
      &v8);
  }
  *(_DWORD *)a2 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
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
