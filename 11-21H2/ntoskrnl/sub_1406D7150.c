/*
 * XREFs of sub_1406D7150 @ 0x1406D7150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1409AD5B8 @ 0x1409AD5B8 (sub_1409AD5B8.c)
 */

__int64 __fastcall sub_1406D7150(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned int a3,
        int a4,
        int a5,
        HANDLE *a6)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v10; // rcx
  __int64 result; // rax
  NTSTATUS v12; // esi
  _DWORD *v13; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v15; // r13
  PVOID v16; // rcx
  bool v17; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-1F8h]
  PVOID v20; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-1E0h]
  HANDLE *v23; // [rsp+70h] [rbp-1D8h]
  struct _KTHREAD *v24; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v26[224]; // [rsp+130h] [rbp-118h] BYREF

  v19 = a3;
  v23 = a6;
  Object = 0LL;
  v20 = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v26, 0, sizeof(v26));
  Handle = 0LL;
  AccessMode = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a6;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *a6 = 0LL;
  if ( a5 )
    return 3221225485LL;
  result = sub_140732D40(BugCheckParameter1, 0x6E457350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v12 = sub_140732D40(a2, 0x6E457350u, (__int64)&v20, 0LL, 0LL);
      if ( v12 < 0 )
        goto LABEL_26;
      if ( *((PVOID *)v20 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v20, 0x6E457350u);
        v12 = -1073741811;
        goto LABEL_26;
      }
    }
    v13 = (_DWORD *)sub_1407E7750(Object, v20);
    v22 = v13;
    if ( v13 )
    {
      v17 = SeSinglePrivilegeCheck(stru_140D3CA18, AccessMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v24 = CurrentThread;
      v15 = Object;
      do
      {
        if ( (v13[344] & 2) != 0 || (sub_1409AD5B8(v13, CurrentThread), (v13[344] & 2) != 0) )
        {
          v12 = SeCreateAccessState(&PassedAccessState, v26, v19, (char *)PsProcessType + 76);
          if ( v12 < 0 )
            goto LABEL_20;
          if ( v17 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v12 = ObOpenObjectByPointer(
                  v13,
                  a4 & (AccessMode != 0 ? 7666 : 73714),
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          sub_1403478A0((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          if ( v12 >= 0 )
          {
            *v23 = Handle;
            goto LABEL_20;
          }
          if ( v12 != -1073741790 )
            goto LABEL_20;
        }
        v13 = (_DWORD *)sub_1407E7750(v15, v13);
        v22 = v13;
        CurrentThread = v24;
      }
      while ( v13 );
      v12 = -2147483622;
LABEL_20:
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      if ( !v13 )
        return (unsigned int)v12;
      v16 = v13;
LABEL_22:
      ObfDereferenceObjectWithTag(v16, 0x6E457350u);
      return (unsigned int)v12;
    }
    v12 = -2147483622;
LABEL_26:
    v16 = Object;
    goto LABEL_22;
  }
  return result;
}
