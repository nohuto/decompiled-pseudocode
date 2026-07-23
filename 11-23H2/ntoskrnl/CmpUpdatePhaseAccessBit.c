/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x14085DD74
 * Callers:
 *     CmpAcceptBoot @ 0x1407E8FA8 (CmpAcceptBoot.c)
 * Callees:
 *     CmpTrimHive @ 0x14074EA74 (CmpTrimHive.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DDC4 (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *v5; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v5 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v5 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[20] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive, v2, v3, v4);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
