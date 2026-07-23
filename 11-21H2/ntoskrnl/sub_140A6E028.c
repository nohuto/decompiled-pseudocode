/*
 * XREFs of sub_140A6E028 @ 0x140A6E028
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_14034BAE0 @ 0x14034BAE0 (sub_14034BAE0.c)
 */

__int64 __fastcall sub_140A6E028(POOL_TYPE a1, ULONG_PTR a2, unsigned int a3, unsigned int a4, int a5)
{
  if ( a4 == 32 || (a1 & 2) != 0 || (unsigned int)sub_14034BAE0(a1, a2, a4) || a2 <= 0xFE0 )
    return sub_140349710(a1, a2, a3, a5, (a4 >> 3) & 1);
  else
    return 0LL;
}
