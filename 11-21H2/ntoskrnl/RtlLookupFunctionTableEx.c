/*
 * XREFs of RtlLookupFunctionTableEx @ 0x140389A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140297AE0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTableEx(unsigned __int64 a1, _QWORD *a2)
{
  if ( a1 < *((_QWORD *)&xmmword_140E00030 + 1)
    || a1 >= *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    return RtlpxLookupFunctionTable(a1, (__int64)a2);
  }
  *(_OWORD *)a2 = xmmword_140E00030;
  a2[2] = qword_140E00040;
  return (PVOID)*a2;
}
