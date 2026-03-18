/*
 * XREFs of sub_1407D2580 @ 0x1407D2580
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407D1EE4 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D1FC4 (WbDecryptEncryptionSegment.c)
 *     sub_1407D20A4 @ 0x1407D20A4 (sub_1407D20A4.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2138 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2280 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D2410 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E05A0 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_1407E103C @ 0x1407E103C (sub_1407E103C.c)
 */

signed __int64 __fastcall sub_1407D2580(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_1407E103C((PVOID)a1);
  }
  return v1;
}
