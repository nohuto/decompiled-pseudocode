/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18007B210
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CE00 (RtlpIsDosDeviceName_Ustr.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v2, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)v2);
}
