/*
 * XREFs of ?OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAUICompositionHandle@1Handles@Foundation@5@@Z @ 0x180094200
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 *     ?CreateAndAttachCompositionHandle@Compositor@Composition@UI@Windows@@QEAAJPEAPEAXPEAPEAUICompositionHandle@Internal@Handles@Foundation@4@@Z @ 0x180094308 (-CreateAndAttachCompositionHandle@Compositor@Composition@UI@Windows@@QEAAJPEAPEAXPEAPEAUIComposi.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::OpenSharedResourceHandle(
        Windows::UI::Composition::Compositor::Internal *this,
        struct IUnknown *a2,
        struct Windows::Foundation::Handles::Internal::ICompositionHandle **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::Compositor::Internal *)((char *)this - 1112);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_7;
  }
  v13 = 0LL;
  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v12, v6);
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v3,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1784;
    goto LABEL_12;
  }
  v7 = Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(v3, v12, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1785;
    goto LABEL_12;
  }
  v7 = Windows::UI::Composition::Compositor::CreateAndAttachCompositionHandle(v3, &v13, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1790;
LABEL_12:
    DoStackCaptureDirect(v7, v11);
    goto LABEL_6;
  }
  v8 = 0;
LABEL_6:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v12, v9);
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v8;
}
