/*
 * XREFs of ExpGetProcessInformation @ 0x1407B6CA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     SmIsCompressionProcess @ 0x14030263C (SmIsCompressionProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KeQueryValuesThread @ 0x140302C20 (KeQueryValuesThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeIsProcessPowerThrottled @ 0x14045A08C (KeIsProcessPowerThrottled.c)
 *     SeQueryUserSidToken @ 0x14066A374 (SeQueryUserSidToken.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406C3EEC (KeSynchronizeWithDynamicProcessors.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406D75F4 (ExCheckFullProcessInformationAccess.c)
 *     PsQueryProcessEnergyValues @ 0x1407A8280 (PsQueryProcessEnergyValues.c)
 *     ExpCopyProcessInfo @ 0x1407B6430 (ExpCopyProcessInfo.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407B66E0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExpSysInfoShouldSkipProcess @ 0x1407B69B8 (ExpSysInfoShouldSkipProcess.c)
 *     ExGetNextProcess @ 0x1407B69F0 (ExGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpGetProcessInformation(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 v6; // r15
  int v7; // ecx
  bool v8; // cf
  unsigned int v9; // ebx
  char PreviousMode; // di
  int v11; // r12d
  struct _KPROCESS *NextProcess; // rdi
  unsigned __int64 *p_Blink; // rsi
  _DWORD *v14; // rdi
  char *v15; // r13
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  char *v21; // rax
  char *v22; // rsi
  _QWORD *v23; // rbx
  __int64 v24; // rax
  bool v25; // cl
  int v26; // eax
  unsigned int v27; // eax
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // rcx
  char *v33; // rcx
  unsigned int v34; // r8d
  char *v35; // r15
  _WORD *v36; // r9
  _WORD *v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned int v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rcx
  int SessionId; // ebx
  unsigned int v45; // r8d
  __int64 v46; // r13
  unsigned int v47; // r14d
  __int64 v48; // r8
  _DWORD *v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rax
  char *v53; // r13
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v55; // r14
  _QWORD **v56; // r15
  int v57; // r12d
  _QWORD *i; // rbx
  unsigned int v59; // eax
  unsigned int v60; // ebx
  unsigned int v61; // r14d
  int v62; // ecx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  bool v66; // zf
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // rdi
  signed __int64 *v69; // rbx
  char *v70; // r15
  int v71; // r12d
  char *j; // r14
  struct _KPROCESS *v73; // rsi
  signed __int64 *v74; // r12
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // r14
  size_t v77; // rcx
  unsigned int v78; // ebx
  unsigned int v79; // edx
  unsigned int v80; // ecx
  struct _LIST_ENTRY *Flink; // rsi
  NTSTATUS result; // eax
  signed __int32 v83[8]; // [rsp+0h] [rbp-618h] BYREF
  int v84; // [rsp+30h] [rbp-5E8h]
  unsigned int v85; // [rsp+34h] [rbp-5E4h]
  int PackageIdentity; // [rsp+38h] [rbp-5E0h]
  char v87; // [rsp+3Ch] [rbp-5DCh]
  PVOID v88; // [rsp+40h] [rbp-5D8h]
  int v89; // [rsp+48h] [rbp-5D0h]
  bool v90; // [rsp+4Ch] [rbp-5CCh]
  bool v91; // [rsp+4Dh] [rbp-5CBh]
  int v92; // [rsp+50h] [rbp-5C8h]
  PVOID v93; // [rsp+58h] [rbp-5C0h]
  __int64 v94; // [rsp+60h] [rbp-5B8h]
  PVOID Object; // [rsp+68h] [rbp-5B0h]
  int v96; // [rsp+70h] [rbp-5A8h]
  char v97; // [rsp+74h] [rbp-5A4h]
  int v98; // [rsp+80h] [rbp-598h]
  __int64 v99; // [rsp+88h] [rbp-590h]
  char *v100; // [rsp+90h] [rbp-588h]
  size_t Size; // [rsp+98h] [rbp-580h] BYREF
  unsigned int *v102; // [rsp+A0h] [rbp-578h]
  __int64 v103; // [rsp+A8h] [rbp-570h] BYREF
  PVOID P; // [rsp+B0h] [rbp-568h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-560h] BYREF
  int v106; // [rsp+C0h] [rbp-558h]
  char *v107; // [rsp+C8h] [rbp-550h]
  char *v108; // [rsp+D0h] [rbp-548h]
  char *v109; // [rsp+D8h] [rbp-540h]
  _WORD *v110; // [rsp+E0h] [rbp-538h]
  char *v111; // [rsp+E8h] [rbp-530h]
  _QWORD *v112; // [rsp+F0h] [rbp-528h]
  __int64 v113; // [rsp+F8h] [rbp-520h]
  unsigned __int64 v114; // [rsp+100h] [rbp-518h]
  int v115; // [rsp+108h] [rbp-510h]
  int v116; // [rsp+12Ch] [rbp-4ECh]
  __int64 CurrentServerSilo; // [rsp+138h] [rbp-4E0h]
  _OWORD v118[2]; // [rsp+190h] [rbp-488h] BYREF
  struct _KTHREAD *v119; // [rsp+1B0h] [rbp-468h]
  unsigned __int64 v120; // [rsp+1B8h] [rbp-460h]
  struct _KTHREAD *v121; // [rsp+1C0h] [rbp-458h]
  _QWORD v122[14]; // [rsp+1D0h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-3D8h] BYREF
  _OWORD v124[27]; // [rsp+290h] [rbp-388h] BYREF
  _BYTE v125[144]; // [rsp+440h] [rbp-1D8h] BYREF
  _BYTE v126[256]; // [rsp+4D0h] [rbp-148h] BYREF

  v106 = a5;
  v113 = a1;
  v102 = a3;
  v103 = 130LL;
  memset(v124, 0, sizeof(v124));
  v6 = 0LL;
  v98 = 0;
  LODWORD(Size) = 0;
  v105 = 254LL;
  v93 = 0LL;
  memset(v122, 0, 0x68uLL);
  v90 = 0;
  Object = 0LL;
  memset(v118, 0, sizeof(v118));
  v85 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v97 = v106 != 5;
  v7 = 136;
  if ( v106 == 5 )
    v7 = 80;
  v92 = v7;
  v96 = v7;
  v99 = v113;
  v8 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return -1073741820;
    v8 = a2 < 0x270;
  }
  v9 = v8 ? 0xC0000004 : 0;
  v87 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), result >= 0) )
  {
    if ( ExIsRestrictedCaller(PreviousMode) )
      v87 = 1;
    v11 = 0;
    PackageIdentity = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (struct _KPROCESS *)PsIdleProcess;
    v88 = PsIdleProcess;
    v93 = PsIdleProcess;
    v84 = v9;
    p_Blink = (unsigned __int64 *)Object;
    v94 = v99;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        if ( v84 >= 0 && v94 && (*(_DWORD *)v94 = 0, v11 < 0) )
        {
          v84 = v11;
        }
        else if ( v102 )
        {
          *v102 = v85;
        }
        goto LABEL_226;
      }
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = MmGetSessionId(v43);
        v115 = SessionId;
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_76:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (struct _KPROCESS *)ExGetNextProcess((__int64 *)&NextProcess->Header.Lock, v87);
      v88 = NextProcess;
      v93 = NextProcess;
    }
    v46 = v113 + v85;
    v94 = v46;
    v99 = v46;
    v89 = 624;
    if ( v85 + 624 < v85 )
    {
      v47 = v45;
      v85 = v45;
      v11 = -1073741675;
    }
    else
    {
      v47 = v85 + 624;
      v85 += 624;
      v11 = 0;
    }
    PackageIdentity = v11;
    if ( v11 < 0 )
    {
      v84 = v11;
      goto LABEL_226;
    }
    memset(v122, 0, 0x68uLL);
    if ( v47 > a2 )
    {
      v84 = -1073741820;
      if ( !v102 )
        goto LABEL_226;
      v51 = v94;
    }
    else
    {
      v50 = ExpCopyProcessInfo(v46, (__int64)NextProcess, v97, v122);
      v11 = v50;
      PackageIdentity = v50;
      if ( v50 < 0 )
      {
        v84 = v50;
        goto LABEL_226;
      }
      v51 = v94;
      *(_QWORD *)v94 = 0LL;
      *(_DWORD *)(v51 + 100) = SessionId;
      *(_QWORD *)(v51 + 64) = 0LL;
      *(_DWORD *)(v51 + 56) = 0;
      if ( NextProcess == PsIdleProcess )
        *(_QWORD *)(v51 + 96) = 0LL;
      if ( NextProcess == (struct _KPROCESS *)PsSecureSystemProcess )
      {
        v52 = qword_140C50848 << 12;
        *(_QWORD *)(v51 + 144) = qword_140C50848 << 12;
        *(_QWORD *)(v51 + 8) = v52;
      }
      if ( v11 < 0 )
      {
        v84 = v11;
        goto LABEL_226;
      }
    }
    v53 = (char *)(v51 + 256);
    v100 = (char *)(v51 + 256);
    if ( NextProcess == PsIdleProcess )
    {
      Flink = NextProcess->ThreadListHead.Flink;
      if ( Flink == &NextProcess->ThreadListHead )
      {
        p_Blink = 0LL;
      }
      else
      {
        p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
      }
    }
    else
    {
      p_Blink = 0LL;
      v112 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v121 = CurrentThread;
      v55 = (signed __int64 *)v93;
      v56 = (_QWORD **)((char *)v93 + 1504);
      v57 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v55 + 135), 0LL);
      for ( i = *v56; ; i = (_QWORD *)*i )
      {
        if ( i == v56 )
          goto LABEL_99;
        p_Blink = i - 167;
        v112 = i - 167;
        if ( ObReferenceObjectSafeWithTag((__int64)(i - 167)) )
          break;
      }
      v57 = 1;
LABEL_99:
      v6 = 0LL;
      if ( _InterlockedCompareExchange64(v55 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v55 + 135);
      KeAbPostRelease((ULONG_PTR)(v55 + 135));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !v57 )
      {
        p_Blink = 0LL;
        v112 = 0LL;
      }
      NextProcess = (struct _KPROCESS *)v93;
      v88 = v93;
      v11 = PackageIdentity;
      v94 = v99;
      v53 = v100;
      v47 = v85;
    }
    Object = p_Blink;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !p_Blink )
        {
          v14 = v53;
          v107 = v53;
          v15 = v53 + 368;
          v100 = v15;
          if ( v84 < 0 )
            goto LABEL_45;
          v16 = v88;
          v17 = PsReferencePrimaryTokenWithTag((__int64)v88, 0x746C6644u);
          v90 = SeSecurityAttributePresent(v17, (__int64)&PspSysAppIdClaim, v18);
          _m_prefetchw(v16 + 151);
          v19 = v16[151];
          while ( (v17 ^ v19) < 0xF )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64(v16 + 151, v19 + 1, v19);
            if ( v20 == v19 )
            {
              ObpTraceObjectDereferenceIfActive(v17 - 48);
              goto LABEL_15;
            }
          }
          ObfDereferenceObjectWithTag((PVOID)v17, 0x746C6644u);
LABEL_15:
          v21 = v107;
          *(_QWORD *)(v107 + 52) = 0LL;
          *((_DWORD *)v21 + 84) = 0;
          v22 = v107;
          *((_QWORD *)v107 + 43) = *((_QWORD *)v93 + 293) << 12;
          *((_QWORD *)v22 + 5) = v122[4];
          *((_DWORD *)v22 + 12) = 0;
          if ( v90 )
            *((_DWORD *)v22 + 12) = 1;
          v23 = v93;
          v24 = *((_QWORD *)v93 + 279);
          if ( v24 )
          {
            *(_OWORD *)v22 = *(_OWORD *)v24;
            *((_OWORD *)v22 + 1) = *(_OWORD *)(v24 + 16);
            *((_QWORD *)v22 + 4) = *(_QWORD *)(v24 + 32);
          }
          else
          {
            *(_OWORD *)v22 = 0LL;
            *((_OWORD *)v22 + 1) = 0LL;
            *((_QWORD *)v22 + 4) = 0LL;
          }
          if ( (*((_DWORD *)v23 + 543) & 0x1000) != 0 )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 2;
          }
          else if ( v23 == (_QWORD *)PsSecureSystemProcess )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 4;
          }
          else if ( SmIsCompressionProcess(v23) )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 6;
          }
          else
          {
            v25 = *((_QWORD *)&CmpRegistryProcess + 1) && v23 == *((_QWORD **)&CmpRegistryProcess + 1);
            v91 = v25;
            v26 = v14[12];
            if ( v25 )
              v27 = v26 & 0xFFFFFFE1 | 8;
            else
              v27 = v26 & 0xFFFFFFE1;
            v14[12] = v27;
          }
          *((_QWORD *)v22 + 45) = v23[287];
          PsQueryProcessEnergyValues(v23, v124);
          v28 = v22 + 64;
          v29 = v124;
          v30 = 2LL;
          do
          {
            *v28 = *v29;
            v28[1] = v29[1];
            v28[2] = v29[2];
            v28[3] = v29[3];
            v28[4] = v29[4];
            v28[5] = v29[5];
            v28[6] = v29[6];
            v28 += 8;
            *(v28 - 1) = v29[7];
            v29 += 8;
            --v30;
          }
          while ( v30 );
          *v28 = *v29;
          if ( v23[162] )
            v14[88] = *(_DWORD *)(v23[162] + 1428LL);
          else
            v14[88] = 0;
          NextProcess = (struct _KPROCESS *)v93;
          v88 = v93;
          if ( *((_DWORD *)v93 + 17)
            || KeHeteroSystem && (unsigned int)KeIsProcessPowerThrottled((__int64)v93, *((_BYTE *)v93 + 1463)) )
          {
            *((_DWORD *)v22 + 12) |= 0x20u;
          }
          v11 = PackageIdentity;
          if ( PackageIdentity < 0 )
          {
            v84 = PackageIdentity;
            p_Blink = (unsigned __int64 *)Object;
            goto LABEL_226;
          }
          v14 = v107;
          p_Blink = (unsigned __int64 *)Object;
          v94 = v99;
          v15 = v100;
LABEL_45:
          if ( a5 != 148 )
          {
LABEL_46:
            v31 = v85;
            goto LABEL_47;
          }
          v74 = (signed __int64 *)v88;
          v75 = PsReferencePrimaryTokenWithTag((__int64)v88, 0x746C6644u);
          v120 = v75;
          SeQueryUserSidToken(v75, Src, 0x44u, (ULONG *)&Size);
          v105 = 254LL;
          v103 = 130LL;
          PackageIdentity = RtlQueryPackageIdentity(v75, (int)v126, (int)&v105, (int)v125, (__int64)&v103, 0LL);
          if ( PackageIdentity >= 0 )
          {
            v6 = v103;
            v76 = v105;
          }
          else
          {
            v76 = 0LL;
            v105 = 0LL;
            v103 = 0LL;
          }
          ObFastDereferenceObject(v74 + 151, v75, 0x746C6644u);
          v77 = (unsigned int)Size;
          v78 = (Size + 7) & 0xFFFFFFF8;
          v98 = v78;
          if ( v78 + v85 < v85 )
          {
            v79 = -1;
            v85 = -1;
            v11 = -1073741675;
          }
          else
          {
            v79 = v78 + v85;
            v85 += v78;
            v11 = 0;
          }
          PackageIdentity = v11;
          if ( v11 >= 0 )
          {
            v89 += v78;
            if ( v79 > a2 )
            {
              v84 = -1073741820;
              if ( !v102 )
              {
                NextProcess = (struct _KPROCESS *)v88;
                goto LABEL_226;
              }
            }
            else
            {
              v14[13] = 368;
              memmove(v15, Src, v77);
              v15 += v78;
              v100 = v15;
              v79 = v85;
            }
            if ( !v76 )
            {
LABEL_162:
              v80 = v85;
              goto LABEL_163;
            }
            v80 = -1;
            if ( v76 > 0xFFFFFFFF )
            {
              v84 = -1073741820;
              goto LABEL_225;
            }
            v98 = v76;
            if ( (unsigned int)v76 + v79 < v79 )
            {
              v85 = -1;
              v11 = -1073741675;
            }
            else
            {
              v80 = v76 + v79;
              v85 = v76 + v79;
              v11 = 0;
            }
            PackageIdentity = v11;
            if ( v11 >= 0 )
            {
              v89 += v76;
              if ( v80 <= a2 )
              {
                v14[14] = (_DWORD)v15 - (_DWORD)v14;
                memmove(v15, v126, (unsigned int)v76);
                v15 += (unsigned int)v76;
                v100 = v15;
                goto LABEL_162;
              }
              v84 = -1073741820;
              if ( !v102 )
              {
                NextProcess = (struct _KPROCESS *)v88;
                goto LABEL_226;
              }
LABEL_163:
              if ( !v6 )
                goto LABEL_46;
              if ( v6 > 0xFFFFFFFF )
              {
                v84 = -1073741820;
                goto LABEL_225;
              }
              v98 = v6;
              if ( (unsigned int)v6 + v80 < v80 )
              {
                v31 = -1;
                v85 = -1;
                v11 = -1073741675;
              }
              else
              {
                v31 = v6 + v80;
                v85 = v6 + v80;
                v11 = 0;
              }
              PackageIdentity = v11;
              if ( v11 >= 0 )
              {
                v89 += v6;
                if ( v31 > a2 )
                {
                  v84 = -1073741820;
                  if ( !v102 )
                  {
                    NextProcess = (struct _KPROCESS *)v88;
                    goto LABEL_226;
                  }
LABEL_47:
                  NextProcess = (struct _KPROCESS *)v88;
                }
                else
                {
                  v14[84] = (_DWORD)v15 - (_DWORD)v14;
                  memmove(v15, v125, (unsigned int)v6);
                  NextProcess = (struct _KPROCESS *)v88;
                  v15 += (unsigned int)v6;
                  v100 = v15;
                }
                if ( NextProcess == PsIdleProcess )
                  goto LABEL_73;
                if ( NextProcess == PsInitialSystemProcess )
                {
                  v33 = ExpSystemProcessName;
                }
                else if ( NextProcess == (struct _KPROCESS *)PsSecureSystemProcess )
                {
                  v33 = ExpSecureSystemProcessName;
                }
                else if ( SmIsCompressionProcess(NextProcess) )
                {
                  v33 = (char *)L"$&";
                }
                else
                {
                  PackageIdentity = PsGetAllocatedFullProcessImageNameEx(v32, &P);
                  if ( PackageIdentity < 0 )
                    v33 = (char *)NextProcess[1].ActiveProcessors.StaticBitmap[2];
                  else
                    v33 = (char *)P;
                }
                v108 = v33;
                v34 = *(unsigned __int16 *)v33;
                v98 = v34;
                v35 = v15;
                v111 = v15;
                LODWORD(Size) = v34;
                v36 = (_WORD *)*((_QWORD *)v33 + 1);
                v37 = v36;
                v110 = v36;
                if ( a5 != 148 && v34 )
                {
                  v37 = &v36[(unsigned __int64)v34 >> 1];
                  v110 = v37;
                  while ( v37 != v36 )
                  {
                    v110 = --v37;
                    if ( *v37 == 92 )
                    {
                      v110 = ++v37;
                      break;
                    }
                  }
                  v34 -= 2 * (v37 - v36);
                  LODWORD(Size) = v34;
                }
                v38 = v34;
                v39 = (v34 + 9) & 0xFFFFFFF8;
                v98 = v39;
                v40 = v39 + v31;
                if ( v39 + v31 < v31 )
                {
                  v41 = -1;
                  v85 = -1;
                  v11 = -1073741675;
                }
                else
                {
                  v41 = v39 + v31;
                  v85 = v40;
                  v11 = 0;
                }
                PackageIdentity = v11;
                if ( v11 >= 0 )
                {
                  v89 += v39;
                  if ( v41 <= a2 )
                  {
                    if ( v34 )
                    {
                      memmove(v15, v37, v34);
                      v35 = &v15[2 * (v38 >> 1)];
                      v111 = v35;
                    }
                    *(_WORD *)v35 = 0;
                    v35 += 2;
                    v111 = v35;
LABEL_68:
                    if ( P )
                    {
                      ExFreePoolWithTag(P, 0);
                      P = 0LL;
                    }
                    if ( v84 >= 0 )
                    {
                      v42 = v94;
                      *(_WORD *)(v94 + 56) = (_WORD)v35 - (_WORD)v15 - 2;
                      *(_WORD *)(v42 + 58) = v39;
                      *(_QWORD *)(v42 + 64) = v15;
                    }
                    NextProcess = (struct _KPROCESS *)v88;
LABEL_73:
                    if ( v84 < 0 || (*(_DWORD *)v94 = v89, v11 >= 0) )
                    {
                      v6 = 0LL;
                      goto LABEL_76;
                    }
                    v84 = v11;
LABEL_226:
                    if ( NextProcess && NextProcess != PsIdleProcess )
                      ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
                    if ( p_Blink && (PVOID)p_Blink[68] != PsIdleProcess )
                      ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                    return v84;
                  }
                  v84 = -1073741820;
                  if ( v102 )
                    goto LABEL_68;
LABEL_225:
                  NextProcess = (struct _KPROCESS *)v88;
                  goto LABEL_226;
                }
              }
            }
          }
          v84 = v11;
          goto LABEL_225;
        }
        v116 = *((_DWORD *)p_Blink + 1);
        if ( !(_BYTE)v116 )
        {
          v59 = v47 + v92;
          if ( v47 + v92 < v47 )
          {
            v59 = -1;
            v11 = -1073741675;
          }
          else
          {
            v11 = 0;
          }
          v85 = v59;
          v60 = v59;
          PackageIdentity = v11;
          if ( v11 < 0 )
          {
            v84 = v11;
            goto LABEL_226;
          }
          v61 = v92;
          v89 += v92;
          if ( v59 > a2 )
          {
            v84 = -1073741820;
            if ( !v102 )
              goto LABEL_226;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, v118, v48, v49);
            v62 = BYTE8(v118[0]);
            if ( BYTE8(v118[0]) == 4 )
            {
              v89 -= v61;
              v85 = v60 - v61;
            }
            else
            {
              *((_DWORD *)v53 + 6) = v118[0];
              *((_DWORD *)v53 + 17) = v62;
              *((_DWORD *)v53 + 18) = BYTE9(v118[0]);
              *((_DWORD *)v53 + 14) = SBYTE10(v118[0]);
              *((_DWORD *)v53 + 15) = SBYTE11(v118[0]);
              v63 = (unsigned int)KeMaximumIncrement;
              *(_QWORD *)v53 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              *((_QWORD *)v53 + 1) = v63 * *((unsigned int *)p_Blink + 183);
              *((_QWORD *)v53 + 2) = p_Blink[144];
              *((_DWORD *)v53 + 16) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v53 + 40) = *(_OWORD *)(p_Blink + 153);
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v64 = p_Blink[164];
                v65 = v94;
              }
              else
              {
                if ( (p_Blink[173] & 8) != 0
                  || (v64 = *((_QWORD *)Object + 148), _InterlockedOr(v83, 0), (p_Blink[173] & 8) != 0) )
                {
                  v64 = 0LL;
                }
                NextProcess = (struct _KPROCESS *)v93;
                v88 = v93;
                v11 = PackageIdentity;
                p_Blink = (unsigned __int64 *)Object;
                v65 = v99;
                v94 = v99;
                v53 = v100;
              }
              v114 = v64;
              if ( v87 && v64 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v53 + 4) = 0LL;
              else
                *((_QWORD *)v53 + 4) = v64;
              if ( v106 != 5 )
              {
                v66 = v87 == 0;
                if ( v87 )
                {
                  *((_QWORD *)v53 + 10) = 0LL;
                  *((_QWORD *)v53 + 11) = 0LL;
                }
                else
                {
                  *((_QWORD *)v53 + 10) = p_Blink[7];
                  *((_QWORD *)v53 + 11) = p_Blink[6];
                  NextProcess = (struct _KPROCESS *)v93;
                  v88 = v93;
                  v11 = PackageIdentity;
                  p_Blink = (unsigned __int64 *)Object;
                  v65 = v99;
                  v94 = v99;
                  v53 = v100;
                }
                v67 = p_Blink[164];
                v114 = v67;
                if ( v66 || v67 <= 0x7FFFFFFEFFFFLL )
                  *((_QWORD *)v53 + 12) = v67;
                else
                  *((_QWORD *)v53 + 12) = 0LL;
                *((_QWORD *)v53 + 13) = p_Blink[30];
                *((_QWORD *)v53 + 14) = 0LL;
                *((_QWORD *)v53 + 15) = 0LL;
                *((_QWORD *)v53 + 16) = 0LL;
              }
              ++*(_DWORD *)(v65 + 4);
              if ( v11 < 0 )
              {
                v84 = v11;
                goto LABEL_226;
              }
              v53 += v61;
              v100 = v53;
            }
          }
        }
        if ( NextProcess == PsIdleProcess )
          break;
        p_Blink = 0LL;
        v109 = 0LL;
        v68 = KeGetCurrentThread();
        v119 = v68;
        v69 = (signed __int64 *)v93;
        v70 = (char *)v93 + 1504;
        v71 = 0;
        --v68->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v69 + 135), 0LL);
        for ( j = (char *)*((_QWORD *)Object + 167); j != v70; j = *(char **)j )
        {
          p_Blink = (unsigned __int64 *)(j - 1336);
          v109 = j - 1336;
          if ( ObReferenceObjectSafeWithTag((__int64)(j - 1336)) )
          {
            v71 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64(v69 + 135, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v69 + 135);
        KeAbPostRelease((ULONG_PTR)(v69 + 135));
        KeLeaveCriticalRegionThread((__int64)v68);
        ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v71 )
        {
          p_Blink = 0LL;
          v109 = 0LL;
        }
        NextProcess = (struct _KPROCESS *)v93;
        v88 = v93;
        v11 = PackageIdentity;
        v94 = v99;
        v53 = v100;
LABEL_143:
        Object = p_Blink;
        v47 = v85;
        v6 = 0LL;
      }
      v73 = (struct _KPROCESS *)p_Blink[95];
      if ( v73 != (struct _KPROCESS *)&NextProcess->ThreadListHead )
      {
        p_Blink = &v73[-1].Affinity.StaticBitmap[29];
        KeSynchronizeWithDynamicProcessors();
        goto LABEL_143;
      }
      p_Blink = 0LL;
      Object = 0LL;
      v47 = v85;
      v6 = 0LL;
    }
  }
  return result;
}
