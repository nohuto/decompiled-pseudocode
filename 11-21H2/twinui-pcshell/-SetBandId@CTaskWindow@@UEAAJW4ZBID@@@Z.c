/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x1801533E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z @ 0x1801534A4 (-_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::SetBandId(__int64 a1, unsigned int a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  v5 = **v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  v5(v4, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v7);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, a2);
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  *(_DWORD *)(a1 + 44) = a2 - 8;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return 0LL;
}
