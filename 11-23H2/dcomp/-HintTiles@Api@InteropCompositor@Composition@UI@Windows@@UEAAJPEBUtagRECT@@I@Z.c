/*
 * XREFs of ?HintTiles@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEBUtagRECT@@I@Z @ 0x18015F090
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::HintTiles(
        Windows::UI::Composition::InteropCompositor::Api *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1232);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1232));
  if ( (v3->SpinCount & 2) != 0 )
  {
    v8 = (*((_QWORD *)this - 97) + 40LL) & -(__int64)(*((_QWORD *)this - 97) != 0LL);
    v9 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, a2, a3);
    v7 = v9;
    if ( v9 < 0 )
      DoStackCaptureDirect(v9, 0x643u);
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
