/*
 * XREFs of ??$make_self@VSnapFlyoutHost@@PEAUIPrivilegedArrangementOperations@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@$$QEAPEAUIPrivilegedArrangementOperations@@@Z @ 0x180110FAC
 * Callers:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x180110EBC (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x1801110E8 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
SnapFlyoutHost **__fastcall winrt::make_self<SnapFlyoutHost,IPrivilegedArrangementOperations *>(
        SnapFlyoutHost **a1,
        struct IPrivilegedArrangementOperations **a2)
{
  SnapFlyoutHost *v5; // [rsp+40h] [rbp+8h]

  v5 = (SnapFlyoutHost *)operator new(0xB8uLL);
  SnapFlyoutHost::SnapFlyoutHost(v5, *a2);
  *(_QWORD *)v5 = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
  *a1 = v5;
  return a1;
}
