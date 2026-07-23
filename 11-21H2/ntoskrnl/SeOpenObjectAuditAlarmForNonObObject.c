/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 */

BOOLEAN __fastcall SeOpenObjectAuditAlarmForNonObObject(
        const int *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        int a7,
        int a8,
        int *a9,
        BOOLEAN GenerateAudit,
        _BYTE *a11)
{
  BOOLEAN v11; // si
  __int64 *v12; // rdi
  unsigned __int16 *v14; // rbx
  BOOLEAN result; // al
  int v17; // r12d
  void *v18; // r8
  __int64 v19; // rbx
  __int16 v20; // ax
  ACL *v21; // rdx
  ACL *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r14d
  unsigned int v26; // ebp
  __int64 v27; // r8
  __int64 v28; // rdx
  __int16 v29; // ax
  __int64 v30; // rax
  int AccessGranted; // [rsp+20h] [rbp-C8h]
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v34; // [rsp+100h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  v11 = GenerateAudit;
  v12 = (__int64 *)a6;
  v14 = a3;
  GenerateAlarm[0] = 0;
  result = sub_140724320(118LL, GenerateAudit, GenerateAudit == 0, a6);
  v17 = a7;
  GenerateAudit = result;
  if ( !result )
    goto LABEL_2;
  v18 = (void *)*v12;
  if ( !*v12 )
    v18 = (void *)v12[2];
  v19 = (__int64)a5;
  v20 = *((_WORD *)a5 + 1);
  if ( (v20 & 0x10) != 0 )
  {
    if ( v20 >= 0 )
    {
      v21 = (ACL *)*((_QWORD *)a5 + 3);
    }
    else
    {
      v23 = a5[3];
      if ( (_DWORD)v23 )
        v21 = (ACL *)((char *)a5 + v23);
      else
        v21 = 0LL;
    }
    if ( v20 >= 0 )
    {
      v22 = (ACL *)*((_QWORD *)a5 + 3);
      goto LABEL_18;
    }
    v24 = a5[3];
    if ( (_DWORD)v24 )
    {
      v22 = (ACL *)((char *)a5 + v24);
      goto LABEL_18;
    }
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 0LL;
LABEL_18:
  v25 = a8;
  v26 = a8 | a7;
  SeExamineSacl(v22, v21, v18, a8 | a7, v11, &GenerateAudit, GenerateAlarm);
  v27 = *v12;
  v28 = 0LL;
  if ( !*v12 )
    v27 = v12[2];
  v29 = *(_WORD *)(v19 + 2);
  if ( (v29 & 0x10) != 0 )
  {
    if ( v29 >= 0 )
    {
      v28 = *(_QWORD *)(v19 + 24);
    }
    else
    {
      v30 = *(unsigned int *)(v19 + 12);
      if ( (_DWORD)v30 )
        v28 = v19 + v30;
    }
  }
  LOBYTE(AccessGranted) = v11;
  result = sub_140882A70(a1, v28, v27, v26, AccessGranted, &GenerateAudit, GenerateAlarm);
  if ( GenerateAudit )
  {
    sub_1409C8EE8(
      118,
      (int)a1,
      (int)&v33,
      (int)v34,
      (__int64)a4,
      (PVOID)v19,
      *v12,
      v12[2],
      v17,
      v25,
      (__int64)a9,
      v11,
      *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    result = (unsigned __int8)a11;
    *a11 = 1;
    return result;
  }
  v14 = v34;
LABEL_2:
  if ( a9 )
  {
    if ( v11 )
      return sub_1407241BC(
               a1,
               v14,
               a4,
               v33,
               *v12,
               v12[2],
               *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
               v17,
               a9,
               v11);
  }
  return result;
}
