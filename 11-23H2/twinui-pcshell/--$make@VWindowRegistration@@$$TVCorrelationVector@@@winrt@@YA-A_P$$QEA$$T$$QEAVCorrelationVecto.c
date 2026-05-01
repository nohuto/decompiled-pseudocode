/*
 * XREFs of ??$make@VWindowRegistration@@$$TVCorrelationVector@@@winrt@@YA?A_P$$QEA$$T$$QEAVCorrelationVector@@@Z @ 0x1806C4938
 * Callers:
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1806C5A50 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1806C4BD4 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<WindowRegistration,std::nullptr_t,CorrelationVector>(
        _QWORD *a1,
        HWND *a2,
        const struct CorrelationVector *a3)
{
  WindowRegistration *v7; // [rsp+40h] [rbp+8h]

  v7 = (WindowRegistration *)operator new(0x38uLL);
  WindowRegistration::WindowRegistration(v7, *a2, a3);
  *(_QWORD *)v7 = &winrt::impl::heap_implements<WindowRegistration>::`vftable';
  *a1 = (char *)v7 + 16;
  return a1;
}
