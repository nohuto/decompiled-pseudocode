/*
 * XREFs of ??$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x180769980
 * Callers:
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x18076CA30 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA-AURect@Foundation@Windows@winrt@@AEBUI.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        __int64 (__fastcall ****a1)(_QWORD, __int64, __int64 *))
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_cast_to(0, *a1, (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
