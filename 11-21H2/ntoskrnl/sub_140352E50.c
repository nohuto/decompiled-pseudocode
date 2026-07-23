/*
 * XREFs of sub_140352E50 @ 0x140352E50
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_1402354A4 @ 0x1402354A4 (sub_1402354A4.c)
 *     sub_14024F014 @ 0x14024F014 (sub_14024F014.c)
 *     sub_14026C744 @ 0x14026C744 (sub_14026C744.c)
 *     sub_14027938C @ 0x14027938C (sub_14027938C.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_14027B6A4 @ 0x14027B6A4 (sub_14027B6A4.c)
 *     sub_1402804F0 @ 0x1402804F0 (sub_1402804F0.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_1403528A4 @ 0x1403528A4 (sub_1403528A4.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     sub_1405A47A0 @ 0x1405A47A0 (sub_1405A47A0.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 *     sub_140AF61F4 @ 0x140AF61F4 (sub_140AF61F4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140352E50(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
