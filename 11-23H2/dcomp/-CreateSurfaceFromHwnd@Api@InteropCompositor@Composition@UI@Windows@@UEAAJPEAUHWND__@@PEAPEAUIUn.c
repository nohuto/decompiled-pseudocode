/*
 * XREFs of ?CreateSurfaceFromHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x18015E160
 * Callers:
 *     ?CreateSurfaceFromHwnd@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x1800AC010 (-CreateSurfaceFromHwnd@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAUHWND__@@PEAPEAU.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFromHwnd(
        struct _RTL_CRITICAL_SECTION *this,
        HWND a2,
        struct IUnknown **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v3 = this - 30;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 30);
  if ( (v3->SpinCount & 2) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(HANDLE, HWND, struct IUnknown **))(*(_QWORD *)this[-19].OwningThread + 88LL))(
           this[-19].OwningThread,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x215u);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
