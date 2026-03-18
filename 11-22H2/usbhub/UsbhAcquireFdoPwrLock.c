/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1C001AB8C
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C000C140 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000C6B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001AA00 (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, KSPIN_LOCK a2, int a3, int a4)
{
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // al
  int v9; // ecx
  __int64 result; // rax

  v7 = (KSPIN_LOCK *)FdoExt(a1);
  v8 = KeAcquireSpinLockRaiseToDpc(v7 + 632);
  v9 = *((_DWORD *)v7 + 1043);
  *((_BYTE *)v7 + 5064) = v8;
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v9;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *((unsigned int *)v7 + 1043);
  v7[168] = a2;
  return result;
}
