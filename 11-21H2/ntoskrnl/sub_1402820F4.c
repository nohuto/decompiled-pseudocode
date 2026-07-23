/*
 * XREFs of sub_1402820F4 @ 0x1402820F4
 * Callers:
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403DB228 @ 0x1403DB228 (sub_1403DB228.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 * Callees:
 *     sub_140282160 @ 0x140282160 (sub_140282160.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall sub_1402820F4(__int64 a1, __int64 a2, int a3)
{
  void *v5; // rbx

  v5 = (void *)sub_1402828F0(64LL, 8 * a2 + 264, 1700228429LL);
  if ( v5 )
  {
    if ( (unsigned int)sub_140282160(a1, a3 != 0) )
      return v5;
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
