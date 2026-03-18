/*
 * XREFs of HalpMiscInitDiscard @ 0x140B27708
 * Callers:
 *     HalpMiscInitSystem @ 0x140A5B550 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  ULONG_PTR MajorVersion; // rcx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpMiscCallbackRecord.State = 0;
  off_140C020D8[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140C020E0[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    &HalpMiscCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)8,
    (PUCHAR)"HAL");
  if ( HalpMiscDebugBreakRequested )
    __debugbreak();
  return 0LL;
}
