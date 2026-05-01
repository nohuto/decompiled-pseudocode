/*
 * XREFs of ?weak_from_this@?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@QEAA?AV?$weak_ptr@VCAppThumbnailWindow@@@2@XZ @ 0x18055D1B0
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::enable_shared_from_this<CAppThumbnailWindow>::weak_from_this(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a1[1];
  if ( v2 )
  {
    *a2 = *a1;
    a2[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a2;
}
