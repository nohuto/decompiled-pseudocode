/*
 * XREFs of sub_18003F574 @ 0x18003F574
 * Callers:
 *     sub_18003FDF4 @ 0x18003FDF4 (sub_18003FDF4.c)
 *     sub_18003FFA0 @ 0x18003FFA0 (sub_18003FFA0.c)
 *     sub_180040150 @ 0x180040150 (sub_180040150.c)
 * Callees:
 *     sub_18003F5A8 @ 0x18003F5A8 (sub_18003F5A8.c)
 */

_QWORD *__fastcall sub_18003F574(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_18003F5A8();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
