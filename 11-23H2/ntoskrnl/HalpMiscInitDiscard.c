/*
 * XREFs of HalpMiscInitDiscard @ 0x140B6A188
 * Callers:
 *     HalpMiscInitSystem @ 0x140A915A0 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140354C10 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  ULONG_PTR MajorVersion; // rcx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpMiscCallbackRecord.State = 0;
  off_140C020E8[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140C020F0[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    &HalpMiscCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    (KBUGCHECK_CALLBACK_REASON)8,
    (PUCHAR)"HAL");
  if ( HalpMiscDebugBreakRequested )
    __debugbreak();
  return 0LL;
}
