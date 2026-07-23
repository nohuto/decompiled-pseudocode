/*
 * XREFs of sub_140239060 @ 0x140239060
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140227E94 @ 0x140227E94 (sub_140227E94.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_1402C9E70 @ 0x1402C9E70 (sub_1402C9E70.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     sub_140590CF0 @ 0x140590CF0 (sub_140590CF0.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_140239060(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      sub_1402F32E0(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
