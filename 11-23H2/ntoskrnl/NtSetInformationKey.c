/*
 * XREFs of NtSetInformationKey @ 0x1407AC9F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A2F90 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14034794C (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17EE0 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtSetInformationKey(void *a1, unsigned int a2, const void *a3, int a4)
{
  char v6; // r13
  __int64 *v7; // rdi
  char v8; // r12
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int64 v16; // rdx
  ACCESS_MASK v17; // edx
  int v18; // esi
  PVOID v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v21; // r14
  KPROCESSOR_MODE v23; // r9
  KPROCESSOR_MODE v24; // r9
  int v25; // eax
  char v26; // [rsp+40h] [rbp-158h]
  unsigned __int8 v27; // [rsp+41h] [rbp-157h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  char v29; // [rsp+53h] [rbp-145h]
  __int64 v30; // [rsp+58h] [rbp-140h]
  HANDLE Handle; // [rsp+60h] [rbp-138h] BYREF
  __int64 v32; // [rsp+68h] [rbp-130h] BYREF
  int v33; // [rsp+70h] [rbp-128h]
  int v34; // [rsp+74h] [rbp-124h] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp-120h] BYREF
  int v36; // [rsp+88h] [rbp-110h]
  __int128 v37; // [rsp+98h] [rbp-100h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-F0h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-C0h]
  __int128 v41; // [rsp+E8h] [rbp-B0h]
  __int64 v42; // [rsp+F8h] [rbp-A0h]
  __int128 v43; // [rsp+100h] [rbp-98h] BYREF
  __int128 *v44; // [rsp+110h] [rbp-88h]
  int v45; // [rsp+118h] [rbp-80h]
  __int128 v46; // [rsp+11Ch] [rbp-7Ch]
  __int64 v47; // [rsp+12Ch] [rbp-6Ch]
  int v48; // [rsp+134h] [rbp-64h]
  _OWORD v49[2]; // [rsp+138h] [rbp-60h] BYREF

  v33 = a4;
  Handle = a1;
  v37 = 0LL;
  v36 = 0;
  v32 = 0LL;
  memset(v49, 0, sizeof(v49));
  v30 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v49, 0x20000LL);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v8 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v35[1] = v35;
  v35[0] = v35;
  CmpInitializeThreadInfo((__int64)&v37);
  v34 = 0;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = CmpAcquireShutdownRundown(v11, v10, v12);
  if ( !v29 )
  {
    v18 = -1073741431;
    goto LABEL_46;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = PreviousMode;
  if ( a2 == 5 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 || (v14 = a2 - 3, a2 == 3) )
      {
LABEL_5:
        v26 = 0;
LABEL_6:
        v14 = 4LL;
        goto LABEL_7;
      }
      if ( a2 != 4 )
      {
        if ( CmpTraceRoutine )
        {
          v14 = (__int64)Handle;
          if ( Handle )
          {
            v23 = KeGetCurrentThread()->PreviousMode;
            Handle = 0LL;
            if ( ObReferenceObjectByHandle((HANDLE)v14, 0, (POBJECT_TYPE)CmKeyObjectType, v23, &Handle, 0LL) >= 0 )
              ObfDereferenceObject(Handle);
          }
        }
        v18 = -1073741821;
        v7 = (__int64 *)Object;
        v21 = 0;
        goto LABEL_26;
      }
    }
    v26 = 1;
    goto LABEL_6;
  }
  v14 = 8LL;
  v26 = 1;
LABEL_7:
  if ( v33 != (_DWORD)v14 )
  {
    if ( CmpTraceRoutine )
    {
      v14 = (__int64)Handle;
      if ( Handle )
      {
        v24 = KeGetCurrentThread()->PreviousMode;
        Handle = 0LL;
        if ( ObReferenceObjectByHandle((HANDLE)v14, 0, (POBJECT_TYPE)CmKeyObjectType, v24, &Handle, 0LL) >= 0 )
          ObfDereferenceObject(Handle);
      }
    }
    v18 = -1073741820;
    v7 = (__int64 *)Object;
    v21 = 0;
    goto LABEL_26;
  }
  if ( PreviousMode )
  {
    v16 = (unsigned __int64)a3 + (unsigned int)v14;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v32, a3, (unsigned int)v14);
  if ( a2 == 5 )
    v17 = 0;
  else
    v17 = 2;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, v17, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v7 = (__int64 *)Object;
  v19 = Object;
  if ( v18 == -1073741790 )
  {
    if ( !v26 )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v9 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v34) )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v27, &Object, 0LL);
    v7 = (__int64 *)Object;
    if ( v18 < 0 )
    {
LABEL_46:
      v21 = 0;
      goto LABEL_26;
    }
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    v18 = 0;
    v8 = 1;
    v19 = v7;
  }
  v9 = v8;
  if ( v18 < 0 )
    goto LABEL_46;
  if ( CmpTraceRoutine && v19 )
    v30 = v7[1];
  if ( a2 == 5 )
  {
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
    {
      v7 = (__int64 *)Object;
    }
    else
    {
      v7 = (__int64 *)Object;
      *(_QWORD *)&v39 = Object;
      DWORD2(v39) = a2;
      *(_QWORD *)&v40 = &v32;
      DWORD2(v40) = v33;
      v18 = CmpCallCallBacksEx(3u, &v39, 0LL, 1, 0x12u, (__int64)Object, (__int64)v35);
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v18 = 0;
        goto LABEL_25;
      }
      v6 = 1;
    }
    if ( !v8
      || (v18 = CmKeyBodyReplicateToVirtual(&Object, v27, 2LL, &SubjectContext, &v34), v7 = (__int64 *)Object, v18 >= 0) )
    {
      v9 = v8;
      if ( a2 == 5 )
      {
        *((_WORD *)v7 + 25) = v32;
        v18 = 0;
      }
      else
      {
        if ( a2 )
        {
          if ( a2 != 1 && a2 != 2 )
          {
            v14 = a2 - 3;
            if ( (unsigned int)v14 > 1 )
              goto LABEL_25;
          }
          v25 = CmSetKeyFlags(v7, a2, (unsigned int)v32);
        }
        else
        {
          v25 = CmSetLastWriteTimeKey(v7, &v32);
        }
        v18 = v25;
      }
    }
LABEL_25:
    v21 = 1;
    goto LABEL_26;
  }
  v14 = v7[1];
  if ( (*(_DWORD *)(v14 + 8) & 0x80u) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 0x100000) == 0 )
      goto LABEL_18;
    v18 = -1073741790;
    v21 = 0;
  }
  else
  {
    v18 = -1073741790;
    v21 = 0;
  }
LABEL_26:
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v35[0] != v35 )
  {
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    *(_QWORD *)&v43 = v7;
    *((_QWORD *)&v43 + 1) = (unsigned int)v18;
    v45 = v18;
    v44 = &v39;
    CmpCallCallBacksEx(0x12u, &v43, 0LL, 0, 0x12u, (__int64)v7, (__int64)v35);
    v18 = v45;
  }
  if ( v21 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = (__int64 *)Object;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v14) = 20;
    CmpTraceRoutine(v14, v49, (unsigned int)v18, 0LL);
  }
  if ( v29 )
    CmpReleaseShutdownRundown(v14, v13);
  CmCleanupThreadInfo((__int64 *)&v37);
  return (unsigned int)v18;
}
