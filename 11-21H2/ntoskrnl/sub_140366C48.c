/*
 * XREFs of sub_140366C48 @ 0x140366C48
 * Callers:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     sub_140216A4C @ 0x140216A4C (sub_140216A4C.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140363EF0 @ 0x140363EF0 (sub_140363EF0.c)
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     sub_140642384 @ 0x140642384 (sub_140642384.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 * Callees:
 *     sub_140366CB0 @ 0x140366CB0 (sub_140366CB0.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140366C48(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = sub_140366FB0(BugCheckParameter3);
  v3 = 0;
  v6 = 0LL;
  if ( v2 != 32 )
    v3 = v2;
  *(_WORD *)((char *)&v6 + 1) = 1;
  v4 = 5;
  if ( v3 != 33 )
    v4 = 3;
  LOBYTE(v6) = v4;
  result = sub_140366CB0(BugCheckParameter3, &v6);
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
