/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140335030
 * Callers:
 *     MiPfnShareCountIsZero @ 0x1402818C0 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiHardFaultPageRelease @ 0x140334DA8 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x1403350F0 (MiIsPageEligibleForProtectedStandby.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  _OWORD v4[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(v4, 0, 0x68uLL);
  if ( (unsigned int)MiIsPageEligibleForProtectedStandby(a1, a2) )
  {
    DWORD2(v4[0]) = 0;
    v4[1] = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v4[6]) = 3;
    *((_QWORD *)&v4[5] + 1) = a1;
    MiAddPageToInsertList((__int64)v4, 0LL, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiInsertPagesInList((__int64)v4, 0);
  }
  else
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  }
}
