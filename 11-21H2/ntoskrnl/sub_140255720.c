/*
 * XREFs of sub_140255720 @ 0x140255720
 * Callers:
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 */

LONG_PTR sub_140255720()
{
  LONG_PTR result; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  dword_140C11440 = 0;
  result = (LONG_PTR)ExpInterlockedFlushSList(&stru_140CF5F40);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2[2], &LockHandle);
      *((_DWORD *)v2 + 102) &= ~8u;
      sub_1402F8420(v2, &LockHandle);
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
