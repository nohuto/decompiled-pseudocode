/*
 * XREFs of sub_14023261C @ 0x14023261C
 * Callers:
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403128B0 @ 0x1403128B0 (sub_1403128B0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023261C(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  int v3; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  v3 = 1;
  while ( a1 > v2 || a1 < v1 )
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)++v3 >= 4 )
      return 0LL;
  }
  return 1LL;
}
