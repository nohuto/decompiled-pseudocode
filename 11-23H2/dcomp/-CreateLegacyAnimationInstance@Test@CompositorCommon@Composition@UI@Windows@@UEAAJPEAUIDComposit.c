/*
 * XREFs of ?CreateLegacyAnimationInstance@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z @ 0x180125FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::CreateLegacyAnimationInstance(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionAnimation *a2,
        struct IDCompositionAnimationInstancePartner **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax

  v3 = this - 9;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (v3->SpinCount & 2) != 0 )
  {
    v7 = ((__int64)v3[11].OwningThread + 24) & -(__int64)(v3[11].OwningThread != 0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionAnimation *, struct IDCompositionAnimationInstancePartner **))(*(_QWORD *)v7 + 24LL))(
           v7,
           a2,
           a3);
    v6 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x1F8Eu);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
