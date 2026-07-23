/*
 * XREFs of sub_140287B4C @ 0x140287B4C
 * Callers:
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140287B4C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // r8
  _QWORD *v5; // r8

  a2[1] = a2;
  v2 = a1 + 1944;
  *a2 = a2;
  while ( 1 )
  {
    result = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 == v2 || *(_QWORD *)(v2 + 16) <= 0x20uLL )
      break;
    if ( result[1] != v2
      || (v4 = *result, *(_QWORD **)(*result + 8LL) != result)
      || (*(_QWORD *)v2 = v4, *(_QWORD *)(v4 + 8) = v2,
                              --*(_QWORD *)(v2 + 16),
                              v5 = (_QWORD *)a2[1],
                              (_QWORD *)*v5 != a2) )
    {
      __fastfail(3u);
    }
    *result = a2;
    result[1] = v5;
    *v5 = result;
    a2[1] = result;
  }
  return result;
}
