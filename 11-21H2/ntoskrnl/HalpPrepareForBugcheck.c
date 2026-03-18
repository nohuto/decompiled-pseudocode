/*
 * XREFs of HalpPrepareForBugcheck @ 0x14050E8C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1405229E8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4C47C = -1;
    qword_140C4C480 = 0LL;
    xmmword_140C4C468 = 0uLL;
    qword_140C4C528 = 0LL;
    dword_140C4C464 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C54AE8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
