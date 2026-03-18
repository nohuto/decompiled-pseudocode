/*
 * XREFs of HalpQueryProfileInformation @ 0x1407FCE14
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A47990 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpQueryProfileSource @ 0x140376F58 (HalpQueryProfileSource.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050B2E4 (HalpCollectProfileCorruptionStatus.c)
 *     HalpCollectProfileOwnershipStatus @ 0x14050B428 (HalpCollectProfileOwnershipStatus.c)
 *     HalpQueryProfileSourceList @ 0x14050B88C (HalpQueryProfileSourceList.c)
 */

__int64 __fastcall HalpQueryProfileInformation(int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax

  switch ( a1 )
  {
    case 1:
      return HalpQueryProfileSource(a2, a3, a4);
    case 20:
      return HalpQueryProfileSourceList(a2, (__int64)a3, a4);
    case 44:
      if ( (unsigned int)a2 >= 4 )
      {
        if ( (_DWORD)a2 == 4 )
        {
          v4 = HalpNumberOfCounters;
          *a4 = 4;
          *a3 = v4;
          return 0LL;
        }
        if ( (unsigned int)a2 >= 8 )
        {
          *a3 = HalpNumberOfGpCounters;
          a3[1] = HalpNumberOfFixedCounters;
          *a4 = 8;
          return 0LL;
        }
      }
      *a4 = 8;
      return 3221225476LL;
    case 51:
      return HalpCollectProfileCorruptionStatus((unsigned int **)a3, a2, a4);
    case 52:
      return HalpCollectProfileOwnershipStatus(a3, a2, a4);
    default:
      return HalpProfileInterface[4]();
  }
}
