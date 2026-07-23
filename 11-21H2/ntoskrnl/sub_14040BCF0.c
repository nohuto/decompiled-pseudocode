/*
 * XREFs of sub_14040BCF0 @ 0x14040BCF0
 * Callers:
 *     sub_14040106C @ 0x14040106C (sub_14040106C.c)
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_14040BCF0(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  int v3; // ebx

  v3 = a2[1];
  _misaligned_access();
  if ( a2[19] <= 0x20u && a1 >= a2[32] )
    sub_14056AF38(1937012333LL);
  *a3 = a1;
  return sub_1403FDDE8((__int64)(a3 + 1), (unsigned int)(v3 << 6) - 4LL);
}
