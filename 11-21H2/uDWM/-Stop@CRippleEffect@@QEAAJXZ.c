/*
 * XREFs of ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800D1C50
 * Callers:
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800D1A38 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x180100F38 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRippleEffect::Stop(CRippleEffect *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al

  if ( *((_BYTE *)this + 280) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 280) = 0;
  }
  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    *((_QWORD *)this + 34) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  (*(void (__fastcall **)(CRippleEffect *))(*(_QWORD *)this + 104LL))(this);
  return 0LL;
}
