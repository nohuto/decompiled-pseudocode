/*
 * XREFs of sub_1405FC690 @ 0x1405FC690
 * Callers:
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1405FC4F0 @ 0x1405FC4F0 (sub_1405FC4F0.c)
 */

__int64 __fastcall sub_1405FC690(PEX_SPIN_LOCK SpinLock, int a2, struct _KTHREAD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // esi
  struct _KTHREAD *i; // rax
  __int64 result; // rax

  CurrentThread = a3;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
  }
  for ( i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13);
        CurrentThread != i
     && (*((_QWORD *)SpinLock + 13)
      || _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock + 13, (signed __int64)CurrentThread, 0LL));
        i = (struct _KTHREAD *)*((_QWORD *)SpinLock + 13) )
  {
    KeWaitForSingleObject((PVOID)(SpinLock + 2), Executive, 0, 0, 0LL);
  }
  result = sub_1405FC4F0(SpinLock, a2);
  if ( v6 )
    _InterlockedExchange64((volatile __int64 *)SpinLock + 13, result);
  return result;
}
