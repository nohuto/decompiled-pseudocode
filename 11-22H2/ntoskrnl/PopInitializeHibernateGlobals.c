/*
 * XREFs of PopInitializeHibernateGlobals @ 0x1408627D8
 * Callers:
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     PopInitHiberPersistedRegValues @ 0x14082265C (PopInitHiberPersistedRegValues.c)
 *     PoDisableSleepStates @ 0x140984060 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x140989660 (PoShutdownBugCheck.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  _DWORD *Pool2; // rax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = 0;
  v0 = 0LL;
  PopInitHiberPersistedRegValues();
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, ReturnLength, 1919052136LL);
    v0 = Pool2;
    if ( Pool2 )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, Pool2, ReturnLength, &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= ReturnLength )
          {
            PopBootFromVHD = 1;
            PoDisableSleepStates(2LL, 8LL, &v6);
          }
        }
      }
    }
  }
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v3)
      && (int)PoDisableSleepStates(*(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v3), 8LL, &v6) < 0 )
    {
      LOBYTE(v4) = 1;
      PoShutdownBugCheck(v4, 160LL, 272LL, 0LL, 0LL, 0LL);
    }
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 2 );
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
