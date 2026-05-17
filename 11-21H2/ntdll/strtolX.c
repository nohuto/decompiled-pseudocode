/*
 * XREFs of strtolX @ 0x180099230
 * Callers:
 *     atoi @ 0x180094520 (atoi.c)
 *     atol @ 0x180094550 (atol.c)
 * Callees:
 *     strtoxlX @ 0x180098FD8 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
