/*
 * XREFs of KiAdvanceReadyQueueEnumeratorToNextPhase @ 0x140242C00
 * Callers:
 *     KiAdvanceReadyQueueEnumeratorToNextList @ 0x140206900 (KiAdvanceReadyQueueEnumeratorToNextList.c)
 * Callees:
 *     KiReadyQueueEnumeratorStartNormalQueuesPhase @ 0x140242C70 (KiReadyQueueEnumeratorStartNormalQueuesPhase.c)
 *     KiReadyQueueEnumeratorStartScbQueuesPhase @ 0x140242DB0 (KiReadyQueueEnumeratorStartScbQueuesPhase.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextPhase(__int64 a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  int ready; // eax
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 13) + 1;
  if ( v2 < 4u )
  {
    while ( v2 != 1 )
    {
      v3 = (unsigned int)v2 - 2;
      if ( v2 == 2 )
      {
        ready = KiReadyQueueEnumeratorStartScbQueuesPhase(a1);
        goto LABEL_7;
      }
      if ( v2 == 3 )
        goto LABEL_6;
LABEL_8:
      if ( ++v2 >= 4u )
        goto LABEL_9;
    }
    v3 = 0LL;
LABEL_6:
    ready = KiReadyQueueEnumeratorStartNormalQueuesPhase(a1, v3);
LABEL_7:
    if ( ready >= 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_9:
  *(_BYTE *)(a1 + 13) = v2;
  result = 2147483674LL;
  if ( v2 != 4 )
    return 0LL;
  return result;
}
