/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x14025A26C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
