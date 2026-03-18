/*
 * XREFs of Usbh_HubInitialize20Hub @ 0x1C002E2F4
 * Callers:
 *     UsbhInitializeTtHub @ 0x1C002D268 (UsbhInitializeTtHub.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubInitialize20Hub(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  _QWORD *v8; // rbx
  void (__fastcall *v9)(_QWORD, __int64); // rax
  void (__fastcall *v10)(_QWORD, __int64); // rax
  __int64 (__fastcall *v11)(_QWORD, __int64, _QWORD); // rax

  v6 = FdoExt(a1);
  v7 = FdoExt(a1);
  v8 = v7 + 1056;
  if ( (v6[642] & 1) != 0 )
  {
    v9 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v7 + 565);
    if ( v9 )
      v9(v8[1], a2);
  }
  if ( (v6[642] & 2) != 0 )
  {
    v10 = (void (__fastcall *)(_QWORD, __int64))v8[37];
    if ( v10 )
      v10(v8[1], a2);
  }
  v11 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v8[16];
  if ( v11 )
    return v11(v8[1], a2, a3);
  else
    return 3221225474LL;
}
