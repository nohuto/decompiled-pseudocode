/*
 * XREFs of SeExamineSacl @ 0x1408A64A0
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x1406C3200 (SeObjectReferenceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF750 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140862CE0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeExamineGlobalSacl @ 0x1408A695A (SeExamineGlobalSacl.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1BB18 (CmpExamineSaclForAuditEvent.c)
 * Callees:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140225344 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022C050 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepSidInToken @ 0x14035C35C (SepSidInToken.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v7; // rbp
  _QWORD **v9; // r13
  __int64 v10; // r8
  PACL v11; // r10
  char v13; // si
  PSID v14; // rdx
  _WORD *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  PACL v18; // rbx
  char Sbz1; // di
  ACL *v20; // r15
  unsigned int v21; // r13d
  signed int v22; // r10d
  _QWORD *v23; // rax
  void *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+60h] [rbp-58h] BYREF
  unsigned int AceCount; // [rsp+64h] [rbp-54h]
  __int64 v31[10]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int Size; // [rsp+C0h] [rbp+8h]
  unsigned int GenerateAudita; // [rsp+E8h] [rbp+30h]
  int GenerateAlarma; // [rsp+F0h] [rbp+38h]

  v29 = -1;
  v7 = 0LL;
  v9 = (_QWORD **)Token;
  v10 = 0LL;
  v31[0] = 0LL;
  v11 = ResourceSacl;
  Size = 0;
  *GenerateAudit = 0;
  *GenerateAlarm = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    if ( AceCount )
    {
      v13 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v13 = AccessGranted != 0 ? 64 : 0x80;
      v14 = SeAnonymousLogonSid;
      v15 = (_WORD *)*v9[19];
      if ( *v15 == *(_WORD *)SeAnonymousLogonSid )
      {
        v16 = memcmp(v15, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v11 = ResourceSacl;
        if ( !v16 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v17 = 0;
      v18 = Sacl + 1;
      GenerateAudita = 0;
      while ( 1 )
      {
        if ( *GenerateAudit )
        {
LABEL_24:
          if ( v7 )
          {
            AuthzBasepFreeSecurityAttributesList(v7, (__int64)v14, v10, *(__int64 *)&DesiredAccess);
            ExFreePoolWithTag(v7, 0);
          }
          return;
        }
        Sbz1 = v18->Sbz1;
        if ( (Sbz1 & 8) == 0 )
          break;
LABEL_23:
        ++v17;
        v11 = ResourceSacl;
        v18 = (PACL)((char *)v18 + v18->AclSize);
        GenerateAudita = v17;
        if ( v17 >= AceCount )
          goto LABEL_24;
      }
      if ( v18->AclRevision == 2 )
      {
        if ( !SepSidInToken((__int64)v9, 0LL, (unsigned __int8 *)&v18[1], 1, 0, 0) )
        {
          v10 = Size;
          if ( !Size || *(_WORD *)SeWorldSid != *(_WORD *)&v18[1].AclRevision || memcmp(SeWorldSid, &v18[1], Size) )
            goto LABEL_22;
        }
        if ( (*(_DWORD *)&v18->AceCount & DesiredAccess) == 0 )
        {
          v17 = GenerateAudita;
          if ( ((unsigned __int8)v13 & (unsigned __int8)Sbz1) != 0 )
            *GenerateAudit = 1;
          goto LABEL_23;
        }
      }
      else
      {
        if ( v18->AclRevision != 13 )
          goto LABEL_23;
        v20 = v18 + 1;
        v21 = 4 * v18[1].Sbz1 + 8;
        GenerateAlarma = *(_DWORD *)&v18->AceCount;
        if ( v11 && !v7 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl((__int64)v11, v31);
          v17 = GenerateAudita;
          v7 = (_DWORD *)v31[0];
        }
        v22 = v18->AclSize - v21 - 8;
        if ( v22 <= 0 )
        {
          v9 = (_QWORD **)Token;
          goto LABEL_23;
        }
        v23 = (_QWORD *)*((_QWORD *)Token + 137);
        if ( v23 )
        {
          v24 = (void *)v23[72];
          v25 = v23[74];
          v26 = v23[73];
          v27 = v23[75];
        }
        else
        {
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
        }
        v28 = v21;
        v9 = (_QWORD **)Token;
        AuthzBasepEvaluateAceCondition(
          Token,
          *((void **)Token + 97),
          v7,
          v24,
          v25,
          v26,
          v27,
          (ACL *)((char *)v20 + v28),
          v22,
          1u,
          0,
          &v29);
        if ( ((v29 + 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_22;
        if ( !SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)&v18[1], 1, 0, 0) )
        {
          v10 = Size;
          if ( !Size || *(_WORD *)SeWorldSid != *(_WORD *)&v20->AclRevision || memcmp(SeWorldSid, &v18[1], Size) )
            goto LABEL_22;
        }
        if ( (DesiredAccess & GenerateAlarma) == 0 )
        {
          if ( ((unsigned __int8)v13 & (unsigned __int8)Sbz1) == 0 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
      if ( ((Sbz1 & 0x40) == 0 || !AccessGranted) && (Sbz1 >= 0 || AccessGranted) )
        goto LABEL_22;
LABEL_21:
      *GenerateAudit = 1;
LABEL_22:
      v17 = GenerateAudita;
      goto LABEL_23;
    }
  }
}
