/*
 * XREFs of PmIoctlSetClusterInfo @ 0x1C0025E84
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall PmIoctlSetClusterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // rsi
  int NotificationStructure; // [rsp+30h] [rbp-38h] BYREF
  GUID v8; // [rsp+34h] [rbp-34h]
  int v9; // [rsp+44h] [rbp-24h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v12 = 0;
  if ( *(_DWORD *)(v2 + 16) >= 0x20u )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)v5 == 32 )
    {
      KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
      *(_QWORD *)(v4 + 568) = *(_QWORD *)(v5 + 16) & *(_QWORD *)(v5 + 8) | *(_QWORD *)(v4 + 568) & ~*(_QWORD *)(v5 + 16);
      KeReleaseMutex((PRKMUTEX)(v4 + 56), 0);
      if ( *(_BYTE *)(v5 + 24) )
      {
        v11 = -1;
        NotificationStructure = 2359297;
        v8 = GUID_IO_DISK_LAYOUT_CHANGE;
        v10 = 0LL;
        IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v4 + 24), &NotificationStructure, 0LL, 0LL);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
