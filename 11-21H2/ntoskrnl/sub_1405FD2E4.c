/*
 * XREFs of sub_1405FD2E4 @ 0x1405FD2E4
 * Callers:
 *     sub_1405F83FC @ 0x1405F83FC (sub_1405F83FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FD2E4(_DWORD *a1, __int16 a2, unsigned int a3)
{
  if ( (*a1 & 0x2000) != 0 )
    return 48LL;
  else
    return 8 * (unsigned int)(((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12) + 96;
}
