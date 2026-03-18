/*
 * XREFs of RtlQueryPackageIdentity @ 0x140225F90
 * Callers:
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x140754E04 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B30BC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C29A4 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4F18 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x140225FE0 (RtlQueryPackageIdentityEx.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
