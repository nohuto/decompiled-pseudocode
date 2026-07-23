/*
 * XREFs of sub_14081C500 @ 0x14081C500
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     sub_1406EFB84 @ 0x1406EFB84 (sub_1406EFB84.c)
 *     sub_14081C568 @ 0x14081C568 (sub_14081C568.c)
 */

__int64 __fastcall sub_14081C500(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rdx

  v4 = sub_1406EFB84(a2, 4);
  if ( !v4 )
  {
    if ( a3 )
    {
      v6 = 5 * v5;
      *(_DWORD *)&word_140C15E20[2 * v6 + 2] = 42;
      word_140C15E20[2 * v6] = 1;
    }
    return 0LL;
  }
  v8 = *v4;
  LOWORD(v8) = (unsigned __int16)(4 * v8 - 4) >> 2;
  if ( (unsigned __int16)v8 <= 4u )
  {
    sub_14081C568(v4 + 2, v8, &word_140C15E20[10 * v5]);
    return 0LL;
  }
  return 3221225485LL;
}
