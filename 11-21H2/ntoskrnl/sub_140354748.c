/*
 * XREFs of sub_140354748 @ 0x140354748
 * Callers:
 *     sub_1406CD46C @ 0x1406CD46C (sub_1406CD46C.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407D45CC @ 0x1407D45CC (sub_1407D45CC.c)
 *     sub_1407D8870 @ 0x1407D8870 (sub_1407D8870.c)
 *     sub_140A0C7AC @ 0x140A0C7AC (sub_140A0C7AC.c)
 *     sub_140A0CB34 @ 0x140A0CB34 (sub_140A0CB34.c)
 *     sub_140A0D838 @ 0x140A0D838 (sub_140A0D838.c)
 *     sub_140A0DD98 @ 0x140A0DD98 (sub_140A0DD98.c)
 *     sub_140A0E590 @ 0x140A0E590 (sub_140A0E590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354748(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -2147024809;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
