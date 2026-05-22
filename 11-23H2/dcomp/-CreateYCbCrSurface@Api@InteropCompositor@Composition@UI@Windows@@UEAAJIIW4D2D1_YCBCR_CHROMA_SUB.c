/*
 * XREFs of ?CreateYCbCrSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z @ 0x18015EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateYCbCrSurface(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct IDCompositionYCbCrSurfacePartner **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1224);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1224));
  if ( (v5->SpinCount & 2) != 0 )
  {
    v11 = (*((_QWORD *)this - 96) + 24LL) & -(__int64)(*((_QWORD *)this - 96) != 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct IDCompositionYCbCrSurfacePartner **))(*(_QWORD *)v11 + 136LL))(
            v11,
            a2,
            a3,
            a4,
            a5);
    v10 = v12;
    if ( v12 < 0 )
      DoStackCaptureDirect(v12, 0x42Eu);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v10;
}
