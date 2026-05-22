/*
 * XREFs of ?get_UVMappings@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMeshMaterialAttributeMap@3456@@Z @ 0x180133DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0DJ@$$CBGAEAY0P@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DJ@$$CBGAEAY0P@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2EE0 (--$InitApiData@AEAY0DJ@$$CBGAEAY0P@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DJ@$$CBG.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api::get_UVMappings(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+40h] [rbp+8h] BYREF
  const char *v11; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_1802208EC) == 1 )
  {
    v11 = 0LL;
    v10 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_1802208EC;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[57],unsigned short const (&)[15],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v11,
      (volatile int **)&v10);
  }
  *a2 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 184) & 2) != 0 )
  {
    v8 = *((_QWORD *)this + 4);
    v10 = (Microsoft::WRL2::NestableRuntimeClass *)v8;
    if ( v8 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v8);
      v10 = 0LL;
      *a2 = (struct Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap *)(v8 + 144);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v6;
}
