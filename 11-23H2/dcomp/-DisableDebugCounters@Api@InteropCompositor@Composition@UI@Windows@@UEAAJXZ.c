/*
 * XREFs of ?DisableDebugCounters@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x18008C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::DisableDebugCounters(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx

  v1 = this - 31;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 31);
  if ( (v1->SpinCount & 2) != 0 )
  {
    v3 = ((__int64)this[-20].OwningThread + 48) & -(__int64)(this[-20].OwningThread != 0LL);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x688u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v5;
}
