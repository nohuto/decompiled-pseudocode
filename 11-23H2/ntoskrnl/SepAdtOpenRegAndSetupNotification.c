/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140841FF4
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B60D40 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x1407F55D8 (SepRegOpenKey.c)
 */

int SepAdtOpenRegAndSetupNotification()
{
  int result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140D16C98 = (__int64)SepAdtRegNotificationCallback;
    qword_140D16CA0 = 0LL;
    SepAdtLsaRegWatchWorkItem[0] = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             (PIO_APC_ROUTINE)SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
