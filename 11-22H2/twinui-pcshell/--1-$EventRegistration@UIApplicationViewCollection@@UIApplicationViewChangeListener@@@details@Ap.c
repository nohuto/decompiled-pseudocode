/*
 * XREFs of ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x18006F13C
 * Callers:
 *     ??_GApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x18006F100 (--_GApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>(
        __int64 a1)
{
  void *v2; // rdi

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 64));
  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    SmartCookie::Unregister(*(SmartCookie **)(a1 + 48));
    wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v2);
    operator delete(v2, 0x80uLL);
  }
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 32));
}
