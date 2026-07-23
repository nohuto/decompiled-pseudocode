/*
 * XREFs of MiCreateZeroThreadContext @ 0x140837D38
 * Callers:
 *     MiStartZeroEngineThreads @ 0x1407BE43C (MiStartZeroEngineThreads.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x1402E2970 (ExAllocatePoolMm.c)
 *     MiCreateUltraThreadContext @ 0x1402EC680 (MiCreateUltraThreadContext.c)
 *     MiGetClosestNodeWithProcessors @ 0x14036E990 (MiGetClosestNodeWithProcessors.c)
 *     MiInitializeColorTable @ 0x140397EDC (MiInitializeColorTable.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

struct _KEVENT *__fastcall MiCreateZeroThreadContext(struct _LIST_ENTRY *a1)
{
  int Blink; // esi
  int ClosestNodeWithProcessors; // edi
  struct _KEVENT *PoolMm; // rax
  struct _KEVENT *v5; // rbp
  int v6; // edi
  int v7; // r9d
  _QWORD *v8; // r11
  struct _KEVENT *result; // rax

  Blink = (int)a1[10].Blink[3].Blink;
  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(Blink);
  PoolMm = (struct _KEVENT *)ExAllocatePoolMm(64, 0x190uLL, 0x745A694Du, ClosestNodeWithProcessors | 0x80000000);
  v5 = PoolMm;
  if ( PoolMm )
  {
    MiInitializeColorTable(&PoolMm[14].Header.WaitListHead.Blink, Blink);
    MiInitializePageColorBase(0LL, ClosestNodeWithProcessors + 1, (__int64)&v5[15].Header.WaitListHead);
    v6 = ClosestNodeWithProcessors << byte_140C65A8D;
    v7 = (__rdtsc() >> 4) & (unsigned __int16)((1 << byte_140C65A8E) - 1);
    *v8 = v5 + 16;
    v5[16].Header.LockNV = v6 | v7;
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v5[8].Header.WaitListHead.Blink, (__int64)v8, 14, 1u) )
    {
      KeInitializeEvent(v5 + 6, SynchronizationEvent, 0);
      result = v5;
      v5[3].Header.WaitListHead.Blink = a1;
      return result;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
