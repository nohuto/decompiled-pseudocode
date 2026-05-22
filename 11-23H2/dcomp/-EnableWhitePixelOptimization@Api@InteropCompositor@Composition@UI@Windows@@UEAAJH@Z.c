/*
 * XREFs of ?EnableWhitePixelOptimization@Api@InteropCompositor@Composition@UI@Windows@@UEAAJH@Z @ 0x18008BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::EnableWhitePixelOptimization(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v5 = (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 256LL))(v5, a2);
    v7 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x3E4u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
