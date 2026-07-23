/*
 * XREFs of sub_14038F8FC @ 0x14038F8FC
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_14038217C @ 0x14038217C (sub_14038217C.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_140390A50 @ 0x140390A50 (sub_140390A50.c)
 */

__int64 __fastcall sub_14038F8FC(__int64 a1)
{
  char v1; // al
  unsigned int v3; // eax
  char v4; // al
  int v5; // edi

  v1 = *(_BYTE *)(a1 + 1904);
  if ( (v1 & 4) != 0 )
  {
    v4 = v1 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1904) = v1 & 0xFC;
    v3 = sub_14038217C(a1, 0);
    if ( v3 != 2 )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v4 = *(_BYTE *)(a1 + 1904);
  }
  *(_BYTE *)(a1 + 1904) = v4 | 3;
  while ( 1 )
  {
    v5 = sub_14038F99C(a1, 1LL);
    v3 = sub_14038217C(a1, 0);
    if ( v5 < 0 )
      break;
    if ( v3 != 2 )
      goto LABEL_7;
  }
  if ( v3 == 2 )
    v3 = 1;
LABEL_8:
  *(_BYTE *)(a1 + 1904) &= 0xFCu;
  if ( v3 )
    sub_140390A50(a1, v3);
  return (unsigned int)v5;
}
