/*
 * XREFs of PmIoctlIsWritable @ 0x1C001D460
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlIsWritable(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
  v4 = *(_DWORD *)(v2 + 528) & 2;
  KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
  result = (unsigned int)v4 != 0LL ? 0xC00000A2 : 0;
  if ( !v4 )
  {
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 16), a2);
    return (unsigned int)a2->IoStatus.Status;
  }
  return result;
}
