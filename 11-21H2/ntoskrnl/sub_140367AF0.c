/*
 * XREFs of sub_140367AF0 @ 0x140367AF0
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071F740 @ 0x14071F740 (sub_14071F740.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407C1A00 @ 0x1407C1A00 (sub_1407C1A00.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall sub_140367AF0(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, a3);
}
