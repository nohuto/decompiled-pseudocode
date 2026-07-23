/*
 * XREFs of sub_140A4E460 @ 0x140A4E460
 * Callers:
 *     sub_140A4EEAC @ 0x140A4EEAC (sub_140A4EEAC.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

__int64 __fastcall sub_140A4E460(__int64 a1, void *a2, __int64 a3, int a4)
{
  ULONG_PTR v5; // r8
  ULONG v6; // edx

  if ( a4 == 2 )
    v5 = 1LL;
  else
    v5 = a3 << 12;
  v6 = 81920;
  if ( a4 != 2 )
    v6 = 0x10000;
  PoSetHiberRange(0LL, v6, a2, v5, 0x74706D4Du);
  return 0LL;
}
