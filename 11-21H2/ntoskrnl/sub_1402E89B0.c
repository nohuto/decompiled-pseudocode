/*
 * XREFs of sub_1402E89B0 @ 0x1402E89B0
 * Callers:
 *     sub_140220360 @ 0x140220360 (sub_140220360.c)
 *     sub_14022FFB8 @ 0x14022FFB8 (sub_14022FFB8.c)
 *     sub_14023C030 @ 0x14023C030 (sub_14023C030.c)
 *     sub_140248208 @ 0x140248208 (sub_140248208.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_14026A6C4 @ 0x14026A6C4 (sub_14026A6C4.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403C9394 @ 0x1403C9394 (sub_1403C9394.c)
 *     sub_1403CB284 @ 0x1403CB284 (sub_1403CB284.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

unsigned __int64 __fastcall sub_1402E89B0(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = sub_1402CCC50(128LL);
    *v2 = result;
  }
  return result;
}
