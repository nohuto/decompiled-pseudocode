/*
 * XREFs of ?get_CurrentBatchId@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAI@Z @ 0x18012AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate::get_CurrentBatchId(
        Windows::UI::Composition::CompositorCommon::XUCPrivate *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax

  *a2 = 0;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 216));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v2[11].OwningThread + 2) + 360LL))(
           (__int64)v2[11].OwningThread + 16,
           a2);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x184Bu);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
