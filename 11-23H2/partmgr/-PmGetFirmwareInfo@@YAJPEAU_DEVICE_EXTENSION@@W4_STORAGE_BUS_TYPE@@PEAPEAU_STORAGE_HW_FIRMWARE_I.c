/*
 * XREFs of ?PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_INFO@@@Z @ 0x1C001F668
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmGetFirmwareInfo(struct _DEVICE_EXTENSION *a1, enum _STORAGE_BUS_TYPE a2, PVOID *a3)
{
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int v6; // ebx
  ULONG v7; // esi
  struct _STORAGE_HW_FIRMWARE_INFO *Pool2; // rax
  struct _STORAGE_HW_FIRMWARE_INFO *v9; // rdi
  int InputBuffer; // [rsp+40h] [rbp-19h] BYREF
  ULONG InputBufferLength; // [rsp+44h] [rbp-15h]
  _BOOL8 v13; // [rsp+48h] [rbp-11h]
  ULONG v14[4]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+27h]

  v13 = 0LL;
  v17 = 0LL;
  InputBuffer = 16;
  v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 2);
  v13 = a2 == BusTypeNvme;
  InputBufferLength = 16;
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = PmSendDeviceControl(v5, 0x2D1C00u, &InputBuffer, 0x10u, v14, 0x38u, 0);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
    return v6;
  if ( v14[0] != 56 )
    return (unsigned int)-1073741820;
  v7 = 56;
  if ( v14[1] > 0x38 )
    v7 = v14[1];
  Pool2 = (struct _STORAGE_HW_FIRMWARE_INFO *)ExAllocatePool2(64LL, v7, 1112108368LL);
  v9 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v6 = PmSendDeviceControl(*((PDEVICE_OBJECT *)a1 + 2), 0x2D1C00u, &InputBuffer, InputBufferLength, Pool2, v7, 0);
  if ( (v6 & 0x80000000) != 0 )
  {
LABEL_18:
    ExFreePoolWithTag(v9, 0);
    return v6;
  }
  if ( v9->Version != 56 || v9->Size != v7 )
  {
    v6 = -1073741820;
    goto LABEL_18;
  }
  if ( *a3 )
    ExFreePoolWithTag(*a3, 0);
  *a3 = v9;
  return v6;
}
