/*
 * XREFs of ?DebugProperties@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICompositionObject@456@PEAUIDebugAnimationCallback@3456@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@PEAPEAUIClosable@Foundation@6@@Z @ 0x18012F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionPartnerDebugSettings::Api::DebugProperties(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v10; // rdx
  int v11; // ebx
  unsigned int v12; // edx
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 104);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(a1 - 96) & 2) == 0 )
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_16;
  }
  if ( !a2 )
  {
    v12 = 66;
LABEL_5:
    v11 = -2147024809;
    DoStackCaptureDirect(-2147024809, v12);
    goto LABEL_16;
  }
  if ( !a3 )
  {
    v12 = 67;
    goto LABEL_5;
  }
  if ( !a4 )
  {
    v12 = 68;
    goto LABEL_5;
  }
  v13 = a5;
  if ( !a5 )
  {
    v12 = 69;
    goto LABEL_5;
  }
  v16 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v16, v10);
  v11 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v5,
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
          &v16);
  if ( v11 < 0 )
  {
    DoStackCaptureDirect(v11, 0x48u);
  }
  else
  {
    Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
      *(Windows::UI::Composition::CompositorCommon **)(a1 - 104),
      1);
    *v13 = 0LL;
    v11 = 0;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v16, v14);
LABEL_16:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return (unsigned int)v11;
}
