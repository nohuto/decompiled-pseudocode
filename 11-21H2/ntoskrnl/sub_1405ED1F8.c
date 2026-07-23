/*
 * XREFs of sub_1405ED1F8 @ 0x1405ED1F8
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1409BE43C @ 0x1409BE43C (sub_1409BE43C.c)
 *     sub_1409BE454 @ 0x1409BE454 (sub_1409BE454.c)
 */

__int64 __fastcall sub_1405ED1F8(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // r10d
  __int64 v7; // r11
  char v8; // cl
  char v9; // al
  char v10; // cl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  v5 = v4;
  *(_DWORD *)(a1 + 56) = v4;
  if ( v4 > 0xDC00 && v4 <= 0xDFFF )
  {
    v5 = v4 + ((*(v2 - 1) - 55287) << 10);
    *(_DWORD *)(a1 + 56) = v5;
  }
  if ( (unsigned __int8)(sub_1409BE43C(*(_QWORD *)(a1 + 112), v5) - 1) > 0xF9u )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v8 = sub_1409BE454();
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
  }
  *(_BYTE *)(v7 + 72) = v10;
  *(_BYTE *)(v7 + 73) = v9;
  return v6;
}
