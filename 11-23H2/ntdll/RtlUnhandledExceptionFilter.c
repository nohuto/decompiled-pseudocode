/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800A0330
 * Callers:
 *     __raise_securityfailure @ 0x18008EFB4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008EFE0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, &unk_180138CCA);
}
