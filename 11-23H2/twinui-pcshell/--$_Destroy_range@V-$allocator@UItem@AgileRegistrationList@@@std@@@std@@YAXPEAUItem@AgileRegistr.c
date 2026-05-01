/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801B6664
 * Callers:
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x18006AECC (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801914F0 (--1HolographicPositioner@@UEAA@XZ.c)
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch$7 @ 0x1802C2C4B (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--_Emplace.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1803959DC (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180396824 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1803CB8CC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x1803CCA14 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ??1CVirtualDesktopNotifications@@QEAA@XZ @ 0x1805F98C4 (--1CVirtualDesktopNotifications@@QEAA@XZ.c)
 *     ??_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z @ 0x1806089D0 (--_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
