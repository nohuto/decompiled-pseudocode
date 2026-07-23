/*
 * XREFs of sub_14093E3C0 @ 0x14093E3C0
 * Callers:
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 *     sub_140A001D0 @ 0x140A001D0 (sub_140A001D0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14093F56C @ 0x14093F56C (sub_14093F56C.c)
 */

__int64 __fastcall sub_14093E3C0(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID v8; // rdi
  bool v10; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-49h] BYREF
  PVOID *p_Object; // [rsp+80h] [rbp-29h]
  int v16; // [rsp+88h] [rbp-21h]
  int v17; // [rsp+8Ch] [rbp-1Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+90h] [rbp-19h]
  int v19; // [rsp+98h] [rbp-11h]
  int v20; // [rsp+9Ch] [rbp-Dh]
  __int64 *v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  bool *v24; // [rsp+B0h] [rbp+7h]
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]

  DeviceObject = 0LL;
  Object = 0LL;
  v13 = 0LL;
  v7 = sub_14093F56C((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v7 >= 0 )
  {
    v8 = Object;
    v7 = sub_14042A5E0(Object, DeviceObject);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  if ( (unsigned int)dword_140C06518 > 5 && sub_1402A2000((__int64)&dword_140C06518, 0x200000000000LL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    p_Object = &Object;
    LODWORD(DeviceObject) = *a4;
    v10 = a2 != 0;
    v26 = 0;
    p_DeviceObject = &DeviceObject;
    v16 = 4;
    v21 = &v13;
    v19 = 4;
    v24 = &v10;
    v22 = 4;
    LODWORD(Object) = a1;
    LODWORD(v13) = v7;
    v25 = 1;
    sub_14020A9C4((__int64)&dword_140C06518, (unsigned __int8 *)byte_14002B97B, 0LL, 0LL, 6u, &v14);
  }
  return (unsigned int)v7;
}
