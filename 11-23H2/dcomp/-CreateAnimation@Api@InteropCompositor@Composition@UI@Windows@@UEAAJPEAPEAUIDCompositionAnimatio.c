/*
 * XREFs of ?CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x180088B50
 * Callers:
 *     ?CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800ABBD0 (-CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionAnimati.c)
 *     ?CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800ABBF0 (-CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionAnima.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateAnimation(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionAnimation **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx

  v2 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionAnimation **))(*(_QWORD *)this[-19].OwningThread + 200LL))(
           this[-19].OwningThread,
           a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x2C1u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
