/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800D503C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA7D0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this, __int16 a2, __int16 a3)
{
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  __int16 v4; // [rsp+32h] [rbp-66h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int16 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_180240410 > 5
    && (qword_180240420 & 0x400000000000LL) != 0
    && (qword_180240428 & 0x400000000000LL) == qword_180240428 )
  {
    v3 = a3;
    v9 = &v3;
    v11 = 0;
    v10 = 2;
    v6 = &v4;
    v8 = 0;
    v4 = a2;
    v7 = 2;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180240410,
      (unsigned __int8 *)dword_180202BCE,
      0LL,
      0LL,
      4u,
      &v5);
  }
}
