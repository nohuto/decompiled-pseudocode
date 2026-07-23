/*
 * XREFs of sub_14027E7A4 @ 0x14027E7A4
 * Callers:
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall sub_14027E7A4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = (_QWORD *)sub_1402AFC00(v2);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    result = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
