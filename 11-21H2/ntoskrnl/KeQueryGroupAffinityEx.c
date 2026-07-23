/*
 * XREFs of KeQueryGroupAffinityEx @ 0x1403DF470
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2)
{
  if ( a2 >= *a1 )
    return 0LL;
  else
    return *(_QWORD *)&a1[4 * a2 + 4];
}
