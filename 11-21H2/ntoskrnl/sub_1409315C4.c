/*
 * XREFs of sub_1409315C4 @ 0x1409315C4
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409315C4(PVOID MemoryMap)
{
  int v2; // ebx
  ULONG_PTR v4[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  v2 = sub_140358A20(2u, 36, 0, (__int64)v4);
  if ( v2 >= 0 )
    PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)v4[3], v4[2], 0x526C7356u);
  return (unsigned int)v2;
}
