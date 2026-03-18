/*
 * XREFs of sub_1407D25B4 @ 0x1407D25B4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2138 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D2410 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1407638C0 @ 0x1407638C0 (sub_1407638C0.c)
 *     sub_1407D27A8 @ 0x1407D27A8 (sub_1407D27A8.c)
 */

__int64 __fastcall sub_1407D25B4(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1407638C0(a1 + 136, a2, 0x10u, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1407D27A8(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
