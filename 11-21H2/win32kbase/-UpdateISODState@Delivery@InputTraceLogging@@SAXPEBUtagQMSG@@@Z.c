/*
 * XREFs of ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C000187C
 * Callers:
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 *     DeferSysPeekMsg @ 0x1C00015E0 (DeferSysPeekMsg.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0001BAC (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::UpdateISODState(const struct tagQMSG *a1)
{
  unsigned int v1; // r8d
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r11
  int v5; // ecx
  int v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  int v8; // [rsp+38h] [rbp-51h] BYREF
  int v9; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v10; // [rsp+40h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-19h]
  __int64 v14; // [rsp+78h] [rbp-11h]
  int *v15; // [rsp+80h] [rbp-9h]
  __int64 v16; // [rsp+88h] [rbp-1h]
  int *v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  int *v19; // [rsp+A0h] [rbp+17h]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  int *v21; // [rsp+B0h] [rbp+27h]
  __int64 v22; // [rsp+B8h] [rbp+2Fh]
  int *v23; // [rsp+C0h] [rbp+37h]
  __int64 v24; // [rsp+C8h] [rbp+3Fh]

  v1 = *((_DWORD *)a1 + 6);
  if ( (v1 - 256 <= 9 || InputTraceLogging::IsMouseInputMessage(v1)) && (unsigned int)dword_1C028EE70 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 16LL) )
    {
      v5 = *(_DWORD *)(v3 + 100);
      v10 = v2;
      v14 = 8LL;
      v24 = v4;
      v6 = -__CFSHR__(v5, 16);
      v22 = v4;
      v20 = v4;
      v7 = -__CFSHR__(v5, 15);
      v18 = v4;
      v16 = v4;
      v8 = -__CFSHR__(v5, 14);
      v11 = *(_QWORD *)(v3 + 136);
      v23 = &v6;
      v21 = &v7;
      v19 = &v8;
      v17 = &v9;
      v15 = &v10;
      v13 = &v11;
      v9 = -__CFSHR__(v5, 17);
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025B1BD, 0, 0, 8u, &v12);
    }
  }
}
