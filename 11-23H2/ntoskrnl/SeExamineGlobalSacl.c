/*
 * XREFs of SeExamineGlobalSacl @ 0x1408A670A
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0530 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x1406C31D0 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140862AA0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE160 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1B868 (CmpExamineSaclForAuditEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     SeExamineSacl @ 0x1408A6250 (SeExamineSacl.c)
 *     SepRmGlobalSaclFind @ 0x1408A65B2 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rdi
  BOOLEAN v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN v16[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    GenerateAudit = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind((__int64 **)&GenerateAudit, 0LL, ObjectType, 0) >= 0 )
    {
      v14 = (ACL *)*((_QWORD *)GenerateAudit + 3);
      if ( v14 )
      {
        LOBYTE(GenerateAudit) = 0;
        v16[0] = 0;
        SeExamineSacl(v14, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v16);
        if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
          v15 = 1;
        *v7 = v15;
        if ( GenerateAlarm )
        {
          if ( *GenerateAlarm || v16[0] )
            v8 = 1;
          *GenerateAlarm = v8;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
