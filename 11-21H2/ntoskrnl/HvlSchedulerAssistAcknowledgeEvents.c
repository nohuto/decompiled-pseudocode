/*
 * XREFs of HvlSchedulerAssistAcknowledgeEvents @ 0x140545C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall HvlSchedulerAssistAcknowledgeEvents(unsigned __int64 a1)
{
  struct _KPRCB *result; // rax
  __int64 v2; // rdx

  result = KeGetCurrentPrcb();
  v2 = *((_QWORD *)result + 4375);
  if ( v2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 48), a1);
  return result;
}
