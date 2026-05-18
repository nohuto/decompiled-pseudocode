/*
 * XREFs of sub_18005F2F0 @ 0x18005F2F0
 * Callers:
 *     sub_18005FC1C @ 0x18005FC1C (sub_18005FC1C.c)
 *     sub_18005FD9C @ 0x18005FD9C (sub_18005FD9C.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 */

_QWORD *__fastcall sub_18005F2F0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_180032650((__int64)(v3 + 2));
      result = (_QWORD *)sub_1800100E8(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
