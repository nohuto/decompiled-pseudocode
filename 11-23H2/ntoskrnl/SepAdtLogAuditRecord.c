/*
 * XREFs of SepAdtLogAuditRecord @ 0x14039B780
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140226B80 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C336C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C84D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditBootConfiguration @ 0x14084058C (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x140840AA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA5D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409CA79C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409CA990 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x1409CAF14 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB098 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB260 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB49C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB7D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBA04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1409CBC50 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409CBD44 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409CBF3C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC168 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1409CCA04 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCC40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCEEC (SepAdtStagingEvent.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x1403095B0 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x14031CB28 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x14039B8D4 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B96DC (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409CBD44 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // r14
  int v8; // r15d
  _DWORD *v9; // rbp
  unsigned int v10; // ecx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-68h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+28h] [rbp-60h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3, 64LL, 1765893459LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_DWORD *)(Pool2 + 20) = 1;
    *(_DWORD *)(Pool2 + 32) = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v14 = *(void **)(v5 + 56);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      v9 = Src + 1;
      if ( Src[1] == 521 )
        goto LABEL_13;
      v13 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v9 = Src + 1;
      v10 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v10;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v10 <= 0x1D0 )
        {
          memset(&v16, 0, sizeof(v16));
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)&v16);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess(&v16);
        }
        goto LABEL_13;
      }
      v15[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v15) )
        goto LABEL_13;
      v12 = *(void **)(v5 + 56);
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v15[0] )
        goto LABEL_13;
      v13 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v13);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && *v9 != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    v11 = *(void **)(v5 + 56);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
