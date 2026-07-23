/*
 * XREFs of sub_1407720B8 @ 0x1407720B8
 * Callers:
 *     sub_1406CE8B8 @ 0x1406CE8B8 (sub_1406CE8B8.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 *     sub_140770200 @ 0x140770200 (sub_140770200.c)
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 *     sub_140A26994 @ 0x140A26994 (sub_140A26994.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 *     sub_140A293B4 @ 0x140A293B4 (sub_140A293B4.c)
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 *     sub_140A2CC38 @ 0x140A2CC38 (sub_140A2CC38.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140771430 @ 0x140771430 (sub_140771430.c)
 *     sub_140772190 @ 0x140772190 (sub_140772190.c)
 *     sub_140A27808 @ 0x140A27808 (sub_140A27808.c)
 *     sub_140A278FC @ 0x140A278FC (sub_140A278FC.c)
 */

__int64 __fastcall sub_1407720B8(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 496) )
  {
    switch ( a3 )
    {
      case 1:
        return sub_140772190(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return sub_140A27808(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return sub_140771430(a1, a2, a4, a5, a6);
      case 4:
        return sub_140A278FC(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        return sub_14042A5E0(a1, a2);
    }
  }
  return result;
}
