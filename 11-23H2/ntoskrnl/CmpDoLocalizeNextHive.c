/*
 * XREFs of CmpDoLocalizeNextHive @ 0x140751550
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751424 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, __int64 *a2)
{
  char v2; // di
  __int64 v3; // r8
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *NextActiveHive; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int locked; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140C020C4;
  *a2 = v3;
  *a1 = 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(a1, a2, v3) )
    return 1;
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = (struct _EX_RUNDOWN_REF *)CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    CmpLockRegistry(v6, v5, v8, v9);
    locked = HvHiveConvertLockedPagesToCowByPolicy((__int64)NextActiveHive);
    CmpUnlockRegistry(v12, v11, v13, v14);
    if ( locked < 0 )
    {
      ExReleaseRundownProtection_0(NextActiveHive + 205);
      v2 = 1;
      break;
    }
  }
  CmpReleaseShutdownRundown(v6, v5);
  return v2;
}
