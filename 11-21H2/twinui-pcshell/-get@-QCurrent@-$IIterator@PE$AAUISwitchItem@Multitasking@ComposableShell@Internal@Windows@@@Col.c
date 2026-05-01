/*
 * XREFs of ?get@?QCurrent@?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@1?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@3Platform@@UE$AAAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@5@XZ @ 0x18043F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x18042BD2C (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1804397E4 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x180439870 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QCurrent___IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows__1__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_3Platform__UE_AAAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_5_XZ(
        __int64 a1)
{
  Platform::Collections::Details *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi

  Platform::Collections::Details::ValidateCounter((_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 80));
  LOBYTE(v2) = *(unsigned int *)(a1 + 84) < (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL)
                                                                       - **(_QWORD **)(a1 + 64)) >> 5);
  Platform::Collections::Details::ValidateBounds(v2);
  v3 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>();
  v4 = __abi_winrt_ptr_ctor(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
