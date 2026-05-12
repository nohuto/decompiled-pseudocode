/*
 * XREFs of sub_1C001C0C0 @ 0x1C001C0C0
 * Callers:
 *     sub_1C00221E0 @ 0x1C00221E0 (sub_1C00221E0.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C001C288 @ 0x1C001C288 (sub_1C001C288.c)
 *     sub_1C001D8EC @ 0x1C001D8EC (sub_1C001D8EC.c)
 *     sub_1C00224A4 @ 0x1C00224A4 (sub_1C00224A4.c)
 *     sub_1C00224D4 @ 0x1C00224D4 (sub_1C00224D4.c)
 */

__int64 __fastcall sub_1C001C0C0(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // r12
  __int64 result; // rax
  __int64 v7; // r13
  _QWORD *v8; // rdi
  _QWORD *v9; // r13
  KSPIN_LOCK *v10; // r14
  KSPIN_LOCK *v11; // rsi
  __int64 *i; // r14
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+C0h] [rbp+48h]
  __int16 v17; // [rsp+C8h] [rbp+50h]
  _QWORD *v18; // [rsp+D0h] [rbp+58h]
  __int64 v19; // [rsp+D8h] [rbp+60h]

  *(_QWORD *)&v14.OldIrql = 0LL;
  v5 = a1 & 0x43;
  v16 = a1 & 0x1FC;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v17 = v5;
  result = sub_1C00224A4(508LL, a2, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL);
  v19 = result;
  v7 = result;
  if ( result )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(result + 24), &LockHandle);
    v8 = *(_QWORD **)(v7 + 8);
    v18 = (_QWORD *)(v7 + 8);
    if ( v8 != (_QWORD *)(v7 + 8) )
    {
      v9 = (_QWORD *)(v7 + 8);
      do
      {
        KeAcquireInStackQueuedSpinLock(v8 + 7, &v14);
        v10 = v8 + 4;
        v11 = (KSPIN_LOCK *)v8[4];
        if ( v11 != v8 + 4 )
        {
          do
          {
            if ( (int)sub_1C00076F4((__int64)(v11 - 8)) >= 0 )
            {
              if ( v5 )
                sub_1C001D8EC(v11 - 8, a1);
              if ( v16 )
              {
                KeAcquireInStackQueuedSpinLock(v11 + 9, &v13);
                for ( i = (__int64 *)v11[10]; i != (__int64 *)(v11 + 10); i = (__int64 *)*i )
                  sub_1C001C288(i - 7, a1);
                KeReleaseInStackQueuedSpinLock(&v13);
                v5 = v17;
                v10 = v8 + 4;
              }
              if ( (a1 & 0x20) != 0 )
                *((_DWORD *)v11 + 1305) = 0;
              if ( (a1 & 0x40) != 0 )
                v11[653] = 0LL;
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[29]);
            }
            v11 = (KSPIN_LOCK *)*v11;
          }
          while ( v11 != v10 );
          v9 = v18;
        }
        KeReleaseInStackQueuedSpinLock(&v14);
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v9 );
      v7 = v19;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return sub_1C00224D4(v7);
  }
  return result;
}
