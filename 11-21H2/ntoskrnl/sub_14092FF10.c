/*
 * XREFs of sub_14092FF10 @ 0x14092FF10
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 */

_QWORD *__fastcall sub_14092FF10(_QWORD **a1)
{
  _QWORD *i; // rbx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    *((_WORD *)i + 20) |= 0x20u;
    result = i + 2;
    if ( (_QWORD *)*result != result )
      result = sub_1406ABBF4((__int64)(i - 4), -1073741738);
  }
  return result;
}
