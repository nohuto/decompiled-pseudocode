/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1804BC74C
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$13 @ 0x1802B7C4B (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$13.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$6 @ 0x1802B8293 (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$6.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x1802BBEAD (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[18]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x1804B9AA2 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[12]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x1804B9B32 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$11 @ 0x1804C15BF (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$11.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$12 @ 0x1804C15CB (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$12.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$13 @ 0x1804C15D7 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$13.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x1804C15E3 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(a1);
}
