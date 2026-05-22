/*
 * XREFs of ?put_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMesh@3456@@Z @ 0x180133FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ??$InitApiData@AEAY0DJ@$$CBGAEAY08$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DJ@$$CBGAEAY08$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2E18 (--$InitApiData@AEAY0DJ@$$CBGAEAY08$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DJ@$$CBGA.c)
 *     ?SetMesh@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneMesh@2345@@Z @ 0x180133B24 (-SetMesh@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneMesh@2345@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api::put_Mesh(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api *this,
        struct IUnknown *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+40h] [rbp+8h] BYREF
  const char *v10; // [rsp+50h] [rbp+18h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_1802208E4) == 1 )
  {
    v10 = 0LL;
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_1802208E4;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[57],unsigned short const (&)[9],std::nullptr_t,long volatile *>(
      v4,
      L"put_Mesh",
      &v10,
      (volatile int **)&v9);
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 184) & 2) != 0 )
  {
    v9 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v5,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Scenes::SceneMesh::s_InterfaceType,
           &v11);
    v6 = v7;
    v9 = v11;
    if ( v7 < 0
      || (v7 = Windows::UI::Composition::Scenes::SceneMeshRendererComponent::SetMesh(
                 (Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api *)((char *)this - 216),
                 v11),
          v6 = v7,
          v7 < 0) )
    {
      DoStackCaptureDirect(v7, 0xC4u);
    }
    else
    {
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
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
