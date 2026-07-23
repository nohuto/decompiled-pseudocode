/*
 * XREFs of sub_1402F349C @ 0x1402F349C
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406C7C90 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407A0A30 (RtlQueryAtomInAtomTable.c)
 *     sub_1409B8DC8 @ 0x1409B8DC8 (sub_1409B8DC8.c)
 * Callees:
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 */

_QWORD *__fastcall sub_1402F349C(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbx
  int v6; // ecx
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 16);
  v6 = sub_1402EF324();
  if ( v6 )
  {
    for ( result = (_QWORD *)*v5; result != v5; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result + 4) == v6 )
        return result;
    }
    if ( !sub_140244198(a2) || a3 )
      return 0LL;
  }
  return v5;
}
