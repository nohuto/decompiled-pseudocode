/*
 * XREFs of sub_1800C8870 @ 0x1800C8870
 * Callers:
 *     sub_1800C8870 @ 0x1800C8870 (sub_1800C8870.c)
 *     sub_1800C8FE4 @ 0x1800C8FE4 (sub_1800C8FE4.c)
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800C8870 @ 0x1800C8870 (sub_1800C8870.c)
 */

__int64 __fastcall sub_1800C8870(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800C8870(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_1800100E8(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
