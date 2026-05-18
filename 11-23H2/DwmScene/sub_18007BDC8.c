/*
 * XREFs of sub_18007BDC8 @ 0x18007BDC8
 * Callers:
 *     sub_18007BDC8 @ 0x18007BDC8 (sub_18007BDC8.c)
 *     sub_18007C028 @ 0x18007C028 (sub_18007C028.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18007BDC8 @ 0x18007BDC8 (sub_18007BDC8.c)
 */

__int64 __fastcall sub_18007BDC8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_1800100E8(v6, 0x38uLL) )
  {
    sub_18007BDC8(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
      sub_180010530(v7);
  }
  return result;
}
