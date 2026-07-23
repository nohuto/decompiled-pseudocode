/*
 * XREFs of sub_140389A90 @ 0x140389A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140297AE0 @ 0x140297AE0 (sub_140297AE0.c)
 */

PVOID __fastcall sub_140389A90(unsigned __int64 a1, _QWORD *a2)
{
  if ( a1 < *((_QWORD *)&xmmword_140E00030 + 1)
    || a1 >= *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    return sub_140297AE0(a1, (__int64)a2);
  }
  *(_OWORD *)a2 = xmmword_140E00030;
  a2[2] = qword_140E00040;
  return (PVOID)*a2;
}
