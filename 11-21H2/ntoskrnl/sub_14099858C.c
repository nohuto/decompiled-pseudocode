/*
 * XREFs of sub_14099858C @ 0x14099858C
 * Callers:
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 *     sub_1409985E0 @ 0x1409985E0 (sub_1409985E0.c)
 *     sub_1409987A0 @ 0x1409987A0 (sub_1409987A0.c)
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 */

char __fastcall sub_14099858C(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax

  v1 = 0;
  dword_140C1F8FC &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&dword_140D00BC0, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = sub_14036AAC4((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  return v2;
}
