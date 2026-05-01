/*
 * XREFs of wil::scope_exit__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x18069D598
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_84c775889c05b89f12ed6d0ff428b333___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = a2[3];
  result = a1;
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
