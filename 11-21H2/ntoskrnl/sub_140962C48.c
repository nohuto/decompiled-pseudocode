/*
 * XREFs of sub_140962C48 @ 0x140962C48
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 * Callees:
 *     sub_1402581D0 @ 0x1402581D0 (sub_1402581D0.c)
 *     sub_140577C74 @ 0x140577C74 (sub_140577C74.c)
 */

__int64 __fastcall sub_140962C48(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // esi
  __int16 v7; // di
  unsigned int v8; // ebx
  unsigned int v9; // esi
  char v10; // al
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // edi
  int v14; // eax

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  v5 = sub_140577C74();
  v6 = 0;
  v7 = 0;
  if ( v5 > 0 )
    v7 = v5 - 1;
  v8 = (byte_140E01840 != 0) | *a1 & 0xFFFFFFFE;
  *a1 = v8;
  if ( (unsigned int)sub_1402581D0() == 2 )
    v6 = 2;
  v9 = v8 & 0xFFFFFFFD | v6;
  *a1 = v9;
  v10 = byte_140D0688A;
  v11 = v9 & 0xFFFFFFFB | (4 * (byte_140D0688A & 1));
  *a1 = v11;
  *a1 = v11 & 0xFFFFFFF7 | (4 * (v10 & 2));
  v12 = (byte_140C54EE0 != 0 ? 0x10 : 0) | v11 & 0xFFFFFFE7 | (4 * (v10 & 2)) & 0xEF;
  *a1 = v12;
  v12 |= 0x20u;
  *a1 = v12;
  v12 |= 0x2000u;
  *a1 = v12;
  v13 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(v7 << 6)) & 0xFC0;
  *a1 = v13;
  v14 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)qword_140D06958 << 12)) & 0x1000;
  *a1 = v14;
  *a1 = v14 & 0x3FFF;
  return 0LL;
}
