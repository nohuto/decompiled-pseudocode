/*
 * XREFs of PmIoctlQueryDiskSignature @ 0x1C0025CD0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 */

__int64 __fastcall PmIoctlQueryDiskSignature(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  int DriveLayout; // ebx
  _DWORD *v5; // r14

  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) >= 4u )
  {
    v5 = (_DWORD *)a2[3];
    KeWaitForSingleObject((PVOID)(v3 + 56), Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx((KSPIN_LOCK *)v3, 0LL);
    if ( DriveLayout >= 0 )
    {
      if ( *(_DWORD *)(v3 + 912) )
      {
        DriveLayout = -1073741808;
      }
      else
      {
        *v5 = *(_DWORD *)(v3 + 920);
        a2[7] = 4LL;
      }
    }
    KeReleaseMutex((PRKMUTEX)(v3 + 56), 0);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)DriveLayout;
}
