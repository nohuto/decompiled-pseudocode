/*
 * XREFs of ?SetDesktopTree@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z @ 0x180093BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropRenderTarget::Partner::SetDesktopTree(
        Windows::UI::Composition::InteropRenderTarget::Partner *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropDesktopTree::s_InterfaceType,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0x40u);
    v12 = v13;
    if ( !v13 )
      goto LABEL_8;
    goto LABEL_10;
  }
  v7 = *((_QWORD *)this + 2);
  v8 = v13;
  if ( v13 )
    v9 = *((_QWORD *)v13 + 19);
  else
    v9 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v9);
  v6 = v10;
  if ( v10 < 0 )
    DoStackCaptureDirect(v10, 0x43u);
  else
    v6 = 0;
  if ( v8 )
  {
    v12 = v8;
LABEL_10:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
  }
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
