/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@@YAXPE$ADV?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18042CA2C
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_843a4523c4ce898f7fb4bb4d9e96aac5____::_1_::dtor$2 @ 0x18042AF0F (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_18042AF0F.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_0185f2fcaf29182e01e5e20f55c595fb____::_1_::dtor$2 @ 0x18043FDF3 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_18043FDF3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
