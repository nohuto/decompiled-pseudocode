/*
 * XREFs of ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E4BB0
 * Callers:
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E49D4 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800E4B10 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800438B4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044114 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailTransition::_CleanupAnimation(CThumbnailTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi
  __int64 v4; // rcx
  CBaseObject *v5; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v2,
      (struct IAnimationListener *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)));
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 8));
    CAnimationEngine::Release(v3);
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  CBaseObject::Release(this);
}
