/*
 * XREFs of UsbhBusIfRemoveDevice @ 0x1C004C080
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C002E42C (Usbh_UsbdInterfaceDereference.c)
 */

__int64 __fastcall UsbhBusIfRemoveDevice(__int64 a1)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 result; // rax

  v2 = FdoExt(a1);
  if ( (v2[640] & 4) != 0 )
  {
    v3 = FdoExt(a1);
    if ( *((_QWORD *)v3 + 531) )
      (*((void (__fastcall **)(_QWORD))v3 + 531))(*((_QWORD *)v3 + 529));
  }
  result = (unsigned int)v2[640];
  if ( (result & 8) != 0 )
    result = (__int64)Usbh_UsbdInterfaceDereference(a1, *((_QWORD *)v2 + 570));
  if ( (v2[640] & 0x20000000) != 0 )
  {
    result = (__int64)FdoExt(a1);
    if ( *(_QWORD *)(result + 4672) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4672))(*(_QWORD *)(result + 4656));
  }
  if ( (v2[640] & 0x800000) != 0 )
  {
    result = (__int64)FdoExt(a1);
    if ( *(_QWORD *)(result + 4712) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4712))(*(_QWORD *)(result + 4696));
  }
  if ( (int)v2[640] < 0 )
  {
    result = (__int64)FdoExt(a1);
    if ( *(_QWORD *)(result + 4760) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4760))(*(_QWORD *)(result + 4744));
  }
  v2[640] &= 0x5F7FFFF3u;
  return result;
}
