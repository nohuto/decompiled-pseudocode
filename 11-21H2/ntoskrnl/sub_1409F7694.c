/*
 * XREFs of sub_1409F7694 @ 0x1409F7694
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F7694(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rcx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( (_DWORD)v3 == 1 )
    return ExpMicrocodeInformationLoad(v3);
  if ( (_DWORD)v3 == 2 )
    return ExpMicrocodeInformationUnload(v3);
  return 3221225485LL;
}
