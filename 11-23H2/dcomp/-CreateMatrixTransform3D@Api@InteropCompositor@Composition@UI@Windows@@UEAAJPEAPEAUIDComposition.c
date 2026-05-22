/*
 * XREFs of ?CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x18015D310
 * Callers:
 *     ?CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800ABD50 (-CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositio.c)
 *     ?CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800ABD70 (-CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDComposit.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateMatrixTransform3D(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionMatrixTransform3D **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v2 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionMatrixTransform3D **))(*(_QWORD *)this[-19].OwningThread
                                                                                     + 168LL))(
           this[-19].OwningThread,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x28Fu);
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
