/*
 * XREFs of ?get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z @ 0x180144C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0L@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0L@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2DAC (--$InitApiData@AEAY0CI@$$CBGAEAY0L@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBG.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::Api::get_Parent(
        Windows::UI::Composition::Scenes::SceneNode::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneNode **a2)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rsi
  struct Windows::UI::Composition::Scenes::ISceneNode *v8; // rax
  volatile int *v10; // [rsp+40h] [rbp+8h] BYREF
  const char *v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220928) == 1 )
  {
    v11 = 0LL;
    v10 = &dword_180220928;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[11],std::nullptr_t,long volatile *>(
      L"Windows.UI.Composition.Scenes.SceneNode",
      L"get_Parent",
      &v11,
      &v10);
  }
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 23);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 176) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 6);
    v10 = 0LL;
    v7 = *(Microsoft::WRL2::NestableRuntimeClass **)(v6 + 208);
    v8 = 0LL;
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7);
      v8 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v7 + 208);
    }
    v10 = 0LL;
    *a2 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
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
