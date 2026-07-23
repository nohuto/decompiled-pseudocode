/*
 * XREFs of sub_1407EDA2C @ 0x1407EDA2C
 * Callers:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 */

_QWORD *__fastcall sub_1407EDA2C(__int64 a1, volatile signed __int32 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = *a2;
  do
  {
    while ( 1 )
    {
      LODWORD(v13) = v9;
      if ( v9 != 1 )
        break;
      ExBlockOnAddressPushLock((__int64)&qword_140C4F508, a2, &v13, 4uLL, 0LL);
      v9 = *a2;
    }
    v10 = v9;
    v9 = _InterlockedCompareExchange(a2, v9 + 1, v9);
  }
  while ( v10 != v9 );
  if ( v9 < 2 )
  {
    sub_140312BB0(a1, a3, a4, 1);
    _InterlockedIncrement(a2);
    _InterlockedOr(v12, 0);
    if ( qword_140C4F508 )
      ExfUnblockPushLock(&qword_140C4F508, 0LL);
  }
  return sub_1402AC800((__int64)CurrentThread);
}
