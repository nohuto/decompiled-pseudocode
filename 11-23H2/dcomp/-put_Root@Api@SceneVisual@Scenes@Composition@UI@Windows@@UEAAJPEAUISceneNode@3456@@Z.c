/*
 * XREFs of ?put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z @ 0x180145E80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ??$InitApiData@AEAY0CK@$$CBGAEAY08$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CK@$$CBGAEAY08$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A340C (--$InitApiData@AEAY0CK@$$CBGAEAY08$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CK@$$CBGA.c)
 *     ?SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z @ 0x1801473D0 (-SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneVisual::Api::put_Root(
        Windows::UI::Composition::Scenes::SceneVisual::Api *this,
        struct IUnknown *a2)
{
  __int64 v4; // rcx
  char *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned int v7; // edi
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  unsigned int v10; // r8d
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+50h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+60h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+68h] [rbp+48h] BYREF

  if ( !wil::ProcessShutdownInProgress(this) && _InterlockedIncrement(&dword_180220960) == 1 )
  {
    v13 = 0LL;
    v12 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_180220960;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[42],unsigned short const (&)[9],std::nullptr_t,long volatile *>(
      v4,
      L"put_Root",
      (const char **)&v13,
      (volatile int **)&v12);
  }
  v5 = (char *)this - 320;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v5 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (v5[32] & 2) != 0 )
  {
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v6,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Scenes::SceneNode::s_InterfaceType,
           &v14);
    v9 = v14;
    v7 = v8;
    v12 = v14;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x2Cu);
    }
    else
    {
      if ( v14 )
        v10 = *((_DWORD *)v14 + 32);
      else
        v10 = 0;
      Windows::UI::Composition::ProxyObject::SetReferenceProperty((Windows::UI::Composition::ProxyObject *)v5, 0, v10);
      if ( *((Microsoft::WRL2::NestableRuntimeClass **)v5 + 39) != v9 )
      {
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v9);
        v13 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v5 + 39);
        *((_QWORD *)v5 + 39) = v9;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
      }
      v7 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
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
