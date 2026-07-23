/*
 * XREFs of sub_1406D2920 @ 0x1406D2920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024BA3C @ 0x14024BA3C (sub_14024BA3C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409B49A0 @ 0x1409B49A0 (sub_1409B49A0.c)
 */

__int64 __fastcall sub_1406D2920(ULONG_PTR BugCheckParameter1, unsigned int a2, int a3, int a4, HANDLE *a5)
{
  KPROCESSOR_MODE AccessMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // r15d
  __int64 v13; // rax
  _DWORD *v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  NTSTATUS v17; // esi
  __int64 v18; // rax
  bool v19; // zf
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v25; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v27[224]; // [rsp+130h] [rbp-118h] BYREF

  Object = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v27, 0, sizeof(v27));
  Handle = 0LL;
  AccessMode = *((_BYTE *)KeGetCurrentThread() + 562);
  v9 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a5 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !BugCheckParameter1
    || (result = sub_140732D40(BugCheckParameter1, 0x6E457350u, (__int64)&Object, 0LL, 0LL), (int)result >= 0) )
  {
    v12 = a4 & 1;
    if ( v12 )
      v13 = sub_1409B49A0(Object);
    else
      v13 = sub_1407B6B90(Object);
    v14 = (_DWORD *)v13;
    if ( !v13 )
      return 2147483674LL;
    v20 = SeSinglePrivilegeCheck(stru_140D3CA18, AccessMode) != 0;
    CurrentThread = KeGetCurrentThread();
    v25 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v24 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (v14[281] & 0x4000000) != 0 )
        goto LABEL_13;
      sub_14024BA3C((__int64)v14, (__int64)CurrentThread);
      if ( (v14[281] & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        v18 = sub_1409B49A0(v14);
      else
        v18 = sub_1407B6B90(v14);
      v14 = (_DWORD *)v18;
      v19 = v18 == 0;
      CurrentServerSilo = v24;
      if ( v19 )
      {
        v17 = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag(v14, 0x6E457350u);
        return (unsigned int)v17;
      }
    }
    CurrentServerSilo = v24;
LABEL_13:
    if ( sub_140300B74((__int64)v14, CurrentServerSilo) )
    {
      v17 = SeCreateAccessState(&PassedAccessState, v27, a2, (char *)PsProcessType + 76);
      if ( v17 < 0 )
        goto LABEL_21;
      if ( v20 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v17 = ObOpenObjectByPointer(v14, v9, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
      sub_1403478A0((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( v17 >= 0 )
      {
        *a5 = Handle;
        goto LABEL_21;
      }
      if ( v17 != -1073741790 )
        goto LABEL_21;
      CurrentThread = v25;
    }
    goto LABEL_27;
  }
  return result;
}
