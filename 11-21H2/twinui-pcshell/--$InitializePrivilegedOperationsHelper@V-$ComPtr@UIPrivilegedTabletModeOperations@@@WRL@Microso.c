/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006ED84
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006F080 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006E66C (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microso.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax
  void (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx

  v5 = *a1 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *a1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
             a1,
             a2,
             a4,
             a5);
  v9 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  v9(a2, &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd, a3);
  return 0LL;
}
