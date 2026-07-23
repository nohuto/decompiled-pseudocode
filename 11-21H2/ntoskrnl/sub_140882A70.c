/*
 * XREFs of sub_140882A70 @ 0x140882A70
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1407225F4 @ 0x1407225F4 (sub_1407225F4.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     sub_140918574 @ 0x140918574 (sub_140918574.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_140882B96 @ 0x140882B96 (sub_140882B96.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 */

void __fastcall sub_140882A70(
        __int64 a1,
        ACL *a2,
        void *a3,
        ACCESS_MASK a4,
        BOOLEAN AccessGranted,
        __int64 GenerateAudit,
        char *a7)
{
  char *v7; // rdi
  char v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN GenerateAlarm[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = (char *)GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*(_BYTE *)GenerateAudit )
  {
    GenerateAudit = 0LL;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140CF6650, 1u);
    if ( (int)sub_140882B96(&GenerateAudit, 0LL, a1, 0LL) >= 0 )
    {
      v14 = *(ACL **)(GenerateAudit + 24);
      if ( v14 )
      {
        LOBYTE(GenerateAudit) = 0;
        GenerateAlarm[0] = 0;
        SeExamineSacl(v14, a2, a3, a4, AccessGranted, (PBOOLEAN)&GenerateAudit, GenerateAlarm);
        if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
          v15 = 1;
        *v7 = v15;
        if ( a7 )
        {
          if ( *a7 || GenerateAlarm[0] )
            v8 = 1;
          *a7 = v8;
        }
      }
    }
    ExReleaseResourceLite(&stru_140CF6650);
    KeLeaveCriticalRegion();
  }
}
