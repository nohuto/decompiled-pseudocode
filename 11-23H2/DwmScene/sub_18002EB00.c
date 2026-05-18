/*
 * XREFs of sub_18002EB00 @ 0x18002EB00
 * Callers:
 *     sub_18002EB00 @ 0x18002EB00 (sub_18002EB00.c)
 *     sub_18003191C @ 0x18003191C (sub_18003191C.c)
 *     sub_180070698 @ 0x180070698 (sub_180070698.c)
 *     sub_1800CB584 @ 0x1800CB584 (sub_1800CB584.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002EB00 @ 0x18002EB00 (sub_18002EB00.c)
 */

__int64 __fastcall sub_18002EB00(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002EB00(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_1800100E8(v6, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
