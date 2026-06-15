/*
 * XREFs of __tailMerge_umpdc_dll @ 0x180068DD9
 * Callers:
 *     __imp_load_Pdcv2ActivationClientRegister @ 0x180068DCD (__imp_load_Pdcv2ActivationClientRegister.c)
 *     __imp_load_Pdcv2ActivationClientUnregister @ 0x180068E58 (__imp_load_Pdcv2ActivationClientUnregister.c)
 *     __imp_load_Pdcv2ActivationClientActivate @ 0x180068E6A (__imp_load_Pdcv2ActivationClientActivate.c)
 *     __imp_load_Pdcv2ActivationClientSetBrokeredProcessId @ 0x180068E7C (__imp_load_Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     __imp_load_Pdcv2ActivationClientDeactivate @ 0x180068E8E (__imp_load_Pdcv2ActivationClientDeactivate.c)
 *     __imp_load_Pdcv2ActivationClientRenewActivation @ 0x180068EA0 (__imp_load_Pdcv2ActivationClientRenewActivation.c)
 *     __imp_load_SleepstudyHelperBlockerActiveDereference @ 0x180068EB2 (__imp_load_SleepstudyHelperBlockerActiveDereference.c)
 *     __imp_load_SleepstudyHelperCreateLibrary @ 0x180068EC4 (__imp_load_SleepstudyHelperCreateLibrary.c)
 *     __imp_load_SleepstudyHelperCreateBlockerFromGuid @ 0x180068ED6 (__imp_load_SleepstudyHelperCreateBlockerFromGuid.c)
 *     __imp_load_SleepstudyHelperBuildBlocker @ 0x180068EE8 (__imp_load_SleepstudyHelperBuildBlocker.c)
 *     __imp_load_SleepstudyHelperSetBlockerParentHandle @ 0x180068EFA (__imp_load_SleepstudyHelperSetBlockerParentHandle.c)
 *     __imp_load_SleepstudyHelperBlockerActiveReference @ 0x180068F0C (__imp_load_SleepstudyHelperBlockerActiveReference.c)
 *     __imp_load_SleepstudyHelperDestroyBlockerBuilder @ 0x180068F1E (__imp_load_SleepstudyHelperDestroyBlockerBuilder.c)
 *     __imp_load_SleepstudyHelperDestroyLibrary @ 0x180068F30 (__imp_load_SleepstudyHelperDestroyLibrary.c)
 *     __imp_load_SleepstudyHelperDestroyBlocker @ 0x180068F42 (__imp_load_SleepstudyHelperDestroyBlocker.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054F90 (__delayLoadHelper2.c)
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
