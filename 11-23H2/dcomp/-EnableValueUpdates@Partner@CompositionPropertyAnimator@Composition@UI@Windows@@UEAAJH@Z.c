/*
 * XREFs of ?EnableValueUpdates@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJH@Z @ 0x180190670
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Partner::EnableValueUpdates(
        Windows::UI::Composition::CompositionPropertyAnimator::Partner *this,
        int a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v7; // eax

  v2 = (char *)this - 136;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    LOBYTE(v5) = a2 != 0;
    v7 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 304LL))(v2, v5);
    v6 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x47Au);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
