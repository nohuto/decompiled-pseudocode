/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1801204B0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x18012037C (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PRTL_SRWLOCK SRWLock,
        char *a6)
{
  int v9; // r14d
  char v10; // r12
  signed __int16 v11; // di
  __int16 v12; // bx
  __int16 v13; // bx
  signed __int16 v14; // bx
  __int16 v15; // si
  signed __int16 v16; // bx
  unsigned int v17; // edx
  __int64 v19; // [rsp+60h] [rbp+8h]
  __int16 i; // [rsp+70h] [rbp+18h]

  v19 = a1;
  v9 = 0;
  v10 = 0;
LABEL_2:
  v11 = *a2;
  for ( i = *a2; ; i = v16 )
  {
    if ( a3 <= 0 )
    {
      if ( v11 >= 0 )
      {
        v17 = -1073741567;
        goto LABEL_30;
      }
      if ( !(a3 + (v11 & 0x7FF)) )
      {
        v14 = i | 0x4000;
        goto LABEL_18;
      }
LABEL_16:
      v13 = i;
      goto LABEL_17;
    }
    if ( (v11 & 0x4000) != 0 )
    {
      _mm_pause();
      goto LABEL_2;
    }
    if ( (v11 & 0x7FF) != 0 )
      goto LABEL_16;
    if ( (a4 & 3) != 0 )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_16;
      v12 = i;
    }
    else
    {
      if ( !(unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1) )
        goto LABEL_16;
      v12 = i;
    }
    v13 = v12 | 0x4000;
LABEL_17:
    v14 = a3 + v13;
LABEL_18:
    v15 = v14 & 0x4000;
    if ( (v14 & 0x4000) != 0 )
    {
      v9 = 1;
      RtlAcquireSRWLockExclusive(SRWLock);
      v10 = -1;
    }
    v16 = _InterlockedCompareExchange16(a2, v14, v11);
    if ( v11 == v16 )
      break;
    if ( v9 )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      v9 = 0;
    }
    a1 = v19;
    v11 = v16;
  }
  if ( a3 <= 0 )
  {
    v17 = v15 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v11 >= 0 )
  {
    v17 = (v15 != 0) - 1073741567;
  }
  else
  {
    v17 = -1073741568;
  }
LABEL_30:
  if ( v9 )
    *a6 = v10;
  return v17;
}
