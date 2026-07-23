/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1403093B4
 * Callers:
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiInsertQueueApc @ 0x14030A3FC (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14030B598 (KiSignalThreadForApc.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  v8 = 0;
  v5 = a2 + 648;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v8);
      result = *(_QWORD *)(a2 + 64);
    }
    while ( result );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v5 + 82) )
  {
    *(_BYTE *)(v5 + 82) = 1;
    KiInsertQueueApc(v5, a2, a3);
    LOBYTE(v6) = 2;
    result = KiSignalThreadForApc(a1, v5, v6);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
