/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1801239AC
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x180123874 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PRTL_SRWLOCK SRWLock,
        char *a6)
{
  unsigned __int16 v6; // di
  int v7; // r15d
  char v8; // r13
  unsigned __int16 v11; // bx
  __int16 v12; // bx
  signed __int16 v13; // bx
  __int16 v14; // bp
  __int16 v15; // si
  bool v16; // zf
  signed __int16 v17; // ax
  unsigned int v18; // edx
  __int64 v20; // [rsp+60h] [rbp+8h]
  char v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v20 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( a3 > 0 )
    {
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) == 0 )
        {
          if ( (a4 & 3) != 0 )
          {
            if ( (a4 & 2) != 0 )
            {
              v11 = v6;
              goto LABEL_9;
            }
          }
          else if ( RtlpHpSegMgrApplyLargePagePolicy(a1) )
          {
            v11 = v6;
LABEL_9:
            v12 = v11 | 0x4000;
LABEL_13:
            v13 = a3 + v12;
            v14 = v6 >> 15;
            goto LABEL_18;
          }
        }
        v12 = v6;
        goto LABEL_13;
      }
      _mm_pause();
      v6 = *a2;
    }
    v14 = v6 >> 15;
    if ( (v6 & 0x8000u) == 0 )
    {
      v18 = -1073741567;
      goto LABEL_30;
    }
    v13 = a3 + (v6 & 0x7FF) ? a3 + v6 : v6 | 0x4000;
LABEL_18:
    v15 = v13 & 0x4000;
    if ( (v13 & 0x4000) != 0 )
    {
      v7 = 1;
      RtlAcquireSRWLockExclusive(SRWLock);
      v8 = -1;
    }
    v17 = _InterlockedCompareExchange16(a2, v13, v6);
    v16 = v6 == (unsigned __int16)v17;
    v6 = v17;
    if ( v16 )
      break;
    if ( v7 )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      v7 = 0;
    }
    a4 = v21;
    a1 = v20;
  }
  if ( a3 <= 0 )
  {
    v18 = v15 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v14 )
  {
    v18 = -1073741568;
  }
  else
  {
    v18 = (v15 != 0) - 1073741567;
  }
LABEL_30:
  if ( v7 )
    *a6 = v8;
  return v18;
}
