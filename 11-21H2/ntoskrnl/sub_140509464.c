/*
 * XREFs of sub_140509464 @ 0x140509464
 * Callers:
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140509464(char a1)
{
  __int64 result; // rax

  if ( a1 )
    result = dword_140D014C4 & 0xFFFFFFFC | 1;
  else
    result = dword_140D014C4 & 0xFFFFFFFC | 2;
  dword_140D014C4 = result;
  return result;
}
