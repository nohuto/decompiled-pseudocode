/*
 * XREFs of sub_140205B1C @ 0x140205B1C
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140673A24 @ 0x140673A24 (sub_140673A24.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140205B1C(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  int v6; // eax
  NTSTATUS v9; // ebx
  void *v10; // r12
  _BYTE *v11; // rdi
  __int64 v12; // r9
  __int16 v13; // ax
  __int64 v14; // rax
  ACL *v15; // rcx
  char *AceByType; // rax
  _BYTE *Pool2; // rax
  void *v19; // r14
  void **v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // r8
  __int64 v27; // r11
  __int64 v28; // r10
  int v29; // ecx
  unsigned int v30; // r14d
  __int64 v31; // r9
  int v32; // edx
  unsigned int v33; // eax
  int v34; // eax
  _QWORD *v35; // rcx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // [rsp+34h] [rbp-95h] BYREF
  _QWORD *v41; // [rsp+38h] [rbp-91h]
  void *v42; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  v41 = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 2172);
  v42 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  v9 = PsReferenceProcessFilePointer(a3, &v42);
  if ( v9 < 0 || (v40 = 128, v11 = SecurityDescriptor, v9 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u), v9 < 0) )
  {
    v10 = v42;
    goto LABEL_15;
  }
  v10 = v42;
  v9 = sub_140673A24((_DWORD)v42, 16, (unsigned int)SecurityDescriptor, 128, (__int64)&v40);
  if ( v9 != -1073741789 )
  {
LABEL_6:
    if ( v9 >= 0 && v11 )
    {
      v13 = *((_WORD *)v11 + 1);
      if ( (v13 & 0x10) != 0 )
      {
        if ( v13 >= 0 )
        {
          v15 = (ACL *)*((_QWORD *)v11 + 3);
LABEL_12:
          AceByType = (char *)RtlFindAceByType(v15, 0x11u, 0LL);
          if ( AceByType )
          {
            v19 = AceByType + 8;
            v20 = (void **)sub_1402ED9BC(a2);
            if ( v20 )
            {
              v9 = sub_1402ED880(*v20, v19);
              if ( v9 < 0 )
                goto LABEL_15;
            }
            v5 = v41;
            v4 = 0;
          }
          goto LABEL_13;
        }
        v14 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v14 )
        {
          v15 = (ACL *)&v11[v14];
          goto LABEL_12;
        }
      }
      v15 = 0LL;
      goto LABEL_12;
    }
    v9 = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v21 = sub_1402ED9BC(a2);
        v22 = (_QWORD *)v21;
        if ( v21 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v23 )
          {
            v27 = sub_1402ED9BC(v23);
            if ( v27 )
            {
              v28 = *v26;
              v29 = *(unsigned __int8 *)(*v26 + 1);
              v30 = (_BYTE)v29 ? *(_DWORD *)(v28 + 4LL * (unsigned int)(v29 - 1) + 8) : 0;
              v31 = *(_QWORD *)v27;
              v32 = *(unsigned __int8 *)(*(_QWORD *)v27 + 1LL);
              if ( (_BYTE)v32 )
              {
                v4 = *(unsigned __int8 *)(*(_QWORD *)v27 + 1LL);
                v33 = *(_DWORD *)(v31 + 4LL * (unsigned int)(v32 - 1) + 8);
              }
              else
              {
                v33 = 0;
              }
              if ( v30 > v33 )
              {
                if ( (_BYTE)v32 )
                  v34 = *(_DWORD *)(v31 + 4LL * (unsigned int)(v4 - 1) + 8);
                else
                  v34 = 0;
                v35 = v41;
                *(_DWORD *)(v28 + 8) = v34;
                *v35 = *v26;
                v36 = *(unsigned __int8 *)(*(_QWORD *)v27 + 1LL);
                if ( (_BYTE)v36 )
                  v37 = *(_DWORD *)(*(_QWORD *)v27 + 4LL * (unsigned int)(v36 - 1) + 8);
                else
                  v37 = 0;
                v38 = *(_DWORD *)(a2 + 200);
                if ( v37 >= 0x2000 )
                  v39 = v38 | 0x2000;
                else
                  v39 = v38 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v39;
              }
            }
          }
          else
          {
            v24 = *(_QWORD *)v21;
            v25 = *(unsigned __int8 *)(*(_QWORD *)v21 + 1LL);
            if ( (_BYTE)v25 && *(_DWORD *)(v24 + 4LL * (unsigned int)(v25 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v24 + 8) = 0x2000;
              *v5 = *v22;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, v40, 538994003LL, v12);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741801;
    goto LABEL_15;
  }
  v9 = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( v9 >= 0 )
  {
    v9 = sub_140673A24((_DWORD)v10, 16, (_DWORD)v11, v40, (__int64)&v40);
    goto LABEL_6;
  }
LABEL_15:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v9;
}
