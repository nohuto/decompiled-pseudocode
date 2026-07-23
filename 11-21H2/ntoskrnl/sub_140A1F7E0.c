/*
 * XREFs of sub_140A1F7E0 @ 0x140A1F7E0
 * Callers:
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14041E460 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x14041EDE0 (ZwSetSystemEnvironmentValueEx.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A1F7E0(PCWSTR SourceString)
{
  int v2; // ebx
  unsigned int v3; // eax
  NTSTATUS v4; // eax
  ULONG ValueLength; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  DestinationString = 0LL;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  v2 = sub_140813BA8(0x16u, (__int64)&v7);
  if ( v2 >= 0 )
  {
    ValueLength = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, &ValueLength, 0LL);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      v4 = ZwSetSystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, 0, 1u);
      v2 = v4;
      if ( v4 < 0 )
        sub_1408138F0(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4);
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      sub_1408138F0(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, v3);
    }
    sub_140813B50((unsigned int *)&v7);
  }
  return (unsigned int)v2;
}
