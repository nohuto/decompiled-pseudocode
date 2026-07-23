/*
 * XREFs of ExSetTimer @ 0x1402D5750
 * Callers:
 *     sub_1402D3D0C @ 0x1402D3D0C (sub_1402D3D0C.c)
 *     sub_140365798 @ 0x140365798 (sub_140365798.c)
 *     sub_1403A72E4 @ 0x1403A72E4 (sub_1403A72E4.c)
 *     sub_14053FF38 @ 0x14053FF38 (sub_14053FF38.c)
 *     sub_14064FA50 @ 0x14064FA50 (sub_14064FA50.c)
 *     sub_1406D9E90 @ 0x1406D9E90 (sub_1406D9E90.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_1402D57D4 @ 0x1402D57D4 (sub_1402D57D4.c)
 *     sub_1402D59E8 @ 0x1402D59E8 (sub_1402D59E8.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !(unsigned __int8)sub_1402D59E8(a4, 0LL, 4LL) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  sub_1402D57D4(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
