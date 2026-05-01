/*
 * XREFs of ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x180437BB0
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x1801FF9C0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18043D714 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18043D714.c)
 * Callees:
 *     ??$_Assign_range@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18042C33C (--$_Assign_range@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$vector@V.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1804348F0 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x180436CCC (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x180439900 (-ValidateSize@Details@Collections@Platform@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall _ReplaceAll__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_6__Z(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // r8
  void *Exception; // rax
  void *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h]
  __int64 v13; // [rsp+40h] [rbp+8h]

  v4 = (_QWORD *)(a1 + 80);
  try
  {
    Platform::Collections::Details::IncrementCounter(v4);
    Platform::Collections::Details::ValidateSize((Platform::Collections::Details *)*(unsigned int *)(a2 + 72), v5);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = 0LL;
    if ( v6 )
      v7 = (_QWORD *)(v6 + 8LL * *(unsigned int *)(a2 + 72));
    else
      v6 = 0LL;
    std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Assign_range<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * *>(
      *(__int64 **)(a1 + 96),
      v6,
      v7);
    Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
      a1,
      0,
      0);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v12 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v10 = __abi_winrt_ptr_ctor(v12);
    throw (Platform::OutOfMemoryException **)&v10;
  }
  catch ( std::exception )
  {
    v9 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v13 = Platform::FailureException::FailureException(v9);
    v11 = __abi_winrt_ptr_ctor(v13);
    throw (Platform::FailureException **)&v11;
  }
}
