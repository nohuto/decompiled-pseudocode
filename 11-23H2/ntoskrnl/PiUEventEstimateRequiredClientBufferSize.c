/*
 * XREFs of PiUEventEstimateRequiredClientBufferSize @ 0x14031CF60
 * Callers:
 *     PiUEventNotifyClientPendingEvent @ 0x14077E950 (PiUEventNotifyClientPendingEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiUEventEstimateRequiredClientBufferSize(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax

  v1 = 4160LL * *(unsigned int *)(a1 + 128);
  result = 0xFFFFFFFFLL;
  if ( v1 <= 0xFFFFFFFF )
    return (unsigned int)v1;
  return result;
}
