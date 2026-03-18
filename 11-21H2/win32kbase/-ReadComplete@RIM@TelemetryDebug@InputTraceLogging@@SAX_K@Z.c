/*
 * XREFs of ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C0004054
 * Callers:
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1)
{
  const int *v2; // rdx
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-18h]
  int v6; // [rsp+60h] [rbp-10h]
  int v7; // [rsp+64h] [rbp-Ch]

  if ( (unsigned __int8)isChildPartition() )
  {
    if ( (unsigned int)dword_1C028EE70 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x10000LL) )
    {
      v2 = &dword_1C025F0E6;
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)dword_1C028EE70 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x10000LL) )
  {
    v2 = (const int *)&unk_1C025F09B;
LABEL_9:
    v5 = &v3;
    v7 = 0;
    v3 = a1;
    v6 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)v2, 0, 0, 3u, &v4);
  }
}
