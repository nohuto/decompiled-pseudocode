/*
 * XREFs of sub_140605200 @ 0x140605200
 * Callers:
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN sub_140605200()
{
  dword_140C18F4C = dword_140C18FD4;
  dword_140C18F50 = dword_140C18FD8;
  dword_140C18F48 = (unsigned __int16)NtBuildNumber;
  dword_140C18F20 = 1;
  dword_140C18F24 = 128;
  qword_140C18F54 = qword_140C1A7E0;
  stru_140C18FA0.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &stru_140C18FA0,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_140373150,
           KbCallbackSecondaryDumpData,
           &byte_140C0B8B8);
}
