/*
 * XREFs of ?CreateBrightnessEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x18015C7D0
 * Callers:
 *     ?CreateBrightnessEffect@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x1800ABC50 (-CreateBrightnessEffect@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDComposition.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateBrightnessEffect(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionBrightnessEffect **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1208);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1208));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v6 = (*((_QWORD *)this - 94) + 16LL) & -(__int64)(*((_QWORD *)this - 94) != 0LL);
    v7 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionBrightnessEffect **))(*(_QWORD *)v6 + 392LL))(v6, a2);
    v5 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x517u);
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
