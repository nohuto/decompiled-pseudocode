/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x140A13B08
 * Callers:
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpVirtualBranchIsReplicated @ 0x140A1A8DC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140A1AA90 (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpReferenceHive @ 0x14076A77C (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(volatile signed __int32 *P, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  volatile signed __int32 *v11; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( P == (volatile signed __int32 *)NextActiveHive || (__int64 *)a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive((__int64)NextActiveHive);
      HvLockHiveFlusherExclusive(v10);
      if ( P == (volatile signed __int32 *)v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!P || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection_0(v10 + 205);
        break;
      }
    }
  }
  if ( P && !v3 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(a2);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4232), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v11 = (volatile signed __int32 *)a2;
LABEL_29:
    CmpDeleteHive(v11);
    return 3221225524LL;
  }
  if ( a2 && !v4 )
  {
    if ( v3 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(P);
    if ( !a3 || _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v11 = P;
    goto LABEL_29;
  }
  return 0LL;
}
