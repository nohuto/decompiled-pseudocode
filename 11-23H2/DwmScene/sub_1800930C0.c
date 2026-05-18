/*
 * XREFs of sub_1800930C0 @ 0x1800930C0
 * Callers:
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_180093150 @ 0x180093150 (sub_180093150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800930C0(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[450] = *a2;
  a1[451] = a2[1];
  result = (unsigned int)a2[2];
  a1[452] = result;
  return result;
}
