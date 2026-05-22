/*
 * XREFs of ?CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionSkewTransform@@@Z @ 0x18015DFF0
 * Callers:
 *     ?CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionSkewTransform@@@Z @ 0x1800ABF50 (-CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionSke.c)
 *     ?CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionSkewTransform@@@Z @ 0x1800ABF70 (-CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionS.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSkewTransform(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionSkewTransform **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v2 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionSkewTransform **))(*(_QWORD *)this[-19].OwningThread
                                                                                 + 120LL))(
           this[-19].OwningThread,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x245u);
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
