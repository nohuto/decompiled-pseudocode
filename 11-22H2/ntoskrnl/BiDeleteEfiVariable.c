/*
 * XREFs of BiDeleteEfiVariable @ 0x140A5E400
 * Callers:
 *     BiExportEfiBootManager @ 0x140A5E63C (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14041D400 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x14041DDA0 (ZwSetSystemEnvironmentValueEx.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
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
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v7);
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
        BiLogMessage(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4);
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, v3);
    }
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v2;
}
