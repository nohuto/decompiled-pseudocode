/*
 * XREFs of sub_14025E608 @ 0x14025E608
 * Callers:
 *     sub_140828134 @ 0x140828134 (sub_140828134.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025E608(_DWORD *a1)
{
  __int64 result; // rax

  result = 32769 * ((9 * *a1) ^ ((unsigned int)(9 * *a1) >> 11));
  *a1 = result;
  return result;
}
