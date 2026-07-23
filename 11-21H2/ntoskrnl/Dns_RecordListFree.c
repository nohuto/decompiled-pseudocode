/*
 * XREFs of Dns_RecordListFree @ 0x140386FBC
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 * Callees:
 *     sub_14029BA28 @ 0x14029BA28 (sub_14029BA28.c)
 */

__int64 __fastcall Dns_RecordListFree(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = sub_14029BA28((__int64)a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
