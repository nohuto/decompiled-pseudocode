/*
 * XREFs of sub_14079C888 @ 0x14079C888
 * Callers:
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_14079C640 @ 0x14079C640 (sub_14079C640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14079C888(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  result = (unsigned int)a1[3];
  a1[1] += result;
  a1[3] = 0;
  a1[2] = 0;
  return result;
}
