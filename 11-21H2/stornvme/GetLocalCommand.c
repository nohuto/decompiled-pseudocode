/*
 * XREFs of GetLocalCommand @ 0x1C000A538
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C000F9E0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x1C001F0E0 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x1C00238F0 (NVMeReConfigAsyncEventCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v5; // edx

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return *(_QWORD *)(GetSrbExtension(a2) + 4232);
  if ( a2 == a1 + 864 )
    return a1 + 856;
  v5 = 0;
  while ( a2 != 112LL * v5 + a1 + 976 )
  {
    if ( ++v5 >= 6 )
      return v2;
  }
  return 112LL * v5 + a1 + 968;
}
