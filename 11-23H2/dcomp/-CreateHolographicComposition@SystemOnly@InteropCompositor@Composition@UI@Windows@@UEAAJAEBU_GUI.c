/*
 * XREFs of ?CreateHolographicComposition@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHolographicComposition@@@Z @ 0x18015F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::SystemOnly::CreateHolographicComposition(
        Windows::UI::Composition::InteropCompositor::SystemOnly *this,
        const struct _GUID *a2,
        unsigned int a3,
        struct IDCompositionHolographicComposition **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1264);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1264));
  if ( (v4->SpinCount & 2) != 0 )
  {
    v10 = (*((_QWORD *)this - 101) + 32LL) & -(__int64)(*((_QWORD *)this - 101) != 0LL);
    v11 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD, struct IDCompositionHolographicComposition **))(*(_QWORD *)v10 + 56LL))(
            v10,
            a2,
            a3,
            a4);
    v9 = v11;
    if ( v11 < 0 )
      DoStackCaptureDirect(v11, 0x123u);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v9;
}
