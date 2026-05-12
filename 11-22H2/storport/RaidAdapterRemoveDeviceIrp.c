/*
 * XREFs of RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0013B1C (RaForwardIrpSynchronous.c)
 *     RaidAdapterDeleteChildren @ 0x1C00350E8 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C003553C (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableMFNDInterface @ 0x1C00355FC (RaidAdapterDisableMFNDInterface.c)
 *     RaidAdapterDisableNonPoFxMiniportInterface @ 0x1C003562C (RaidAdapterDisableNonPoFxMiniportInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C00356D0 (RaidAdapterDisableRpmbInterface.c)
 *     RaidDeleteAdapter @ 0x1C003AB5C (RaidDeleteAdapter.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C003D504 (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaCallMiniportCompleteServiceIrp @ 0x1C0043530 (RaCallMiniportCompleteServiceIrp.c)
 *     RaCheckAllMiniportSystemThreadsExit @ 0x1C0056E60 (RaCheckAllMiniportSystemThreadsExit.c)
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 */

__int64 __fastcall RaidAdapterRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v4; // rbp
  unsigned int v5; // eax
  struct _DEVICE_OBJECT *v6; // rsi
  __int64 v7; // r8
  unsigned int v8; // ebx

  RaCallMiniportCompleteServiceIrp(a1);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 88) - 5;
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  *(_DWORD *)(a1 + 88) = 6;
  if ( v5 > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableMFNDInterface(a1);
    RaidAdapterDisableNonPoFxMiniportInterface(a1);
    RaidAdapterDisableRpmbInterface((struct _UNICODE_STRING *)a1);
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v7);
  }
  if ( (*(_DWORD *)(a1 + 5920) & 1) != 0 )
    RaCheckAllMiniportSystemThreadsExit(a1);
  RaidAdapterDeleteChildren(a1);
  RaidDeleteAdapter(a1);
  RaForwardIrpSynchronous(v6, a2);
  v8 = RaidCompleteRequestEx(a2, 0, 0);
  IoDetachDevice(v6);
  IoDeleteDevice(v4);
  return v8;
}
