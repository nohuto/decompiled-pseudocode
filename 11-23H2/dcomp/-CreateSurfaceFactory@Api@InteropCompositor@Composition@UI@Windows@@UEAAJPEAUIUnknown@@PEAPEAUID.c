/*
 * XREFs of ?CreateSurfaceFactory@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x18008BC60
 * Callers:
 *     ?CreateSurfaceFactory@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x1800ABFD0 (-CreateSurfaceFactory@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAUIUnknown@@PEAPEAUI.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFactory(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IUnknown *a2,
        struct IDCompositionSurfaceFactory **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1208);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1208));
  if ( (v3->SpinCount & 2) != 0 )
  {
    v7 = (*((_QWORD *)this - 94) + 8LL) & -(__int64)(*((_QWORD *)this - 94) != 0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, struct IDCompositionSurfaceFactory **))(*(_QWORD *)v7 + 56LL))(
           v7,
           a2,
           a3);
    v9 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x2EDu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v9;
}
