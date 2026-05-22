/*
 * XREFs of ?FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@3456@W4DirectXPixelFormat@DirectX@Graphics@6@PEAUIMemoryBuffer@Foundation@6@@Z @ 0x180132470
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BC@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2C88 (--$InitApiData@AEAY0CI@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 *     ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z @ 0x18013254C (-FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::Api::FillMeshAttribute(
        wil *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  const char *v14; // [rsp+20h] [rbp-28h] BYREF
  volatile int *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_1802208D0) == 1 )
  {
    v14 = 0LL;
    v15 = &dword_1802208D0;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[18],std::nullptr_t,long volatile *>(
      v9,
      v8,
      &v14,
      &v15);
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*((_BYTE *)a1 - 120) & 2) != 0 )
  {
    v12 = Windows::UI::Composition::Scenes::SceneMesh::FillMeshAttribute((char *)a1 - 152, a2, a3, a4);
    v11 = v12;
    if ( v12 < 0 )
      DoStackCaptureDirect(v12, 0x116u);
    else
      v11 = 0;
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v11;
}
