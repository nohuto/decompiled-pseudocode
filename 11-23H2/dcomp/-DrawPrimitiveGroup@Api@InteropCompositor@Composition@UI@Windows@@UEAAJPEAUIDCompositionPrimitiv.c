/*
 * XREFs of ?DrawPrimitiveGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x18015EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::DrawPrimitiveGroup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax

  v6 = a1 - 1224;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 1224));
  if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
  {
    v12 = (*(_QWORD *)(a1 - 768) + 24LL) & -(__int64)(*(_QWORD *)(a1 - 768) != 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int))(*(_QWORD *)v12 + 104LL))(
            v12,
            a2,
            a3,
            a4,
            a5,
            a6);
    v11 = v13;
    if ( v13 < 0 )
      DoStackCaptureDirect(v13, 0x3D8u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v6);
  return v11;
}
