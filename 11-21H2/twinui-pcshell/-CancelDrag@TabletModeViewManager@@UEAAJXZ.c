/*
 * XREFs of ?CancelDrag@TabletModeViewManager@@UEAAJXZ @ 0x18050AE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::CancelDrag(TabletModeViewManager *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 6);
  if ( !v1 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 80) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 6));
  return 0LL;
}
