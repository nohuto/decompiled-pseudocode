/*
 * XREFs of ?OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAX@Z @ 0x180128940
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OpenSharedResourceHandle(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        struct IUnknown *a2,
        void **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( !a2 )
    {
      v7 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1E00u);
      goto LABEL_12;
    }
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v12, v6);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
           &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 7683;
    }
    else
    {
      v8 = Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(
             (DirectComposition::CDevice **)v3,
             v12,
             a3);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v7 = 0;
LABEL_11:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
          (volatile signed __int32 **)&v12,
          v9);
        goto LABEL_12;
      }
      v10 = 7685;
    }
    DoStackCaptureDirect(v8, v10);
    goto LABEL_11;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v7;
}
