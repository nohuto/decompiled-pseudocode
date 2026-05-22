/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollectionCallbacks@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800DB6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::SendInputReport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char, __int64, __int64))(**(_QWORD **)(a1 + 16)
                                                                                             + 144LL))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
