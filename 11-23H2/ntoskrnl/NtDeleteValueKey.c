/*
 * XREFs of NtDeleteValueKey @ 0x14070EC50
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x140347BDC (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406D31FC (CmpDoesBufferRequireCapturing.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  int v3; // edi
  char v4; // r14
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rcx
  int PreviousMode; // r15d
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  int v14; // edi
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  unsigned int v17; // edi
  char *v18; // rsi
  __int64 v19; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v21; // r12
  char *i; // rcx
  struct _KTHREAD *v23; // rax
  __int64 v24; // r9
  PVOID v25; // rcx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  __int64 v30; // rcx
  int v31; // [rsp+44h] [rbp-144h]
  char v32; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v35; // [rsp+70h] [rbp-118h] BYREF
  __int64 v36; // [rsp+78h] [rbp-110h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-108h]
  HANDLE v38; // [rsp+88h] [rbp-100h]
  __int64 v39; // [rsp+90h] [rbp-F8h]
  _QWORD v40[2]; // [rsp+98h] [rbp-F0h] BYREF
  int v41; // [rsp+A8h] [rbp-E0h]
  __m128i v42; // [rsp+B0h] [rbp-D8h]
  __int128 v43; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v45[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v46; // [rsp+110h] [rbp-78h]
  __int128 v47; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v48[32]; // [rsp+130h] [rbp-58h] BYREF

  v3 = (int)KeyHandle;
  v38 = KeyHandle;
  v43 = 0LL;
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v36 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v35 = 0;
  v41 = 0;
  memset(v48, 0, sizeof(v48));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v48, 0x20000LL);
  v5 = 0;
  Object[0] = 0LL;
  v40[1] = v40;
  v40[0] = v40;
  CmpInitializeThreadInfo((__int64)&v43);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v32 = CmpAcquireShutdownRundown(CurrentThread, v9, v10);
  if ( !v32 )
  {
    v14 = -1073741431;
    goto LABEL_52;
  }
  LOBYTE(v13) = PreviousMode;
  v14 = CmObReferenceObjectByHandle(v3, 2, v12, v13, (__int64)Object, (__int64)&v36);
  v31 = v14;
  if ( v14 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v8 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v35) )
    goto LABEL_51;
  LOBYTE(v28) = PreviousMode;
  v14 = CmObReferenceObjectByHandle((_DWORD)v38, 131097, v27, v28, (__int64)Object, (__int64)&v36);
  v31 = v14;
  if ( v14 < 0 )
    goto LABEL_53;
  if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
  {
LABEL_51:
    v14 = -1073741790;
LABEL_52:
    v31 = v14;
    goto LABEL_53;
  }
  v4 = 1;
LABEL_5:
  v8 = v4;
  if ( v14 < 0 )
  {
LABEL_53:
    v21 = 0;
    goto LABEL_34;
  }
  if ( CmpTraceRoutine && Object[0] )
    v39 = *((_QWORD *)Object[0] + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v42 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
      v15 = (__int64)ValueName;
    v42.m128i_i32[0] = *(_DWORD *)v15;
    v11 = *(_QWORD *)(v15 + 8);
    v42.m128i_i64[1] = v11;
    *(__m128i *)Src = v42;
    v16 = _mm_cvtsi128_si32(v42);
    if ( v16 )
    {
      if ( (v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v16 + v11 > 0x7FFFFFFF0000LL || v16 + v11 < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v17 = LOWORD(Src[0]);
  v18 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v18;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (__int64)v18) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v19, v17, 1650675011LL);
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v14 = -1073741670;
      v31 = -1073741670;
      v8 = v4;
      v21 = 0;
      goto LABEL_34;
    }
    v18 = (char *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, Src[1], LOWORD(Src[0]));
    Src[1] = v18;
    LOWORD(v17) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v14 = -1073741811;
LABEL_63:
    v31 = v14;
    v8 = v4;
    v21 = 0;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 8LL) & 0x80u) != 0 )
  {
    v14 = -1073741790;
    goto LABEL_63;
  }
  for ( i = &v18[2 * ((unsigned __int64)(unsigned __int16)v17 >> 1) - 2]; (_WORD)v17 && !*(_WORD *)i; i -= 2 )
  {
    LOWORD(v17) = v17 - 2;
    LOWORD(Src[0]) = v17;
  }
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  v5 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v21 = 0;
    goto LABEL_31;
  }
  *(PVOID *)&v45[0] = Object[0];
  *((_QWORD *)&v45[0] + 1) = Src;
  v14 = CmpCallCallBacksEx(2u, v45, 0LL, 1, 0x11u, (__int64)Object[0], (__int64)v40);
  if ( v14 < 0 )
  {
    if ( v14 == -1073740541 )
      v14 = 0;
    goto LABEL_63;
  }
  v21 = 1;
LABEL_31:
  if ( !v4 )
    goto LABEL_32;
  LOBYTE(v11) = PreviousMode;
  v14 = CmKeyBodyRemapToVirtual((unsigned int)Object, v11, 2, (unsigned int)&SubjectContext, (__int64)&v35);
  v31 = v14;
  v8 = v4;
  if ( v14 >= 0 )
  {
    if ( !CmpVEEnabled || (v29 = 1, (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 184LL) & 0x1000000) == 0) )
      v29 = 0;
    if ( !v29 )
    {
      v14 = -1073741790;
      v31 = -1073741790;
      goto LABEL_33;
    }
LABEL_32:
    v47 = *(_OWORD *)Src;
    v24 = (unsigned int)v36 >> 2;
    LOBYTE(v24) = (v36 & 4) != 0;
    v14 = CmDeleteValueKey(Object[0], &v47, v38, v24);
    v31 = v14;
LABEL_33:
    v8 = v4;
  }
LABEL_34:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v21 )
  {
    v14 = CmPostCallbackNotificationEx(17, (__int64)Object[0], v14, (__int64)v45, 0LL, v40);
    v31 = v14;
  }
  if ( v5 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = v31;
  }
  v25 = Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( CmpTraceRoutine )
  {
    v30 = v39;
    LOBYTE(v30) = 15;
    CmpTraceRoutine(v30, v48, (unsigned int)v14, 0LL);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v32 )
    CmpReleaseShutdownRundown(v25, v11);
  CmCleanupThreadInfo((__int64 *)&v43);
  return v14;
}
