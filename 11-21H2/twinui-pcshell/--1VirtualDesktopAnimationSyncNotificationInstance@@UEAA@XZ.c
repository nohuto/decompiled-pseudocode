/*
 * XREFs of ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x18054D4E0
 * Callers:
 *     ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x18054D530 (--_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(
        RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(this + 3);
  v2 = this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v2->Ptr + 2))(v2);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
