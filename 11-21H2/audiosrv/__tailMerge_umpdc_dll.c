/*
 * XREFs of __tailMerge_umpdc_dll @ 0x180060B83
 * Callers:
 *     __imp_load_Pdcv2ActivationClientRegister @ 0x180060B77 (__imp_load_Pdcv2ActivationClientRegister.c)
 *     __imp_load_Pdcv2ActivationClientUnregister @ 0x180060C02 (__imp_load_Pdcv2ActivationClientUnregister.c)
 *     __imp_load_Pdcv2ActivationClientActivate @ 0x180060C14 (__imp_load_Pdcv2ActivationClientActivate.c)
 *     __imp_load_Pdcv2ActivationClientSetBrokeredProcessId @ 0x180060C26 (__imp_load_Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     __imp_load_Pdcv2ActivationClientDeactivate @ 0x180060C38 (__imp_load_Pdcv2ActivationClientDeactivate.c)
 *     __imp_load_Pdcv2ActivationClientRenewActivation @ 0x180060C4A (__imp_load_Pdcv2ActivationClientRenewActivation.c)
 *     __imp_load_SleepstudyHelperBlockerActiveDereference @ 0x180060C5C (__imp_load_SleepstudyHelperBlockerActiveDereference.c)
 *     __imp_load_SleepstudyHelperCreateLibrary @ 0x180060C6E (__imp_load_SleepstudyHelperCreateLibrary.c)
 *     __imp_load_SleepstudyHelperCreateBlockerFromGuid @ 0x180060C80 (__imp_load_SleepstudyHelperCreateBlockerFromGuid.c)
 *     __imp_load_SleepstudyHelperBuildBlocker @ 0x180060C92 (__imp_load_SleepstudyHelperBuildBlocker.c)
 *     __imp_load_SleepstudyHelperSetBlockerParentHandle @ 0x180060CA4 (__imp_load_SleepstudyHelperSetBlockerParentHandle.c)
 *     __imp_load_SleepstudyHelperBlockerActiveReference @ 0x180060CB6 (__imp_load_SleepstudyHelperBlockerActiveReference.c)
 *     __imp_load_SleepstudyHelperDestroyBlockerBuilder @ 0x180060CC8 (__imp_load_SleepstudyHelperDestroyBlockerBuilder.c)
 *     __imp_load_SleepstudyHelperDestroyLibrary @ 0x180060CDA (__imp_load_SleepstudyHelperDestroyLibrary.c)
 *     __imp_load_SleepstudyHelperDestroyBlocker @ 0x180060CEC (__imp_load_SleepstudyHelperDestroyBlocker.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800428C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_umpdc_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_umpdc_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
