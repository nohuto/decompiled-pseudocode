/*
 * XREFs of ?OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800353E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1800336D4 (-ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::OpenSharedResourceHandle(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IUnknown *a2,
        void **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v12);
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              v3,
              a2,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
              &v12) < 0 )
  {
    v11 = (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL);
    v7 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, void **))(*(_QWORD *)v11 + 224LL))(v11, a2, a3);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_4;
    v10 = 781;
LABEL_11:
    DoStackCaptureDirect(v7, v10);
    goto LABEL_5;
  }
  v7 = DirectComposition::CDevice::ResourceOpenSharedHandle(
         *((DirectComposition::CDevice **)this - 95),
         *((_DWORD *)v12 + 32),
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 777;
    goto LABEL_11;
  }
LABEL_4:
  v8 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v12);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v8;
}
