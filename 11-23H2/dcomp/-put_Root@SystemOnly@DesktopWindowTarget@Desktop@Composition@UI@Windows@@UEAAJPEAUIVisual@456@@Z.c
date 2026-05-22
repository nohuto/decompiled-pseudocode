/*
 * XREFs of ?put_Root@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x180010C40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly::put_Root(
        Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly *this,
        struct IUnknown *a2)
{
  char *v2; // rsi
  Microsoft::WRL2::ContextSession *v4; // rdi
  int v5; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v6; // rbp
  unsigned int v7; // ebx
  HWND v8; // rax
  __int64 v9; // r8
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 160;
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 17);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v12);
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v12);
  v6 = v12;
  v7 = v5;
  if ( v5 < 0 )
  {
    v11 = 205;
    goto LABEL_10;
  }
  v8 = (HWND)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 288LL))(v2);
  LOBYTE(v9) = (GetWindowLongPtrW(v8, -16) & 0x40000000) != 0;
  v5 = (*(__int64 (__fastcall **)(char *, struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v2 + 280LL))(
         v2,
         v6,
         v9);
  v7 = v5;
  if ( v5 < 0 )
  {
    v11 = 231;
LABEL_10:
    DoStackCaptureDirect(v5, v11);
    goto LABEL_5;
  }
  v7 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v12);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
