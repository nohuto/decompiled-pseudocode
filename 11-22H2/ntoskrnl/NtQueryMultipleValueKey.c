/*
 * XREFs of NtQueryMultipleValueKey @ 0x14070DE10
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A2E70 (EtwGetKernelTraceTimestamp.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1406D24C8 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextCleanup @ 0x1406DBE74 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x1406DC3D0 (CmpBounceContextStart.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x14070EAC8 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF63D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // r14
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r8d
  int v13; // r9d
  int v14; // edi
  int PreviousMode; // r15d
  __int64 v16; // rdi
  PULONG v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+40h] [rbp-1D8h]
  char v28; // [rsp+41h] [rbp-1D7h]
  ULONG Length; // [rsp+44h] [rbp-1D4h] BYREF
  char Length_4; // [rsp+48h] [rbp-1D0h]
  ULONG v31; // [rsp+50h] [rbp-1C8h]
  __int128 v32; // [rsp+58h] [rbp-1C0h] BYREF
  ULONG v33; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-1ACh]
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  PVOID Object[3]; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v37; // [rsp+90h] [rbp-188h]
  PPRIVILEGE_SET v38; // [rsp+98h] [rbp-180h] BYREF
  PPRIVILEGE_SET v39; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v40[2]; // [rsp+A8h] [rbp-170h] BYREF
  int v41; // [rsp+B8h] [rbp-160h]
  __int128 v42; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v43[5]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v44[2]; // [rsp+120h] [rbp-F8h] BYREF
  _OWORD v45[3]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v46[12]; // [rsp+170h] [rbp-A8h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v8 = (int)KeyHandle;
  Object[1] = ValueEntries;
  v31 = EntryCount;
  Object[2] = BufferLength;
  v42 = 0LL;
  Length = 0;
  v33 = 0;
  v41 = 0;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, 0x58uLL);
  memset(v44, 0, sizeof(v44));
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v44, 0x20000LL);
  v27 = 0;
  v28 = 0;
  v32 = 0uLL;
  memset(v43, 0, 0x48uLL);
  v40[1] = v40;
  v40[0] = v40;
  CmpInitializeThreadInfo((__int64)&v42);
  Object[0] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  Length_4 = CmpAcquireShutdownRundown(v10, v9, v11);
  if ( !Length_4 )
  {
    v14 = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v13) = PreviousMode;
  v14 = CmObReferenceObjectByHandle(v8, 1, v12, v13, (__int64)&v32, 0LL);
  if ( v14 >= 0 )
  {
    if ( CmpTraceRoutine && (_QWORD)v32 )
      v37 = *(_QWORD *)(v32 + 8);
    if ( (_BYTE)PreviousMode == 1 )
    {
      v16 = 0x7FFFFFFF0000LL;
      v17 = (PULONG)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
        v17 = BufferLength;
      Length = *v17;
      if ( (unsigned int)v6 > 0x10000 )
        RtlRaiseStatus(-1073741670);
      ProbeForWrite(ValueEntries, 24 * v6, 4u);
      if ( RequiredBufferLength )
      {
        if ( (unsigned __int64)RequiredBufferLength < 0x7FFFFFFF0000LL )
          v16 = (__int64)RequiredBufferLength;
        *(_DWORD *)v16 = *(_DWORD *)v16;
      }
      ProbeForWrite(Address, Length, 4u);
    }
    else
    {
      Length = *BufferLength;
    }
    v14 = CmpCaptureKeyValueArray(
            (__int64)ValueEntries,
            v6,
            PreviousMode,
            (struct _PRIVILEGE_SET **)&v32 + 1,
            &v38,
            (__int64 *)&v39);
    if ( v14 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = 1;
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        v43[0] = v32;
        LODWORD(v43[1]) = v6;
        *((_QWORD *)&v43[1] + 1) = Address;
        *(_QWORD *)&v43[2] = &Length;
        *((_QWORD *)&v43[2] + 1) = RequiredBufferLength;
        v19 = CmpCallCallBacksEx(9u, v43, 0LL, 1, 0x18u, v32, (__int64)v40);
        v14 = v19;
        if ( v19 < 0 )
        {
          if ( v19 == -1073740541 )
            v14 = 0;
          goto LABEL_33;
        }
        v27 = 1;
      }
      v14 = CmKeyBodyRemapToVirtualForEnum((PVOID *)&v32, PreviousMode, 1, Object);
      if ( v14 >= 0 )
      {
        v14 = CmpBounceContextStart((__int64)v46, (void *)Address, Length, PreviousMode, 4);
        if ( v14 >= 0 )
        {
          CmpAttachToRegistryProcess(v45);
          v14 = CmQueryMultipleValueKey(
                  v32,
                  (__int64)Object[0],
                  *((__int64 *)&v32 + 1),
                  (unsigned int)v6,
                  v46[1],
                  &Length,
                  &v33);
          CmpDetachFromRegistryProcess(v45);
          if ( RequiredBufferLength )
            *RequiredBufferLength = v33;
          if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
            CmpBounceContextCopyDataToCallerBuffer(v46, Length);
        }
      }
    }
  }
LABEL_33:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v27 )
    v14 = CmPostCallbackNotificationEx(24, v32, v14, (__int64)v43, 0LL, v40);
  if ( *((_QWORD *)&v32 + 1) )
  {
    *BufferLength = Length;
    if ( ((v14 + 0x80000000) & 0x80000000) != 0 || v14 == -2147483643 )
    {
      v20 = 0;
      v34 = 0;
      while ( v20 < (unsigned int)v6 )
      {
        v21 = v20;
        v22 = *((_QWORD *)&v32 + 1);
        ValueEntries[v21].DataLength = *(_DWORD *)(*((_QWORD *)&v32 + 1) + 24LL * v20 + 8);
        ValueEntries[v21].DataOffset = *(_DWORD *)(v22 + 24LL * v20 + 12);
        ValueEntries[v21].Type = *(_DWORD *)(v22 + 24LL * v20++ + 16);
        v34 = v20;
      }
    }
  }
  if ( v28 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (_QWORD)v32 )
    ObfDereferenceObject((PVOID)v32);
  CmpBounceContextCleanup((__int64)v46);
  if ( CmpTraceRoutine )
  {
    v25 = v37;
    LOBYTE(v25) = 19;
    CmpTraceRoutine(v25, v44, (unsigned int)v14, (unsigned int)v6);
  }
  if ( Length_4 )
    CmpReleaseShutdownRundown(v24, v23);
  if ( *((_QWORD *)&v32 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v32 + 1));
  if ( v38 )
    CmSiFreeMemory(v38);
  if ( v39 )
    CmSiFreeMemory(v39);
  CmCleanupThreadInfo((__int64 *)&v42);
  return v14;
}
