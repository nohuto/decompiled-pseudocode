/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x18012248C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PRTL_SRWLOCK SRWLock)
{
  signed __int16 v5; // ax
  __int16 v7; // r10
  signed __int16 v8; // cx
  __int16 v9; // dx
  signed __int16 v10; // tt

  v5 = *a2;
  while ( 1 )
  {
    v7 = v5 & 0x4000;
    v8 = v5;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v9 = 0x8000;
      else
        v9 = 0;
      v8 = v9 | v5 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v8 += a3;
    }
    else if ( !a4 )
    {
      v8 -= a3;
    }
    if ( v8 == v5 )
      break;
    v10 = v5;
    v5 = _InterlockedCompareExchange16(a2, v8, v5);
    if ( v10 == v5 )
    {
      if ( v7 )
        RtlReleaseSRWLockExclusive(SRWLock);
      return;
    }
  }
}
