/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1408263C0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14038A978 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041D260 (ZwQueryLicenseValue.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  void *Pool2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = 0LL;
  ValueName = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
    return -1073741811;
  RtlInitUnicodeString(&ValueName, SourceString);
  result = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  if ( result >= 0 )
  {
    if ( !*ResultDataSize )
    {
      *a4 = 0LL;
      return result;
    }
    goto LABEL_7;
  }
  if ( result == -1073741789 )
  {
LABEL_7:
    if ( !*ResultDataSize )
      return -1073741801;
    Pool2 = (void *)ExAllocatePool2(256LL, *ResultDataSize, 1920232557LL);
    if ( !Pool2 )
      return -1073741801;
  }
  result = ZwQueryLicenseValue(&ValueName, Type, Pool2, *ResultDataSize, ResultDataSize);
  v9 = result;
  if ( result < 0 )
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
