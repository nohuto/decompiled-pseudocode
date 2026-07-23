/*
 * XREFs of sub_140A50C40 @ 0x140A50C40
 * Callers:
 *     sub_140802640 @ 0x140802640 (sub_140802640.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 */

void __fastcall sub_140A50C40(void *a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+90h] [rbp+17h] BYREF

  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  memset(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, sub_140A6BD80, &Event);
  if ( (_DWORD)dword_140D05078 )
    sub_1402E2D20((unsigned __int64)&Timer, -10000000LL * (int)dword_140D05078, 0, 0, (__int64)&Dpc);
  sub_140256CA0(&stru_14000F8E0);
  sub_140A50D3C(a1);
  sub_140256CA0(&stru_14000F8D0);
  if ( (_DWORD)dword_140D05078 )
  {
    if ( !KeCancelTimer(&Timer) )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
}
