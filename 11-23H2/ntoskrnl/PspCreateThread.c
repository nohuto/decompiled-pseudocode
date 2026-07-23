/*
 * XREFs of PspCreateThread @ 0x140770F94
 * Callers:
 *     NtCreateThreadEx @ 0x14076F5F0 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x1409ADEE0 (NtCreateThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14030EC50 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x1407712FC (PspMapThreadCreationFlags.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char PreviousMode; // r13
  _KPROCESS *v14; // rdi
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  int inserted; // ebx
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // r12
  int Flink_high; // eax
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+64h] [rbp-9Ch]
  __int64 v26; // [rsp+68h] [rbp-98h]
  PVOID v27; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  ULONG_PTR v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-40h]
  _BYTE AccessState[400]; // [rsp+D0h] [rbp-30h] BYREF

  PreviousMode = 0;
  v14 = a5;
  v29 = a6;
  v34 = a7;
  v32 = a9;
  v26 = a11;
  v30 = a12;
  v33 = a3;
  v25 = a2;
  v35 = a1;
  v31 = a13;
  v24 = 0;
  memset(AccessState, 0, sizeof(AccessState));
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = CurrentThread->ApcState.Process;
  v27 = 0LL;
  if ( a4 )
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 a4,
                 2,
                 (__int64)PsProcessType,
                 KeGetCurrentThread()->PreviousMode,
                 0x72437350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v14 = (_KPROCESS *)Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
  }
  v19 = v14->SecureState.SecureHandle & 1;
  if ( a8 || v19 )
    PreviousMode = CurrentThread->PreviousMode;
  if ( v14 != Process && !PspIsProcessReadyForRemoteThread((__int64)v14) )
    return 3221225473LL;
  v20 = v26;
  if ( v26 && a8 )
  {
    v20 = v26 & -(__int64)(v19 != 0);
    v26 = v20;
  }
  if ( !v29
    && !v20
    && (((__int64)v14[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || _bittest((const signed __int32 *)&v14[2].ReadyListHead.Blink + 1, 0xEu)
     || _bittest((const signed __int32 *)&Process[2].ReadyListHead.Blink + 1, 0xEu)) )
  {
    return 3221225506LL;
  }
  if ( !PreviousMode )
  {
LABEL_12:
    if ( (HIDWORD(v14[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v14[2].Affinity.Count && a8 )
      goto LABEL_39;
    PspMapThreadCreationFlags(a10, &v24);
    if ( v19 )
    {
      if ( a8 )
      {
LABEL_39:
        inserted = -1073741790;
        goto LABEL_44;
      }
      v24 |= 0x400u;
    }
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink) )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      inserted = -1073741558;
      goto LABEL_44;
    }
    ObfReferenceObjectWithTag(v14, 0x72437350u);
    v36 = v32;
    v21 = v29;
    inserted = PspAllocateThread(
                 (ULONG_PTR)v14,
                 v33,
                 PreviousMode,
                 v29,
                 a8,
                 &v36,
                 v26,
                 v30,
                 &v24,
                 &v27,
                 (_BYTE *)v31,
                 (size_t)AccessState);
    if ( inserted < 0 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_44;
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
    inserted = PspInsertThread(
                 (char *)v27,
                 v14,
                 v32,
                 &v24,
                 v25,
                 (_BYTE *)v31,
                 v21,
                 v30,
                 (PACCESS_STATE)AccessState,
                 (PVOID *)v35,
                 (_OWORD *)v34);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObfDereferenceObject(v27);
    return (unsigned int)inserted;
  }
  Flink_high = HIDWORD(v14[2].Header.WaitListHead.Flink);
  if ( (Flink_high & 0x1000) == 0 )
  {
    if ( (Flink_high & 1) != 0 )
    {
      inserted = -1073741816;
LABEL_44:
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
      return (unsigned int)inserted;
    }
    goto LABEL_12;
  }
  ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return 3221225480LL;
}
