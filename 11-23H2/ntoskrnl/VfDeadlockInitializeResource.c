/*
 * XREFs of VfDeadlockInitializeResource @ 0x140AD7768
 * Callers:
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140AD9380 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeInitializeMutex_Exit @ 0x140AD93D0 (ViDeadlockKeInitializeMutex_Exit.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ViLowerIrql @ 0x1405D1AB8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1B30 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140AC079A (ViDeadlockCanProceed.c)
 *     ViDeadlockAddResource @ 0x140AD840C (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x140AD8714 (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140AD8E08 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD8E40 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140AD92B0 (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(LONG *a1, __int64 a2, void *a3)
{
  void *v5; // rdi
  USHORT v6; // ax
  int v7; // ecx
  unsigned __int8 v8; // bl
  unsigned int v9; // esi
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  PVOID Entry; // [rsp+30h] [rbp-68h] BYREF
  PVOID v14; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  Entry = 0LL;
  v14 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  if ( !ViDeadlockCanProceed(a1) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = v6;
  if ( !v6 )
  {
    BackTrace[0] = a3;
    v7 = 1;
LABEL_8:
    BackTrace[v7] = 0LL;
    goto LABEL_9;
  }
  if ( v6 < 8u )
    goto LABEL_8;
LABEL_9:
  v8 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v9 = ViDeadlockAddResource((int)a1, (__int64)&Entry, (__int64)&v14);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v8);
  if ( !v9 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v10 = v14;
  if ( v14 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      ViDeadlockFree(v10);
      v10 = v11;
    }
    while ( v11 );
  }
  return v9;
}
