/*
 * XREFs of ?CommitSwipe@TabletModeViewManager@@UEAAJIUtagPOINT@@@Z @ 0x18050AF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::CommitSwipe(TabletModeViewManager *this, __int64 a2, struct tagPOINT a3)
{
  __int64 v3; // r9

  v3 = *((_QWORD *)this + 7);
  if ( !v3 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 88) )
    (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT))(*(_QWORD *)v3 + 40LL))(*((_QWORD *)this + 7), a2, a3);
  return 0LL;
}
