/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_get_Current@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAJPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18043D0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_get_Current__Q__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_2Platform__UE_AAAJPEAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        _BYTE *a1,
        _QWORD *a2)
{
  if ( a1[104] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 80LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
