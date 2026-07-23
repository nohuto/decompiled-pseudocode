/*
 * XREFs of PopPluginDevicePower @ 0x140313500
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140310D70 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopPepProcessEvent @ 0x140313B90 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginDevicePower(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
      PopPepUpdateConstraints(v3, 4, 1);
  }
  else
  {
    v5 = 4;
  }
  result = PopPepProcessEvent(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !a3 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
