/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1406C9EF0
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406C9FB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406C9F64 (_CmGetDeviceInterfaceClassGuidString.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
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
