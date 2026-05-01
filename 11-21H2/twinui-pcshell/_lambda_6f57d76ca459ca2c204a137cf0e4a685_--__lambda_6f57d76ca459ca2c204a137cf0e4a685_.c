/*
 * XREFs of _lambda_6f57d76ca459ca2c204a137cf0e4a685_::__lambda_6f57d76ca459ca2c204a137cf0e4a685_ @ 0x1803EA688
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowShowRequested_::_1_::dtor$9 @ 0x1803F6F1F (_UwpWindowEventDispatcher--UwpWindowShowRequested_--_1_--dtor$9.c)
 *     _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$3 @ 0x1803F745E (_UwpWindowEventDispatcher--UwpWindowSwitchRequested_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall lambda_6f57d76ca459ca2c204a137cf0e4a685_::__lambda_6f57d76ca459ca2c204a137cf0e4a685_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1 + 1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1);
}
