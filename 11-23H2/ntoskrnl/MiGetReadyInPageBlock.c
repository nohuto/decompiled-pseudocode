/*
 * XREFs of MiGetReadyInPageBlock @ 0x140A315E0
 * Callers:
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD58C (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x1402E1574 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1402E1630 (MiInitializeInPageSupport.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 */

__int64 __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 VadEvent; // rsi
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8LL);
  v2 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0, 0LL);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v2);
      *(_QWORD *)(VadEvent + 8) = v3;
      v2 = (__int64)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0, 0LL);
  return v2;
}
