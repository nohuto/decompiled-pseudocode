/*
 * XREFs of ?PmGetHybridInfo@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_SRB_IO_CONTROL_HYBRID@@@Z @ 0x1C0022D20
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmGetHybridInfo(PDEVICE_OBJECT *a1, PVOID *a2)
{
  __int64 v4; // rsi
  char *Pool2; // rax
  void *v6; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi

  v4 = 152LL;
  while ( 1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, v4, 1112108368LL);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)Pool2 = 28;
    *(_QWORD *)(Pool2 + 4) = 0x4B53494452425948LL;
    *((_DWORD *)Pool2 + 3) = 30;
    *((_DWORD *)Pool2 + 6) = v4 - 28;
    *((_DWORD *)Pool2 + 4) = 1771040;
    *((_DWORD *)Pool2 + 12) = v4 - 64;
    *((_DWORD *)Pool2 + 7) = 1;
    *((_DWORD *)Pool2 + 8) = 24;
    *((_DWORD *)Pool2 + 9) = 1;
    *((_DWORD *)Pool2 + 11) = 64;
    v7 = PmSendDeviceControl(a1[2], 0x4D008u, Pool2, v4, Pool2, v4, 0);
    v8 = v7;
    if ( v7 >= 0 )
      break;
    if ( v7 != -1073741789 && v7 != -2147483643 )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      return v8;
    }
    v4 = (unsigned int)(2 * v4);
    ExFreePoolWithTag(v6, 0);
  }
  if ( *a2 )
    ExFreePoolWithTag(*a2, 0);
  *a2 = v6;
  return v8;
}
