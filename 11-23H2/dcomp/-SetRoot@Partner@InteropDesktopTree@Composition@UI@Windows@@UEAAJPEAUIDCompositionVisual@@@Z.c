/*
 * XREFs of ?SetRoot@Partner@InteropDesktopTree@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180094FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDesktopTree::Partner::SetRoot(
        Windows::UI::Composition::InteropDesktopTree::Partner *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
    (volatile signed __int32 **)&v12,
    v5);
  v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 62;
    goto LABEL_13;
  }
  if ( v12 )
    v8 = *((_QWORD *)v12 + 39);
  else
    v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v8);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 65;
LABEL_13:
    DoStackCaptureDirect(v6, v11);
    goto LABEL_7;
  }
  v7 = 0;
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
    (volatile signed __int32 **)&v12,
    v9);
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
