/*
 * XREFs of sub_140A54598 @ 0x140A54598
 * Callers:
 *     sub_14086448C @ 0x14086448C (sub_14086448C.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

struct _KDPC *__fastcall sub_140A54598(ULONG a1)
{
  struct _KTIMER *Pool2; // rax
  struct _KDPC *v3; // rbx

  Pool2 = (struct _KTIMER *)ExAllocatePool2(64LL, 136LL, 2001756995LL);
  v3 = (struct _KDPC *)Pool2;
  if ( Pool2 )
  {
    KeInitializeTimerEx(Pool2, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)sub_14025CEF0, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
