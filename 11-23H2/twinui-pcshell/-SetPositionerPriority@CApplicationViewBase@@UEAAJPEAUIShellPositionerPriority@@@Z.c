/*
 * XREFs of ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x1800E1550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewBase::SetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IShellPositionerPriority *Ptr; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  v7 = v2;
  if ( this[13].Ptr != a2 )
  {
    Ptr = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    Ptr = (struct IShellPositionerPriority *)this[13].Ptr;
    this[13].Ptr = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Ptr);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v7);
  return 0LL;
}
