/*
 * XREFs of NtRenameKey @ 0x140A0E260
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     CmDoVirtualTest @ 0x140347BDC (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406D31FC (CmpDoesBufferRequireCapturing.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // ebx
  char v12; // si
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // bx
  PPRIVILEGE_SET v16; // rsi
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v25; // eax
  __int64 v26; // r8
  PVOID v27; // rcx
  int v29; // [rsp+44h] [rbp-144h]
  char v30; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v33; // [rsp+70h] [rbp-118h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-110h]
  _QWORD v35[2]; // [rsp+80h] [rbp-108h] BYREF
  int v36; // [rsp+90h] [rbp-F8h]
  HANDLE v37; // [rsp+98h] [rbp-F0h]
  __m128i v38; // [rsp+A0h] [rbp-E8h]
  __int128 v39; // [rsp+B0h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v41[2]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+100h] [rbp-88h]
  __int128 v43; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v44[48]; // [rsp+120h] [rbp-68h] BYREF

  v37 = KeyHandle;
  v39 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(v44, 0, sizeof(v44));
  CmpInitializeThreadInfo((__int64)&v39);
  v3 = 0;
  Object[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v36 = -1;
  v35[1] = v35;
  v35[0] = v35;
  v33 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v30 = CmpAcquireShutdownRundown(v8, v7, v9);
  if ( !v30 )
  {
    v11 = -1073741431;
    v29 = -1073741431;
    v12 = 0;
    goto LABEL_43;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v38 = 0LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName < 0x7FFFFFFF0000LL )
      v13 = (__int64)NewName;
    v38.m128i_i32[0] = *(_DWORD *)v13;
    v10 = *(_QWORD *)(v13 + 8);
    v38.m128i_i64[1] = v10;
    *(__m128i *)Src = v38;
    v14 = _mm_cvtsi128_si32(v38);
    if ( v14 )
    {
      if ( (v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + v10 > 0x7FFFFFFF0000LL || v14 + v10 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v15 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v16 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v11 = -1073741811;
    v29 = -1073741811;
    v12 = 0;
    goto LABEL_43;
  }
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v17, LOWORD(Src[0]), 1114524995LL);
    if ( !Privileges )
    {
      v11 = -1073741670;
      v29 = -1073741670;
      v12 = 0;
      goto LABEL_43;
    }
    v16 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v15 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v20 = 0;
  if ( v15 >> 1 )
  {
    while ( LOWORD(v16->PrivilegeCount) != 92 )
    {
      ++v20;
      v16 = (PPRIVILEGE_SET)((char *)v16 + 2);
      if ( v20 >= v15 >> 1 )
        goto LABEL_22;
    }
    v11 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  LOBYTE(v19) = PreviousMode;
  v21 = (int)v37;
  v11 = CmObReferenceObjectByHandle((_DWORD)v37, 131078, v18, v19, (__int64)Object, 0LL);
  v29 = v11;
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v33) )
      goto LABEL_24;
    LOBYTE(v23) = PreviousMode;
    v11 = CmObReferenceObjectByHandle(v21, 131097, v22, v23, (__int64)Object, 0LL);
    v29 = v11;
    if ( v11 < 0 )
      goto LABEL_27;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
    {
LABEL_24:
      v11 = -1073741790;
LABEL_26:
      v29 = v11;
LABEL_27:
      v12 = 0;
      goto LABEL_43;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v11 < 0 )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(PVOID *)&v41[0] = Object[0];
    *((_QWORD *)&v41[0] + 1) = Src;
    v25 = CmpCallCallBacksEx(4u, v41, 0LL, 1, 0x13u, (__int64)Object[0], (__int64)v35);
    v11 = v25;
    if ( v25 < 0 )
    {
      if ( v25 == -1073740541 )
        v11 = 0;
      v29 = v11;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (LOBYTE(v10) = PreviousMode,
        v11 = CmKeyBodyReplicateToVirtual(Object, v10, 131078LL, &SubjectContext, &v33),
        v29 = v11,
        v11 >= 0) )
  {
    CmpAttachToRegistryProcess(v44);
    v43 = *(_OWORD *)Src;
    LOBYTE(v26) = PreviousMode;
    v11 = CmRenameKey(Object[0], &v43, v26);
    v29 = v11;
    CmpDetachFromRegistryProcess(v44);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v11 = CmPostCallbackNotificationEx(19, (__int64)Object[0], v11, (__int64)v41, 0LL, v35);
    v29 = v11;
  }
  if ( v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v11 = v29;
  }
  v27 = Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
    CmpReleaseShutdownRundown(v27, v10);
  CmCleanupThreadInfo((__int64 *)&v39);
  return v11;
}
