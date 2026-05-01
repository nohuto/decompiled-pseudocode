/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180136CD0
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1801FDF00 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1801FDF20 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WB.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x1801FDF40 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WC.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAKXZ @ 0x1801FDF60 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WE.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAKXZ @ 0x1801FDF80 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Window_ea_1801FDF80.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAKXZ @ 0x1801FDFA0 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 248) && *(int *)(*(_QWORD *)(a1 + 248) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 248) + 12LL));
  else
    return (unsigned int)-1;
}
