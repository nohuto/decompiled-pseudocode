/*
 * XREFs of sub_18001CA2C @ 0x18001CA2C
 * Callers:
 *     sub_18001CA2C @ 0x18001CA2C (sub_18001CA2C.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001CA2C @ 0x18001CA2C (sub_18001CA2C.c)
 */

__int64 __fastcall sub_18001CA2C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18001CA2C(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180011B24((__int64)v6 + 32);
      result = sub_1800100E8(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
