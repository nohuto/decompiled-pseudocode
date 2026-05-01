/*
 * XREFs of ??$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x1805F8A1C
 * Callers:
 *     ?GetItemForView@CachedDataSource@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1805FAA08 (-GetItemForView@CachedDataSource@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18060EDD0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::cx_safe_cast<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,IInspectable *>(
        __int64 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64, __int64 *); // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(*a1);
  v2 = __abi_winrt_cast_to(0, v1, (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
  v3 = __abi_winrt_ptr_ctor(v2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v1)[2])(v1);
  return v3;
}
