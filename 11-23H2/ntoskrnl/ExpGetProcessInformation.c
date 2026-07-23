/*
 * XREFs of ExpGetProcessInformation @ 0x140742FB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x1402260A0 (RtlQueryPackageIdentity.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14028A27C (PsIsProcessInSilo.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x1402A3ED0 (MmGetSessionId.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KeQueryValuesThread @ 0x1402C2ED0 (KeQueryValuesThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeQueryUserSidToken @ 0x140715010 (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributes @ 0x14071E014 (PsQueryProcessAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1407421C0 (PsQueryProcessEnergyValues.c)
 *     ExpCopyProcessInfo @ 0x1407425B0 (ExpCopyProcessInfo.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExpGetNextProcessThread @ 0x140742A28 (ExpGetNextProcessThread.c)
 *     ExpSysInfoShouldSkipProcess @ 0x140742AC0 (ExpSysInfoShouldSkipProcess.c)
 *     ExGetNextProcess @ 0x140742B68 (ExGetNextProcess.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C (KeSynchronizeWithDynamicProcessors.c)
 *     ExIsRestrictedCaller @ 0x1407D8AF4 (ExIsRestrictedCaller.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0D38 (ExCheckFullProcessInformationAccess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  ULONG_PTR v6; // r13
  int v7; // edx
  bool v8; // cf
  unsigned int v9; // ebx
  unsigned __int8 PreviousMode; // di
  int v11; // esi
  PEPROCESS NextProcess; // r12
  __int64 NextProcessThread; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  int SessionId; // r14d
  unsigned int v17; // r8d
  __int64 v18; // r15
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  char *v23; // r15
  unsigned int v24; // eax
  int v25; // ecx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  bool v28; // zf
  unsigned __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // r14
  struct _KPROCESS *v31; // rcx
  unsigned __int64 *v32; // r12
  int v33; // r15d
  signed __int64 *p_Lock; // rdi
  unsigned __int64 *i; // rsi
  _DWORD *v36; // r14
  char *v37; // rdi
  struct _KPROCESS *v38; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  int Flink_high; // eax
  bool v41; // cl
  int v42; // eax
  unsigned int v43; // eax
  _OWORD *v44; // rax
  _OWORD *v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  char v48; // cl
  char *v49; // r13
  __int64 *v50; // rax
  unsigned int v51; // r9d
  char *v52; // r12
  _WORD *v53; // r8
  _WORD *v54; // rdx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  size_t v57; // r15
  unsigned int v58; // r14d
  int v59; // ecx
  __int64 v60; // rax
  void *v61; // rsi
  ULONG_PTR v62; // r12
  size_t v63; // rdx
  unsigned int v64; // r15d
  int v65; // ecx
  char *v66; // rcx
  _LIST_ENTRY *v67; // rbx
  int v68; // eax
  int v69; // eax
  __int64 result; // rax
  signed __int32 v71[8]; // [rsp+0h] [rbp-608h] BYREF
  int v72; // [rsp+30h] [rbp-5D8h]
  int v73; // [rsp+34h] [rbp-5D4h]
  char v74; // [rsp+38h] [rbp-5D0h]
  int AllocatedFullProcessImageName; // [rsp+3Ch] [rbp-5CCh]
  int v76; // [rsp+40h] [rbp-5C8h]
  unsigned int v77; // [rsp+44h] [rbp-5C4h]
  _BYTE v78[8]; // [rsp+48h] [rbp-5C0h] BYREF
  PVOID v79; // [rsp+50h] [rbp-5B8h]
  PVOID Object; // [rsp+58h] [rbp-5B0h]
  struct _KPROCESS *v81; // [rsp+60h] [rbp-5A8h]
  int v82; // [rsp+68h] [rbp-5A0h]
  __int64 v83; // [rsp+70h] [rbp-598h]
  char v84; // [rsp+78h] [rbp-590h]
  int v85; // [rsp+84h] [rbp-584h]
  char *v86; // [rsp+88h] [rbp-580h]
  __int64 v87; // [rsp+90h] [rbp-578h]
  void *v88; // [rsp+98h] [rbp-570h]
  size_t Size; // [rsp+A0h] [rbp-568h] BYREF
  unsigned int *v90; // [rsp+A8h] [rbp-560h]
  ULONG_PTR AppIdSize; // [rsp+B0h] [rbp-558h] BYREF
  ULONG_PTR PackageSize; // [rsp+B8h] [rbp-550h] BYREF
  PVOID P; // [rsp+C0h] [rbp-548h]
  int v94; // [rsp+C8h] [rbp-540h]
  char *v95; // [rsp+D0h] [rbp-538h]
  __int64 *v96; // [rsp+D8h] [rbp-530h]
  _WORD *v97; // [rsp+E0h] [rbp-528h]
  char *v98; // [rsp+E8h] [rbp-520h]
  unsigned __int64 *v99; // [rsp+F0h] [rbp-518h]
  __int64 v100; // [rsp+F8h] [rbp-510h]
  unsigned __int64 v101; // [rsp+100h] [rbp-508h]
  int v102; // [rsp+108h] [rbp-500h]
  int v103; // [rsp+110h] [rbp-4F8h]
  __int64 CurrentServerSilo; // [rsp+138h] [rbp-4D0h]
  _OWORD v105[2]; // [rsp+190h] [rbp-478h] BYREF
  void *v106; // [rsp+1B0h] [rbp-458h]
  struct _KTHREAD *v107; // [rsp+1B8h] [rbp-450h]
  _QWORD v108[14]; // [rsp+1C0h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-3D8h] BYREF
  _OWORD v110[27]; // [rsp+280h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+430h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4C0h] [rbp-148h] BYREF

  v94 = a5;
  v100 = a1;
  v90 = a3;
  AppIdSize = 130LL;
  memset(v110, 0, sizeof(v110));
  v6 = 0LL;
  v85 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  v81 = 0LL;
  memset(v108, 0, 0x68uLL);
  v78[0] = 0;
  Object = 0LL;
  memset(v105, 0, sizeof(v105));
  v73 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v84 = v94 != 5;
  v7 = 136;
  if ( v94 == 5 )
    v7 = 80;
  v77 = v7;
  v82 = v7;
  v87 = v100;
  v8 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v8 = a2 < 0x270;
  }
  v9 = v8 ? 0xC0000004 : 0;
  v74 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
      v74 = 1;
    v11 = 0;
    AllocatedFullProcessImageName = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (PEPROCESS)PsIdleProcess;
    v79 = PsIdleProcess;
    v81 = (struct _KPROCESS *)PsIdleProcess;
    v72 = v9;
    NextProcessThread = (__int64)Object;
    v14 = v73;
    v83 = v87;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        if ( v72 >= 0 && v83 && (*(_DWORD *)v83 = 0, v11 < 0) )
        {
          v72 = v11;
        }
        else if ( v90 )
        {
          *v90 = v14;
        }
        goto LABEL_212;
      }
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = MmGetSessionId(v15);
        v102 = SessionId;
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_135:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (PEPROCESS)ExGetNextProcess(NextProcess, v74);
      v79 = NextProcess;
      v81 = NextProcess;
    }
    v18 = v100 + v14;
    v83 = v18;
    v87 = v18;
    v76 = 624;
    v19 = v14 + 624;
    if ( v14 + 624 < v14 )
    {
      v14 = v17;
      v73 = v17;
      v11 = -1073741675;
    }
    else
    {
      v14 += 624;
      v73 = v19;
      v11 = 0;
    }
    AllocatedFullProcessImageName = v11;
    if ( v11 < 0 )
    {
      v72 = v11;
      goto LABEL_212;
    }
    memset(v108, 0, 0x68uLL);
    if ( v14 > a2 )
    {
      v72 = -1073741820;
      if ( !v90 )
        goto LABEL_212;
      v21 = v83;
    }
    else
    {
      v20 = ExpCopyProcessInfo(v18, (__int64)NextProcess, v84, v108);
      v11 = v20;
      AllocatedFullProcessImageName = v20;
      if ( v20 < 0 )
      {
        v72 = v20;
        goto LABEL_212;
      }
      *(_QWORD *)v18 = 0LL;
      *(_DWORD *)(v18 + 100) = SessionId;
      v21 = v83;
      *(_QWORD *)(v83 + 64) = 0LL;
      *(_DWORD *)(v21 + 56) = 0;
      if ( NextProcess == PsIdleProcess )
        *(_QWORD *)(v21 + 96) = 0LL;
      if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
      {
        v22 = qword_140C65BA8 << 12;
        *(_QWORD *)(v21 + 144) = qword_140C65BA8 << 12;
        *(_QWORD *)(v21 + 8) = v22;
      }
      if ( v11 < 0 )
      {
        v72 = v11;
        goto LABEL_212;
      }
    }
    v23 = (char *)(v21 + 256);
    v86 = (char *)(v21 + 256);
    NextProcessThread = ExpGetNextProcessThread((char *)NextProcess, 0LL);
    for ( Object = (PVOID)NextProcessThread; ; Object = 0LL )
    {
      while ( 1 )
      {
        if ( !NextProcessThread )
        {
          v36 = v23;
          v95 = v23;
          v88 = v23 + 368;
          v86 = v23 + 368;
          if ( v72 < 0 )
            goto LABEL_105;
          PsQueryProcessAttributes((__int64)NextProcess, (__int64)v78, 0LL);
          *(_QWORD *)(v23 + 52) = 0LL;
          *((_DWORD *)v23 + 84) = 0;
          v37 = v95;
          *((_QWORD *)v95 + 43) = NextProcess[2].Affinity.StaticBitmap[12] << 12;
          *((_QWORD *)v37 + 5) = v108[4];
          *((_DWORD *)v37 + 12) = 0;
          if ( v78[0] )
            *((_DWORD *)v37 + 12) = 1;
          v38 = v81;
          DeepFreezeStartTime = v81[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            *(_OWORD *)v37 = *(_OWORD *)DeepFreezeStartTime;
            *((_OWORD *)v37 + 1) = *(_OWORD *)(DeepFreezeStartTime + 16);
            *((_QWORD *)v37 + 4) = *(_QWORD *)(DeepFreezeStartTime + 32);
          }
          else
          {
            *(_OWORD *)v37 = 0LL;
            *((_OWORD *)v37 + 1) = 0LL;
            *((_QWORD *)v37 + 4) = 0LL;
          }
          Flink_high = HIDWORD(v38[2].Header.WaitListHead.Flink);
          if ( (Flink_high & 0x1000) != 0 )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 2;
          }
          else if ( v38 == (struct _KPROCESS *)PsSecureSystemProcess )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 4;
          }
          else if ( (Flink_high & 0x40000000) != 0 )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 6;
          }
          else
          {
            v41 = *((_QWORD *)&CmpRegistryProcess + 1) && v38 == *((struct _KPROCESS **)&CmpRegistryProcess + 1);
            v78[1] = v41;
            v42 = *((_DWORD *)v23 + 12);
            if ( v41 )
              v43 = v42 & 0xFFFFFFE1 | 8;
            else
              v43 = v42 & 0xFFFFFFE1;
            *((_DWORD *)v23 + 12) = v43;
          }
          *((_QWORD *)v37 + 45) = v38[2].Affinity.StaticBitmap[6];
          PsQueryProcessEnergyValues(v38, v110);
          v44 = v37 + 64;
          v45 = v110;
          v46 = 2LL;
          do
          {
            *v44 = *v45;
            v44[1] = v45[1];
            v44[2] = v45[2];
            v44[3] = v45[3];
            v44[4] = v45[4];
            v44[5] = v45[5];
            v44[6] = v45[6];
            v44 += 8;
            *(v44 - 1) = v45[7];
            v45 += 8;
            --v46;
          }
          while ( v46 );
          *v44 = *v45;
          if ( v38[1].Affinity.StaticBitmap[16] )
            *((_DWORD *)v23 + 88) = *(_DWORD *)(v81[1].Affinity.StaticBitmap[16] + 1452);
          else
            *((_DWORD *)v23 + 88) = 0;
          NextProcess = v81;
          v79 = v81;
          if ( v81->ProcessTimerDelay
            || KeHeteroSystem
            && ((v47 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&v81->0 >> 7) & 0xF], v47 != 7)
             || HIBYTE(v81[1].ActiveProcessors.StaticBitmap[0]) != 1
              ? (v48 = 0)
              : (v48 = 1),
                PpmPerfQosEnabled && (((v47 - 1) & 0xFFFFFFFA) == 0 || v48)) )
          {
            *((_DWORD *)v37 + 12) |= 0x20u;
          }
          v11 = AllocatedFullProcessImageName;
          if ( AllocatedFullProcessImageName < 0 )
          {
            v72 = AllocatedFullProcessImageName;
            NextProcessThread = (__int64)Object;
          }
          else
          {
            v36 = v95;
            NextProcessThread = (__int64)Object;
            v14 = v73;
            v83 = v87;
            v88 = v86;
LABEL_105:
            if ( a5 != 148 )
            {
LABEL_106:
              v49 = (char *)v88;
              goto LABEL_107;
            }
            v61 = (void *)PsReferencePrimaryTokenWithTag((__int64)NextProcess, 0x746C6644u);
            v106 = v61;
            SeQueryUserSidToken((__int64)v61, Src, 0x44u, (ULONG *)&Size);
            PackageSize = 254LL;
            AppIdSize = 130LL;
            AllocatedFullProcessImageName = RtlQueryPackageIdentity(
                                              v61,
                                              PackageFullName,
                                              &PackageSize,
                                              AppId,
                                              &AppIdSize,
                                              0LL);
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v6 = AppIdSize;
              v62 = PackageSize;
            }
            else
            {
              v62 = 0LL;
              PackageSize = 0LL;
              AppIdSize = 0LL;
            }
            ObFastDereferenceObject((signed __int64 *)v79 + 151, (unsigned __int64)v61, 0x746C6644u);
            v63 = (unsigned int)Size;
            v64 = (Size + 7) & 0xFFFFFFF8;
            v85 = v64;
            v65 = v14 + v64;
            if ( v64 + v14 < v14 )
            {
              v14 = -1;
              v73 = -1;
              v11 = -1073741675;
            }
            else
            {
              v14 += v64;
              v73 = v65;
              v11 = 0;
            }
            AllocatedFullProcessImageName = v11;
            if ( v11 < 0 )
            {
              v72 = v11;
            }
            else
            {
              v76 += v64;
              if ( v14 > a2 )
              {
                v72 = -1073741820;
                if ( !v90 )
                  goto LABEL_212;
                v66 = (char *)v88;
              }
              else
              {
                v36[13] = 368;
                memmove(v88, Src, v63);
                v66 = (char *)v88 + v64;
                v88 = v66;
                v86 = v66;
              }
              if ( !v62 )
                goto LABEL_151;
              if ( v62 > 0xFFFFFFFF )
              {
                v72 = -1073741820;
              }
              else
              {
                v85 = v62;
                v68 = v62 + v14;
                if ( (unsigned int)v62 + v14 < v14 )
                {
                  v14 = -1;
                  v73 = -1;
                  v11 = -1073741675;
                }
                else
                {
                  v14 += v62;
                  v73 = v68;
                  v11 = 0;
                }
                AllocatedFullProcessImageName = v11;
                if ( v11 < 0 )
                {
                  v72 = v11;
                }
                else
                {
                  v76 += v62;
                  if ( v14 > a2 )
                  {
                    v72 = -1073741820;
                    if ( !v90 )
                      goto LABEL_212;
                  }
                  else
                  {
                    v36[14] = (_DWORD)v66 - (_DWORD)v36;
                    memmove(v66, PackageFullName, (unsigned int)v62);
                    v66 = (char *)v88 + (unsigned int)v62;
                    v88 = v66;
                    v86 = v66;
                  }
LABEL_151:
                  if ( !v6 )
                  {
LABEL_152:
                    NextProcess = (PEPROCESS)v79;
                    goto LABEL_106;
                  }
                  if ( v6 > 0xFFFFFFFF )
                  {
                    v72 = -1073741820;
                  }
                  else
                  {
                    v85 = v6;
                    v69 = v14 + v6;
                    if ( v14 + (unsigned int)v6 < v14 )
                    {
                      v14 = -1;
                      v73 = -1;
                      v11 = -1073741675;
                    }
                    else
                    {
                      v14 += v6;
                      v73 = v69;
                      v11 = 0;
                    }
                    AllocatedFullProcessImageName = v11;
                    if ( v11 < 0 )
                    {
                      v72 = v11;
                    }
                    else
                    {
                      v76 += v6;
                      if ( v14 > a2 )
                      {
                        v72 = -1073741820;
                        if ( !v90 )
                          goto LABEL_212;
                        goto LABEL_152;
                      }
                      v36[84] = (_DWORD)v66 - (_DWORD)v36;
                      memmove(v66, AppId, (unsigned int)v6);
                      NextProcess = (PEPROCESS)v79;
                      v49 = (char *)v88 + (unsigned int)v6;
                      v86 = v49;
LABEL_107:
                      if ( NextProcess == PsIdleProcess )
                      {
LABEL_132:
                        if ( v72 < 0 || (*(_DWORD *)v83 = v76, v11 >= 0) )
                        {
                          v6 = 0LL;
                          goto LABEL_135;
                        }
                        v72 = v11;
                      }
                      else
                      {
                        if ( NextProcess == PsInitialSystemProcess )
                        {
                          v50 = &ExpSystemProcessName;
                        }
                        else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
                        {
                          v50 = &ExpSecureSystemProcessName;
                        }
                        else if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x40000000) != 0 )
                        {
                          v50 = (__int64 *)L"$&";
                        }
                        else
                        {
                          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)NextProcess);
                          if ( AllocatedFullProcessImageName < 0 )
                            v50 = (__int64 *)NextProcess[1].ActiveProcessors.StaticBitmap[2];
                          else
                            v50 = (__int64 *)P;
                        }
                        v96 = v50;
                        v51 = *(unsigned __int16 *)v50;
                        v85 = v51;
                        v52 = v49;
                        v98 = v49;
                        LODWORD(Size) = v51;
                        v53 = (_WORD *)v50[1];
                        v54 = v53;
                        v97 = v53;
                        v55 = v51;
                        v56 = v51;
                        if ( a5 != 148 && v51 )
                        {
                          v54 = &v53[(unsigned __int64)v51 >> 1];
                          v97 = v54;
                          while ( v54 != v53 )
                          {
                            v97 = --v54;
                            if ( *v54 == 92 )
                            {
                              v97 = ++v54;
                              break;
                            }
                          }
                          v51 -= 2 * (v54 - v53);
                          v56 = v51;
                          LODWORD(Size) = v51;
                          v55 = v51;
                        }
                        v57 = v56;
                        v58 = (v55 + 9) & 0xFFFFFFF8;
                        v85 = v58;
                        v59 = v14 + v58;
                        if ( v58 + v14 < v14 )
                        {
                          v14 = -1;
                          v73 = -1;
                          v11 = -1073741675;
                        }
                        else
                        {
                          v14 += v58;
                          v73 = v59;
                          v11 = 0;
                        }
                        AllocatedFullProcessImageName = v11;
                        if ( v11 >= 0 )
                        {
                          v76 += v58;
                          if ( v14 > a2 )
                          {
                            v72 = -1073741820;
                            if ( !v90 )
                              goto LABEL_212;
                          }
                          else
                          {
                            if ( v51 )
                            {
                              memmove(v49, v54, v57);
                              v52 = &v49[2 * (v57 >> 1)];
                              v98 = v52;
                            }
                            *(_WORD *)v52 = 0;
                            v52 += 2;
                            v98 = v52;
                          }
                          if ( P )
                          {
                            ExFreePoolWithTag(P, 0);
                            P = 0LL;
                          }
                          if ( v72 >= 0 )
                          {
                            v60 = v83;
                            *(_WORD *)(v83 + 56) = (_WORD)v52 - (_WORD)v49 - 2;
                            *(_WORD *)(v60 + 58) = v58;
                            *(_QWORD *)(v60 + 64) = v49;
                          }
                          NextProcess = (PEPROCESS)v79;
                          goto LABEL_132;
                        }
                        v72 = v11;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_212:
          if ( v79 && v79 != PsIdleProcess )
            ObfDereferenceObjectWithTag(v79, 0x6E457350u);
          if ( NextProcessThread && *(PVOID *)(NextProcessThread + 544) != PsIdleProcess )
            ObfDereferenceObjectWithTag((PVOID)NextProcessThread, 0x6E457350u);
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v72;
        }
        v103 = *(_DWORD *)(NextProcessThread + 4);
        if ( !(_BYTE)v103 )
        {
          v24 = v77 + v14;
          if ( v77 + v14 < v14 )
          {
            v24 = -1;
            v11 = -1073741675;
          }
          else
          {
            v11 = 0;
          }
          v73 = v24;
          v14 = v24;
          AllocatedFullProcessImageName = v11;
          if ( v11 < 0 )
          {
            v72 = v11;
            goto LABEL_212;
          }
          v76 += v77;
          if ( v24 > a2 )
          {
            v72 = -1073741820;
            if ( !v90 )
              goto LABEL_212;
          }
          else
          {
            KeQueryValuesThread(NextProcessThread, (__int64)v105);
            v25 = BYTE8(v105[0]);
            if ( BYTE8(v105[0]) == 4 )
            {
              v76 -= v77;
              v14 -= v77;
              v73 = v14;
            }
            else
            {
              *((_DWORD *)v23 + 6) = v105[0];
              *((_DWORD *)v23 + 17) = v25;
              *((_DWORD *)v23 + 18) = BYTE9(v105[0]);
              *((_DWORD *)v23 + 14) = SBYTE10(v105[0]);
              *((_DWORD *)v23 + 15) = SBYTE11(v105[0]);
              v26 = KeMaximumIncrement;
              *(_QWORD *)v23 = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(NextProcessThread + 652);
              *((_QWORD *)v23 + 1) = v26 * *(unsigned int *)(NextProcessThread + 732);
              *((_QWORD *)v23 + 2) = *(_QWORD *)(NextProcessThread + 1152);
              *((_DWORD *)v23 + 16) = *(_DWORD *)(NextProcessThread + 340);
              *(_OWORD *)(v23 + 40) = *(_OWORD *)(NextProcessThread + 1224);
              if ( (*(_DWORD *)(NextProcessThread + 116) & 0x400) != 0 )
              {
                v27 = *(_QWORD *)(NextProcessThread + 1312);
              }
              else
              {
                if ( (*(_DWORD *)(NextProcessThread + 1384) & 8) != 0
                  || (v27 = *((_QWORD *)Object + 148),
                      _InterlockedOr(v71, 0),
                      (*(_DWORD *)(NextProcessThread + 1384) & 8) != 0) )
                {
                  v27 = 0LL;
                }
                NextProcess = v81;
                v79 = v81;
                v11 = AllocatedFullProcessImageName;
                NextProcessThread = (__int64)Object;
                v14 = v73;
                v21 = v87;
                v83 = v87;
                v23 = v86;
              }
              v101 = v27;
              if ( v74 && v27 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v23 + 4) = 0LL;
              else
                *((_QWORD *)v23 + 4) = v27;
              if ( v94 != 5 )
              {
                v28 = v74 == 0;
                if ( v74 )
                {
                  *((_QWORD *)v23 + 10) = 0LL;
                  *((_QWORD *)v23 + 11) = 0LL;
                }
                else
                {
                  *((_QWORD *)v23 + 10) = *(_QWORD *)(NextProcessThread + 56);
                  *((_QWORD *)v23 + 11) = *(_QWORD *)(NextProcessThread + 48);
                  NextProcess = v81;
                  v79 = v81;
                  v11 = AllocatedFullProcessImageName;
                  NextProcessThread = (__int64)Object;
                  v14 = v73;
                  v21 = v87;
                  v83 = v87;
                  v23 = v86;
                }
                v29 = *(_QWORD *)(NextProcessThread + 1312);
                v101 = v29;
                if ( v28 || v29 <= 0x7FFFFFFEFFFFLL )
                  *((_QWORD *)v23 + 12) = v29;
                else
                  *((_QWORD *)v23 + 12) = 0LL;
                *((_QWORD *)v23 + 13) = *(_QWORD *)(NextProcessThread + 240);
                *((_QWORD *)v23 + 14) = 0LL;
                *((_QWORD *)v23 + 15) = 0LL;
                *((_QWORD *)v23 + 16) = 0LL;
              }
              ++*(_DWORD *)(v21 + 4);
              if ( v11 < 0 )
              {
                v72 = v11;
                goto LABEL_212;
              }
              v23 += v77;
              v86 = v23;
            }
          }
        }
        if ( NextProcess == PsIdleProcess )
          break;
        NextProcessThread = 0LL;
        v99 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v107 = CurrentThread;
        v31 = v81;
        v32 = &v81[1].ActiveProcessors.StaticBitmap[6];
        v33 = 0;
        --CurrentThread->KernelApcDisable;
        p_Lock = (signed __int64 *)&v31[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v31[1], 0LL);
        for ( i = (unsigned __int64 *)*((_QWORD *)Object + 167); i != v32; i = (unsigned __int64 *)*i )
        {
          NextProcessThread = (__int64)(i - 167);
          v99 = i - 167;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 167)) )
          {
            v33 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v33 )
        {
          NextProcessThread = 0LL;
          v99 = 0LL;
        }
        NextProcess = v81;
        v79 = v81;
        v11 = AllocatedFullProcessImageName;
        v14 = v73;
        v21 = v87;
        v83 = v87;
        v23 = v86;
LABEL_64:
        Object = (PVOID)NextProcessThread;
      }
      v67 = *(_LIST_ENTRY **)(NextProcessThread + 760);
      if ( v67 != &NextProcess->ThreadListHead )
      {
        NextProcessThread = (__int64)&v67[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
        goto LABEL_64;
      }
      NextProcessThread = 0LL;
    }
  }
  return result;
}
