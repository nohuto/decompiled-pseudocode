/*
 * XREFs of sub_14093E520 @ 0x14093E520
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 *     sub_1409FCB38 @ 0x1409FCB38 (sub_1409FCB38.c)
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FF390 @ 0x1409FF390 (sub_1409FF390.c)
 *     sub_1409FF520 @ 0x1409FF520 (sub_1409FF520.c)
 *     NtGetEnvironmentVariableEx @ 0x140A003D0 (NtGetEnvironmentVariableEx.c)
 *     sub_140A004F0 @ 0x140A004F0 (sub_140A004F0.c)
 *     sub_140A00770 @ 0x140A00770 (sub_140A00770.c)
 *     sub_140B4EF88 @ 0x140B4EF88 (sub_140B4EF88.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14093F56C @ 0x14093F56C (sub_14093F56C.c)
 */

__int64 __fastcall sub_14093E520(const WCHAR *a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v8; // edi
  PVOID v9; // rbx
  int v10; // eax
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 v14; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v16[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v17; // [rsp+90h] [rbp-31h]
  int v18; // [rsp+98h] [rbp-29h]
  int v19; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v21; // [rsp+A8h] [rbp-19h]
  int v22; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B8h] [rbp-9h]
  int v25; // [rsp+BCh] [rbp-5h]
  __int64 *v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C8h] [rbp+7h]
  int v28; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v14 = 0LL;
  v8 = sub_14093F56C((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v8 = sub_14042A5E0(Object, DeviceObject);
    if ( a5 )
      *a5 = -559038737;
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  if ( (unsigned int)dword_140C06518 > 5 && sub_1402A2000((__int64)&dword_140C06518, 0x200000000000LL) )
  {
    sub_1402A2094((__int64)v16, a1);
    v10 = *a4;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    LODWORD(Object) = v10;
    p_Object = &Object;
    LODWORD(DeviceObject) = -559038737;
    p_DeviceObject = &DeviceObject;
    v26 = &v14;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v17 = a2;
    v18 = 16;
    LODWORD(v14) = v8;
    sub_14020A9C4((__int64)&dword_140C06518, (unsigned __int8 *)byte_14002B8CB, 0LL, 0LL, 7u, &v15);
  }
  return (unsigned int)v8;
}
