/*
 * XREFs of ?CreateInkProxy@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionInkPartner@@@Z @ 0x18015CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateInkProxy(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionInkPartner **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1224);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1224));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*((_QWORD *)this - 96) + 24LL) & -(__int64)(*((_QWORD *)this - 96) != 0LL);
    v7 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionInkPartner **))(*(_QWORD *)v6 + 64LL))(v6, a2);
    v5 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x5A9u);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
