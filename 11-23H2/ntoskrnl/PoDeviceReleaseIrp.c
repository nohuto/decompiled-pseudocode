/*
 * XREFs of PoDeviceReleaseIrp @ 0x14028D91C
 * Callers:
 *     PoHandleIrp @ 0x14028D77C (PoHandleIrp.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 * Callees:
 *     PopDiagTraceDeviceReleaseIrp @ 0x14028D958 (PopDiagTraceDeviceReleaseIrp.c)
 */

__int64 __fastcall PoDeviceReleaseIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
    result = PopDiagTraceDeviceReleaseIrp(a1, a3);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  return result;
}
