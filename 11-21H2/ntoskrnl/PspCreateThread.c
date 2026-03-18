/*
 * XREFs of PspCreateThread @ 0x140701B64
 * Callers:
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x140701F10 (NtCreateThreadEx.c)
 *     NtCreateThread @ 0x1409ACDC0 (NtCreateThread.c)
 * Callees:
 *     PspIsProcessReadyForRemoteThread @ 0x14024E388 (PspIsProcessReadyForRemoteThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspMapThreadCreationFlags @ 0x140701EB4 (PspMapThreadCreationFlags.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _KPROCESS *v13; // rdi
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r15
  int Thread; // ebx
  __int64 v19; // rbx
  __int64 v20; // r13
  int Flink_high; // eax
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch]
  PVOID v25; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  _QWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[400]; // [rsp+D0h] [rbp-30h] BYREF

  v13 = a5;
  v27 = a6;
  v33 = a7;
  v30 = a9;
  v31 = a11;
  v28 = a12;
  v32 = a3;
  v24 = a2;
  v34 = a1;
  v29 = a13;
  v23 = 0;
  memset(v37, 0, sizeof(v37));
  PreviousMode = 0;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  v25 = 0LL;
  Object = 0LL;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v13 = (_KPROCESS *)Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
  }
  if ( v13 != Process && !PspIsProcessReadyForRemoteThread((ULONG_PTR)v13) )
    return 3221225473LL;
  v19 = v31;
  if ( v31 && a8 )
    v19 = -(__int64)((v13->SecureState.SecureHandle & 1) != 0) & v31;
  if ( !v27
    && !v19
    && (((__int64)v13[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || _bittest((const signed __int32 *)&v13[2].ReadyListHead.Blink + 1, 0xEu)
     || _bittest((const signed __int32 *)&Process[2].ReadyListHead.Blink + 1, 0xEu)) )
  {
    return 3221225506LL;
  }
  if ( !PreviousMode )
  {
LABEL_12:
    if ( (HIDWORD(v13[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v13[2].Affinity.Count && a8 )
    {
      Thread = -1073741790;
      goto LABEL_30;
    }
    PspMapThreadCreationFlags(a10, &v23);
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v13[1].ProfileListHead.Blink) )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      Thread = -1073741558;
      goto LABEL_30;
    }
    ObfReferenceObjectWithTag(v13, 0x72437350u);
    v35 = (__int64)v30;
    v20 = v27;
    Thread = PspAllocateThread(
               (ULONG_PTR)v13,
               a8,
               (__int64)&v35,
               v19,
               v28,
               (__int64)&v23,
               (__int64)&v25,
               v29,
               (__int64)v37);
    if ( Thread < 0 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v13[1].ProfileListHead.Blink);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_30;
    }
    ObfDereferenceObjectWithTag(v13, 0x72437350u);
    Thread = PspInsertThread(
               (ULONG_PTR)v25,
               (ULONG_PTR)v13,
               v30,
               &v23,
               v24,
               (_DWORD *)v29,
               v20,
               v28,
               (PACCESS_STATE)v37,
               (PVOID *)v34,
               (_OWORD *)v33);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v13[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObfDereferenceObject(v25);
    return (unsigned int)Thread;
  }
  Flink_high = HIDWORD(v13[2].Header.WaitListHead.Flink);
  if ( (Flink_high & 0x1000) == 0 )
  {
    if ( (Flink_high & 1) != 0 )
    {
      Thread = -1073741816;
LABEL_30:
      ObfDereferenceObjectWithTag(v13, 0x72437350u);
      return (unsigned int)Thread;
    }
    goto LABEL_12;
  }
  ObfDereferenceObjectWithTag(v13, 0x72437350u);
  return 3221225480LL;
}
