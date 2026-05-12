/*
 * XREFs of RaidAdapterFindZombieUnit @ 0x1C001C8BC
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaidAdapterFindZombieUnit(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  _QWORD *v4; // rsi
  _QWORD *v5; // rbp
  _QWORD **v6; // rdi
  _QWORD *v7; // r9
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &LockHandle);
  v6 = (_QWORD **)(a1 + 224);
  v7 = *v6;
  v8 = *v6 == v6;
  if ( *v6 != v6 )
  {
    do
    {
      v5 = v7 - 7;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)v7 + 10)) | ((((unsigned __int8)*((_DWORD *)v7 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v7 + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | (v2 << 8)) << 8)) )
        break;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    v8 = v7 == v6;
  }
  if ( !v8 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
