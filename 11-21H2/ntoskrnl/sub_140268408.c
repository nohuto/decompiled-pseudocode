/*
 * XREFs of sub_140268408 @ 0x140268408
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_1402682BC @ 0x1402682BC (sub_1402682BC.c)
 *     sub_14026A5DC @ 0x14026A5DC (sub_14026A5DC.c)
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14027738C @ 0x14027738C (sub_14027738C.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140324C60 @ 0x140324C60 (sub_140324C60.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1403936C0 @ 0x1403936C0 (sub_1403936C0.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1406FAD90 @ 0x1406FAD90 (sub_1406FAD90.c)
 *     sub_1406FAE2C @ 0x1406FAE2C (sub_1406FAE2C.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140268408(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  v2 = (unsigned __int8)sub_1402F2700(a1);
  sub_14026845C(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
