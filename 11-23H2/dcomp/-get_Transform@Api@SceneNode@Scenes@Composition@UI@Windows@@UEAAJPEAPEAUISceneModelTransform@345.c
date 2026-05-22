/*
 * XREFs of ?get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@3456@@Z @ 0x180144DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??$InitApiData@AEAY0CI@$$CBGAEAY0O@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0O@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A317C (--$InitApiData@AEAY0CI@$$CBGAEAY0O@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBG.c)
 *     ?EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x180142254 (-EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNode::Api::get_Transform(
        Windows::UI::Composition::Scenes::SceneNode::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneModelTransform **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  struct Windows::UI::Composition::Scenes::ISceneModelTransform *v9; // rax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rdi
  volatile int *v12; // [rsp+40h] [rbp+8h] BYREF
  const char *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_18022092C) == 1 )
  {
    v13 = 0LL;
    v12 = &dword_18022092C;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[14],std::nullptr_t,long volatile *>(
      v5,
      v4,
      &v13,
      &v12);
  }
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 23);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)this - 176) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::Scenes::SceneNode::EnsureTransform((Windows::UI::Composition::Scenes::SceneNode::Api *)((char *)this - 208));
    v7 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x14Bu);
    }
    else
    {
      v12 = 0LL;
      v9 = 0LL;
      v10 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this - 7);
      if ( v10 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v12);
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v10);
        v9 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v10 + 160);
      }
      v12 = 0LL;
      v7 = 0;
      *a2 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v12);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v7;
}
