/*
 * XREFs of sub_14027A9D0 @ 0x14027A9D0
 * Callers:
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_14031D740 @ 0x14031D740 (sub_14031D740.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 */

void __fastcall sub_14027A9D0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    if ( *(_WORD *)(a1 + 10) )
    {
      sub_14022FC80((__int64 *)a1);
      v1 = *(_QWORD *)(a1 + 16);
    }
    sub_14020D8D0(v2, v1);
    *(_BYTE *)(a1 + 13) |= 2u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
