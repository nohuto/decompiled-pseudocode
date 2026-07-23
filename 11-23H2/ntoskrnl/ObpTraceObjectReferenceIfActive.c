/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x14025A4FC
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
