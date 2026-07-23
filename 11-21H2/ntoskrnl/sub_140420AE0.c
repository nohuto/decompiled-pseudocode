/*
 * XREFs of sub_140420AE0 @ 0x140420AE0
 * Callers:
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall sub_140420AE0(char a1)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  *((_DWORD *)result + 10150) |= 1u;
  *((_DWORD *)result + 10150) &= ~2u;
  if ( (a1 & 1) != 0 )
    *((_DWORD *)result + 10150) ^= 3u;
  return result;
}
