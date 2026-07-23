/*
 * XREFs of sub_140398B2C @ 0x140398B2C
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140398BE0 @ 0x140398BE0 (sub_140398BE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_140398B2C()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  LARGE_INTEGER v4; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  LARGE_INTEGER v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = qword_140C21FA8;
  v10.QuadPart = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F4A0);
  v2 = (char *)qword_140C1F490;
  qword_140C1F490 = 0LL;
  v3 = v1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F4A0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    KeQueryInterruptTimePrecise(&v10);
    v4 = v10;
    sub_140398BE0(v2);
    *((_QWORD *)v2 + 2539) = v0;
    *((LARGE_INTEGER *)v2 + 2540) = v4;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 20280), DelayedWorkQueue);
  }
}
