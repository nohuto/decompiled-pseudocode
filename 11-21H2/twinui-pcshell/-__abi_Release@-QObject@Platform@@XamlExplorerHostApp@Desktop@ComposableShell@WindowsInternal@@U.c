/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18012C3C0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1801FED20 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1801FED40 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1801FED40.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x1801FED60 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1801FED60.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAKXZ @ 0x1801FED80 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1801FED80.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAKXZ @ 0x1801FEDA0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1801FEDA0.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAKXZ @ 0x1801FEDC0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1801FEDC0.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x18042438C (--1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  __int64 v2; // rax
  unsigned __int32 v3; // edi
  __int64 v5; // rcx
  Platform::Details::ControlBlock *v6; // rbx

  if ( *(_QWORD *)(a1 + 248) && *(int *)(*(_QWORD *)(a1 + 248) + 12LL) >= 0 )
  {
    v2 = *(_QWORD *)(a1 + 248);
    v3 = _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
    if ( !v3 )
    {
      *(_DWORD *)(v2 + 12) = -1073741824;
      if ( *(_QWORD *)(a1 + 256) && *(_QWORD *)(a1 + 256) != -1LL )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 16LL))(*(_QWORD *)(a1 + 256));
        *(_QWORD *)(a1 + 256) = 0LL;
      }
      if ( __abi_module )
        (*(void (__fastcall **)(struct __abi_Module *))(*(_QWORD *)__abi_module + 8LL))(__abi_module);
    }
    if ( !v3 )
    {
      WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(a1);
      v5 = *(_QWORD *)(a1 + 56);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = *(Platform::Details::ControlBlock **)(a1 + 248);
      Platform::Details::ControlBlock::ReleaseTarget(v6);
      Platform::Details::ControlBlock::__abi_Release(v6);
    }
  }
  else
  {
    return (unsigned __int32)-1;
  }
  return v3;
}
