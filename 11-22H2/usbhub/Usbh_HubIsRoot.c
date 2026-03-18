/*
 * XREFs of Usbh_HubIsRoot @ 0x1C004C6F4
 * Callers:
 *     UsbhBusIfAddDevice @ 0x1C004BC10 (UsbhBusIfAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubIsRoot(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rdi
  _DWORD *v6; // rax

  v2 = 0;
  *a2 = 0;
  v5 = FdoExt(a1);
  if ( *((_QWORD *)v5 + 548) )
  {
    v6 = FdoExt(a1);
    *a2 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))v5 + 548))(*((_QWORD *)v5 + 529), *((_QWORD *)v6 + 149));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v2;
}
