/*
 * XREFs of ?Stop@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18008B260
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Partner::Stop(
        Windows::UI::Composition::CompositionPropertyAnimator::Partner *this)
{
  char *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (char *)this - 136;
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (v1[32] & 2) != 0 && (v3 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 400LL))(v1), v4 = v3, v3 < 0) )
    DoStackCaptureDirect(v3, 0x59Du);
  else
    v4 = 0;
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
