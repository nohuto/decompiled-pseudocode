/*
 * XREFs of sub_1C006C8A0 @ 0x1C006C8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C006E67C @ 0x1C006E67C (sub_1C006E67C.c)
 *     sub_1C006E848 @ 0x1C006E848 (sub_1C006E848.c)
 */

void __fastcall sub_1C006C8A0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v4; // rax
  __int64 v5; // r8

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = DeviceExtension[224];
    if ( (!v4 || !*(_DWORD *)(v4 + 16)) && *((_DWORD *)DeviceExtension + 836) == 17 )
    {
      sub_1C006E67C(
        DeviceObject->DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages\\Common");
      LOBYTE(v5) = 1;
      sub_1C006E848(
        DeviceExtension,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeLogPages",
        v5,
        0LL);
    }
  }
  sub_1C000729C((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
