/*
 * XREFs of PmSetInitialDiskAttributes @ 0x1C0021F84
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     PmIoctlReauctionDisk @ 0x1C000E6E4 (PmIoctlReauctionDisk.c)
 * Callees:
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmGetDeviceParameter @ 0x1C0022274 (PmGetDeviceParameter.c)
 */

__int64 __fastcall PmSetInitialDiskAttributes(__int64 a1)
{
  int v1; // edi
  char *DeviceExtension; // rsi
  __int64 result; // rax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  bool v8; // zf
  int v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+3Ch] [rbp-34h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h]

  v1 = 0;
  v8 = (*(_DWORD *)(a1 + 512) & 0x2000) == 0;
  v11 = 0;
  v14 = 0LL;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  if ( !v8 )
  {
    v7 = 4;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 168) == -1 )
  {
    v7 = 7;
    v1 = 2;
    goto LABEL_13;
  }
  result = PmGetDeviceParameter((struct _DEVICE_EXTENSION *)a1);
  if ( (int)result >= 0 )
  {
    v7 = 0;
    *(_QWORD *)(a1 + 536) = 0LL;
    goto LABEL_12;
  }
  if ( (_DWORD)result != -1073741772 )
    return result;
  v9 = 0;
  KeWaitForSingleObject(DeviceExtension + 16, Executive, 0, 0, 0LL);
  if ( *((_DWORD *)DeviceExtension + 40) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 1) != 0 )
      goto LABEL_11;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 28LL);
    if ( v5 > 0x10 )
      goto LABEL_11;
    v6 = 67138;
    if ( !_bittest(&v6, v5) )
      goto LABEL_11;
    if ( (*(_DWORD *)(a1 + 512) & 0x1000) == 0 )
      goto LABEL_10;
    v8 = DeviceExtension[164] == 0;
LABEL_22:
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( *((_DWORD *)DeviceExtension + 40) != 3 )
  {
    if ( *((_DWORD *)DeviceExtension + 40) != 4 )
      goto LABEL_11;
    v8 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x40000) == 0;
    goto LABEL_22;
  }
LABEL_10:
  v9 = 3;
LABEL_11:
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 16), 0);
  v7 = v9;
  LOBYTE(v11) = 1;
LABEL_12:
  v1 = 1;
LABEL_13:
  v13 = -1LL;
  v12 = v7;
  v10 = 40;
  return PmSetDiskAttributes(a1, (__int64)&v10, v1);
}
