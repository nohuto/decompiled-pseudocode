/*
 * XREFs of sub_1403B5A24 @ 0x1403B5A24
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 *     sub_1404199C0 @ 0x1404199C0 (sub_1404199C0.c)
 *     sub_1405CF43C @ 0x1405CF43C (sub_1405CF43C.c)
 */

bool __fastcall sub_1403B5A24(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v5; // r15
  __int64 i; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  KIRQL v11; // al
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200) + 192LL) == 1 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 1240);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    v13 = 0LL;
    for ( i = 0LL; (unsigned __int8)sub_1404199C0(a1, i, &v13); i = v7 )
    {
      v7 = v13;
      if ( (*(_DWORD *)(v13 + 16) & 2) == 0 )
      {
        v8 = *(_QWORD *)(v13 + 24);
        sub_1403BA340(*(_QWORD *)(v8 + 80), v8, 10LL, 0LL);
        v9 = sub_1405CF43C(v8 + 88);
        v10 = *(_DWORD *)(v7 + 16);
        if ( v9 < 0 )
        {
          *(_DWORD *)(v7 + 16) = v10 | 2;
        }
        else
        {
          *(_DWORD *)(v7 + 16) = v10 | 1;
          ++*(_DWORD *)(a1 + 1248);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1248) )
    {
      *(_QWORD *)(a1 + 1256) = v2;
      v2 = 0LL;
    }
    KeReleaseSpinLock(v4, v5);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 0x2000) != 0 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1152));
      *(_DWORD *)(a1 + 1180) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1160));
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1152), v11);
    }
  }
  return v2 != 0;
}
