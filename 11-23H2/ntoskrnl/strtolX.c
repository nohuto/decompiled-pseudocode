/*
 * XREFs of strtolX @ 0x1403D8FE8
 * Callers:
 *     atol @ 0x1403D9460 (atol.c)
 * Callees:
 *     strtoxlX @ 0x1403D8D90 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
