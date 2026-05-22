/*
 * XREFs of ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ??$InitApiData@AEAY0DN@$$CBGAEAY0BL@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CBGAEAY0BL@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3060 (--$InitApiData@AEAY0DN@$$CBGAEAY0BL@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DN@$$CB.c)
 *     ??4?$RefPtr@VSceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVSceneMaterialInput@Scenes@Composition@UI@Windows@@@Z @ 0x18013F130 (--4-$RefPtr@VSceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAV.c)
 *     ?SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z @ 0x1801473D0 (-SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::put_MetallicRoughnessInput(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct IUnknown *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  unsigned int v9; // r8d
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF
  const char *v12; // [rsp+50h] [rbp+18h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !wil::ProcessShutdownInProgress((wil *)this) && _InterlockedIncrement(&dword_180220918) == 1 )
  {
    v12 = 0LL;
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_180220918;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[61],unsigned short const (&)[27],std::nullptr_t,long volatile *>(
      v4,
      L"put_MetallicRoughnessInput",
      &v12,
      (volatile int **)&v11);
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)*(this - 27);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(this - 26) & 2) != 0 )
  {
    v11 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v5,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Scenes::SceneMaterialInput::s_InterfaceType,
           &v13);
    v8 = v13;
    v6 = v7;
    v11 = v13;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x9Fu);
    }
    else
    {
      if ( v13 != this[3] )
      {
        if ( v13 )
          v9 = *((_DWORD *)v13 + 32);
        else
          v9 = 0;
        Windows::UI::Composition::ProxyObject::SetReferenceProperty(
          (Windows::UI::Composition::ProxyObject *)(this - 30),
          0xCu,
          v9);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneMaterialInput>::operator=(this + 3, v8);
      }
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
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
