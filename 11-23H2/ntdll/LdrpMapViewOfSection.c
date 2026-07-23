/*
 * XREFs of LdrpMapViewOfSection @ 0x18002C9D0
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 * Callees:
 *     LdrpHpatAllocationOptOut @ 0x18002CA50 (LdrpHpatAllocationOptOut.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A3220 (ZwMapViewOfSectionEx.c)
 */

NTSTATUS __fastcall LdrpMapViewOfSection(
        HANDLE SectionHandle,
        __int64 a2,
        PVOID *a3,
        __int64 a4,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        __int64 a8)
{
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned __int8)LdrpHpatAllocationOptOut(a8) )
    return ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             a3,
             0LL,
             0LL,
             0LL,
             ViewSize,
             ViewShare,
             AllocationType,
             PageProtection);
  ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)5LL;
  ExtendedParameters.ULong64 = 128LL;
  return ZwMapViewOfSectionEx(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           a3,
           0LL,
           ViewSize,
           AllocationType,
           PageProtection,
           &ExtendedParameters,
           1u);
}
