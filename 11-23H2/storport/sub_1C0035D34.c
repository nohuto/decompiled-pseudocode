/*
 * XREFs of sub_1C0035D34 @ 0x1C0035D34
 * Callers:
 *     sub_1C0057158 @ 0x1C0057158 (sub_1C0057158.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1C0035D34(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *i; // rcx
  __int64 v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v6 = (_QWORD **)(a1 + 144);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v5 = i - 7;
    v8 = i[246] - *a2;
    if ( !v8 )
      v8 = v5[254] - a2[1];
    if ( !v8 )
      break;
  }
  if ( i != v6 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
