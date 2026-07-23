/*
 * XREFs of sub_1402E5708 @ 0x1402E5708
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 */

__int64 __fastcall sub_1402E5708(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a2 )
    sub_140267E78(a1, a2, a3 != 0);
  return sub_14033C33C(a1, 0LL, a3);
}
