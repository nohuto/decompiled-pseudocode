/*
 * XREFs of RtlpGetWindowsPolicy @ 0x140825860
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14038CE88 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041D920 (ZwQueryLicenseValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  void *Pool2; // rbx
  __int64 result; // rax
  unsigned int v9; // edi
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v10, SourceString);
  result = ZwQueryLicenseValue((__int64)&v10, a2);
  if ( (int)result >= 0 )
  {
    if ( !*a3 )
    {
      *a4 = 0LL;
      return result;
    }
    goto LABEL_7;
  }
  if ( (_DWORD)result == -1073741789 )
  {
LABEL_7:
    if ( !*a3 )
      return 3221225495LL;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)*a3, 1920232557LL);
    if ( !Pool2 )
      return 3221225495LL;
  }
  result = ZwQueryLicenseValue((__int64)&v10, a2);
  v9 = result;
  if ( (int)result < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return v9;
    }
  }
  else
  {
    *a4 = Pool2;
  }
  return result;
}
