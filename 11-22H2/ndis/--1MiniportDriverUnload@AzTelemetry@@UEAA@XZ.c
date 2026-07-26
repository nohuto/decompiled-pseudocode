/*
 * XREFs of ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x1C00D1474
 * Callers:
 *     ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069BE0 (--_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C012DC4C (-ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C00230B8 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00232B4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

void __fastcall AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(LARGE_INTEGER *this)
{
  LARGE_INTEGER v2; // rax
  int v3; // edx
  __int64 v4; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  __int64 v10; // [rsp+70h] [rbp+27h]
  _DWORD v11[2]; // [rsp+78h] [rbp+2Fh] BYREF
  unsigned __int64 *v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+8Ch] [rbp+43h]

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportDriverUnload::`vftable';
  if ( (unsigned int)dword_1C00F41D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) )
    {
      v14 = 0;
      v9 = 0;
      v5 = KStopwatch::Stop(this + 3);
      v2 = this[2];
      v12 = &v5;
      v7 = v11;
      v13 = 8;
      v8 = 2;
      v3 = *(unsigned __int16 *)(v2.QuadPart + 488);
      v4 = *(_QWORD *)(v2.QuadPart + 496);
      v11[1] = 0;
      v10 = v4;
      v11[0] = v3;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C00F41D8,
        (unsigned __int8 *)dword_1C00DFA7D,
        0LL,
        0LL,
        5u,
        &v6);
    }
  }
}
