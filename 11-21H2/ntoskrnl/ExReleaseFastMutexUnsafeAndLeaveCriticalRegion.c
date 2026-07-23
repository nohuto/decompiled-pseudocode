/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14022A110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 */

_QWORD *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v2; // eax
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    sub_140359548(BugCheckParameter2, v2);
  result = (_QWORD *)sub_1402AFC00(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( (*((_WORD *)CurrentThread + 242))++ == 0xFFFF )
  {
    result = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*result != result && !*((_WORD *)CurrentThread + 243) )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
