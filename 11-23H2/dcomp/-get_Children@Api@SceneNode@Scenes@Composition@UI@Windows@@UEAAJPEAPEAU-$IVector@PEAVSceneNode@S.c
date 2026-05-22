/*
 * XREFs of ?get_Children@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180144940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0N@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0N@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3120 (--$InitApiData@AEAY0CI@$$CBGAEAY0N@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBG.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::Api::get_Children(wil *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rsi
  char *v9; // rax
  volatile int *v11; // [rsp+40h] [rbp+8h] BYREF
  const char *v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_180220934) == 1 )
  {
    v12 = 0LL;
    v11 = &dword_180220934;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[13],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v12,
      &v11);
  }
  *a2 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 23);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)a1 - 176) & 2) != 0 )
  {
    v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)a1 - 6);
    v9 = 0LL;
    v11 = 0LL;
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v8);
      v9 = (char *)v8 + 176;
    }
    v11 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
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
