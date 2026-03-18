/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ccccc @ 0x1C01F0E1C
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C0053D88 (ShouldEnableInputVirtualization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall WPP_RECORDER_AND_TRACE_SF_ccccc(__int64 a1, char a2, char a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  char result; // al
  int v6; // [rsp+28h] [rbp-81h]
  char v7[8]; // [rsp+88h] [rbp-21h] BYREF
  char v8[8]; // [rsp+90h] [rbp-19h] BYREF
  char v9[8]; // [rsp+98h] [rbp-11h] BYREF
  char v10[8]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v11[16]; // [rsp+A8h] [rbp-1h] BYREF

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v7[0] = byte_1C02A0541;
  v8[0] = byte_1C02A0540;
  v9[0] = byte_1C02A0543;
  v10[0] = byte_1C02A0542;
  result = byte_1C02A0544;
  v11[0] = byte_1C02A0544;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _BYTE *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
               17LL,
               v11,
               1LL,
               v10,
               1LL,
               v9,
               1LL,
               v8,
               1LL,
               v7,
               1LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v6) = 17;
    return WppAutoLogTrace(
             Flink,
             4LL,
             12LL,
             &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
             v6,
             v11,
             1LL,
             v10,
             1LL,
             v9,
             1LL,
             v8,
             1LL,
             v7);
  }
  return result;
}
