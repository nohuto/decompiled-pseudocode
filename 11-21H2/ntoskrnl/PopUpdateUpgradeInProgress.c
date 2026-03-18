/*
 * XREFs of PopUpdateUpgradeInProgress @ 0x1408620D0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140762A68 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

NTSTATUS __fastcall PopUpdateUpgradeInProgress(HANDLE KeyHandle)
{
  HANDLE v2; // rdi
  NTSTATUS result; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE KeyHandlea; // [rsp+50h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v12; // [rsp+B0h] [rbp+47h]

  ResultLength = 0;
  v12 = 0;
  v2 = KeyHandle;
  KeyHandlea = KeyHandle;
  memset(&ObjectAttributes, 0, 44);
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( result < 0 )
      goto LABEL_8;
    v2 = KeyHandlea;
  }
  RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
  result = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || !HIDWORD(KeyValueInformation) || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    if ( KeyHandle )
    {
      PopAcquirePolicyLock(v4);
      PopRemoveReasonRecordByReasonCode();
      result = PopReleasePolicyLock(v6, v5);
    }
    goto LABEL_8;
  }
  if ( !KeyHandle && (result = PopLogSleepDisabled(15, 8, 0LL, 0LL), result < 0)
    || (*(_QWORD *)PopSetupInProgressUpdateWorkItem = 0LL,
        qword_140C245B0 = (__int64)PopUpdateUpgradeInProgress,
        qword_140C245B8 = (__int64)KeyHandlea,
        result = ZwNotifyChangeKey(
                   KeyHandlea,
                   0LL,
                   PopSetupInProgressUpdateWorkItem,
                   (PVOID)1,
                   &PopSetupInProgressStatusBlock,
                   4u,
                   0,
                   0LL,
                   0,
                   1u),
        result < 0) )
  {
LABEL_8:
    if ( KeyHandlea )
      return ZwClose(KeyHandlea);
  }
  return result;
}
