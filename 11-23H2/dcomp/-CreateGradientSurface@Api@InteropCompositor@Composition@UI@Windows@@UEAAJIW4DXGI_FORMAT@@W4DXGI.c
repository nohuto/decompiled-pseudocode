/*
 * XREFs of ?CreateGradientSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x18015CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateGradientSurface(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum D2D1_EXTEND_MODE a5,
        struct IDCompositionSurface **a6,
        unsigned int *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  unsigned int v12; // ebx
  int v13; // eax

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v7->SpinCount & 2) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, enum D2D1_EXTEND_MODE, struct IDCompositionSurface **, unsigned int *))(*(_QWORD *)((*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL)) + 248LL))(
            (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v12 = v13;
    if ( v13 < 0 )
      DoStackCaptureDirect(v13, 0x36Au);
    else
      v12 = 0;
  }
  else
  {
    v12 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v12;
}
