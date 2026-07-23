/*
 * XREFs of sub_14025E734 @ 0x14025E734
 * Callers:
 *     sub_140846F90 @ 0x140846F90 (sub_140846F90.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14025E734(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = a2 + 24;
  memmove((void *)(a2 + 24), *(const void **)(a1 + 16), 2LL * *(unsigned __int16 *)(a1 + 14));
  return 0LL;
}
