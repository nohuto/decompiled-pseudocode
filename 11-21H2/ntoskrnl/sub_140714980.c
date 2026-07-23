/*
 * XREFs of sub_140714980 @ 0x140714980
 * Callers:
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720224 @ 0x140720224 (sub_140720224.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140714980(__int64 a1, _OWORD *a2)
{
  int v3; // edi
  char v4; // r14
  char v5; // r13
  unsigned int v6; // r12d
  char v7; // si
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  signed int v11; // edi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  char *v15; // rsi
  __int64 v16; // rcx
  _PRIVILEGE_SET *v17; // rax
  char v18; // r15
  char *i; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  __int64 v22; // r9
  PVOID v23; // rcx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // [rsp+44h] [rbp-144h]
  char v29; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v32; // [rsp+70h] [rbp-118h] BYREF
  __int64 v33; // [rsp+78h] [rbp-110h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-108h]
  __int64 v35; // [rsp+88h] [rbp-100h]
  __int64 v36; // [rsp+90h] [rbp-F8h]
  _QWORD v37[2]; // [rsp+98h] [rbp-F0h] BYREF
  int v38; // [rsp+A8h] [rbp-E0h]
  __int128 v39; // [rsp+B0h] [rbp-D8h]
  __int128 v40; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-B8h] BYREF
  _OWORD v42[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v43; // [rsp+110h] [rbp-78h]
  __int128 v44; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v45[32]; // [rsp+130h] [rbp-58h] BYREF

  v3 = a1;
  v35 = a1;
  v40 = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v33 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v32 = 0;
  v38 = 0;
  memset(v45, 0, sizeof(v45));
  v36 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v45, 0x20000uLL);
  v5 = 0;
  Object[0] = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  sub_140347770((__int64)&v40);
  v6 = *((char *)KeGetCurrentThread() + 562);
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = sub_140AB46D0();
  if ( !v29 )
  {
    v11 = -1073741431;
    goto LABEL_52;
  }
  LOBYTE(v10) = v6;
  v11 = sub_140AB4630(v3, 2, v9, v10, (__int64)Object, (__int64)&v33);
  v28 = v11;
  if ( v11 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = 1;
  if ( !sub_14023BD3C((__int64)&SubjectContext, (__int64)&v32) )
    goto LABEL_51;
  LOBYTE(v26) = v6;
  v11 = sub_140AB4630(v35, 131097, v25, v26, (__int64)Object, (__int64)&v33);
  v28 = v11;
  if ( v11 < 0 )
    goto LABEL_53;
  if ( !(unsigned __int8)sub_140915D20(Object[0]) )
  {
LABEL_51:
    v11 = -1073741790;
LABEL_52:
    v28 = v11;
    goto LABEL_53;
  }
  v4 = 1;
LABEL_5:
  v7 = v4;
  if ( v11 < 0 )
  {
LABEL_53:
    v18 = 0;
    goto LABEL_34;
  }
  if ( qword_140D3B008 && Object[0] )
    v36 = *((_QWORD *)Object[0] + 1);
  if ( (_BYTE)v6 == 1 )
  {
    v39 = 0LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v8 = *(unsigned int *)v12;
    LODWORD(v39) = v8;
    v13 = *(_QWORD *)(v12 + 8);
    *((_QWORD *)&v39 + 1) = v13;
    *(_OWORD *)Src = v39;
    if ( (_WORD)v8 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = v13 + (unsigned __int16)v8;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v14 = LOWORD(Src[0]);
  v15 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v15;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && (unsigned __int8)sub_140720224(v6, v15) )
  {
    v17 = (_PRIVILEGE_SET *)sub_140367AF0(v16, v14, 0x62634D43u);
    Privileges = v17;
    if ( !v17 )
    {
      v11 = -1073741670;
      v28 = -1073741670;
      v7 = v4;
      v18 = 0;
      goto LABEL_34;
    }
    v15 = (char *)v17;
    memmove(v17, Src[1], LOWORD(Src[0]));
    Src[1] = v15;
    LOWORD(v14) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v11 = -1073741811;
LABEL_63:
    v28 = v11;
    v7 = v4;
    v18 = 0;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 8LL) & 0x80u) != 0 )
  {
    v11 = -1073741790;
    goto LABEL_63;
  }
  for ( i = &v15[2 * ((unsigned __int64)(unsigned __int16)v14 >> 1) - 2]; (_WORD)v14 && !*(_WORD *)i; i -= 2 )
  {
    LOWORD(v14) = v14 - 2;
    LOWORD(Src[0]) = v14;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = 1;
  if ( !dword_140C54CA8 || sub_1402ACD00() )
  {
    v18 = 0;
    goto LABEL_31;
  }
  *(PVOID *)&v42[0] = Object[0];
  *((_QWORD *)&v42[0] + 1) = Src;
  LOBYTE(v21) = 1;
  v11 = sub_140735760(2, (unsigned int)v42, 0, v21, 17, (__int64)Object[0], (__int64)v37);
  if ( v11 < 0 )
  {
    if ( v11 == -1073740541 )
      v11 = 0;
    goto LABEL_63;
  }
  v18 = 1;
LABEL_31:
  if ( !v4 )
    goto LABEL_32;
  LOBYTE(v8) = v6;
  v11 = sub_140915DB8((unsigned int)Object, v8, 2, (unsigned int)&SubjectContext, (__int64)&v32);
  v28 = v11;
  v7 = v4;
  if ( v11 >= 0 )
  {
    if ( !byte_140C097BD || (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 184LL) & 0x1000000) == 0 )
    {
      v11 = -1073741790;
      v28 = -1073741790;
      goto LABEL_33;
    }
LABEL_32:
    v44 = *(_OWORD *)Src;
    v22 = (unsigned int)v33 >> 2;
    LOBYTE(v22) = (v33 & 4) != 0;
    v11 = sub_140714E58(Object[0], &v44, v35, v22);
    v28 = v11;
LABEL_33:
    v7 = v4;
  }
LABEL_34:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v11 = sub_14067FF60(17, (__int64)Object[0], v11, (__int64)v42, 0LL, v37);
    v28 = v11;
  }
  if ( v5 )
  {
    sub_1402F9540((__int64)KeGetCurrentThread());
    v11 = v28;
  }
  v23 = Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( qword_140D3B008 )
  {
    v27 = v36;
    LOBYTE(v27) = 15;
    sub_14042A5E0(v27, v45);
  }
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v29 )
    sub_140AB42A0(v23, v8);
  sub_14022EA30((__int64 *)&v40);
  return (unsigned int)v11;
}
