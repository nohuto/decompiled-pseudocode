/*
 * XREFs of ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x180608790
 * Callers:
 *     ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x180608990 (--_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(
        VirtualDesktopAnimationSyncNotificationInstance *this)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 v3; // rcx

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
