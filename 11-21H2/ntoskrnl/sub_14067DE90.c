/*
 * XREFs of sub_14067DE90 @ 0x14067DE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14067DE90(HANDLE Handle)
{
  char v2; // r13
  char v3; // r12
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  char v9; // bl
  int v10; // eax
  int v11; // edi
  char v12; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rbx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  int v19; // r8d
  int v20; // r9d
  GUID *p_TransactionId; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  char v28; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v35; // [rsp+88h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-70h] BYREF
  GUID v37[2]; // [rsp+B8h] [rbp-50h] BYREF
  GUID TransactionId; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v39[2]; // [rsp+F0h] [rbp-18h] BYREF

  v31 = 0LL;
  v35 = 0LL;
  LODWORD(v30) = 0;
  memset(v37, 0, sizeof(v37));
  v33 = 0LL;
  v32 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v39, 0x20000uLL);
  sub_140347770((__int64)&v35);
  Object = 0LL;
  v2 = 0;
  v34[1] = v34;
  v3 = 0;
  v34[0] = v34;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = sub_140AB46D0();
  v9 = v28;
  if ( !v28 )
  {
    v11 = -1073741431;
    goto LABEL_33;
  }
  LOBYTE(v8) = v4;
  v10 = sub_140AB4630((_DWORD)Handle, 0x10000, v7, v8, (__int64)&Object, (__int64)&v31);
  v11 = v10;
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( sub_14023BD3C((__int64)&SubjectContext, (__int64)&v30) )
    {
      LOBYTE(v20) = v4;
      v11 = sub_140AB4630((_DWORD)Handle, 131097, v19, v20, (__int64)&Object, (__int64)&v31);
      if ( v11 < 0 )
        goto LABEL_57;
      v14 = Object;
      v11 = 0;
      if ( (unsigned __int8)sub_140915D20(Object) )
      {
        v12 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v14 = Object;
    }
    v11 = -1073741790;
    goto LABEL_41;
  }
  v12 = 0;
  if ( v10 < 0 )
    goto LABEL_29;
  v11 = 0;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = 1;
  v14 = Object;
  if ( dword_140C54CA8 && !sub_1402ACD00() )
  {
    *(_QWORD *)&v37[0].Data1 = v14;
    LOBYTE(v15) = 1;
    v16 = sub_140735760(0, (unsigned int)v37, 0, v15, 15, (__int64)v14, (__int64)v34);
    v11 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073740541 )
        v11 = 0;
      goto LABEL_24;
    }
    v2 = 1;
    v11 = 0;
  }
  if ( qword_140D3B008 && v14 )
    v32 = v14[1];
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C15958, 0LL);
  if ( (!qword_140C15960 || v14[1] != *((_QWORD *)qword_140C15960 + 1))
    && (!qword_140C15968 || v14[1] != *((_QWORD *)qword_140C15968 + 1)) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C15958, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C15958);
    sub_1402AFC00((ULONG_PTR)&qword_140C15958);
    v14 = Object;
    v6 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v6 + 8) & 0x80u) != 0 || (v17 = *(_QWORD *)(v6 + 72)) != 0 && (*(_DWORD *)(v17 + 8) & 0x80u) != 0 )
    {
      v11 = -1073741790;
      goto LABEL_24;
    }
    if ( !v12 )
      goto LABEL_22;
    LOBYTE(v5) = v4;
    v11 = sub_140915DB8((unsigned int)&Object, v5, 0x10000, (unsigned int)&SubjectContext, (__int64)&v30);
    if ( v11 >= 0 )
    {
      v14 = Object;
      if ( !byte_140C097BD || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
      {
        v11 = -1073741790;
        goto LABEL_41;
      }
LABEL_22:
      v11 = sub_14067E1BC(v14);
      if ( v11 >= 0 && (v31 & 4) != 0 )
      {
        if ( v14[7] || v14[8] )
        {
          sub_140AB4370();
          sub_14067F480(v14, &v33);
          TransactionId = *(GUID *)(v33 + 88);
          sub_140AB4260(v23, v22, v24, v25, v26, v27);
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v14, Handle, p_TransactionId);
      }
      goto LABEL_24;
    }
LABEL_57:
    v14 = Object;
    goto LABEL_41;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C15958, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C15958);
  sub_1402AFC00((ULONG_PTR)&qword_140C15958);
  v14 = Object;
LABEL_24:
  if ( v12 )
LABEL_41:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v2 )
    v11 = sub_14067FF60(15, (_DWORD)v14, v11, (unsigned int)v37, 0LL, (__int64)v34);
  if ( !v3 )
    goto LABEL_30;
  sub_1402F9540((__int64)KeGetCurrentThread());
LABEL_29:
  v14 = Object;
LABEL_30:
  if ( v14 )
    ObfDereferenceObject(v14);
  v9 = v28;
LABEL_33:
  if ( qword_140D3B008 )
  {
    LOBYTE(v6) = 12;
    sub_14042A5E0(v6, v39);
  }
  if ( v9 )
    sub_140AB42A0(v6, v5);
  sub_14022EA30((__int64 *)&v35);
  return (unsigned int)v11;
}
