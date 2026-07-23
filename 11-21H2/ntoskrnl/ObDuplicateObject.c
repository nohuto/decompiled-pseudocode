/*
 * XREFs of ObDuplicateObject @ 0x1407A1F80
 * Callers:
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     sub_14066F1F0 @ 0x14066F1F0 (sub_14066F1F0.c)
 *     sub_140672D48 @ 0x140672D48 (sub_140672D48.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     NtDuplicateObject @ 0x1407A1DC0 (NtDuplicateObject.c)
 *     sub_14091972C @ 0x14091972C (sub_14091972C.c)
 *     sub_140927AE4 @ 0x140927AE4 (sub_140927AE4.c)
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140669830 @ 0x140669830 (sub_140669830.c)
 *     sub_1406BC8F0 @ 0x1406BC8F0 (sub_1406BC8F0.c)
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     sub_1407A28C0 @ 0x1407A28C0 (sub_1407A28C0.c)
 *     sub_1407A2BDC @ 0x1407A2BDC (sub_1407A2BDC.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_14088204C @ 0x14088204C (sub_14088204C.c)
 *     sub_1409C750C @ 0x1409C750C (sub_1409C750C.c)
 *     sub_1409E1FA0 @ 0x1409E1FA0 (sub_1409E1FA0.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 */

