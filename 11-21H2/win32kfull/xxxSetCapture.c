/*
 * XREFs of xxxSetCapture @ 0x1C00AA44C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserSetCapture @ 0x1C00AA3B0 (NtUserSetCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0244970 (xxxIsDragging.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 */

__int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v1 + 388) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) == v1)
    && ((v2 = *(__int64 **)(v1 + 104)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && HMValidateHandleNoSecure(v3, 1)) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
