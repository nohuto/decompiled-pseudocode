/*
 * XREFs of sub_1407225F4 @ 0x1407225F4
 * Callers:
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 * Callees:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     sub_1409C8CBC @ 0x1409C8CBC (sub_1409C8CBC.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 */

_UNKNOWN **__fastcall sub_1407225F4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK DesiredAccess,
        BOOLEAN GenerateAlarm,
        BOOLEAN a7,
        char a8)
{
  _UNKNOWN **result; // rax
  __int64 v11; // r14
  BOOLEAN v12; // si
  void *v13; // r8
  __int16 v14; // ax
  ACL *v15; // rdx
  ACL *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // r8
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  int AccessGranted; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 GenerateAudit; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  GenerateAudit = a1;
  v11 = a2;
  LOBYTE(GenerateAudit) = 0;
  GenerateAlarm = 0;
  if ( !a8 )
    return result;
  if ( !a3 )
    return result;
  v12 = a7;
  LOBYTE(a2) = a7;
  result = (_UNKNOWN **)sub_140724320(120LL, a2, 0LL, a4);
  if ( !(_BYTE)result )
    return result;
  v13 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v13 = *(void **)(a4 + 16);
  v14 = *(_WORD *)(a3 + 2);
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 >= 0 )
    {
      v15 = *(ACL **)(a3 + 24);
    }
    else
    {
      v17 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v17 )
        v15 = (ACL *)(a3 + v17);
      else
        v15 = 0LL;
    }
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(a3 + 24);
      goto LABEL_19;
    }
    v18 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v18 )
    {
      v16 = (ACL *)(a3 + v18);
      goto LABEL_19;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = 0LL;
LABEL_19:
  SeExamineSacl(v16, v15, v13, DesiredAccess, v12, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  v19 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v19 = *(void **)(a4 + 16);
  v20 = *(_WORD *)(a3 + 2);
  if ( (v20 & 0x10) == 0 )
    goto LABEL_25;
  if ( v20 >= 0 )
  {
    v22 = *(_QWORD *)(a3 + 24);
    goto LABEL_27;
  }
  v21 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v21 )
    v22 = a3 + v21;
  else
LABEL_25:
    v22 = 0LL;
LABEL_27:
  LOBYTE(AccessGranted) = v12;
  result = (_UNKNOWN **)sub_140882A70(
                          qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)]
                        + 16,
                          v22,
                          v19,
                          DesiredAccess,
                          AccessGranted,
                          &GenerateAudit,
                          &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v23) = v12;
    return (_UNKNOWN **)sub_1409C8CBC(v11, a4, DesiredAccess, v23);
  }
  return result;
}