__int64 __fastcall ObDuplicateObject(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        PEPROCESS a3,
        unsigned __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  __int64 ClientToken; // rsi
  unsigned int v12; // edi
  char v13; // r12
  int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r15d
  int v21; // edi
  int v22; // r14d
  __int64 v23; // rdi
  int v24; // eax
  struct _ACCESS_STATE *v25; // rdi
  char v26; // bl
  int v27; // r15d
  ULONG_PTR v28; // rbx
  char v29; // r15
  char v30; // r12
  ACCESS_MASK v31; // edx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  _QWORD *v36; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v37; // rdi
  ULONG_PTR v38; // rbx
  int v39; // r12d
  int v40; // esi
  __int64 v42; // r9
  PVOID v43; // rbx
  __int64 v44; // r15
  void *v45; // r8
  unsigned int v46; // ebx
  ULONG_PTR v47; // rcx
  char *v48; // rax
  char v49; // al
  __int64 v50; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  int v53; // [rsp+44h] [rbp-BCh]
  ACCESS_MASK v54; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h]
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+70h] [rbp-90h] BYREF
  ACCESS_MASK v60; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h] BYREF
  struct _ACCESS_STATE *v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  _QWORD v65[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF *v66; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v70; // [rsp+D0h] [rbp-30h]
  _OWORD v71[3]; // [rsp+D8h] [rbp-28h] BYREF
  struct _ACCESS_STATE v72; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v73[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  Handle = a2;
  BugCheckParameter1a = BugCheckParameter1;
  v70 = a4;
  memset(v71, 0, sizeof(v71));
  memset(v73, 0, sizeof(v73));
  ClientToken = 0LL;
  v62 = 0LL;
  memset(&v72, 0, sizeof(v72));
  v57 = 0LL;
  Object = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v12 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v13 = a7;
  v14 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  if ( a3 )
  {
    if ( ((*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 || (*((_BYTE *)a3 + 992) & 1) != 0)
      && (BugCheckParameter1 != *((_QWORD *)KeGetCurrentThread() + 23) || a3 != *((PEPROCESS *)KeGetCurrentThread() + 23)) )
    {
      return 3221225506LL;
    }
  }
  else if ( (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
  {
    return 3221225506LL;
  }
  v66 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
    return 3221225738LL;
  v15 = *(_QWORD *)(BugCheckParameter1 + 1392);
  if ( !v15 )
  {
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    return 3221225738LL;
  }
  v52 = sub_1407A2680(
          (_DWORD)Handle,
          BugCheckParameter1,
          v15,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v62,
          (__int64)&v57);
  if ( v52 < 0 )
  {
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    return (unsigned int)v52;
  }
  v17 = v62;
  if ( (v62 & 4) == 0 )
    LODWORD(v57) = 0;
  if ( !a3 )
  {
    if ( (v13 & 1) != 0 )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v71, v16);
      NtClose(Handle);
      sub_1402D0930((__int64)v71, 0LL);
      v46 = v52;
    }
    else
    {
      v46 = -1073741811;
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v46;
  }
  v59 = (struct _EX_RUNDOWN_REF *)((char *)a3 + 1112);
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)a3 + 139) )
  {
LABEL_93:
    if ( (v13 & 1) != 0 )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v71, v18);
      NtClose(Handle);
      sub_1402D0930((__int64)v71, 0LL);
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v19 = *((_QWORD *)a3 + 174);
  v69 = v19;
  if ( !v19 )
  {
    sub_1402AD030(v59);
    goto LABEL_93;
  }
  v51 = v19 == qword_140C24F88;
  v20 = HIDWORD(v62);
  if ( v14 )
    AccessMask = HIDWORD(v62);
  if ( (v13 & 4) != 0 )
    v21 = v17;
  else
    v21 = v17 & 0xC | v12;
  v22 = v21 | 8;
  if ( (v13 & 8) == 0 )
    v22 = v21;
  v61 = (unsigned __int64)Object - 48;
  v23 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v61 + 24) ^ (unsigned __int64)BYTE1(v61)];
  v64 = v23;
  if ( (AccessMask & 0xF0000000) != 0 )
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v23 + 76));
  v24 = *(_DWORD *)(v23 + 92) | 0x1000000;
  v63 = 0LL;
  v25 = 0LL;
  v54 = AccessMask & v24;
  if ( (~v20 & AccessMask & v24) == 0 )
  {
    v26 = 0;
LABEL_26:
    v27 = sub_140733B40(2u, (__int64)&v54, (ULONG_PTR)a3, (__int64)Object, a8, v22, 0LL);
    v53 = v27;
    goto LABEL_27;
  }
  if ( (v17 & 8) != 0
    || (v44 = v64,
        *(__int64 (__fastcall **)(void *, int, DWORD *, char *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v64 + 152) != sub_140725080) )
  {
    v27 = -1073741790;
    v53 = -1073741790;
    goto LABEL_29;
  }
  if ( *((PEPROCESS *)KeGetCurrentThread() + 23) == a3 )
  {
    v26 = 0;
  }
  else
  {
    sub_14030D5C0((ULONG_PTR)a3, 0LL, (__int64)v71, v18);
    v26 = 1;
  }
  SeCreateAccessState((int)&v72, (int)v73, v54, v44 + 76);
  v25 = &v72;
  LODWORD(v50) = v22;
  v63 = &v72;
  v53 = sub_140669830(2, Object, &v72, a8, v50, &v54);
  v27 = v53;
  if ( v53 >= 0 )
    goto LABEL_26;
LABEL_27:
  if ( v26 )
    sub_1402D0930((__int64)v71, 0LL);
LABEL_29:
  v28 = BugCheckParameter1a;
  if ( (v13 & 1) != 0 )
  {
    sub_14030D5C0(BugCheckParameter1a, 0LL, (__int64)v71, v18);
    v29 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( (dword_140C29FC0 & 0x100) != 0 && !v29 && !sub_1402F3558((unsigned __int64)Handle, 0) )
      sub_140A9466C(v47);
    sub_140734160((__int64)Handle, v29);
    sub_1402D0930((__int64)v71, 0LL);
    v27 = v53;
  }
  if ( v27 < 0 )
  {
    if ( v25 )
    {
      sub_1403478A0((__int64)v25);
      SeReleaseSubjectContext(&v25->SubjectSecurityContext);
    }
    sub_1402AD030(v66);
    sub_1402AD030(v59);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v27;
  }
  else
  {
    v30 = v22;
    if ( v25 && v25->GenerateOnClose )
    {
      v30 = v22 | 4;
      LODWORD(v57) = *((_DWORD *)v25->AuxData + 7);
    }
    v65[1] = v65;
    v65[0] = v65;
    if ( (*(_BYTE *)(v64 + 66) & 0x40) == 0 || *(_QWORD *)(v64 + 200) == v64 + 200 )
      goto LABEL_35;
    v42 = v28;
    v43 = Object;
    v60 = v54;
    v53 = sub_1406BC8F0((__int64)Object, v51, (int *)&v60, v42, (__int64)a3, (__int64)v65);
    if ( v53 >= 0 )
    {
      if ( !v51 )
        v54 = v60;
LABEL_35:
      v31 = v54 & 0x1FFFFFF;
      v68 = 0LL;
      if ( (v30 & 8) != 0 )
        v31 |= 0x2000000u;
      CurrentThread = KeGetCurrentThread();
      LODWORD(v68) = v31;
      v67 = ((v61 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v30 & 7) << 17) | 1;
      --*((_WORD *)CurrentThread + 242);
      v33 = v69;
      v59 = 0LL;
      v34 = sub_1407A28C0(v69, &v59);
      v35 = (unsigned __int64)v59;
      v36 = (_QWORD *)v34;
      if ( v34 )
      {
        if ( v57 && (unsigned int)sub_1409F9244(v33, v59, &v57) )
        {
          sub_1407A2BDC(v33, v35, v36);
          v35 = 0LL;
        }
        else
        {
          if ( *(_QWORD *)(v33 + 96) )
            sub_1409F92FC(v33, CurrentThread, v35, 1LL);
          v36[1] = v68;
          *v36 = v67;
        }
      }
      sub_1402AC800((__int64)CurrentThread);
      if ( v35 )
      {
        v37 = (struct _SECURITY_SUBJECT_CONTEXT *)v63;
        if ( v63 )
        {
          v45 = 0LL;
          if ( (*(_BYTE *)(v61 + 26) & 0x20) != 0 )
          {
            v48 = (char *)byte_140C25440[*(_BYTE *)(v61 + 26) & 0x3F];
            if ( v61 != (_QWORD)v48 )
              v45 = *(void **)(v61 - (_QWORD)v48);
          }
          sub_1406CE5F8((__int64)v63, (void *)v35, v45);
        }
        if ( (v30 & 4) != 0 )
        {
          if ( v37 )
          {
            ClientToken = (__int64)v37[1].ClientToken;
            if ( !ClientToken )
              ClientToken = (__int64)v37[1].PrimaryToken;
          }
          v49 = SeAuditingWithTokenForSubcategory(123, ClientToken);
          v38 = BugCheckParameter1a;
          v39 = (int)Handle;
          if ( v49 )
            sub_1409C750C(Handle, v35, BugCheckParameter1a, a3);
        }
        else
        {
          v38 = BugCheckParameter1a;
          v39 = (int)Handle;
        }
        v40 = v53;
      }
      else
      {
        sub_1407A2FA0((ULONG_PTR)a3);
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        v38 = BugCheckParameter1a;
        v40 = -1073741670;
        v37 = (struct _SECURITY_SUBJECT_CONTEXT *)v63;
        v39 = (int)Handle;
      }
      if ( v51 )
        v35 |= 0xFFFFFFFF80000000uLL;
      if ( v70 )
        *v70 = v35;
      if ( v37 )
      {
        sub_1403478A0((__int64)v37);
        SeReleaseSubjectContext(v37 + 1);
      }
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(v38 + 1112));
      sub_1402AD030((struct _EX_RUNDOWN_REF *)a3 + 139);
      if ( (_QWORD *)v65[0] != v65 )
        sub_14088204C((_DWORD)Object, v51, v40, v54, (__int64)v65);
      if ( (xmmword_140D06910 & 0x40) != 0 && v40 >= 0 )
        sub_1409E1FA0(v39, v35, (_DWORD)Object, *(_DWORD *)(v38 + 1088), *((_DWORD *)a3 + 272), v64);
      return (unsigned int)v40;
    }
    sub_1407A2FA0((ULONG_PTR)a3);
    if ( v25 )
    {
      sub_1403478A0((__int64)v25);
      SeReleaseSubjectContext(&v25->SubjectSecurityContext);
    }
    sub_1402AD030(v66);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)a3 + 139);
    ObfDereferenceObjectWithTag(v43, 0x6E48624Fu);
    return (unsigned int)v53;
  }
}
