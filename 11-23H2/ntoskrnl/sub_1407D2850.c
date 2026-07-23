/*
 * XREFs of sub_1407D2850 @ 0x1407D2850
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1407D21B4 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D2294 (WbDecryptEncryptionSegment.c)
 *     sub_1407D2374 @ 0x1407D2374 (sub_1407D2374.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1407D2550 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D26E0 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1407E0870 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_1407E130C @ 0x1407E130C (sub_1407E130C.c)
 */

signed __int64 __fastcall sub_1407D2850(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_1407E130C((PVOID)a1);
  }
  return v1;
}
