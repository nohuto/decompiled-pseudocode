/*
 * XREFs of sub_140A1E7F0 @ 0x140A1E7F0
 * Callers:
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1FF3C @ 0x140A1FF3C (sub_140A1FF3C.c)
 */

__int64 __fastcall sub_140A1E7F0(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1408138F0(2LL, L"Binding EFI namespace objects");
  v5[1] = (__int64)v5;
  v5[0] = (__int64)v5;
  v3 = sub_140A1E890(a1, v2, v5);
  if ( v3 < 0 || (v3 = sub_140A1E590(a1, v5), v3 < 0) || (v3 = sub_140A1E354(a1, (__int64)v5), v3 < 0) )
    sub_1408138F0(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v3);
  sub_140A1FF3C(v5);
  return (unsigned int)v3;
}
