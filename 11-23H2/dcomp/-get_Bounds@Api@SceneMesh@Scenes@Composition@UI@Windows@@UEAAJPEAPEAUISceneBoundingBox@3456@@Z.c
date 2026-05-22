/*
 * XREFs of ?get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z @ 0x180132DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0L@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0L@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2DAC (--$InitApiData@AEAY0CI@$$CBGAEAY0L@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBG.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::Api::get_Bounds(
        Windows::UI::Composition::Scenes::SceneMesh::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneBoundingBox **a2)
{
  unsigned int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rbx
  volatile int *v8; // [rsp+40h] [rbp+8h] BYREF
  const char *v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_1802208DC) == 1 )
  {
    v9 = 0LL;
    v8 = &dword_1802208DC;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[11],std::nullptr_t,long volatile *>(
      L"Windows.UI.Composition.Scenes.SceneMesh",
      L"get_Bounds",
      &v9,
      &v8);
  }
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v6);
      *a2 = (struct Windows::UI::Composition::Scenes::ISceneBoundingBox *)(v6 + 144);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v4;
}
