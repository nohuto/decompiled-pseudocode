/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionName @ 0x1C0076BFC
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0078740 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C00309D4 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0030B10 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C0030B3C (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0075D84 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64); // rax
  int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int DeviceInterfacePath; // ebx
  __int64 v12; // rbx
  _WORD *v13; // rax
  size_t v14; // r8
  __int64 v15; // r8
  int ActivityIdIrp; // eax
  __int64 v17; // rcx
  size_t *v18; // r8
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+28h] [rbp-50h]
  void *v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256);
  Size[0] = 0LL;
  v8 = 0;
  v9 = v5(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C0067198);
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
                          WdfDriverGlobals,
                          a2,
                          a3,
                          &v23,
                          0LL);
  if ( DeviceInterfacePath >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v23, 0xAuLL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_17;
    v8 = *(unsigned __int16 *)v23;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v12 )
      goto LABEL_14;
    do
    {
      if ( v12 != v10[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v12,
                                   off_1C00670F8)
                               + 48) == v8 )
      {
        break;
      }
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              v12,
              1LL);
    }
    while ( v12 );
    if ( v12
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v12,
                                    off_1C00670F8)
                                + 24)
                    + 1632LL) & 2) != 0 )
    {
      memset(v23, 0, a3);
      *(_DWORD *)v23 = v8;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (__int64)&GUID_DEVINTERFACE_USB_HUB,
                              v12,
                              &v24,
                              0LL,
                              v10[315]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v24,
        &v25);
      v13 = HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)&v25, Size);
      v14 = Size[0];
      *((_DWORD *)v23 + 1) = LODWORD(Size[0]) + 10;
      if ( v14 <= a3 - 8 )
      {
        memmove((char *)v23 + 8, v13, v14);
        v15 = *((unsigned int *)v23 + 1);
LABEL_16:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v15);
        DeviceInterfacePath = 0;
        goto LABEL_17;
      }
    }
    else
    {
LABEL_14:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *((_DWORD *)v23 + 1) = 10;
    }
    v15 = 10LL;
    *((_WORD *)v23 + 4) = 0;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = DeviceInterfacePath;
    WPP_RECORDER_SF_d(v10[315], 2u, 3u, 0x31u, (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids, v22);
  }
LABEL_17:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    *(_OWORD *)Size = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v18 = Size;
      LODWORD(v21) = DeviceInterfacePath;
      LODWORD(v20) = v8;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v18,
        v10[31],
        v20,
        v21);
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
