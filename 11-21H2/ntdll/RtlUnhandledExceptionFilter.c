/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800A3780
 * Callers:
 *     __raise_securityfailure @ 0x180093864 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180093890 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, &unk_180130AA2);
}
