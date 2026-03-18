/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1C0044348
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhAddDevice @ 0x1C0041E10 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C0043010 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0043220 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x1C0043440 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x1C00434D0 (UsbhFdoPnp_SurpriseRemove.c)
 *     UsbhInitCallbackWorker @ 0x1C00438C0 (UsbhInitCallbackWorker.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031BEC (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1398031678, *((_QWORD *)v4 + 171), v3);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v3, 0, 0);
  *((_QWORD *)v4 + 169) = *(_QWORD *)(a1 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 171))(a1, (unsigned int)v3);
  *((_QWORD *)v4 + 169) = 0LL;
  return result;
}
