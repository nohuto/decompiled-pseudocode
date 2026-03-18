/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C000EC40
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001178 (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00014F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C000F8DC (UsbhPCE_Suspend.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C0053B9C (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int PortState; // edx
  _DWORD *v8; // rax
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v12; // eax
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+48h]

  v13 = 0;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  PortState = UsbhQueryPortState(*(_QWORD *)(a1 + 8));
  if ( PortState >= 0 && (v14 & 1) != 0 )
  {
    if ( (v6[355] & 0x100) != 0 && (int)PdoExt(a2)[588] >= 0 && !a3 && (v6[355] & 4) == 0 )
    {
      v12 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v13);
      if ( (v12 & 0xC0000000) == 0xC0000000 )
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v6 + 714),
          50,
          0,
          0,
          v12,
          v13,
          usbfile_pdopwr_c,
          1404,
          0);
    }
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v8 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v8 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v8 + 554))(*((_QWORD *)v8 + 529), 0LL, 3LL, &v13);
    }
    v9 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((unsigned __int16 *)v6 + 714));
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v10 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v10 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v10 + 554))(*((_QWORD *)v10 + 529), 0LL, 4LL, &v13);
    }
  }
  else
  {
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *((unsigned __int16 *)v6 + 714),
      118,
      0,
      0,
      PortState,
      v13,
      usbfile_pdopwr_c,
      1420,
      0);
    return (unsigned int)-1073741823;
  }
  return v9;
}
