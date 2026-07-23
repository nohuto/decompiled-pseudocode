/*
 * XREFs of sub_140B2F780 @ 0x140B2F780
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char sub_140B2F780()
{
  if ( (_DWORD)dword_140C4E560 )
  {
    if ( (_DWORD)dword_140C4E560 != 1 )
      KeBugCheckEx(0x33u, 2uLL, (unsigned int)dword_140C4E560, 0LL, 0LL);
  }
  else
  {
    ExInitializeResourceLite(&stru_140C462A0);
    stru_140C467E0.Owner = 0LL;
    stru_140C467E0.Contention = 0;
    stru_140C467E0.Event.Header.SignalState = 0;
    stru_140C467E0.Event.Header.WaitListHead.Blink = &stru_140C467E0.Event.Header.WaitListHead;
    stru_140C467E0.Event.Header.WaitListHead.Flink = &stru_140C467E0.Event.Header.WaitListHead;
    stru_140C467E0.Count = 1;
    LOWORD(stru_140C467E0.Event.Header.Lock) = 1;
    stru_140C467E0.Event.Header.Size = 6;
    RtlInitializeGenericTableAvl(
      &stru_140C46820,
      (PRTL_AVL_COMPARE_ROUTINE)sub_1406BBFA0,
      (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406E9100,
      (PRTL_AVL_FREE_ROUTINE)sub_1406EB7B0,
      0LL);
  }
  return 1;
}
