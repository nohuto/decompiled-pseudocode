/*
 * XREFs of sub_1405A2D30 @ 0x1405A2D30
 * Callers:
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_1405994E4 @ 0x1405994E4 (sub_1405994E4.c)
 *     sub_140761DD8 @ 0x140761DD8 (sub_140761DD8.c)
 */

__int64 *__fastcall sub_1405A2D30(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rax

  v2 = 0LL;
  while ( 1 )
  {
    v3 = sub_1405994E4(v2);
    v2 = v3;
    if ( !v3 )
      break;
    sub_140238D0C((__int64)v3, qword_140C533D8);
    if ( (unsigned int)sub_140761DD8(*(_QWORD *)(a1 + 48)) )
      break;
    sub_14021803C((__int64)&qword_140C533D8);
  }
  return v2;
}
