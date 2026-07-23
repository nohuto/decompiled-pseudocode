/*
 * XREFs of sub_140864280 @ 0x140864280
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140864280(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( byte_140C54BB0 )
  {
    *(_WORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = dword_140C4B06C;
    *(_DWORD *)(a1 + 8) = dword_140C4B0F8;
    *(_QWORD *)(a1 + 16) = sub_140397D10;
    *(_QWORD *)(a1 + 24) = sub_1403B6180;
    *(_QWORD *)(a1 + 32) = sub_14051D820;
    *(_QWORD *)(a1 + 40) = sub_14051DAC0;
    *(_QWORD *)(a1 + 48) = sub_1405091D0;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
