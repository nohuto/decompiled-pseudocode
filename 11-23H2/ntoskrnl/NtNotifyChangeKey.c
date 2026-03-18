/*
 * XREFs of NtNotifyChangeKey @ 0x1407677F0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC030 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x140801330 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841CF4 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F85A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        void *a1,
        void *a2,
        void (__stdcall *a3)(POPLOCK Oplock),
        __int64 a4,
        NTSTATUS *a5,
        unsigned int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0LL, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
