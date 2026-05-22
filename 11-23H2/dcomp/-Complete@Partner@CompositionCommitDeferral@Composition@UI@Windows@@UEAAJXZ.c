/*
 * XREFs of ?Complete@Partner@CompositionCommitDeferral@Composition@UI@Windows@@UEAAJXZ @ 0x1801824E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCommitDeferral::Partner::Complete(
        Windows::UI::Composition::CompositionCommitDeferral::Partner *this)
{
  char *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int v5; // eax

  v1 = (char *)this - 128;
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (v1[32] & 2) != 0 )
  {
    if ( v1[144] )
    {
      v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 288LL))(v1);
      v1[144] = 0;
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v3 = -2147483634;
    }
    DoStackCaptureDirect(v3, 0x76u);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
