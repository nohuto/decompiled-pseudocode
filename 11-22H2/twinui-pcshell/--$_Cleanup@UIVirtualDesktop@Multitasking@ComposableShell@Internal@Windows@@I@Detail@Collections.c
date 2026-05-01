/*
 * XREFs of ??$_Cleanup@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@I@Z @ 0x18053E23C
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x18053E28C (--$_IteratorGetMany@U-$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x18053E37C (--$_VectorGetMany@U-$IVectorView_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x18053E470 (--$_VectorGetMany@U-$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,unsigned int>(
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
