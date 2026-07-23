/*
 * XREFs of sub_14092FEAC @ 0x14092FEAC
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 * Callees:
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 */

_QWORD *__fastcall sub_14092FEAC(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = (__int64)(i - 4);
    if ( i[12] == a2 )
    {
      *(_WORD *)(v5 + 72) |= 0x20u;
      result = (_QWORD *)(v5 + 48);
      if ( (_QWORD *)*result != result )
        result = sub_1406ABBF4(v5, -1073741738);
    }
  }
  return result;
}
