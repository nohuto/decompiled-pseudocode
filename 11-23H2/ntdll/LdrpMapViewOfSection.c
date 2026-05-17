/*
 * XREFs of LdrpMapViewOfSection @ 0x18002C9D0
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 * Callees:
 *     LdrpHpatAllocationOptOut @ 0x18002CA50 (LdrpHpatAllocationOptOut.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1800A3220 (ZwMapViewOfSectionEx.c)
 */

__int64 __fastcall LdrpMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned __int8)LdrpHpatAllocationOptOut(a8) )
    return ZwMapViewOfSection(a1, -1LL, a3, 0LL, 0LL, 0LL, a5, 1, a6, a7);
  v11[0] = 5LL;
  v11[1] = 128LL;
  return ZwMapViewOfSectionEx(a1, -1LL, a3, 0LL, a5, a6, a7, v11, 1);
}
