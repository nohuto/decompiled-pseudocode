/*
 * XREFs of sub_18007D150 @ 0x18007D150
 * Callers:
 *     sub_18007D2D0 @ 0x18007D2D0 (sub_18007D2D0.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

__int64 __fastcall sub_18007D150(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::ImageProcessingManager::`vftable';
  sub_180010910((__int64)(a1 + 59));
  sub_180010910((__int64)(a1 + 57));
  sub_180010910((__int64)(a1 + 54));
  sub_180010910((__int64)(a1 + 52));
  sub_180010910((__int64)(a1 + 50));
  sub_180010910((__int64)(a1 + 48));
  sub_180010910((__int64)(a1 + 46));
  sub_180010910((__int64)(a1 + 44));
  sub_180010910((__int64)(a1 + 42));
  sub_180010910((__int64)(a1 + 40));
  sub_180010910((__int64)(a1 + 38));
  sub_180010910((__int64)(a1 + 36));
  sub_180010910((__int64)(a1 + 34));
  sub_18000B4C0((__int64)(a1 + 22), 16LL, 6LL);
  sub_18000B4C0((__int64)(a1 + 10), 16LL, 6LL);
  result = sub_180010910((__int64)(a1 + 8));
  v3 = a1[5];
  if ( v3 )
  {
    sub_1800126E8(v3, a1[6]);
    result = sub_180010884((char *)a1[5], (a1[7] - a1[5]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[5] = 0LL;
    a1[6] = 0LL;
    a1[7] = 0LL;
  }
  return result;
}
