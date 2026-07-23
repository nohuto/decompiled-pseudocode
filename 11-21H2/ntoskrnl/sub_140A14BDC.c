/*
 * XREFs of sub_140A14BDC @ 0x140A14BDC
 * Callers:
 *     sub_140A18C2C @ 0x140A18C2C (sub_140A18C2C.c)
 *     sub_140A1A118 @ 0x140A1A118 (sub_140A1A118.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A14BDC(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2++ ^ v4;
      v4 = (v4 >> 8) ^ *((_DWORD *)qword_1400453E0 + v6);
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
