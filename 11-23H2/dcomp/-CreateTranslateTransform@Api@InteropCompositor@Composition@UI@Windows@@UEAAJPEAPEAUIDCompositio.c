/*
 * XREFs of ?CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x18015E730
 * Callers:
 *     ?CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800AC130 (-CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositi.c)
 *     ?CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800AC150 (-CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDComposi.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateTranslateTransform(
        struct _RTL_CRITICAL_SECTION *this,
        struct IDCompositionTranslateTransform **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v2 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(HANDLE, struct IDCompositionTranslateTransform **))(*(_QWORD *)this[-19].OwningThread
                                                                                      + 96LL))(
           this[-19].OwningThread,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x221u);
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
