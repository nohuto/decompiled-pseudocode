/*
 * XREFs of UsbDevice_EnableCompletion @ 0x1C00109B0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 *     Endpoint_SetLogIdentifier @ 0x1C0010DE8 (Endpoint_SetLogIdentifier.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 */

__int64 __fastcall UsbDevice_EnableCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // r10
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // al
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  char v15; // si
  int v16; // edx
  int v17; // edx
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  _OWORD v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_i(v6[9], a2, 12, 15, (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids, *(_QWORD *)v3);
    }
    v15 = 1;
    v11 = *(_BYTE *)(v3 + 432) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 60);
    if ( v9 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_dq(
          v6[9],
          a2,
          12,
          16,
          (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
          *(_BYTE *)(a1 + 61),
          *(_QWORD *)v3);
      }
      *(_BYTE *)(v3 + 134) = 1;
      *(_BYTE *)(v3 + 135) = *(_BYTE *)(a1 + 61);
      Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 176));
      v10 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 135));
      v11 = v10;
      if ( v10 >= 0 )
      {
        v12 = *(_QWORD *)(v7 + 48);
        if ( v12 )
          v13 = v12 + 4LL * *(unsigned __int8 *)(v3 + 135);
        else
          v13 = 0LL;
        *(_QWORD *)(v3 + 160) = v13;
        LOBYTE(v13) = 1;
        result = UsbDevice_SetAddress(v3, v13);
        if ( (int)result < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = *(unsigned __int8 *)(v3 + 135);
            LOBYTE(v17) = 2;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v17,
              12,
              18,
              (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
              *(_BYTE *)(v3 + 135),
              result);
          }
          v18 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
          memset((void *)(v3 + 456), 0, 0x60uLL);
          if ( *(_BYTE *)(v3 + 432) )
          {
            return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4117, 0, 0LL, 0LL, 0LL);
          }
          else
          {
            *(_QWORD *)(v3 + 504) = v3;
            *(_QWORD *)(v3 + 496) = UsbDevice_DisableCompletionReturnFailure;
            v19 = *(_DWORD *)(v3 + 492) & 0xFFFF2BFF;
            *(_QWORD *)(v3 + 528) = 0LL;
            *(_QWORD *)(v3 + 536) = 0LL;
            *(_DWORD *)(v3 + 492) = v19 | 0x2800;
            *(_BYTE *)(v3 + 495) = *(_BYTE *)(v3 + 135);
            *(_QWORD *)(v3 + 544) = 0LL;
            return Command_SendCommand(v18, v3 + 456);
          }
        }
        return result;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(unsigned __int8 *)(v3 + 135);
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v16,
          12,
          17,
          (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
          *(_BYTE *)(v3 + 135),
          v10);
      }
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(v3 + 8),
        *(_QWORD *)v3,
        0,
        0x20000,
        (__int64)"Enable Slot command returned a SlotId value that is already in use",
        a1 + 24,
        a3);
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4116, 0, 0LL, 0LL, 0LL);
      v15 = 1;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 3;
        WPP_RECORDER_SF_d(v6[9], a2, 12, 19, (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids, v9);
        v9 = *(_BYTE *)(a1 + 60);
      }
      if ( v9 == 9 )
      {
        v20 = *(_QWORD *)(v3 + 424);
        v23 = 0LL;
        memset(v22, 0, sizeof(v22));
        LOWORD(v22[0]) = 40;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
          WdfDriverGlobals,
          v20,
          v22);
        *(_DWORD *)(*((_QWORD *)&v22[0] + 1) + 32LL) |= 2u;
      }
      if ( *(_BYTE *)(v3 + 432) )
      {
        Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0, 0LL, 0LL, 0LL);
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      v11 = -1073741823;
    }
  }
  LOBYTE(a2) = 1;
  result = Endpoint_Disable(*(_QWORD *)(v3 + 176), a2);
  if ( v15 )
  {
    v21 = *(_QWORD *)(v3 + 424);
    *(_QWORD *)(v3 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v21,
             v11);
  }
  return result;
}
