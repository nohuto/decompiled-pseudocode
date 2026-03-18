/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0213E18
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C0213850 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021424C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00F0F50 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1C0213410 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02137B0 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // xmm1_8

  if ( word_1C0335C90 )
  {
    v2 = (char *)&unk_1C0335CF8;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)&unk_1C0335CF8) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0335D00);
    v3 = 4LL;
    do
    {
      v4 = *((_QWORD *)v2 - 1);
      *(_OWORD *)v2 = *(_OWORD *)(v2 - 24);
      *((_QWORD *)v2 + 2) = v4;
      v2 -= 24;
      --v3;
    }
    while ( v3 );
    unk_1C0335CA0 = 0LL;
  }
  word_1C0335C90 = a1;
  word_1C0335C98[0] = a1;
}
