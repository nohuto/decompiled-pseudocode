/*
 * XREFs of NtGetNextProcess @ 0x1407D4930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14028A27C (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x140361BC8 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessState @ 0x1406C2E90 (SeCreateAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     PsGetPreviousProcess @ 0x1409B7DE0 (PsGetPreviousProcess.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  KPROCESSOR_MODE AccessMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  NTSTATUS result; // eax
  ULONG v12; // r15d
  __int64 *PreviousProcess; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  NTSTATUS AccessState; // esi
  __int64 *NextProcess; // rax
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
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v9 = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewProcessHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)NewProcessHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewProcessHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( !ProcessHandle
    || (result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0,
                   (__int64)PsProcessType,
                   AccessMode,
                   0x6E457350u,
                   &Object,
                   0LL,
                   0LL),
        result >= 0) )
  {
    v12 = Flags & 1;
    if ( v12 )
      PreviousProcess = (__int64 *)PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object);
    v14 = (__int64)PreviousProcess;
    if ( !PreviousProcess )
      return -2147483622;
    v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
    CurrentThread = KeGetCurrentThread();
    v25 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v24 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        goto LABEL_13;
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        NextProcess = (__int64 *)PsGetPreviousProcess((PVOID)v14);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v14);
      v14 = (__int64)NextProcess;
      v19 = NextProcess == 0LL;
      CurrentServerSilo = v24;
      if ( v19 )
      {
        AccessState = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
        return AccessState;
      }
    }
    CurrentServerSilo = v24;
LABEL_13:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v27, DesiredAccess, (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_21;
      if ( v20 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      AccessState = ObOpenObjectByPointer(
                      (PVOID)v14,
                      v9,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsProcessType,
                      AccessMode,
                      &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( AccessState >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_21;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_21;
      CurrentThread = v25;
    }
    goto LABEL_27;
  }
  return result;
}
