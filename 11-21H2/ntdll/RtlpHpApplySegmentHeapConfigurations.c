/*
 * XREFs of RtlpHpApplySegmentHeapConfigurations @ 0x1800FF814
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0E10 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

int RtlpHpApplySegmentHeapConfigurations()
{
  int result; // eax
  int v1; // [rsp+78h] [rbp+3Fh]
  int v2; // [rsp+7Ch] [rbp+43h]

  result = NtOpenKey();
  if ( result >= 0 )
  {
    result = NtQueryValueKey();
    if ( result >= 0 && v1 == 4 )
    {
      if ( v2 )
        RtlpLowFragHeapGlobalFlags |= 0x10u;
      else
        RtlpLowFragHeapGlobalFlags |= 8u;
    }
  }
  return result;
}
