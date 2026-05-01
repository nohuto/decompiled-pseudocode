/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1803DED34
 * Callers:
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x180217FF2 (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x180219DDA (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[18]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x1803DCDAE (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[12]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x1803DCE3E (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$3 @ 0x1803ED9AB (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$3.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$4 @ 0x1803ED9B7 (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$4.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$5 @ 0x1803ED9C3 (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$6 @ 0x1803ED9CF (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$6.c)
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$10 @ 0x1803F7C02 (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$10.c)
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$11 @ 0x1803F7C0E (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$11.c)
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$12 @ 0x1803F7C1A (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$12.c)
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$13 @ 0x1803F7C26 (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(a1);
}
