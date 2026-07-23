/*
 * XREFs of IoCreateDeviceSecure @ 0x1407435E0
 * Callers:
 *     <none>
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     sub_1407444A8 @ 0x1407444A8 (sub_1407444A8.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_14084D3DC @ 0x14084D3DC (sub_14084D3DC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        const void **a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r12
  ULONG DeviceCharacteristics; // r13d
  struct _DEVICE_OBJECT *v11; // rdi
  _WORD *v12; // r14
  int v13; // ebx
  char v14; // si
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG v18; // r9d
  NTSTATUS v20; // eax
  _WORD *Pool2; // rax
  BOOLEAN v23[4]; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  ULONG DeviceType[4]; // [rsp+50h] [rbp-30h] BYREF
  ULONG v27[2]; // [rsp+60h] [rbp-20h]
  _QWORD v28[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = DeviceObject;
  DeviceCharacteristics = a5;
  v23[0] = 0;
  v25 = 0LL;
  *(_QWORD *)&DeviceObject->Type = 0LL;
  v11 = 0LL;
  v24 = 0;
  v12 = 0LL;
  DeviceObject = 0LL;
  *(_QWORD *)v27 = 0LL;
  *(_OWORD *)DeviceType = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
  {
    v13 = -1073741811;
LABEL_32:
    v14 = DeviceType[0];
    goto LABEL_21;
  }
  if ( a8 )
  {
    v13 = sub_1407444A8(a8, a1, DeviceType);
    if ( v13 < 0 )
      goto LABEL_32;
  }
  v14 = DeviceType[0];
  if ( (DeviceType[0] & 2) != 0 )
    goto LABEL_10;
  v15 = *(unsigned __int16 *)a7;
  if ( *((unsigned __int16 *)a7 + 1) != v15 + 2 || (v16 = (__int64)a7[1], *(_WORD *)(v16 + 2 * (v15 >> 1))) )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v15 + 2, 1665560393LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v13 = -1073741670;
      goto LABEL_21;
    }
    memmove(Pool2, a7[1], *(unsigned __int16 *)a7);
    v12[(unsigned __int64)*(unsigned __int16 *)a7 >> 1] = 0;
    v16 = (__int64)v12;
  }
  v13 = SeConvertStringSecurityDescriptorToSecurityDescriptor(v16, 1, (__int64)&v25, 0LL);
  if ( v13 >= 0 )
  {
    v17 = v25;
    v14 = 2;
    DeviceType[0] = 2;
    *(_QWORD *)&DeviceType[2] = v25;
    *(_WORD *)(v25 + 2) |= 8u;
    if ( !a8 || (v28[0] = 2LL, v28[2] = 0LL, v28[1] = v17, v13 = sub_14084D3DC(a8, v28), v13 >= 0) )
    {
LABEL_10:
      v18 = a4;
      if ( (DeviceType[0] & 1) != 0 )
        v18 = DeviceType[1];
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v27[0];
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v27[1];
      v20 = IoCreateDevice(a1, a2, a3, v18, DeviceCharacteristics, a6, &DeviceObject);
      v11 = DeviceObject;
      v13 = v20;
      if ( v20 >= 0 )
      {
        if ( (v14 & 2) == 0
          || (v13 = sub_1406796E8(*(PSECURITY_DESCRIPTOR *)&DeviceType[2], v23, &v24), v13 >= 0)
          && (v13 = ObSetSecurityObjectByPointer((__int64)v11), v13 >= 0) )
        {
          *(_QWORD *)&v9->Type = v11;
          v11 = 0LL;
        }
      }
    }
  }
LABEL_21:
  if ( (v14 & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)&DeviceType[2], 0);
  if ( v11 )
    IoDeleteDevice(v11);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v13;
}
