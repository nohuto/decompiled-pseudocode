/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C000703C
 * Callers:
 *     SetGV3PerfState @ 0x1C0003C40 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00061A0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00063B0 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C00070B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00070DC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(__int64 a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0015038 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, 0x200000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer(v1, (int)&dword_1C0010D2C, v2, v3, (ULONG)2, &v4);
  }
}
