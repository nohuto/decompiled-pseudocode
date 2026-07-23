/*
 * XREFs of sub_14033C3E0 @ 0x14033C3E0
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140246BF0 @ 0x140246BF0 (sub_140246BF0.c)
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_14033A6B0 @ 0x14033A6B0 (sub_14033A6B0.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     sub_14038EF10 @ 0x14038EF10 (sub_14038EF10.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_14058D990 @ 0x14058D990 (sub_14058D990.c)
 *     sub_14058EA88 @ 0x14058EA88 (sub_14058EA88.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_140598DA4 @ 0x140598DA4 (sub_140598DA4.c)
 *     sub_14059BFB0 @ 0x14059BFB0 (sub_14059BFB0.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405B85F8 @ 0x1405B85F8 (sub_1405B85F8.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 *     sub_140AF3E9C @ 0x140AF3E9C (sub_140AF3E9C.c)
 *     sub_140AF522C @ 0x140AF522C (sub_140AF522C.c)
 *     sub_140B09B18 @ 0x140B09B18 (sub_140B09B18.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14033C3E0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 & 0xFFFFFFFFFFLL | v2 & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v4 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 & 0xFFFFFFFFFFLL | result & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v4 != result );
  }
  return result;
}
