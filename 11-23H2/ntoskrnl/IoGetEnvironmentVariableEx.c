/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x1406876A0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403B0F1C (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406875CC (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryBootEntryOrder @ 0x14083D940 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083DB40 (NtQueryBootOptions.c)
 *     NtGetEnvironmentVariableEx @ 0x140862800 (NtGetEnvironmentVariableEx.c)
 *     ExpSetBootEntry @ 0x1409FD400 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDB90 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FEB30 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FECC0 (NtDeleteDriverEntry.c)
 *     IopCachePreviousBootData @ 0x140B93948 (IopCachePreviousBootData.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x14068779C (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  int v9; // edi
  PVOID v10; // rbx
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-A1h]
  int v14; // [rsp+40h] [rbp-81h] BYREF
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 (__fastcall **v17)(PVOID, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-61h] BYREF
  char v19[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v20; // [rsp+90h] [rbp-31h]
  int v21; // [rsp+98h] [rbp-29h]
  int v22; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v24; // [rsp+A8h] [rbp-19h]
  int v25; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v27; // [rsp+B8h] [rbp-9h]
  int v28; // [rsp+BCh] [rbp-5h]
  __int64 (__fastcall ***v29)(PVOID, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+C0h] [rbp-1h]
  int v30; // [rsp+C8h] [rbp+7h]
  int v31; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v17 = 0LL;
  v14 = -559038737;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v9 >= 0 )
  {
    v13 = a3;
    v10 = Object;
    v9 = (*v17)(Object, DeviceObject, a1, a2, v13, a4, &v14);
    if ( a5 )
      *a5 = v14;
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (unsigned int)dword_140C038A8 > 5 && tlgKeywordOn((__int64)&dword_140C038A8, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v19, a1);
    v12 = *a4;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    LODWORD(Object) = v12;
    p_Object = &Object;
    LODWORD(DeviceObject) = v14;
    p_DeviceObject = &DeviceObject;
    v29 = &v17;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v20 = a2;
    v21 = 16;
    LODWORD(v17) = v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A8, (unsigned __int8 *)byte_14002C785, 0LL, 0LL, 7u, &v18);
  }
  return (unsigned int)v9;
}
