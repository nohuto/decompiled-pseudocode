/*
 * XREFs of ?InternalBeginDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJPEAVCompositor@234@@Z @ 0x18018AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x180080450 (-DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitDeferral::InternalBeginDeferral(
        Windows::UI::Composition::CommitDeferral *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v2; // ecx
  struct Windows::UI::Composition::Compositor *v3; // rbx

  v2 = *((_DWORD *)a2 + 112);
  v3 = a2;
  *((_DWORD *)a2 + 112) = v2 + 1;
  if ( !v2 )
  {
    if ( (*((_BYTE *)a2 + 452) & 1) != 0 )
      Windows::UI::Composition::CompositorCommon::DisableMessageGroup(a2);
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(struct Windows::UI::Composition::Compositor *, struct Windows::UI::Composition::Compositor *))(*(_QWORD *)v3 + 120LL))(
      v3,
      a2);
  }
  return 0LL;
}
