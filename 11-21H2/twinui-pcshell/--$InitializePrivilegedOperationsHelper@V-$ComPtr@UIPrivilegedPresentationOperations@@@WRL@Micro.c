/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedNotificationOperations@@@23@V?$ComPtr@UIPrivilegedArrangementOperations@@@23@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedPresentationOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedNotificationOperations@@@34@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@34@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006F634
 * Callers:
 *     ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18006F760 (-InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedNotificationOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedArrangementOperations@@@23@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedNotificationOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@34@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18006F594 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedNotificationOperations@@@WRL@Micro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedPresentationOperations>,Microsoft::WRL::ComPtr<IPrivilegedNotificationOperations>,Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v8; // rax
  void (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx

  v8 = *a1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *a1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v8 = a1[1] - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( v8 )
    return InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedNotificationOperations>,Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>>(
             a1,
             a2,
             a4,
             a5,
             a6,
             a7,
             a8);
  v12 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  v12(a2, &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9, a3);
  return 0LL;
}
