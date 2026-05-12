/*
 * XREFs of ?PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z @ 0x1C00211F0
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmQueryStorageProperty(PDEVICE_OBJECT *a1, enum _STORAGE_PROPERTY_ID a2, ULONG a3, void **a4)
{
  int v8; // esi
  _DWORD *Pool2; // rax
  _DWORD *v10; // rbx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF
  enum _STORAGE_PROPERTY_ID InputBuffer; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+4Ch] [rbp-4Ch]
  int v16; // [rsp+50h] [rbp-48h]

  v16 = 0;
  v13 = 0LL;
  InputBuffer = a2;
  v15 = 0;
  v8 = PmSendDeviceControl(a1[2], 0x2D1400u, &InputBuffer, 0xCu, &v13, 8u, 0);
  if ( v8 >= 0 )
  {
    if ( HIDWORD(v13) > a3 )
      a3 = HIDWORD(v13);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, a3, 1112108368LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      v11 = a1[2];
      v15 = 0;
      InputBuffer = a2;
      v8 = PmSendDeviceControl(v11, 0x2D1400u, &InputBuffer, 0xCu, Pool2, a3, 0);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        if ( v10[1] != a3 )
          v10[1] = a3;
        if ( *a4 )
          ExFreePoolWithTag(*a4, 0);
        *a4 = v10;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
