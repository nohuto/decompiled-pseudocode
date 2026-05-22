/*
 * XREFs of ?FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType@3456@PEAPEAUISceneComponent@3456@@Z @ 0x1801422F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0BJ@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0BJ@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A30C4 (--$InitApiData@AEAY0CI@$$CBGAEAY0BJ@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CB.c)
 *     ?FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W4SceneComponentType@2345@@Z @ 0x1801423F0 (-FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::Api::FindFirstComponentOfType(
        wil *a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  Microsoft::WRL2::NestableRuntimeClass *FirstComponentOfType; // rsi
  char *v11; // rax
  volatile int *v13; // [rsp+40h] [rbp+8h] BYREF
  const char *v14; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  if ( !wil::ProcessShutdownInProgress(a1) && _InterlockedIncrement(&dword_180220924) == 1 )
  {
    v14 = 0LL;
    v13 = &dword_180220924;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[25],std::nullptr_t,long volatile *>(
      v7,
      v6,
      &v14,
      &v13);
  }
  *a3 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 - 23);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (*((_BYTE *)a1 - 176) & 2) != 0 )
  {
    v13 = 0LL;
    FirstComponentOfType = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Scenes::SceneNode::FindFirstComponentOfType(
                                                                      (char *)a1 - 208,
                                                                      a2);
    v11 = 0LL;
    if ( FirstComponentOfType )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(FirstComponentOfType);
      v11 = (char *)FirstComponentOfType + 152;
    }
    v13 = 0LL;
    *a3 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v8;
}
