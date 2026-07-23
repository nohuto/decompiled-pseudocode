/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1403352C0
 * Callers:
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiHardFaultPageRelease @ 0x140335038 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiAddPageToInsertList @ 0x1402D9C60 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x1402DD7B0 (MiInsertPagesInList.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140335380 (MiIsPageEligibleForProtectedStandby.c)
 *     memset @ 0x140435E00 (memset.c)
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
