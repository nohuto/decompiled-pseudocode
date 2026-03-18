/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0077014
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0078740 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C000A280 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000DB7C (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0030B10 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0075D84 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rsi
  _DWORD *v18; // r14
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int16 *v22; // rdx
  char v23; // al
  unsigned __int16 v24; // r10
  size_t v25; // r8
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rbx
  __int64 v33; // [rsp+20h] [rbp-79h]
  _DWORD *v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h]
  __int64 v36; // [rsp+40h] [rbp-59h]
  __int64 v37; // [rsp+48h] [rbp-51h]
  _QWORD v38[9]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v39; // [rsp+98h] [rbp-1h] BYREF

  v35 = a2;
  v36 = a1;
  v34 = 0LL;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v10,
                    off_1C0067198);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v34,
          0LL);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v11[315], 2u, 3u, 0x32u, (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids, v12);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v35, v12, v9);
  }
  v12 = HUBFDO_IoctlValidateParameters((__int64)v11, 4uLL, a4, v34, 0xDuLL, a3);
  if ( v12 >= 0 )
  {
    v8 = *(unsigned __int16 *)v34;
    if ( a3 != 12 )
      memset(v34 + 3, 0, a3 - 12);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v35);
      v13 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v33) = v8;
        McTemplateK0pq_EtwWriteTransfer(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)&v39 & -(__int64)((_BYTE)v13 != 0)),
          v11[31],
          v33);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v11[2]);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v11[2],
            0LL,
            1LL);
    if ( !v14 )
      goto LABEL_46;
    do
    {
      if ( v14 != v11[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v14,
                                   off_1C00670F8)
                               + 48) == v8 )
      {
        break;
      }
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v11[2],
              v14,
              1LL);
    }
    while ( v14 );
    if ( !v14
      || (v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v14,
                  off_1C00670F8),
          (v17 = *(_QWORD *)(v37 + 24)) == 0)
      || (*(_DWORD *)(v17 + 1636) & 2) == 0 )
    {
LABEL_46:
      v12 = -1073741810;
      goto LABEL_47;
    }
    v18 = v34;
    v15 = *((unsigned __int8 *)v34 + 7);
    v19 = *((unsigned __int8 *)v34 + 7);
    *((_WORD *)v34 + 2) = 1664;
    v20 = v19 - 1;
    if ( !v20 )
    {
      v22 = (unsigned __int16 *)(v17 + 1988);
      v9 = a3 - 12;
      if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
        v9 = 18;
      goto LABEL_45;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 13 )
      {
        v22 = *(unsigned __int16 **)(v17 + 2056);
        if ( v22 )
        {
LABEL_21:
          if ( v22[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v9 = a3 - 12;
          else
            v9 = v22[1];
LABEL_45:
          v26 = v34 + 3;
          v25 = v9;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v22 = *(unsigned __int16 **)(v17 + 2016);
      if ( v22 && !*((_BYTE *)v18 + 6) )
        goto LABEL_21;
    }
    if ( (_BYTE)v15 != 3 )
      goto LABEL_42;
    v23 = *((_BYTE *)v18 + 6);
    if ( !v23 || v23 != *(_BYTE *)(v17 + 2004) || *((_WORD *)v18 + 4) != 1033 )
      goto LABEL_42;
    if ( (*(_DWORD *)(v17 + 1632) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_47;
    }
    v9 = a3 - 12;
    v24 = (*(_DWORD *)(v17 + 1636) & 0x800) != 0 ? 0xC : 0;
    v15 = (unsigned int)a3 - 12LL;
    if ( (unsigned __int16)(*(_WORD *)(v17 + 2148) - v24) < v15 )
      v9 = (unsigned __int16)(*(_WORD *)(v17 + 2148) - v24);
    if ( v9 > *((unsigned __int16 *)v18 + 5) )
    {
LABEL_42:
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v36,
              off_1C0067280);
      *(_QWORD *)(v27 + 152) = *(_QWORD *)(v18 + 1);
      v28 = v27 + 24;
      *(_QWORD *)(v27 + 32) = *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL);
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v29,
        "User Mode FDO Request",
        4189LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v11[2]);
      *(_DWORD *)v28 = 3276936;
      *(_DWORD *)(v28 + 36) = a3 - 12;
      *(_DWORD *)(v28 + 32) = 11;
      v30 = v34;
      *(_QWORD *)(v28 + 48) = 0LL;
      *(_QWORD *)(v28 + 40) = v30 + 3;
      *(_DWORD *)(v28 + 56) = 5000;
      v38[1] = v28;
      v31 = v35;
      LOBYTE(v38[0]) = 15;
      LODWORD(v38[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v35,
        v38);
      *(_QWORD *)(v17 + 496) = v31;
      return HUBSM_AddDsmEvent(v17, 4051LL);
    }
    v16 = v34;
    if ( (_BYTE)v9 )
      *((_BYTE *)v34 + 12) = v9;
    if ( (unsigned __int8)v9 > 1u )
      *((_BYTE *)v16 + 13) = 3;
    if ( (unsigned __int8)v9 <= 2u )
      goto LABEL_47;
    v25 = (unsigned int)(unsigned __int8)v9 - 2;
    v22 = (unsigned __int16 *)(*(_QWORD *)(v17 + 2152) + 2 * ((unsigned __int64)v24 >> 1));
    v26 = (_DWORD *)((char *)v16 + 14);
LABEL_40:
    memmove(v26, v22, v25);
LABEL_47:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64, _DWORD *))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      v11[2],
      v15,
      v16);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v35, v12, v9);
}
