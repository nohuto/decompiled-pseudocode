/*
 * XREFs of sub_14093E830 @ 0x14093E830
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     sub_1409FF390 @ 0x1409FF390 (sub_1409FF390.c)
 *     sub_1409FF520 @ 0x1409FF520 (sub_1409FF520.c)
 *     sub_140A010D0 @ 0x140A010D0 (sub_140A010D0.c)
 *     sub_140A012E0 @ 0x140A012E0 (sub_140A012E0.c)
 *     sub_140A014F0 @ 0x140A014F0 (sub_140A014F0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14093F56C @ 0x14093F56C (sub_14093F56C.c)
 */

__int64 __fastcall sub_14093E830(const WCHAR *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v8; // ebx
  PVOID v9; // rdi
  PVOID Object; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 v13; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v16; // [rsp+90h] [rbp-31h]
  int v17; // [rsp+98h] [rbp-29h]
  int v18; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v20; // [rsp+A8h] [rbp-19h]
  int v21; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v23; // [rsp+B8h] [rbp-9h]
  int v24; // [rsp+BCh] [rbp-5h]
  __int64 *v25; // [rsp+C0h] [rbp-1h]
  int v26; // [rsp+C8h] [rbp+7h]
  int v27; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v13 = 0LL;
  v8 = sub_14093F56C((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v8 = sub_14042A5E0(Object, DeviceObject);
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  if ( (unsigned int)dword_140C06518 > 5 && sub_1402A2000((__int64)&dword_140C06518, 0x200000000000LL) )
  {
    sub_1402A2094((__int64)v15, a1);
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    p_Object = &Object;
    v20 = 4;
    p_DeviceObject = &DeviceObject;
    v25 = &v13;
    v23 = 4;
    v26 = 4;
    v16 = a2;
    v17 = 16;
    LODWORD(Object) = a4;
    LODWORD(DeviceObject) = a5;
    LODWORD(v13) = v8;
    sub_14020A9C4((__int64)&dword_140C06518, (unsigned __int8 *)byte_14002B923, 0LL, 0LL, 7u, &v14);
  }
  return (unsigned int)v8;
}
