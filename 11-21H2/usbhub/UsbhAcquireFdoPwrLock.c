/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1C00019E0
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C0001A6C (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C00066A0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0006D20 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00070B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0007740 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055AB0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdi
  KIRQL v8; // al
  int v9; // ecx
  __int64 result; // rax

  v7 = FdoExt(a1);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 5056));
  v9 = *(_DWORD *)(v7 + 4172);
  *(_BYTE *)(v7 + 5064) = v8;
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v9;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *(unsigned int *)(v7 + 4172);
  *(_QWORD *)(v7 + 1344) = a2;
  return result;
}
