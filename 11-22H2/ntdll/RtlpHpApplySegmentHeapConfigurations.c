/*
 * XREFs of RtlpHpApplySegmentHeapConfigurations @ 0x1800AE7D6
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800AE694 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
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
