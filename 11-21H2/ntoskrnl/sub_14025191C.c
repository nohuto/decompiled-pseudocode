/*
 * XREFs of sub_14025191C @ 0x14025191C
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 * Callees:
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 */

char __fastcall sub_14025191C(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char result; // al

  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v3 + 35) & 0x40) != 0 || (unsigned int)sub_140273354(48 * a1 - 0x220000000000LL) )
    *(_QWORD *)(v2 + 8) |= 0x80000000uLL;
  v4 = sub_140273234(v3);
  v8 = v7 ^ ((unsigned int)v7 ^ (v4 << 24)) & 0x7000000;
  *(_QWORD *)(v5 + 8) = v8;
  result = *(_BYTE *)(v9 + 34) & 7;
  if ( result == 3 )
    v6 = 0x8000000LL;
  *(_QWORD *)(v5 + 8) = v8 & 0xFFFFFFFFF77FFFFFuLL | v6 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
