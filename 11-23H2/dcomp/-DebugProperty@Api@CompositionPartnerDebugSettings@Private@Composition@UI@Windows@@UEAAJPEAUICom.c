/*
 * XREFs of ?DebugProperty@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICompositionObject@456@PEAUIDebugAnimationCallback@3456@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@6@@Z @ 0x18012F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionPartnerDebugSettings::Api::DebugProperty(
        Windows::UI::Composition::Private::CompositionPartnerDebugSettings::Api *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Private::IDebugAnimationCallback *a3,
        HSTRING a4,
        struct Windows::Foundation::IClosable **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // edx
  struct Windows::Foundation::IClosable **v13; // rsi
  int v14; // eax
  struct Windows::UI::Composition::ProxyObject *v15; // r15
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  __int64 v17; // rdx
  unsigned int v18; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    if ( !a2 )
    {
      v12 = 38;
LABEL_5:
      v11 = -2147024809;
      DoStackCaptureDirect(-2147024809, v12);
      goto LABEL_17;
    }
    if ( !a3 )
    {
      v12 = 39;
      goto LABEL_5;
    }
    v13 = a5;
    if ( !a5 )
    {
      v12 = 40;
      goto LABEL_5;
    }
    v20 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
      (volatile signed __int32 **)&v20,
      v10);
    v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v5,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
            &v20);
    v15 = v20;
    v11 = v14;
    if ( v14 < 0 )
    {
      v18 = 43;
    }
    else
    {
      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                  *((Windows::UI::Composition::CompositorCommon **)this - 13),
                                  1);
      v14 = Windows::UI::Composition::AnimationLoggingManager::DebugProperty2(AnimationLoggingManager, v15, a3, a4, v13);
      v11 = v14;
      if ( v14 >= 0 )
      {
        v11 = 0;
LABEL_16:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
          (volatile signed __int32 **)&v20,
          v17);
        goto LABEL_17;
      }
      v18 = 51;
    }
    DoStackCaptureDirect(v14, v18);
    goto LABEL_16;
  }
  v11 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_17:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v11;
}
