/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x140214190
 * Callers:
 *     sub_1403B64E0 @ 0x1403B64E0 (sub_1403B64E0.c)
 *     sub_1403B8E60 @ 0x1403B8E60 (sub_1403B8E60.c)
 *     sub_1403B9174 @ 0x1403B9174 (sub_1403B9174.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403DE8E0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     sub_140512B00 @ 0x140512B00 (sub_140512B00.c)
 *     sub_140519438 @ 0x140519438 (sub_140519438.c)
 *     sub_14054CA0C @ 0x14054CA0C (sub_14054CA0C.c)
 *     sub_140554988 @ 0x140554988 (sub_140554988.c)
 *     sub_140A870B0 @ 0x140A870B0 (sub_140A870B0.c)
 *     sub_140B4D2C4 @ 0x140B4D2C4 (sub_140B4D2C4.c)
 * Callees:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_14021499C @ 0x14021499C (sub_14021499C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  v6 = a6;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)sub_14021499C(a1, a2, a3, a4, a5, a6, (__int64)&v8) < 0 )
    return 0LL;
  else
    return sub_140214244((unsigned int)&v10, v8, DWORD2(v8), v9, DWORD2(v9), v6, (__int64)&StartContext, 1416523587, 0);
}
