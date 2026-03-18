/*
 * XREFs of MiObtainSystemCharges @ 0x1402E4250
 * Callers:
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A322C4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeCommit @ 0x1402764C0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned __int64 v8; // rdx

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1uLL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 1 )
    {
      v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a2);
    }
    else if ( a3 == 4 )
    {
      _InterlockedExchangeAdd64(&qword_140C699D8, a2);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_140C699C0, a2);
    }
  }
  return 1LL;
}
