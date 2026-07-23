/*
 * XREFs of SeExamineSacl @ 0x1409CAE50
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1407225F4 @ 0x1407225F4 (sub_1407225F4.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     sub_140918574 @ 0x140918574 (sub_140918574.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14021F640 @ 0x14021F640 (sub_14021F640.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  PBOOLEAN v8; // r14
  unsigned int v9; // r13d
  _DWORD *v10; // r10
  PBOOLEAN v11; // rax
  PACL v12; // r8
  unsigned int AceCount; // edi
  BOOLEAN v15; // r12
  char v16; // si
  _WORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // edx
  PACL v20; // rbx
  char Sbz1; // di
  ACL *v22; // r15
  unsigned int v23; // r11d
  int v24; // eax
  unsigned int v25; // ecx
  _QWORD *v26; // rax
  void *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r10
  int v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  __int64 v33[10]; // [rsp+68h] [rbp-50h] BYREF
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  PACL v35; // [rsp+C8h] [rbp+10h]
  _DWORD *v36; // [rsp+D0h] [rbp+18h]
  ACCESS_MASK v37; // [rsp+D8h] [rbp+20h]

  v37 = DesiredAccess;
  v36 = Token;
  v35 = ResourceSacl;
  v34 = -1;
  v7 = 0LL;
  v8 = GenerateAudit;
  v9 = 0;
  v33[0] = 0LL;
  v10 = Token;
  v11 = GenerateAlarm;
  v12 = ResourceSacl;
  *GenerateAudit = 0;
  *v11 = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    v32 = AceCount;
    if ( Sacl->AceCount )
    {
      v15 = AccessGranted;
      v16 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v16 = AccessGranted != 0 ? 64 : 0x80;
      v17 = (_WORD *)**((_QWORD **)v10 + 19);
      if ( *v17 == *(_WORD *)qword_140D3CA60 )
      {
        v18 = memcmp(v17, qword_140D3CA60, 4LL * *((unsigned __int8 *)qword_140D3CA60 + 1) + 8);
        v10 = v36;
        v12 = v35;
        if ( !v18 )
          v9 = 4 * *((unsigned __int8 *)qword_140C5AFA8 + 1) + 8;
      }
      v19 = 0;
      v20 = Sacl + 1;
      LODWORD(GenerateAudit) = 0;
      if ( AceCount )
      {
        while ( 1 )
        {
          if ( *v8 )
          {
LABEL_42:
            if ( v7 )
            {
              sub_14028AB90(v7);
              ExFreePoolWithTag(v7, 0);
            }
            return;
          }
          Sbz1 = v20->Sbz1;
          if ( (Sbz1 & 8) == 0 )
            break;
LABEL_41:
          ++v19;
          v10 = v36;
          v20 = (PACL)((char *)v20 + v20->AclSize);
          v12 = v35;
          LODWORD(GenerateAudit) = v19;
          if ( v19 >= v32 )
            goto LABEL_42;
        }
        if ( v20->AclRevision == 2 )
        {
          LOBYTE(DesiredAccess) = 1;
          if ( !(unsigned __int8)sub_14021F640((__int64)v10, 0LL, (__int64)&v20[1], *(__int64 *)&DesiredAccess, 0, 0)
            && (!v9 || *(_WORD *)qword_140C5AFA8 != *(_WORD *)&v20[1].AclRevision
                    || memcmp(qword_140C5AFA8, &v20[1], v9)) )
          {
            goto LABEL_40;
          }
          if ( (*(_DWORD *)&v20->AceCount & v37) == 0 )
          {
            v19 = (unsigned int)GenerateAudit;
            if ( ((unsigned __int8)v16 & (unsigned __int8)Sbz1) != 0 )
              *v8 = 1;
            goto LABEL_41;
          }
        }
        else
        {
          if ( v20->AclRevision != 13 )
            goto LABEL_41;
          v22 = v20 + 1;
          v23 = 4 * v20[1].Sbz1 + 8;
          v24 = *(_DWORD *)&v20->AceCount;
          LODWORD(GenerateAlarm) = v23;
          v31 = v24;
          if ( v12 && !v7 )
          {
            sub_140218B60((__int64)v12, v33);
            v23 = (unsigned int)GenerateAlarm;
            v19 = (unsigned int)GenerateAudit;
            v7 = (_DWORD *)v33[0];
          }
          v25 = v20->AclSize - v23;
          if ( (int)(v25 - 8) <= 0 )
            goto LABEL_41;
          v26 = (_QWORD *)*((_QWORD *)v36 + 137);
          if ( v26 )
          {
            v27 = (void *)v26[72];
            v28 = v26[74];
            v29 = v26[73];
            v30 = v26[75];
          }
          else
          {
            v27 = 0LL;
            v28 = 0LL;
            v29 = 0LL;
            v30 = 0LL;
          }
          sub_140219130(
            v36,
            *((void **)v36 + 97),
            v7,
            v27,
            v28,
            v29,
            v30,
            (ACL *)((char *)v22 + v23),
            v25 - 8,
            1,
            0,
            &v34);
          if ( ((v34 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_40;
          LOBYTE(DesiredAccess) = 1;
          if ( !(unsigned __int8)sub_14021F640((__int64)v36, 0LL, (__int64)&v20[1], *(__int64 *)&DesiredAccess, 0, 0)
            && (!v9 || *(_WORD *)qword_140C5AFA8 != *(_WORD *)&v22->AclRevision || memcmp(qword_140C5AFA8, &v20[1], v9)) )
          {
            goto LABEL_40;
          }
          if ( (v37 & v31) == 0 )
          {
            if ( ((unsigned __int8)v16 & (unsigned __int8)Sbz1) == 0 )
            {
LABEL_40:
              v19 = (unsigned int)GenerateAudit;
              goto LABEL_41;
            }
LABEL_39:
            *v8 = 1;
            goto LABEL_40;
          }
        }
        if ( ((Sbz1 & 0x40) == 0 || !v15) && (Sbz1 >= 0 || v15) )
          goto LABEL_40;
        goto LABEL_39;
      }
    }
  }
}
