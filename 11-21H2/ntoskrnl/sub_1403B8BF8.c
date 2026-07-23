/*
 * XREFs of sub_1403B8BF8 @ 0x1403B8BF8
 * Callers:
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 * Callees:
 *     sub_1403AEED4 @ 0x1403AEED4 (sub_1403AEED4.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403B8D0C @ 0x1403B8D0C (sub_1403B8D0C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403B8BF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 result; // rax

  *(_QWORD *)(qword_140C4BEE0 + 8LL * HIDWORD(KeGetPcr()[1].LockArray)) = KeGetPcr();
  sub_1403AEF08(0x35u, (int)sub_14051F570, 5, a4, -1LL);
  sub_1403AEF08(0x36u, (int)sub_14051F570, 5, v4, -1LL);
  sub_1403AEF08(0xDFu, (int)sub_14051F600, 15, v5, -2LL);
  sub_1403AEF08(0xD8u, (int)sub_14051F630, 15, v6, -1LL);
  sub_1403AEF08(0xD7u, (int)sub_14051F5B0, 15, v7, -1LL);
  sub_1403AEF08(0xE2u, (int)sub_1403B5BB0, 15, v8, -1LL);
  sub_1403AEF08(0xFEu, (int)sub_140456A70, 15, v9, -3LL);
  sub_1403AEF08(0xE3u, (int)sub_14051F590, 14, v10, -1LL);
  sub_1403AEED4();
  result = sub_1403B8D0C();
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, 1uLL, (int)result);
  return result;
}
