/*
 * XREFs of PspGetNextChildJob @ 0x1406A35B8
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406A3C40 (PspLockJobShared.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  PspLockJobShared(a1, CurrentThread);
  v6 = (_QWORD **)(a1 + 1272);
  if ( a2 )
    v7 = (_QWORD *)a2[157];
  else
    v7 = *v6;
  while ( v7 != v6 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 157)) )
    {
      v5 = v7 - 157;
      break;
    }
    v7 = (_QWORD *)*v7;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
