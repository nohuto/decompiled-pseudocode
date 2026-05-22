/*
 * XREFs of ?SuspendAnimations@Internal@Compositor@Composition@UI@Windows@@UEAAJE@Z @ 0x180011C00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::SuspendAnimations(
        Windows::UI::Composition::Compositor::Internal *this,
        char a2)
{
  char *v2; // rdi
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx

  v2 = (char *)this - 1112;
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::Compositor::Internal *)((char *)this - 1112));
  v4 = 0LL;
  if ( (v2[32] & 2) != 0 )
  {
    LOBYTE(v4) = a2 != 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 57) + 160LL) + 80LL))(
           *(_QWORD *)(*((_QWORD *)v2 + 57) + 160LL),
           v4);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x7A1u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v2);
  return v6;
}
