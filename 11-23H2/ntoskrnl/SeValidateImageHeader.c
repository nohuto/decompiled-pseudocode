/*
 * XREFs of SeValidateImageHeader @ 0x1406AC8B0
 * Callers:
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1407E2654 (SepScheduleImageVerificationCallbacks.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  if ( qword_140C37960 )
  {
    if ( (a10 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140D0CA8C, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140C37960)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
