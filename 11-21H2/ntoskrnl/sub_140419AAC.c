/*
 * XREFs of sub_140419AAC @ 0x140419AAC
 * Callers:
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_1404199DC @ 0x1404199DC (sub_1404199DC.c)
 */

void __fastcall sub_140419AAC(__int64 a1, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  _QWORD **v6; // r14
  __int64 v7; // rdx
  KIRQL v8; // bp
  __int64 v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1240);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    v10 = 0LL;
    v6 = (_QWORD **)(a1 + 1264);
    v7 = 0LL;
    v8 = v5;
    while ( sub_1404199DC(v6, v7, &v10) )
    {
      v9 = v10;
      if ( a2 >= ((*(_DWORD *)(v10 + 16) >> 4) & 3) )
      {
        sub_140355830(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 80LL), *(unsigned int *)(*(_QWORD *)(v10 + 24) + 16LL), 2);
        *(_DWORD *)(v9 + 16) &= ~2u;
      }
      v7 = v9;
    }
    KeReleaseSpinLock(v2, v8);
  }
}
