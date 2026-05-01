/*
 * XREFs of HampConnectionCreate @ 0x180004700
 * Callers:
 *     HamConnectToServerEx @ 0x180002CD0 (HamConnectToServerEx.c)
 *     HamConnectForExtendedExecution @ 0x1800065B0 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x180009F10 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForSessionState @ 0x18000A290 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x18000A300 (HamConnectForDebugging.c)
 *     HamConnectForServicing @ 0x18000A390 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x18001CA50 (HamConnectForFullTrust.c)
 * Callees:
 *     HampConnectionAllocateState @ 0x1800047D0 (HampConnectionAllocateState.c)
 *     HampConnectionInitialize @ 0x180004A48 (HampConnectionInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 */

__int64 __fastcall HampConnectionCreate(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _DWORD *Heap; // rax
  _DWORD *v10; // rbx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v10 = Heap;
  if ( Heap )
  {
    HampConnectionInitialize(a1, a2, Heap);
    State = HampConnectionAllocateState(v10, a2, a3, a4);
    if ( State < 0
      || v10[28] == 6
      && (State = RmpClientWnfCreateSubscription(v10 + 2, HampConnectionDeliverStateChangePayload, v10, v10 + 4),
          State < 0) )
    {
      HampConnectionDestroy(v10);
    }
    else
    {
      State = 0;
      *a5 = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
