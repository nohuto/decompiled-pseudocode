/*
 * XREFs of sub_140520520 @ 0x140520520
 * Callers:
 *     <none>
 * Callees:
 *     sub_140520580 @ 0x140520580 (sub_140520580.c)
 */

__int64 __fastcall sub_140520520(unsigned int a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  if ( a1 >= dword_140C4A418 )
    v3 = (15LL << (4 * ((unsigned __int8)a1 - (unsigned __int8)dword_140C4A418))) & __readmsr(0x38Du);
  else
    v3 = __readmsr(a1 + 390);
  return sub_140520580(a1, v3, a2);
}
