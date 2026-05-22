/*
 * XREFs of ?get_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x18013F700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BD@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BD@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2F3C (--$InitApiData@AEAY0DN@$$CBGAEAY0BD@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::get_BaseColorInput(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneMaterialInput **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+40h] [rbp+8h] BYREF
  const char *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_18022091C) == 1 )
  {
    v10 = 0LL;
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_18022091C;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[19],std::nullptr_t,long volatile *>(
      v4,
      L"get_BaseColorInput",
      &v10,
      (volatile int **)&v9);
  }
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 27);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)this - 208) & 2) != 0 )
  {
    v7 = *((_QWORD *)this + 2);
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)v7;
    if ( v7 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v7);
      v9 = 0LL;
      *a2 = (struct Windows::UI::Composition::Scenes::ISceneMaterialInput *)(v7 + 152);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
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
