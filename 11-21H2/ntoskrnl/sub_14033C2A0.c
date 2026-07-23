/*
 * XREFs of sub_14033C2A0 @ 0x14033C2A0
 * Callers:
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402D92AC @ 0x1402D92AC (sub_1402D92AC.c)
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033A5B0 @ 0x14033A5B0 (sub_14033A5B0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_1403D820C @ 0x1403D820C (sub_1403D820C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_140591E04 @ 0x140591E04 (sub_140591E04.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_14096F470 @ 0x14096F470 (sub_14096F470.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 */

__int64 __fastcall sub_14033C2A0(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  unsigned __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (unsigned __int64 *)(a1 + 16);
    if ( (((*v4 & 0x400) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
    {
      result = sub_140232694(v4, 1, 0);
      v1 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v1 | 0x10;
  }
  return result;
}
