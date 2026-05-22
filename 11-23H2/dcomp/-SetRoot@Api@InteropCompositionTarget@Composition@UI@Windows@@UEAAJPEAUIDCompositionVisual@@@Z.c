/*
 * XREFs of ?SetRoot@Api@InteropCompositionTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18008B540
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

__int64 __fastcall Windows::UI::Composition::InteropCompositionTarget::Api::SetRoot(
        Windows::UI::Composition::InteropCompositionTarget::Api *this,
        struct IUnknown *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 216;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 24);
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
  v11 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
    (volatile signed __int32 **)&v11,
    v5);
  v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 42;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(char *, struct Microsoft::WRL2::ContextRuntimeClass *, _QWORD))(*(_QWORD *)v2 + 280LL))(
         v2,
         v11,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 45;
LABEL_10:
    DoStackCaptureDirect(v6, v10);
    goto LABEL_5;
  }
  v7 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
    (volatile signed __int32 **)&v11,
    v8);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
