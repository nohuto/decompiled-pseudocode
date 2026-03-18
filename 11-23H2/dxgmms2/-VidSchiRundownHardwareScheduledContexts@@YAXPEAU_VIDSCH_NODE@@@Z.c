/*
 * XREFs of ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0042E38
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046E70 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00032E4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00033A8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A3C0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042C18 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareScheduledContexts(struct _VIDSCH_NODE *a1)
{
  char *v2; // rdi
  char *v3; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  char v5; // [rsp+30h] [rbp-30h]
  _QWORD v6[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v7; // [rsp+58h] [rbp-8h]

  v6[0] = *((_QWORD *)a1 + 3) + 1728LL;
  v7 = 0;
  AcquireSpinLock::Acquire((Acquire *)v6);
  v5 = 0;
  v4[1] = v4;
  v2 = (char *)a1 + 1696;
  v3 = (char *)*((_QWORD *)a1 + 212);
  v4[0] = v4;
  while ( v3 != v2 )
  {
    VidSchiRundownHardwareContext((struct HwQueueStagingList *)v4, (struct VIDSCH_HW_CONTEXT *)(v3 - 208));
    v3 = *(char **)v3;
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v4);
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
}
