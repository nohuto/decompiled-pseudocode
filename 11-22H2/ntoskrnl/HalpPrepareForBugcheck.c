/*
 * XREFs of HalpPrepareForBugcheck @ 0x14050B520
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051F9E4 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C6257C = -1;
    qword_140C62580 = 0LL;
    xmmword_140C62568 = 0uLL;
    qword_140C62628 = 0LL;
    dword_140C62564 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C6AA28 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
