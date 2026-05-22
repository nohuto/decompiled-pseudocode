/*
 * XREFs of ?CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTransform@@I0@Z @ 0x18015E5B0
 * Callers:
 *     ?CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionTransform@@I0@Z @ 0x1800AC0B0 (-CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionTr.c)
 *     ?CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionTransform@@I0@Z @ 0x1800AC0D0 (-CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDComposition.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateTransformGroup(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionTransform **a2,
        unsigned int a3,
        struct IDCompositionTransform **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v9; // ebx
  int v10; // eax

  v4 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v4->SpinCount & 2) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionTransform **, _QWORD, struct IDCompositionTransform **))(*(_QWORD *)this[-19].OwningThread + 136LL))(
            this[-19].OwningThread,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0x25Fu);
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
