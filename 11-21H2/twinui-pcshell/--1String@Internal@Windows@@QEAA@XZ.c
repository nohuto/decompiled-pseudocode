/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1802E0430
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$29 @ 0x1802196B0 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$29.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x18021D937 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$30 @ 0x1803F4489 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$30.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$11 @ 0x1803F5CF6 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$11.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$12 @ 0x1803F5D02 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
