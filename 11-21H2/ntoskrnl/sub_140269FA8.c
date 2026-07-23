/*
 * XREFs of sub_140269FA8 @ 0x140269FA8
 * Callers:
 *     sub_140227360 @ 0x140227360 (sub_140227360.c)
 *     sub_1402697F0 @ 0x1402697F0 (sub_1402697F0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 */

__int64 __fastcall sub_140269FA8(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_140C507D0;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0
    && *(_DWORD *)a1 == 1
    && *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL) )
  {
    v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    sub_14032F1B0(a1);
  }
  return 1LL;
}
