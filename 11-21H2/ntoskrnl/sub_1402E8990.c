/*
 * XREFs of sub_1402E8990 @ 0x1402E8990
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     sub_1402E851C @ 0x1402E851C (sub_1402E851C.c)
 *     sub_1402E86F0 @ 0x1402E86F0 (sub_1402E86F0.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405AD7A0 @ 0x1405AD7A0 (sub_1405AD7A0.c)
 *     sub_1405AEA7C @ 0x1405AEA7C (sub_1405AEA7C.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 * Callees:
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 */

__int64 __fastcall sub_1402E8990(__int64 a1)
{
  if ( qword_140C50710 )
    return sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  else
    return 0LL;
}
