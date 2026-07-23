/*
 * XREFs of NtCreateUserProcess @ 0x1406B82E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x14041E040 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspGetProcessParameterOverrides @ 0x1406B7E44 (PspGetProcessParameterOverrides.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8204 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B825C (PspCheckForInvalidAccessByProtection.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406B908C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x1406B90C0 (PspValidateCreateProcessProtection.c)
 *     PspGetMemoryPartitionContext @ 0x1406B9120 (PspGetMemoryPartitionContext.c)
 *     PspCaptureProcessParameters @ 0x1406B9194 (PspCaptureProcessParameters.c)
 *     PspReferenceTokenForNewProcess @ 0x1406B9204 (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x1406B928C (PspCaptureCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x1406B9360 (PspCreateUserProcessEcp.c)
 *     IoCreateFileEx @ 0x1406B94B0 (IoCreateFileEx.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     SeQuerySigningPolicy @ 0x1406B97BC (SeQuerySigningPolicy.c)
 *     PspUpdateCreateInfo @ 0x1406B9974 (PspUpdateCreateInfo.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14073E5B0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x14073FCC0 (PspCreateObjectHandle.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     PspDeleteCreateProcessContext @ 0x14076F720 (PspDeleteCreateProcessContext.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x14077124C (PspCreateUserContext.c)
 *     PspMapThreadCreationFlags @ 0x14077161C (PspMapThreadCreationFlags.c)
 *     PspBuildCreateProcessContext @ 0x140771678 (PspBuildCreateProcessContext.c)
 *     SeQueryServerSiloToken @ 0x1407DEF60 (SeQueryServerSiloToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1407E3B00 (SeDuplicateTokenAndAddOriginClaim.c)
 *     PspIsSiloInSilo @ 0x1407E5990 (PspIsSiloInSilo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS result; // eax
  NTSTATUS Info; // esi
  KPROCESSOR_MODE v22; // r14
  __int64 v23; // r8
  int v24; // r8d
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // r15
  ULONG v30; // eax
  int v31; // r9d
  int v32; // ecx
  PVOID v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // bl
  int v36; // r8d
  __int64 v37; // r9
  PS_PROTECTION *v38; // r11
  __int64 v39; // rcx
  __int64 *v40; // r13
  char v41; // r11
  ULONG v42; // esi
  PVOID v43; // r15
  int v44; // ecx
  unsigned __int64 v45; // rax
  void *v46; // rsp
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned int v52; // r12d
  __int64 v53; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v56; // rax
  __int64 v57; // rbx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  char v63; // bl
  __int64 v64; // rbx
  __int64 v65; // rbx
  KPROCESSOR_MODE v66; // dl
  char Context; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 Context_1; // [rsp+81h] [rbp+1h] BYREF
  int Context_2; // [rsp+82h] [rbp+2h] BYREF
  char Context_6; // [rsp+86h] [rbp+6h]
  int Context_8; // [rsp+88h] [rbp+8h] BYREF
  __int64 Context_16; // [rsp+90h] [rbp+10h] BYREF
  KPROCESSOR_MODE Context_24; // [rsp+98h] [rbp+18h]
  int Context_28; // [rsp+9Ch] [rbp+1Ch]
  int Context_32; // [rsp+A0h] [rbp+20h]
  __int64 Context_40; // [rsp+A8h] [rbp+28h] BYREF
  __int64 Context_48; // [rsp+B0h] [rbp+30h]
  ULONG Context_56; // [rsp+B8h] [rbp+38h] BYREF
  ACCESS_MASK Context_60; // [rsp+BCh] [rbp+3Ch]
  ACCESS_MASK Context_64; // [rsp+C0h] [rbp+40h]
  PVOID Context_72; // [rsp+C8h] [rbp+48h] BYREF
  char *Context_80; // [rsp+D0h] [rbp+50h]
  struct _KTHREAD *Context_88; // [rsp+D8h] [rbp+58h]
  PVOID Context_96; // [rsp+E0h] [rbp+60h] BYREF
  PVOID Context_104; // [rsp+E8h] [rbp+68h] BYREF
  __int64 Context_112; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int64 Context_120; // [rsp+F8h] [rbp+78h]
  PVOID Context_128; // [rsp+100h] [rbp+80h] BYREF
  __int64 Context_136; // [rsp+108h] [rbp+88h] BYREF
  PHANDLE Context_144; // [rsp+110h] [rbp+90h]
  PHANDLE Context_152; // [rsp+118h] [rbp+98h]
  PVOID Context_160; // [rsp+120h] [rbp+A0h] BYREF
  OBJECT_ATTRIBUTES Context_168; // [rsp+128h] [rbp+A8h] BYREF
  PCONTEXT_EX Context_216[3]; // [rsp+158h] [rbp+D8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT Context_240; // [rsp+170h] [rbp+F0h] BYREF
  __int64 Context_272; // [rsp+190h] [rbp+110h]
  __int128 Context_280; // [rsp+198h] [rbp+118h] BYREF
  struct _IO_STATUS_BLOCK Context_296; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 Context_312; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 Context_328; // [rsp+1C8h] [rbp+148h]
  _BYTE Context_336[80]; // [rsp+1D0h] [rbp+150h] BYREF
  _OWORD Context_416[32]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE Context_928[400]; // [rsp+420h] [rbp+3A0h] BYREF
  _BYTE AccessState[400]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v105[2]; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v106; // [rsp+750h] [rbp+6D0h]
  char v107; // [rsp+758h] [rbp+6D8h]

  Context_60 = ThreadDesiredAccess;
  Context_64 = ProcessDesiredAccess;
  Context_144 = ThreadHandle;
  Context_152 = ProcessHandle;
  Context_120 = (unsigned __int64)ProcessObjectAttributes;
  Context_216[1] = (PCONTEXT_EX)ThreadObjectAttributes;
  Context_80 = (char *)ProcessParameters;
  Context_112 = 0LL;
  *(_WORD *)((char *)Context_416 + 1) = 0;
  BYTE3(Context_416[0]) = 0;
  Context_8 = 0;
  *(_DWORD *)(&Context_240.Size + 1) = 0;
  *(&Context_240.Size + 3) = 0;
  Context_296 = 0LL;
  Context_16 = 0LL;
  Context_104 = 0LL;
  memset(&Context_168, 0, 44);
  Context_40 = 0LL;
  memset(Context_928, 0, sizeof(Context_928));
  Context_280 = 0LL;
  Context = 0;
  Context_2 = 0;
  *(_OWORD *)v105 = 0LL;
  v106 = 0LL;
  v107 = 0;
  memset(AccessState, 0, sizeof(AccessState));
  Context_216[0] = 0LL;
  Context_56 = 0;
  Context_136 = 0LL;
  Context_312 = 0LL;
  Context_328 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Context_88 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  Context_48 = Process;
  Context_216[2] = (PCONTEXT_EX)Process;
  PreviousMode = CurrentThread->PreviousMode;
  Context_24 = PreviousMode;
  Context_96 = 0LL;
  Context_72 = 0LL;
  LOBYTE(CurrentThread) = 0;
  Context_28 = (int)CurrentThread;
  Context_6 = 0;
  memset(&Context_240, 0, sizeof(Context_240));
  Context_272 = 0LL;
  memset(Context_336, 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFF97838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  Context_928[388] = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context_152 < 0x7FFFFFFF0000LL )
      v15 = (__int64)Context_152;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context_144 < 0x7FFFFFFF0000LL )
      v16 = (__int64)Context_144;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    *(_DWORD *)&Context_928[384] = v17;
  }
  memset(Context_416, 0, 0x1F8uLL);
  if ( AttributeList )
  {
    LOBYTE(v18) = PreviousMode;
    result = PspBuildCreateProcessContext(AttributeList, v18, 0LL, Context_416);
    if ( result < 0 )
      return result;
    BYTE1(Context_2) = *(_QWORD *)&Context_416[23] != 0LL;
  }
  if ( (ProcessFlags & 0x40) != 0 && (DWORD1(Context_416[0]) & 0x20000) != 0 && !BYTE8(Context_416[22]) )
  {
    v14 = ProcessFlags & 0xFFFFFFBF;
    ProcessFlags &= ~0x40u;
    DWORD1(Context_416[0]) &= ~0x20000u;
  }
  if ( (v14 & 4) == 0 && (WORD2(Context_416[0]) & 0x800) != 0
    || (DWORD1(Context_416[0]) & 0x20000) != 0 && (v14 & 0x40) == 0 )
  {
    goto LABEL_180;
  }
  LOBYTE(v19) = PreviousMode;
  Info = PspCaptureCreateInfo(v19, CreateInfo, Context_416);
  if ( Info < 0 )
  {
LABEL_96:
    if ( *(_QWORD *)&Context_416[11] && qword_140C37A90 )
      qword_140C37A90();
    goto LABEL_99;
  }
  v22 = 1;
  if ( (BYTE4(Context_416[0]) & 1) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(
             *((ULONG_PTR *)&Context_416[7] + 1),
             0x72437350u,
             (__int64)&Context_40,
             0LL,
             0LL);
    if ( Info < 0 )
      goto LABEL_96;
    Process = Context_40;
    *(_QWORD *)&Context_416[8] = Context_40;
  }
  else
  {
    Context_40 = Process;
  }
  *((_QWORD *)&Context_416[27] + 1) = PspEstimateNewProcessServerSilo(
                                        Process,
                                        *((_QWORD *)&Context_416[23] + 1),
                                        DWORD1(Context_416[24]));
  if ( (BYTE9(Context_416[0]) & 0xC) == 4 && (Process != Context_48 || (*(_DWORD *)(Context_48 + 2172) & 0x1000) != 0) )
    goto LABEL_180;
  LOBYTE(v23) = PreviousMode;
  Info = PspReferenceTokenForNewProcess(Process, *(_QWORD *)&Context_416[9], v23, (char *)&Context_416[9] + 8);
  if ( Info < 0 )
  {
    *((_QWORD *)&Context_416[9] + 1) = 0LL;
    goto LABEL_96;
  }
  if ( *(_QWORD *)&Context_416[9]
    && (int)SeQueryServerSiloToken(*((_QWORD *)&Context_416[9] + 1), &Context_136) >= 0
    && !(unsigned __int8)PspIsSiloInSilo(Context_136) )
  {
    goto LABEL_180;
  }
  if ( (BYTE4(Context_416[0]) & 0x20) == 0 )
  {
    if ( Process == Context_48
      && PreviousMode
      && !Context_80
      && (BYTE9(Context_416[0]) & 0xC) == 0
      && (SBYTE4(Context_416[0]) & 0x80u) == 0
      && (DWORD1(Context_416[0]) & 0x20000) == 0
      && (BYTE8(Context_416[0]) & 0x10) == 0 )
    {
      BYTE8(Context_416[0]) &= ~4u;
      v35 = *(_BYTE *)(Process + 2170);
      Context_1 = v35;
      LOBYTE(Context_2) = *(_BYTE *)(Context_40 + 2169);
      v29 = *(_BYTE *)(Context_40 + 2168);
      Context = v29;
      if ( (v14 & 0x40) != 0 && (v35 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_96;
      }
      LOBYTE(v24) = PreviousMode;
      Info = PspValidateCreateProcessProtection(Context_48, (int)Context_416, v24, v14, (PS_PROTECTION)v35);
      if ( Info < 0 )
        goto LABEL_96;
      v40 = 0LL;
LABEL_62:
      Info = PspAllocateProcess(
               Context_40,
               PreviousMode,
               (_QWORD *)Context_120,
               v35,
               v29,
               v41,
               *((void **)&Context_416[12] + 1),
               *((void **)&Context_416[9] + 1),
               ProcessFlags,
               0,
               (__int64)Context_416,
               *(_QWORD *)&Context_416[9] != 0LL,
               Context_96,
               (__int64)&Context_112,
               &Context_16);
      if ( Info < 0 )
        goto LABEL_96;
      v42 = *((_QWORD *)&Context_416[12] + 1) != 0LL ? 1048587 : 1048603;
      v43 = (PVOID)Context_16;
      v44 = *(_DWORD *)(Context_16 + 2516) & 0x4000;
      Context_120 = v44 != 0 ? 0x800 : 0;
      if ( v44 )
        v42 |= 0x100040u;
      RtlGetExtendedContextLength2(v42, &Context_56, v44 != 0 ? 0x800 : 0);
      Context_80 = 0LL;
      if ( BYTE1(Context_2) )
      {
        v40 = 0LL;
      }
      else
      {
        v45 = Context_56 + 15LL;
        if ( v45 <= Context_56 )
          v45 = 0xFFFFFFFFFFFFFF0LL;
        v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
        Context_80 = &Context;
        memset(&Context, 0, Context_56);
        RtlInitializeExtendedContext2((PCONTEXT)&Context, v42, Context_216, Context_120);
        if ( *((_QWORD *)&Context_416[12] + 1) )
        {
          v48 = DWORD1(Context_416[14]);
          if ( !*(_QWORD *)(Context_16 + 1408) )
            v48 = *(_QWORD *)(Context_16 + 1360);
          PspCreateUserContext((unsigned int)&Context, 1, qword_140D1F330, Context_416[3], v48);
        }
        else
        {
          LOBYTE(v47) = 1;
          Info = PspGetContextThreadInternal((_DWORD)Context_88, (unsigned int)&Context, 0, v47, 1);
          if ( Info < 0 )
          {
            v64 = Context_16;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v64 + 1080));
            KeAbPostRelease(v64 + 1080);
            KeLeaveCriticalRegionThread((__int64)Context_88);
            PspRundownSingleProcess(Context_16, 0);
            goto LABEL_96;
          }
          Context_120 = 297LL;
        }
        *(_QWORD *)&Context_312 = Context_336;
        v43 = (PVOID)Context_16;
      }
      ObfReferenceObjectWithTag(v43, 0x72437350u);
      if ( v40 )
      {
        *(_BYTE *)v40 = 0;
        v49 = *(_QWORD *)&Context_416[4];
        if ( *(_QWORD *)&Context_416[4] < 0x40000uLL )
          v49 = 0x40000LL;
        v40[3] = v49;
        v40[2] = *((_QWORD *)&Context_416[4] + 1);
        v40[1] = DWORD2(Context_416[3]);
      }
      Context_32 = 0;
      PspMapThreadCreationFlags(ThreadFlags, &Context_8);
      if ( (_DWORD)Context_112 )
      {
        Context_32 = 2;
        Context_8 |= 0x10u;
      }
      if ( BYTE1(Context_2) )
        Context_8 |= 0x400u;
      Context_8 |= 0x60u;
      Info = PspAllocateThread(
               Context_16,
               (__int64)Context_80,
               (__int64)&Context_312,
               0LL,
               0LL,
               (__int64)&Context_8,
               (__int64)&Context_104,
               (__int64)v40,
               (__int64)AccessState);
      if ( Info < 0 )
      {
        v65 = Context_16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Context_16 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v65 + 1080));
        KeAbPostRelease(v65 + 1080);
        KeLeaveCriticalRegionThread((__int64)Context_88);
        PspRundownSingleProcess(Context_16, 0);
        goto LABEL_95;
      }
      v51 = Context_48;
      LOBYTE(v50) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v50, Context_48, Context_16) )
      {
        v52 = Context_60;
        if ( (Context_60 & 0x2000000) != 0 )
        {
          v52 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v35 >> 4) + 8] & 0x1FFFFF | Context_60 & 0xFDFFFFFF;
          if ( !*(_QWORD *)&Context_416[8] || v51 == *(_QWORD *)&Context_416[8] )
            v52 |= 1u;
        }
      }
      else
      {
        v52 = Context_60;
      }
      if ( *(_QWORD *)&Context_416[13] )
        v53 = *(_QWORD *)&Context_416[13] + 112LL;
      else
        v53 = 0LL;
      inserted = PspInsertProcess(
                   (PVOID)Context_16,
                   *((HANDLE *)&Context_416[8] + 1),
                   Context_32,
                   v53,
                   (__int64)Context_928);
      Info = PspInsertThread(
               Context_104,
               (PEPROCESS)Context_16,
               v52,
               (__int64)v40,
               (__int64)Context_416,
               0LL,
               (PACCESS_STATE)AccessState,
               (__int64)Context_144,
               *(__int64 *)&Context_416[1]);
      KeLeaveCriticalRegionThread((__int64)Context_88);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess(Context_16, 0);
        Info = inserted;
        goto LABEL_94;
      }
      if ( Info < 0 )
      {
LABEL_171:
        PsTerminateProcess(Context_16);
        goto LABEL_94;
      }
      ProcessServerSilo = PsGetProcessServerSilo(Context_16);
      if ( ProcessServerSilo != *((_QWORD *)&Context_416[27] + 1) )
      {
        Info = -1073741267;
        goto LABEL_171;
      }
      Info = PspCreateObjectHandle(Context_16, Context_928, PsProcessType);
      if ( Info >= 0 )
      {
        v56 = *(_OWORD **)&Context_416[2];
        if ( *(_QWORD *)&Context_416[2] )
        {
          **(_OWORD **)&Context_416[2] = Context_416[3];
          v56[1] = Context_416[4];
          v56[2] = Context_416[5];
          v56[3] = Context_416[6];
        }
        *Context_152 = *(HANDLE *)&Context_928[392];
        v57 = Context_48;
        Info = PspUpdateCreateInfo(6LL, Context_416, Context_16);
        if ( Info >= 0 )
        {
LABEL_93:
          SepDeleteAccessState((__int64)Context_928);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context_928[32]);
          if ( Info >= 0 )
          {
LABEL_94:
            ObfDereferenceObject(Context_104);
LABEL_95:
            ObfDereferenceObjectWithTag((PVOID)Context_16, 0x72437350u);
            goto LABEL_96;
          }
          goto LABEL_171;
        }
        if ( (*(_WORD *)&Context_928[384] & 0x200) != 0 || (v66 = 1, (*(_DWORD *)(v57 + 2172) & 0x1000) != 0) )
          v66 = 0;
        ObCloseHandle(*(HANDLE *)&Context_928[392], v66);
      }
      if ( (*(_WORD *)&AccessState[384] & 0x200) != 0 || (*(_DWORD *)(Context_48 + 2172) & 0x1000) != 0 )
        v22 = 0;
      ObCloseHandle(*(HANDLE *)&AccessState[392], v22);
      goto LABEL_93;
    }
LABEL_180:
    Info = -1073741811;
    goto LABEL_96;
  }
  v26 = (DWORD1(Context_416[0]) & 0x20000) != 0 ? BYTE8(Context_416[22]) : 0;
  Context_1 = v26;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    Context_280 = *(_OWORD *)((char *)&Context_416[14] + 8);
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context_280, 0x10u, 0LL, 0, 0LL);
  }
  LOBYTE(v25) = v26;
  Info = SeQuerySigningPolicy(
           *((_QWORD *)&Context_416[9] + 1),
           (char *)&Context_416[14] + 8,
           (v14 >> 6) & 1,
           v25,
           &Context,
           &Context_2,
           &Context_1);
  if ( Info < 0 )
    goto LABEL_96;
  if ( (v14 & 0x20000) != 0 )
  {
    if ( !qword_140C37A00
      || (LOBYTE(v27) = 8, v29 = Context, LOBYTE(v28) = Context, !(unsigned int)qword_140C37A00(v28, v27)) )
    {
      v29 = 8;
      Context = 8;
    }
  }
  else
  {
    v29 = Context;
  }
  Context_168.Length = 48;
  Context_168.RootDirectory = 0LL;
  v30 = 1600;
  if ( PreviousMode != 1 )
    v30 = 576;
  Context_168.Attributes = v30;
  Context_168.ObjectName = (PUNICODE_STRING)((char *)&Context_416[14] + 8);
  *(_OWORD *)&Context_168.SecurityDescriptor = 0LL;
  Info = 0;
  if ( qword_140D53430 )
    Info = qword_140D53430(*((_QWORD *)&Context_416[9] + 1));
  if ( Info < 0 )
    goto LABEL_96;
  Info = PspGetMemoryPartitionContext(
           Context_40,
           v14,
           DWORD2(Context_416[23]),
           DWORD1(Context_416[24]),
           (__int64)&Context_96);
  if ( Info < 0 )
    goto LABEL_96;
  Info = PspCreateUserProcessEcp(&Context_240, *((_QWORD *)&Context_416[9] + 1));
  if ( Info < 0 )
    goto LABEL_96;
  Info = IoCreateFileEx(
           (PHANDLE)&Context_416[10] + 1,
           DWORD1(Context_416[10]) | 0x100020,
           &Context_168,
           &Context_296,
           0LL,
           0x80u,
           5u,
           1u,
           0x60u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0,
           &Context_240);
  if ( Info < 0 && DWORD1(Context_416[10]) )
    Info = IoCreateFileEx(
             (PHANDLE)&Context_416[10] + 1,
             0x100020u,
             &Context_168,
             &Context_296,
             0LL,
             0x80u,
             5u,
             1u,
             0x60u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0,
             &Context_240);
  if ( Info < 0 )
  {
    *((_QWORD *)&Context_416[10] + 1) = 0LL;
    v60 = 1LL;
LABEL_133:
    PspUpdateCreateInfo(v60, Context_416, 0LL);
    goto LABEL_96;
  }
  Context_160 = 0LL;
  Info = ObReferenceObjectByHandle(
           *((HANDLE *)&Context_416[10] + 1),
           0x100020u,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           &Context_160,
           0LL);
  *(_QWORD *)&Context_416[11] = Context_160;
  if ( Info >= 0 )
  {
    Context_168.ObjectName = 0LL;
    v32 = 4 * BYTE1(Context_2) + 1;
    Context_32 = v32;
    if ( *(_QWORD *)&Context_416[25] )
    {
      v58 = SeDuplicateTokenAndAddOriginClaim(
              *((_QWORD *)&Context_416[9] + 1),
              *(_QWORD *)&Context_416[25],
              DWORD2(Context_416[25]),
              &Context_72);
      v59 = (unsigned __int8)Context_28;
      if ( v58 >= 0 )
        v59 = 1;
      Context_28 = v59;
      Context_6 = v59;
      v32 = Context_32;
    }
    v33 = Context_72;
    if ( !(_BYTE)Context_28 )
      v33 = (PVOID)*((_QWORD *)&Context_416[9] + 1);
    Context_72 = v33;
    while ( 1 )
    {
      LOBYTE(v31) = v29;
      Info = MmCreateSpecialImageSection(
               (unsigned int)&Context_416[11] + 8,
               (unsigned int)&Context_168,
               (_DWORD)Context_72,
               v31,
               *((__int64 *)&Context_416[10] + 1),
               v32);
      if ( Info < 0 )
      {
        *((_QWORD *)&Context_416[11] + 1) = 0LL;
        v60 = 2LL;
        goto LABEL_133;
      }
      Context_128 = 0LL;
      Info = ObReferenceObjectByHandle(*((HANDLE *)&Context_416[11] + 1), 8u, MmSectionObjectType, 0, &Context_128, 0LL);
      *((_QWORD *)&Context_416[12] + 1) = Context_128;
      if ( Info < 0 )
      {
        *((_QWORD *)&Context_416[12] + 1) = 0LL;
        goto LABEL_96;
      }
      v35 = Context_1;
      LOBYTE(v34) = Context_1;
      Info = PspGetProcessProtectionRequirementsFromImage(Context_128, v34, (char *)&Context_2 + 2);
      if ( Info < 0 )
        goto LABEL_96;
      LOBYTE(v37) = BYTE2(Context_2);
      if ( BYTE2(Context_2) == v35 )
        break;
      Info = SeQuerySigningPolicy(
               *((_QWORD *)&Context_416[9] + 1),
               (char *)&Context_416[14] + 8,
               1LL,
               v37,
               (char *)&Context_2 + 3,
               &Context_2,
               &Context_1);
      if ( Info < 0 )
        goto LABEL_96;
      v63 = HIBYTE(Context_2);
      if ( HIBYTE(Context_2) == v29 )
      {
        v35 = Context_1;
        break;
      }
      if ( (v29 & 0x30) != 0 && (HIBYTE(Context_2) & 0x30) != (v29 & 0x30) )
        goto LABEL_180;
      if ( !qword_140C37A00 )
        goto LABEL_180;
      LOBYTE(v61) = v29;
      LOBYTE(v62) = HIBYTE(Context_2);
      if ( !(unsigned int)qword_140C37A00(v62, v61) )
        goto LABEL_180;
      ObCloseHandle(*((HANDLE *)&Context_416[11] + 1), 0);
      ObfDereferenceObject(*((PVOID *)&Context_416[12] + 1));
      *((_QWORD *)&Context_416[11] + 1) = 0LL;
      *((_QWORD *)&Context_416[12] + 1) = 0LL;
      v29 = v63;
      Context = v63;
      v32 = Context_32;
    }
    LOBYTE(v36) = PreviousMode;
    Info = PspValidateCreateProcessProtection(Context_48, (int)Context_416, v36, v14, (PS_PROTECTION)v35);
    if ( Info < 0 )
      goto LABEL_96;
    if ( (v14 & 0x40000) != 0
      || (v35 & 7) != 1 && PspCheckForInvalidAccessByProtection(PreviousMode, v38[2170], (PS_PROTECTION)v35) )
    {
      BYTE8(Context_416[0]) |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)Context_416, (__int64)Context_96);
    LOBYTE(v39) = PreviousMode;
    Info = PspCaptureProcessParameters(v39, Context_80, Context_416);
    if ( Info >= 0 )
    {
      v40 = v105;
      v41 = Context_2;
      goto LABEL_62;
    }
    BYTE8(Context_416[0]) &= ~4u;
    goto LABEL_96;
  }
  *(_QWORD *)&Context_416[11] = 0LL;
LABEL_99:
  if ( Context_96 )
    ObfDereferenceObjectWithTag(Context_96, 0x624A7350u);
  PspDeleteCreateProcessContext(Context_416);
  if ( Context_240.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(Context_240.ExtraCreateParameter);
  if ( (_BYTE)Context_28 )
    ObfDereferenceObject(Context_72);
  return Info;
}
