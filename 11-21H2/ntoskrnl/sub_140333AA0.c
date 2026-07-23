/*
 * XREFs of sub_140333AA0 @ 0x140333AA0
 * Callers:
 *     sub_140256548 @ 0x140256548 (sub_140256548.c)
 *     sub_14027B0B8 @ 0x14027B0B8 (sub_14027B0B8.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 *     sub_140374864 @ 0x140374864 (sub_140374864.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_1403D2280 @ 0x1403D2280 (sub_1403D2280.c)
 *     sub_140419160 @ 0x140419160 (sub_140419160.c)
 *     sub_14059774C @ 0x14059774C (sub_14059774C.c)
 *     sub_1406F5BB0 @ 0x1406F5BB0 (sub_1406F5BB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140333AA0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
