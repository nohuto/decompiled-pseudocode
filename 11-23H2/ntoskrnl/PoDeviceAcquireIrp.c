/*
 * XREFs of PoDeviceAcquireIrp @ 0x14028D9B8
 * Callers:
 *     PopIrpWorker @ 0x14028D350 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x14028D77C (PoHandleIrp.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x14028D9F4 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
