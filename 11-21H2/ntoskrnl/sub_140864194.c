/*
 * XREFs of sub_140864194 @ 0x140864194
 * Callers:
 *     sub_14099596C @ 0x14099596C (sub_14099596C.c)
 *     sub_1409985E0 @ 0x1409985E0 (sub_1409985E0.c)
 *     sub_1409987A0 @ 0x1409987A0 (sub_1409987A0.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 */

char __fastcall sub_140864194(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  dword_140C1F8FC |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&dword_140D00BC0, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = sub_14036AAC4((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  return v2;
}
