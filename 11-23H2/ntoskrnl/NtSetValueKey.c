/*
 * XREFs of NtSetValueKey @ 0x1406D2A30
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8830 (ExpWatchLicenseInfoWork.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3BE74 (IopStoreSystemPartitionInformation.c)
 *     CmpAddDockingInfo @ 0x140B66A9C (CmpAddDockingInfo.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B679E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     InitSafeBoot @ 0x140B90AE8 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
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
 *     memset @ 0x140435E00 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406D31FC (CmpDoesBufferRequireCapturing.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  char v7; // r13
  char v8; // r15
  char v9; // r14
  unsigned __int8 PreviousMode; // di
  char v11; // si
  unsigned __int64 v12; // rdx
  int v13; // r8d
  int v14; // edi
  signed __int8 v15; // cl
  __int64 v16; // rcx
  unsigned __int16 Length; // di
  ULONG v18; // ebx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  wchar_t *Buffer; // rsi
  __int64 v23; // rcx
  PPRIVILEGE_SET v24; // r14
  wchar_t *v25; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v27; // r9d
  int v28; // r14d
  PVOID v29; // rcx
  int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+40h] [rbp-1B8h]
  char v35; // [rsp+41h] [rbp-1B7h]
  int v36; // [rsp+44h] [rbp-1B4h]
  char v37; // [rsp+49h] [rbp-1AFh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  char *v40; // [rsp+68h] [rbp-190h]
  void *v41; // [rsp+70h] [rbp-188h]
  int v42; // [rsp+78h] [rbp-180h] BYREF
  ULONG v43; // [rsp+7Ch] [rbp-17Ch]
  void *Src; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-170h]
  ULONG v46; // [rsp+90h] [rbp-168h]
  __int64 v47; // [rsp+98h] [rbp-160h] BYREF
  HANDLE v48; // [rsp+A0h] [rbp-158h]
  __int64 v49; // [rsp+A8h] [rbp-150h]
  _QWORD v50[2]; // [rsp+B0h] [rbp-148h] BYREF
  int v51; // [rsp+C0h] [rbp-138h]
  struct _PRIVILEGE_SET *v52; // [rsp+C8h] [rbp-130h]
  __m128i v53; // [rsp+D0h] [rbp-128h]
  __int128 v54; // [rsp+E0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v56[8]; // [rsp+110h] [rbp-E8h] BYREF
  _OWORD v57[2]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v58[64]; // [rsp+170h] [rbp-88h] BYREF

  v43 = Type;
  v46 = TitleIndex;
  v48 = KeyHandle;
  v40 = (char *)Data;
  v54 = 0LL;
  DestinationString = 0LL;
  v47 = 0LL;
  memset(v57, 0, sizeof(v57));
  v49 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v57, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v54);
  v7 = 0;
  v8 = 0;
  Object = 0LL;
  v9 = 0;
  v35 = 0;
  v51 = -1;
  v50[1] = v50;
  v50[0] = v50;
  memset(v56, 0, sizeof(v56));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0LL;
  v52 = 0LL;
  v42 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  v11 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v37 = CmpAcquireShutdownRundown();
  if ( !v37 )
  {
    v14 = -1073741431;
    v36 = -1073741431;
    goto LABEL_72;
  }
  v14 = CmObReferenceObjectByHandle((_DWORD)v48, 2, v13, PreviousMode, (__int64)&Object, (__int64)&v47);
  v36 = v14;
  if ( v14 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v11 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v42) )
  {
    v14 = -1073741790;
    v36 = -1073741790;
    goto LABEL_72;
  }
  v14 = CmObReferenceObjectByHandle((_DWORD)v48, 131097, v31, v34, (__int64)&Object, (__int64)&v47);
  v36 = v14;
  if ( v14 >= 0 )
  {
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v14 = -1073741790;
      v36 = -1073741790;
      goto LABEL_72;
    }
    v9 = 1;
    v35 = 1;
LABEL_5:
    v11 = v9;
    if ( v14 < 0 )
      goto LABEL_72;
    if ( CmpTraceRoutine && Object )
      v49 = *((_QWORD *)Object + 1);
    v15 = v34;
    if ( v34 == 1 )
    {
      v53 = 0LL;
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
        v16 = (__int64)ValueName;
      v53.m128i_i32[0] = *(_DWORD *)v16;
      v12 = *(_QWORD *)(v16 + 8);
      v53.m128i_i64[1] = v12;
      DestinationString = (UNICODE_STRING)v53;
      DestinationString.MaximumLength = _mm_cvtsi128_si32(v53);
      Length = v53.m128i_i16[0];
      if ( v53.m128i_i16[0] )
      {
        if ( (v12 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v53.m128i_u16[0] + v12 > 0x7FFFFFFF0000LL || v53.m128i_u16[0] + v12 < v12 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v18 = DataSize;
      if ( DataSize )
      {
        v12 = (unsigned __int64)v40;
        Src = v40;
        if ( (unsigned __int64)&v40[DataSize] > 0x7FFFFFFF0000LL || &v40[DataSize] < v40 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
        goto LABEL_17;
      }
    }
    else
    {
      DestinationString = *ValueName;
      v41 = 0LL;
      v18 = DataSize;
      if ( !DataSize )
      {
        Length = DestinationString.Length;
        Src = v40;
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v18 > 0x7FFFF000 )
        {
          v14 = -1073741811;
          v36 = -1073741811;
          v11 = v9;
          goto LABEL_72;
        }
        v19 = Length;
        v20 = (Length + 7) & 0xFFFFFFF8;
        v21 = v20 + v18;
        if ( v20 + v18 < v18 )
        {
          v14 = -1073741811;
          v36 = -1073741811;
          v11 = v35;
          v7 = 0;
          v8 = 0;
          goto LABEL_72;
        }
        Buffer = DestinationString.Buffer;
        if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v15, DestinationString.Buffer)
          || (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)(char)v34, Src) )
        {
          if ( v21 )
          {
            if ( v21 <= 0x40 )
              goto LABEL_25;
            if ( v18 <= 0x40 )
            {
              if ( Length <= 0x40u && v18 < Length )
                v19 = v18;
            }
            else
            {
              v19 = Length > 0x40u ? v20 + v18 : v18;
            }
            if ( v19 )
            {
              Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v23, v19, 1851157827LL);
              if ( !Privileges )
              {
                v14 = -1073741670;
                v36 = -1073741670;
                v11 = v35;
                v7 = 0;
                v8 = 0;
                goto LABEL_72;
              }
              Buffer = DestinationString.Buffer;
              Length = DestinationString.Length;
              if ( v19 == v18 )
              {
                v41 = v58;
                v24 = Privileges;
              }
              else
              {
                v41 = Privileges;
                if ( v19 == DestinationString.Length )
                  v24 = (PPRIVILEGE_SET)v58;
                else
                  v24 = (PPRIVILEGE_SET)((char *)Privileges + v20);
              }
            }
            else
            {
LABEL_25:
              v41 = v58;
              v24 = (PPRIVILEGE_SET)&v58[v20];
            }
          }
          else
          {
            v24 = v52;
          }
          if ( Length )
          {
            v25 = Buffer;
            Buffer = (wchar_t *)v41;
            memmove(v41, v25, Length);
            DestinationString.Buffer = Buffer;
            Length = DestinationString.Length;
          }
          else
          {
            Buffer = 0LL;
            DestinationString.Buffer = 0LL;
          }
          if ( v18 )
          {
            memmove(v24, Src, v18);
            v40 = (char *)v24;
            Buffer = DestinationString.Buffer;
            Length = DestinationString.Length;
          }
          else
          {
            v40 = 0LL;
          }
        }
        if ( Length )
        {
          do
          {
            if ( Buffer[((unsigned __int64)Length >> 1) - 1] )
              break;
            v32 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v32 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
          {
            v28 = (int)v40;
            v7 = 0;
          }
          else
          {
            v56[0] = Object;
            v56[1] = &DestinationString;
            v56[2] = __PAIR64__(v43, v46);
            v28 = (int)v40;
            v56[3] = v40;
            LODWORD(v56[4]) = v18;
            LOBYTE(v27) = 1;
            v14 = CmpCallCallBacksEx(1, (unsigned int)v56, 0, v27, 16, (__int64)Object, (__int64)v50);
            if ( v14 < 0 )
            {
              if ( v14 == -1073740541 )
                v14 = 0;
              v36 = v14;
              v11 = v35;
              v7 = 0;
              goto LABEL_71;
            }
            v7 = 1;
          }
          if ( !v35
            || (v14 = CmKeyBodyReplicateToVirtual(&Object, v34, 2LL, &SubjectContext, &v42),
                v36 = v14,
                v11 = v35,
                v14 >= 0) )
          {
            v14 = CmSetValueKey(
                    (_DWORD)Object,
                    (unsigned int)&DestinationString,
                    v43,
                    v28,
                    v18,
                    (__int64)v48,
                    (v47 & 4) != 0);
            v36 = v14;
            v11 = v35;
          }
LABEL_71:
          v8 = 1;
          goto LABEL_72;
        }
        v14 = -1073741790;
        v36 = -1073741790;
        v11 = v35;
        v7 = 0;
        v8 = 0;
        goto LABEL_72;
      }
      Length = DestinationString.Length;
    }
    Src = v40;
LABEL_17:
    v15 = v34;
    goto LABEL_18;
  }
LABEL_72:
  if ( v11 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v14 = CmPostCallbackNotificationEx(16, (__int64)Object, v14, (__int64)v56, 0LL, v50);
    v36 = v14;
  }
  if ( v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = v36;
  }
  v29 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v33 = v49;
    LOBYTE(v33) = 14;
    CmpTraceRoutine(v33, v57, (unsigned int)v14, 0LL);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v37 )
    CmpReleaseShutdownRundown(v29, v12);
  CmCleanupThreadInfo((__int64 *)&v54);
  return v14;
}
