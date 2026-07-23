/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx2 @ 0x140832760
 * Callers:
 *     <none>
 * Callees:
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 */

__int64 __fastcall PsSetCreateProcessNotifyRoutineEx2(int a1, __int64 a2, char a3)
{
  if ( a1 )
    return 3221225485LL;
  else
    return sub_140832928(a2, (unsigned int)(a3 != 0) + 6);
}
