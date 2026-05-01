/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006E66C
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006ED84 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@@Z @ 0x1800D69E4 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsof.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rax
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx

  v5 = *a1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *a1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>,>(a1, a2, a4);
  v8 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  v8(a2, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, a3);
  return 0LL;
}
