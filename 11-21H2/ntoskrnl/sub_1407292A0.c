/*
 * XREFs of sub_1407292A0 @ 0x1407292A0
 * Callers:
 *     sub_1406657C0 @ 0x1406657C0 (sub_1406657C0.c)
 *     NtOpenProcess @ 0x140727770 (NtOpenProcess.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407292A0(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE a6)
{
  int v9; // r14d
  bool v10; // al
  int v11; // esi
  KPROCESSOR_MODE AccessMode; // r12
  ULONG v13; // esi
  char v14; // cl
  int v15; // ebx
  int v16; // r13d
  int v17; // esi
  GENERIC_MAPPING *v18; // rbx
  struct _KPROCESS *v19; // rdx
  KPROCESSOR_MODE v20; // r15
  LUID v21; // rbx
  BOOLEAN v22; // al
  BOOLEAN v23; // bl
  NTSTATUS v24; // eax
  ACCESS_MASK v25; // eax
  __int64 v27; // rcx
  char v28; // [rsp+42h] [rbp-346h] BYREF
  KPROCESSOR_MODE v29; // [rsp+43h] [rbp-345h] BYREF
  ACCESS_MASK v30; // [rsp+44h] [rbp-344h]
  ULONG HandleAttributes; // [rsp+48h] [rbp-340h]
  int v32; // [rsp+4Ch] [rbp-33Ch]
  unsigned int v33; // [rsp+50h] [rbp-338h] BYREF
  ACCESS_MASK v34; // [rsp+58h] [rbp-330h] BYREF
  ULONG v35; // [rsp+60h] [rbp-328h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp-320h] BYREF
  ACCESS_MASK v37; // [rsp+70h] [rbp-318h]
  int v38; // [rsp+78h] [rbp-310h]
  PVOID Object; // [rsp+80h] [rbp-308h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-300h] BYREF
  HANDLE ProcessId[2]; // [rsp+90h] [rbp-2F8h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-2E8h] BYREF
  _QWORD *v43; // [rsp+A8h] [rbp-2E0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B0h] [rbp-2D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-2B8h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+F0h] [rbp-298h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp-278h] BYREF
  _QWORD v48[28]; // [rsp+1B0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp-F8h] BYREF
  ACCESS_MASK *v50; // [rsp+2A0h] [rbp-E8h]
  __int64 v51; // [rsp+2A8h] [rbp-E0h]
  unsigned int *v52; // [rsp+2B0h] [rbp-D8h]
  __int64 v53; // [rsp+2B8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+2C0h] [rbp-C8h] BYREF
  unsigned int *v55; // [rsp+2E0h] [rbp-A8h]
  __int64 v56; // [rsp+2E8h] [rbp-A0h]
  ACCESS_MASK *v57; // [rsp+2F0h] [rbp-98h]
  __int64 v58; // [rsp+2F8h] [rbp-90h]
  ULONG *v59; // [rsp+300h] [rbp-88h]
  __int64 v60; // [rsp+308h] [rbp-80h]
  char *v61; // [rsp+310h] [rbp-78h]
  __int64 v62; // [rsp+318h] [rbp-70h]
  KPROCESSOR_MODE *v63; // [rsp+320h] [rbp-68h]
  __int64 v64; // [rsp+328h] [rbp-60h]
  __int64 *v65; // [rsp+330h] [rbp-58h]
  __int64 v66; // [rsp+338h] [rbp-50h]

  v30 = a2;
  v43 = (_QWORD *)a1;
  v37 = a2;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v48, 0, sizeof(v48));
  *(_OWORD *)ProcessId = 0LL;
  Handle = 0LL;
  Object = 0LL;
  v9 = 0;
  v32 = 0;
  Process = 0LL;
  v38 = -1;
  if ( a5 )
  {
    v27 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v27 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v27 = *(_QWORD *)v27;
    if ( (a3 & 3) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16) != 0LL;
      v13 = *(_DWORD *)(a3 + 24) & 0x1DF2;
      HandleAttributes = v13;
      if ( !a4 )
      {
        v14 = 0;
        goto LABEL_34;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ProcessId = *a4;
        v14 = 1;
        LOWORD(v13) = HandleAttributes;
LABEL_34:
        AccessMode = a6;
        goto LABEL_6;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v10 = *(_QWORD *)(a3 + 16) != 0LL;
  v11 = 73714;
  AccessMode = a6;
  if ( a6 )
    v11 = 7666;
  v13 = *(_DWORD *)(a3 + 24) & v11;
  HandleAttributes = v13;
  if ( a4 )
  {
    *(_OWORD *)ProcessId = *a4;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
LABEL_6:
  if ( v10 || !v14 )
  {
    v15 = -1073741776;
    goto LABEL_38;
  }
  if ( !ProcessId[1] )
  {
    v15 = PsLookupProcessByProcessId(ProcessId[0], &Process);
    if ( v15 >= 0 )
      goto LABEL_10;
LABEL_38:
    v25 = v30;
    goto LABEL_23;
  }
  v15 = PsLookupProcessThreadByCid((__int64)ProcessId, &Process, &Object);
  if ( v15 < 0 )
    goto LABEL_38;
  ObfDereferenceObject(Object);
LABEL_10:
  v38 = *((_DWORD *)Process + 272);
  v16 = 0;
  v17 = v13 & 0x400;
  v9 = 1;
  while ( 1 )
  {
    v18 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
    v19 = (struct _KPROCESS *)*((_QWORD *)KeGetCurrentThread() + 23);
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), v19, &SubjectContext);
    v15 = sub_140347A20(&SubjectContext, &PassedAccessState, v48, v30, v18);
    if ( v15 < 0 )
    {
      v9 = 0;
      goto LABEL_38;
    }
    v32 = 1;
    if ( !v17 || (v20 = 1, v16) )
      v20 = AccessMode;
    v21 = stru_140D3CA18;
    memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), *((PEPROCESS *)KeGetCurrentThread() + 23), &SubjectSecurityContext);
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = v21;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v22 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v20);
    v23 = v22;
    if ( v20 )
      sub_140726520(0LL, (__int64 *)&SubjectSecurityContext, (int *)&RequiredPrivileges, v22);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( v23 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v24 = ObOpenObjectByPointer(
            Process,
            HandleAttributes,
            &PassedAccessState,
            0,
            (POBJECT_TYPE)PsProcessType,
            AccessMode,
            &Handle);
    v15 = v24;
    if ( v24 >= 0 )
      break;
    if ( !v17 || v24 != -1073741790 || v16 )
      goto LABEL_38;
    v16 = 1;
    sub_1403478A0((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( v16 && (unsigned int)dword_140C03048 > 5 && sub_1402A2000((__int64)&dword_140C03048, 0x400000000000LL) )
  {
    v33 = (unsigned int)PsGetProcessId(Process);
    v55 = &v33;
    v56 = 4LL;
    v34 = v30;
    v57 = &v34;
    v58 = 4LL;
    v35 = HandleAttributes;
    v59 = &v35;
    v60 = 4LL;
    v28 = a5;
    v61 = &v28;
    v62 = 1LL;
    v29 = AccessMode;
    v63 = &v29;
    v64 = 1LL;
    v42 = 0x1000000LL;
    v65 = &v42;
    v66 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03048, (unsigned __int8 *)byte_1400341B0, 0LL, 0LL, 8u, &v54);
  }
  *v43 = Handle;
  v25 = v30;
LABEL_23:
  v33 = v15;
  v34 = v25;
  v35 = v38;
  UserData.Ptr = (ULONGLONG)&v35;
  *(_QWORD *)&UserData.Size = 4LL;
  v50 = &v34;
  v51 = 4LL;
  v52 = &v33;
  v53 = 4LL;
  EtwWrite(qword_140C15DF8, &stru_14000EFA0, 0LL, 3u, &UserData);
  if ( v9 )
  {
    sub_1403478A0((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( Process )
    ObfDereferenceObject(Process);
  return (unsigned int)v15;
}
