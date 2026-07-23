/*
 * XREFs of PopPepCountReadyActivities @ 0x140313CE4
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopPepProcessEvent @ 0x140313B90 (PopPepProcessEvent.c)
 *     PopPepIdleTimeoutRoutine @ 0x140355490 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x14035B710 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1403B3F24 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14059F094 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14059F1A0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[45];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 74;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 52;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
