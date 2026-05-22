/*
 * XREFs of ?CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x18015D3C0
 * Callers:
 *     ?CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800ABD90 (-CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionM.c)
 *     ?CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800ABDB0 (-CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositio.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateMatrixTransform(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionMatrixTransform **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v2 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionMatrixTransform **))(*(_QWORD *)this[-19].OwningThread
                                                                                   + 128LL))(
           this[-19].OwningThread,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x251u);
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
