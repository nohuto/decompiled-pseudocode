/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x140832440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403C773C @ 0x1403C773C (sub_1403C773C.c)
 *     sub_140832884 @ 0x140832884 (sub_140832884.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    v3 = 2;
  }
  else
  {
    v3 = 1;
  }
  if ( (unsigned int)sub_1403C773C(a2, 32) )
    return sub_140832884(a2, v3);
  else
    return 3221225506LL;
}
