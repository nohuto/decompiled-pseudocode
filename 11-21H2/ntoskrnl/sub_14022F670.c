/*
 * XREFs of sub_14022F670 @ 0x14022F670
 * Callers:
 *     sub_14022F3E8 @ 0x14022F3E8 (sub_14022F3E8.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022F670(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = dword_140D06960;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)dword_140D06960 )
    return (dword_140D06960 - (int)a2 + (int)a1 - 1) / (unsigned int)dword_140D06960 * dword_140D06960;
  return v2;
}
