/*
 * XREFs of CarpBugcheckInit @ 0x1405D58D4
 * Callers:
 *     CarInit @ 0x1405D3D04 (CarInit.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140354A70 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN CarpBugcheckInit()
{
  dword_140C34FAC = CarTipTag;
  dword_140C34FB0 = CarTriageContext;
  dword_140C34FA8 = (unsigned __int16)NtBuildNumber;
  CarViolationSnapshot = 1;
  dword_140C34F84 = 128;
  qword_140C34FB4 = CarRuleClasses;
  CarBugCheckCallback.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &CarBugCheckCallback,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CarpSecondaryDataCallback,
           KbCallbackSecondaryDumpData,
           &CarComponentName);
}
