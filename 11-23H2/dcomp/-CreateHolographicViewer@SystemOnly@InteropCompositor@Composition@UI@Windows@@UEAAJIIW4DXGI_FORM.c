/*
 * XREFs of ?CreateHolographicViewer@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z @ 0x18015FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::SystemOnly::CreateHolographicViewer(
        Windows::UI::Composition::InteropCompositor::SystemOnly *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const struct _GUID *a5,
        struct IDCompositionHolographicViewer **a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1264);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1264));
  if ( (v6->SpinCount & 2) != 0 )
  {
    v12 = (*((_QWORD *)this - 101) + 32LL) & -(__int64)(*((_QWORD *)this - 101) != 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, const struct _GUID *, struct IDCompositionHolographicViewer **))(*(_QWORD *)v12 + 64LL))(
            v12,
            a2,
            a3,
            a4,
            a5,
            a6);
    v11 = v13;
    if ( v13 < 0 )
      DoStackCaptureDirect(v13, 0x138u);
    else
      v11 = 0;
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v11;
}
