/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C00309DC
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0030888 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0024C54 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0085AC8 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  int v5; // eax
  unsigned __int8 *v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  ULONG v11; // [rsp+20h] [rbp-39h]
  char v12; // [rsp+30h] [rbp-29h] BYREF
  char v13; // [rsp+31h] [rbp-28h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  int v15; // [rsp+38h] [rbp-21h] BYREF
  _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-19h] BYREF
  int *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  char *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  __int64 v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+98h] [rbp+3Fh]
  int v28; // [rsp+9Ch] [rbp+43h]

  if ( a3 >= 0 )
  {
    if ( (unsigned int)dword_1C00EB1D8 <= 5 || !tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
      return;
    v12 = *(_BYTE *)(v4 + 33);
    v13 = *(_BYTE *)(v4 + 32);
    v5 = NdisTraceLoggingDiscoverOperationalStatus(v4, v3, v4 + 4008);
    v28 = 0;
    v6 = (unsigned __int8 *)&unk_1C00D6FC1;
    v14 = v5;
    v26 = v7;
    v23 = &v12;
    v20 = (int *)&v13;
    v17 = &v14;
    v11 = 6;
    v27 = 16;
    v24 = 1;
    v21 = 1;
LABEL_9:
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v18 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00EB1D8, v6, 0LL, 0LL, v11, &v16);
    return;
  }
  if ( (unsigned int)dword_1C00EB1D8 > 5 && tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
  {
    v14 = v10;
    v23 = (char *)(v9 + 4008);
    v6 = (unsigned __int8 *)&dword_1C00D6F78;
    v15 = v8;
    v20 = &v14;
    v17 = &v15;
    v11 = 5;
    v24 = 16;
    v21 = 4;
    goto LABEL_9;
  }
}
