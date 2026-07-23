/*
 * XREFs of IoAllocateIrp @ 0x1402AAB20
 * Callers:
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1405FB99C @ 0x1405FB99C (sub_1405FB99C.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     sub_1406C1BD4 @ 0x1406C1BD4 (sub_1406C1BD4.c)
 *     sub_140748D6C @ 0x140748D6C (sub_140748D6C.c)
 *     sub_14074C5A8 @ 0x14074C5A8 (sub_14074C5A8.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 *     sub_1408296B8 @ 0x1408296B8 (sub_1408296B8.c)
 *     sub_14084BCDC @ 0x14084BCDC (sub_14084BCDC.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_1409585A4 @ 0x1409585A4 (sub_1409585A4.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 * Callees:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !dword_140D06AD0 )
    return (PIRP)sub_1402AACD0(0LL, (unsigned __int8)StackSize);
  if ( dword_140D06AD0 == 2 || dword_140C1AA70 != 1 )
    return (PIRP)sub_14020B830(StackSize, (unsigned __int8)StackSize);
  return (PIRP)sub_140A7FE00(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
