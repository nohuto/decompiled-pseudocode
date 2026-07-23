/*
 * XREFs of sub_1407D4F98 @ 0x1407D4F98
 * Callers:
 *     sub_1407D4DD0 @ 0x1407D4DD0 (sub_1407D4DD0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1407D4F98(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v5 = *(_QWORD *)(a1 + 480);
    if ( v5 )
    {
      if ( v5 < 0 )
        KeSetCoalescableTimer((PKTIMER)(a1 + 264), *(LARGE_INTEGER *)(a1 + 480), 0, 0x3A98u, (PKDPC)(a1 + 328));
    }
    else
    {
      sub_1402E2D20(a1 + 264, 0LL, 0, 0, a1 + 328);
    }
    *(_BYTE *)(a1 + 488) = 1;
  }
  *a2 = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
