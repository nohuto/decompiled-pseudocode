/*
 * XREFs of sub_140365700 @ 0x140365700
 * Callers:
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_140365610 @ 0x140365610 (sub_140365610.c)
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 *     sub_1405F327C @ 0x1405F327C (sub_1405F327C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140365700(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  char v4; // cl
  unsigned __int64 result; // rax
  char v6; // dl
  char v7; // dl

  v3 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v3 ^ qword_140C5A5C0 ^ *(_QWORD *)(v3 + 0x10)) != 0xA2E64EADA2E64EADuLL )
    return 0LL;
  v4 = *(_BYTE *)(a1 + 8);
  result = v3 + 32 * ((unsigned __int64)(unsigned int)(a2 - v3) >> v4);
  if ( !result )
    return 0LL;
  v6 = *(_BYTE *)(result + 24);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) == 0 )
  {
    result -= 32LL * *(unsigned __int8 *)(result + 31);
    v7 = *(_BYTE *)(result + 24);
    if ( (v7 & 3) == 3 && (v7 & 0xCu) >= 8 )
      return result;
    return 0LL;
  }
  if ( (v6 & 0xCu) < 8 && (((1 << v4) - 1) & a2) != 0 )
    return 0LL;
  return result;
}
