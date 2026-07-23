/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x1402078A4
 * Callers:
 *     PsSetIoPriorityThread @ 0x140207824 (PsSetIoPriorityThread.c)
 *     IoApplyPriorityInfoThread @ 0x1402BAE50 (IoApplyPriorityInfoThread.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x14031B40C (PspNotifyProcessEffectiveIoLimitChanged.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402078D4 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = (unsigned int)a2;
  if ( a3 < 2 )
  {
    v4 = 0LL;
    if ( (int)result < 2 )
      return result;
  }
  else
  {
    if ( a2 >= 2 )
      return result;
    v4 = 1LL;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
}
