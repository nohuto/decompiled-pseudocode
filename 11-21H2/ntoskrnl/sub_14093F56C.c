/*
 * XREFs of sub_14093F56C @ 0x14093F56C
 * Callers:
 *     sub_14093E3C0 @ 0x14093E3C0 (sub_14093E3C0.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E6A8 @ 0x14093E6A8 (sub_14093E6A8.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14093F56C(
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject,
        __int64 (__fastcall ***a3)(int, int, int, int, __int64, __int64, __int64))
{
  WCHAR *v3; // rbx
  NTSTATUS DeviceObjectPointer; // edi
  int v8; // eax
  __int64 (__fastcall **v9)(int, int, int, int, __int64, __int64, __int64); // rax
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( (dword_140C46C64 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\WindowsTrustedRT\\{699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      *a3 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&off_140A38D90;
      return (unsigned int)DeviceObjectPointer;
    }
  }
  else
  {
    v8 = sub_1407879A8((int *)qword_14003B860, 0LL, 0, 0, &SourceString, 0LL);
    v3 = (WCHAR *)SourceString;
    if ( v8 >= 0 && *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_14;
      v9 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&off_140A38D90;
      goto LABEL_13;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\SysEnv");
  v10 = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
  DeviceObjectPointer = v10;
  if ( v10 >= 0 )
  {
    v9 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&off_140A397D0;
LABEL_13:
    *a3 = v9;
    goto LABEL_14;
  }
  if ( (unsigned int)(v10 + 1073741773) <= 1 || v10 == -1073741766 )
  {
    *FileObject = 0LL;
    v9 = &off_140A397F0;
    *DeviceObject = 0LL;
    DeviceObjectPointer = 0;
    goto LABEL_13;
  }
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceObjectPointer;
}
