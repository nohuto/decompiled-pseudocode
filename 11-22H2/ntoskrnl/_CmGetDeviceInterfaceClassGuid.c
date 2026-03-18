/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1406C9F70
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406CA034 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406C9FE4 (_CmGetDeviceInterfaceClassGuidString.c)
 *     RtlGUIDFromString @ 0x1406CF770 (RtlGUIDFromString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
