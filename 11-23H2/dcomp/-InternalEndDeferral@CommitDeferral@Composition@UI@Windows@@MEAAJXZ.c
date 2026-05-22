/*
 * XREFs of ?InternalEndDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJXZ @ 0x18018ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitDeferral::InternalEndDeferral(
        Windows::UI::Composition::CommitDeferral *this,
        __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // esi
  bool v6; // zf

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  v4 = *(_DWORD *)(v2 + 448);
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = (*(_BYTE *)(v2 + 452) & 1) == 0;
    *(_DWORD *)(v2 + 448) = v5;
    if ( !v6 )
    {
      if ( v5 )
        return v3;
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v2,
        a2);
    }
    if ( !v5 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, 0LL);
  }
  else
  {
    return (unsigned int)-2147483635;
  }
  return v3;
}
