/*
 * XREFs of ??$_Cleanup@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@3@I@Z @ 0x180455B74
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@123@IPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x180455BC4 (--$_IteratorGetMany@U-$IIterator_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Wind.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@123@IIPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x180455CB4 (--$_VectorGetMany@U-$IVectorView_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Wind.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@123@IIPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x180455DA8 (--$_VectorGetMany@U-$IVector_impl@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
