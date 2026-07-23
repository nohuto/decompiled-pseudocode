/*
 * XREFs of sub_14038A914 @ 0x14038A914
 * Callers:
 *     sub_14038A880 @ 0x14038A880 (sub_14038A880.c)
 * Callees:
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_140388F60 @ 0x140388F60 (sub_140388F60.c)
 *     sub_14038AA18 @ 0x14038AA18 (sub_14038AA18.c)
 */

_QWORD *__fastcall sub_14038A914(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  do
  {
    if ( !(unsigned int)sub_140388F60(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    sub_14025C460(a1, -1LL);
    sub_14038AA18(2LL, *(_QWORD *)(a1 + 176));
    if ( *(_DWORD *)(a1 + 1176) )
      sub_1402664E8(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
    if ( sub_1402F5718() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 17280) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 808), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 812), 0xFFFFFFFF);
  return sub_1402AC800((__int64)CurrentThread);
}
