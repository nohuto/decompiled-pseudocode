/*
 * XREFs of IopRemoveDevice @ 0x140869968
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B70AC (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882AE8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140958918 (PnpDisableDevice.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140958F3C (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959138 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1403B741C (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1403D4DA8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403D51B0 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403D568C (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403D71AC (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x140435A00 (memset.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1407889D0 (PiPnpRtlBeginOperation.c)
 *     IopUncacheInterfaceInformation @ 0x1407908A0 (IopUncacheInterfaceInformation.c)
 *     PipClearDevNodeUserFlags @ 0x1407933E0 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x14079805C (PipClearDevNodeFlags.c)
 *     PoFxAbandonDevice @ 0x140869B78 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x140869CC8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140869E54 (PiSwProcessParentRemoveIrp.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     IopDecDisableableDepends @ 0x14096CCD0 (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  PDEVICE_OBJECT v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  void *v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v7, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
    }
  }
  v8 = IopSynchronousCall(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v9 = (void *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v13 + 1));
      ObfDereferenceObject(v9);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v8 < 0) && a2 != 23 )
    {
LABEL_21:
      if ( a2 != 2 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v8 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_21;
LABEL_22:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[39] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
