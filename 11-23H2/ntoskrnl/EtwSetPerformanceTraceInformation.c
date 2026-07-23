/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1409E2114
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403DBCC0 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403E0110 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x140781D54 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateGroupMasks @ 0x1408202A8 (EtwpUpdateGroupMasks.c)
 *     EtwpCheckSystemTraceAccess @ 0x140825A70 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateTagFilter @ 0x14085C488 (EtwpUpdateTagFilter.c)
 *     EtwpEnableStackCaching @ 0x1408A8488 (EtwpEnableStackCaching.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E3254 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E43C4 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1409E4F3C (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1409E5008 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1409E5160 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E520C (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1409E6CC0 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateStackTracing @ 0x1409E8E58 (EtwpUpdateStackTracing.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE39C (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409F076C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409F0830 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1409F0968 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1409F0A10 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3E6C (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x140A04850 (NtSetIntervalProfile.c)
 *     KiGetCpuVendor @ 0x140A888A0 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // r14d
  unsigned __int16 v6; // r8
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // ebx
  int v10; // r15d
  unsigned int v11; // r12d
  int v12; // r13d
  int v13; // esi
  ULONG v14; // edi
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rdi
  unsigned int *v19; // rcx
  int updated; // eax
  unsigned int v21; // r14d
  unsigned int v22; // r14d
  wchar_t *v23; // rax
  wchar_t *v24; // rsi
  ULONG v25; // edx
  wchar_t *v26; // rcx
  unsigned int v27; // r14d
  unsigned int v28; // r14d
  void *v29; // rbx
  unsigned int v30; // edx
  struct _KTHREAD *v31; // rax
  unsigned int *v32; // rax
  unsigned int v33; // r13d
  unsigned int v34; // ebx
  wchar_t *v35; // rax
  wchar_t *v36; // r14
  int CpuVendor; // eax
  unsigned int v38; // edx
  struct _KTHREAD *v39; // rax
  unsigned int *v40; // rax
  unsigned int v42; // r14d
  unsigned int v43; // r14d
  unsigned int v44; // edx
  struct _KTHREAD *v45; // rax
  unsigned int *v46; // rax
  _WORD *v47; // rax
  unsigned int v48; // esi
  wchar_t *Pool2; // rax
  wchar_t *v50; // rdi
  void *v51; // rcx
  unsigned int v52; // edx
  char v53; // r14
  struct _KTHREAD *v54; // rax
  unsigned int *v55; // rax
  unsigned int v56; // r14d
  char *v57; // r12
  unsigned int v58; // edx
  struct _KTHREAD *v59; // rax
  unsigned int *v60; // rax
  unsigned int v61; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v63; // rax
  char v64; // [rsp+30h] [rbp-1B8h]
  char v65; // [rsp+31h] [rbp-1B7h]
  PVOID P; // [rsp+38h] [rbp-1B0h] BYREF
  char v67; // [rsp+40h] [rbp-1A8h]
  int v69; // [rsp+44h] [rbp-1A4h]
  int v70; // [rsp+48h] [rbp-1A0h]
  unsigned int v71; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v72; // [rsp+50h] [rbp-198h]
  int v73; // [rsp+54h] [rbp-194h]
  int v74; // [rsp+58h] [rbp-190h]
  int v75; // [rsp+5Ch] [rbp-18Ch]
  int v76; // [rsp+60h] [rbp-188h]
  unsigned int v77; // [rsp+64h] [rbp-184h]
  int v78; // [rsp+68h] [rbp-180h]
  ULONG v79; // [rsp+6Ch] [rbp-17Ch]
  __int128 v80; // [rsp+70h] [rbp-178h] BYREF
  wchar_t *Src[2]; // [rsp+80h] [rbp-168h]
  _DWORD v82[68]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v83; // [rsp+1A0h] [rbp-48h] BYREF
  int v84; // [rsp+1A8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v69 = *(_DWORD *)Address;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v69 > 16 )
  {
    if ( v69 > 22 )
    {
      if ( v69 == 23 )
      {
        if ( v4 >= 0x18 )
        {
          v80 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v61 = WORD4(v80);
          if ( WORD4(v80) == 0xFFFF )
            v61 = *(unsigned __int8 *)(v7 + 4232);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v63 = EtwpAcquireLoggerContextByLoggerId(v7, v61, 1);
          v18 = (__int64)v63;
          if ( v63 )
          {
            v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v63);
            if ( v9 >= 0 )
            {
              updated = EtwpUpdateProcessorTraceConfiguration(v18, &v80);
              goto LABEL_159;
            }
            goto LABEL_160;
          }
          goto LABEL_37;
        }
        return 3221225476LL;
      }
      if ( v69 == 24 )
        goto LABEL_47;
      if ( v69 != 25 )
      {
        if ( v69 != 26 )
          return (unsigned int)-1073741822;
        goto LABEL_130;
      }
      return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
    }
    else
    {
      if ( v69 == 22 )
      {
        v80 = 0LL;
        Src[0] = 0LL;
        memset(&v82[1], 0, 0x108uLL);
        LODWORD(P) = 0;
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 == 20 )
        {
          v83 = *((_QWORD *)Address + 1);
          v84 = *((_DWORD *)Address + 4);
          LODWORD(v80) = *((_DWORD *)Address + 1);
          v9 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, PVOID *))off_140C020E8[0])(1LL, 24LL, &v80, &P);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v82[0] = v80;
          EtwpGetMicroarchitecturalPmcAffinity(&v83, &v82[2]);
          v48 = wcsnlen(Src[0], 0xFFuLL);
          Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v48 + 1), 1350005829LL);
          v50 = Pool2;
          if ( !Pool2 )
            return 3221225495LL;
          wcsncpy_s(Pool2, v48 + 1, Src[0], v48);
          v9 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))off_140C020F0[0])(21LL, 272LL, v82);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v50, v48);
          v26 = v50;
          goto LABEL_96;
        }
        return 3221225476LL;
      }
      if ( v69 == 17 )
      {
LABEL_106:
        if ( v4 < 0x10 )
          return 3221225476LL;
        v42 = v4 - 16;
        if ( (v42 & 3) != 0 )
          return 3221225485LL;
        v43 = v42 >> 2;
        if ( (unsigned __int16)v43 > v6 )
          return 3221225485LL;
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          P = (PVOID)*((_QWORD *)Address + 1);
          memmove(&v83, Address + 16, 4LL * (unsigned __int16)v43);
          v44 = (unsigned __int16)P;
          if ( (unsigned __int16)P == 0xFFFF )
            v44 = *(unsigned __int8 *)(v7 + 4232);
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          v46 = EtwpAcquireLoggerContextByLoggerId(v7, v44, 1);
          v18 = (__int64)v46;
          if ( !v46 )
            goto LABEL_37;
          v19 = v46;
          if ( (v46[3] & 0x2000000) != 0 )
          {
            v9 = EtwpCheckSystemTraceAccess((__int64)v46, 0x80u);
            if ( v9 >= 0 )
            {
              v47 = EtwpPoolTagFilter;
              if ( v69 != 10 )
                v47 = &EtwpObjectTypeFilter;
              EtwpUpdateTagFilter(&v83, v43, (__int64)&v47[10 * *(unsigned __int8 *)(v18 + 818)]);
            }
            goto LABEL_160;
          }
          goto LABEL_39;
        }
        return 3221225506LL;
      }
      if ( v69 != 18 )
      {
        if ( v69 == 19 )
        {
          if ( v4 < 0x18 )
            return 3221225476LL;
          v80 = *(_OWORD *)Address;
          Src[0] = *((wchar_t **)Address + 2);
          v38 = WORD4(v80);
          if ( WORD4(v80) == 0xFFFF )
            v38 = *(unsigned __int8 *)(v7 + 4232);
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          v40 = EtwpAcquireLoggerContextByLoggerId(v7, v38, 1);
          v18 = (__int64)v40;
          if ( !v40 )
            goto LABEL_37;
          v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v40);
          if ( v9 < 0 )
            goto LABEL_160;
          updated = EtwpUpdateLastBranchTracingConfiguration(v18, &v80);
          goto LABEL_159;
        }
        if ( v69 == 20 )
          goto LABEL_47;
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 >= 0x24 && Address[4] == 2 && v4 <= 0x220 )
        {
          v33 = v4 - 34 + 280;
          v34 = (v4 - 34) >> 1;
          v35 = (wchar_t *)ExAllocatePool2(256LL, v33, 1350005829LL);
          v36 = v35;
          P = v35;
          if ( !v35 )
            return 3221225495LL;
          wcsncpy_s(v35 + 140, v34, (const wchar_t *)Address + 17, v34);
          v83 = *((_QWORD *)Address + 2);
          v84 = *((_DWORD *)Address + 6);
          *((_DWORD *)v36 + 2) = *((_DWORD *)Address + 7);
          v65 = Address[32];
          v67 = v65;
          CpuVendor = KiGetCpuVendor();
          if ( CpuVendor == 2 )
          {
            *(_BYTE *)v36 = Address[8];
            *((_BYTE *)v36 + 1) = Address[9];
            *((_BYTE *)v36 + 2) = Address[10];
            *((_BYTE *)v36 + 3) = Address[11];
            *((_BYTE *)v36 + 4) = Address[12];
            *((_BYTE *)v36 + 5) = Address[13];
          }
          else if ( CpuVendor == 1 )
          {
            *v36 = (unsigned __int8)Address[8];
            *((_BYTE *)v36 + 2) = Address[9];
          }
          *((_DWORD *)v36 + 4) = 2097153;
          *((_DWORD *)v36 + 5) = 0;
          memset(v36 + 12, 0, 0x100uLL);
          EtwpGetMicroarchitecturalPmcAffinity(&v83, v36 + 8);
          v9 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140C020F0[0])(20LL, v33, v36);
          if ( v65 )
            v9 = EtwpAddMicroarchitecturalPmcToRegistry(v36, &v83);
          v26 = v36;
LABEL_96:
          v25 = 1350005829;
          goto LABEL_97;
        }
        return 3221225476LL;
      }
      return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
    }
  }
  if ( v69 == 16 )
  {
LABEL_130:
    if ( v4 != 32 )
      return 3221225476LL;
    v51 = (void *)*((_QWORD *)Address + 1);
    P = v51;
    v72 = *((_DWORD *)Address + 5);
    v71 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v52 = (unsigned __int16)v51;
    if ( (unsigned __int16)v51 == 0xFFFF )
      v52 = *(unsigned __int8 *)(v7 + 4232);
    v53 = v69 == 26;
    v54 = KeGetCurrentThread();
    --v54->KernelApcDisable;
    v55 = EtwpAcquireLoggerContextByLoggerId(v7, v52, 1);
    v18 = (__int64)v55;
    if ( !v55 )
      goto LABEL_37;
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v55);
    if ( v9 < 0 )
      goto LABEL_160;
    updated = EtwpEnableStackCaching(v18, v72, v71, v53);
    goto LABEL_159;
  }
  if ( v69 > 10 )
  {
    if ( v69 == 11 )
    {
      v64 = 0;
      if ( v4 < 0x10 )
        return 3221225476LL;
      v27 = v4 - 16;
      if ( (v27 & 3) != 0 )
        return 3221225485LL;
      v28 = v27 >> 2;
      if ( v28 > 1 )
        return 3221225485LL;
      v29 = (void *)*((_QWORD *)Address + 1);
      P = v29;
      if ( v28 )
      {
        if ( *((_DWORD *)Address + 4) != 1316 )
          return 3221225485LL;
        v64 = 1;
      }
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
      {
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          v30 = (unsigned __int16)v29;
          if ( (unsigned __int16)v29 == 0xFFFF )
            v30 = *(unsigned __int8 *)(v7 + 4232);
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          v32 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v30, 1);
          v18 = (__int64)v32;
          if ( !v32 )
          {
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return 3221226134LL;
          }
          v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v32);
          if ( v9 >= 0 )
          {
            if ( v64 )
              _InterlockedOr((volatile signed __int32 *)(v18 + 816), 0x400u);
            else
              _InterlockedAnd((volatile signed __int32 *)(v18 + 816), 0xFFFFFBFF);
          }
          goto LABEL_160;
        }
        return 3221225506LL;
      }
    }
    else
    {
      if ( v69 != 12 )
      {
        if ( (unsigned int)(v69 - 14) > 1 )
          return (unsigned int)-1073741822;
        goto LABEL_47;
      }
      if ( v4 < 0x10 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
      if ( (int)result < 0 )
        return result;
      if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v22 = (v4 - 16) >> 2;
        if ( v22 > EtwpMaxProfilingSources )
          return 3221225485LL;
        v23 = (wchar_t *)ExAllocatePool2(64LL, 4LL * v22, 1484223557LL);
        v24 = v23;
        P = v23;
        if ( v23 )
        {
          memmove(v23, Address + 16, 4LL * v22);
          v9 = EtwpSetPmcProfileSource(v24, v22);
          v25 = 0;
          v26 = v24;
LABEL_97:
          ExFreePoolWithTag(v26, v25);
          return (unsigned int)v9;
        }
        return 3221225495LL;
      }
    }
    return 3221225569LL;
  }
  switch ( v69 )
  {
    case 10:
      goto LABEL_106;
    case 1:
      if ( v4 != 48 )
        return 3221225476LL;
      P = (PVOID)*((_QWORD *)Address + 1);
      v80 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v15 = (unsigned __int16)P;
      if ( (unsigned __int16)P == 0xFFFF )
        v15 = *(unsigned __int8 *)(v7 + 4232);
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      v17 = EtwpAcquireLoggerContextByLoggerId(v7, v15, 1);
      v18 = (__int64)v17;
      if ( !v17 )
      {
LABEL_37:
        v9 = -1073741162;
LABEL_40:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)v9;
      }
      v19 = v17;
      if ( (v17[3] & 0x2000000) == 0 )
      {
LABEL_39:
        EtwpReleaseLoggerContext(v19, 1);
        v9 = -1073741811;
        goto LABEL_40;
      }
      v9 = EtwpCheckSystemTraceAccess((__int64)v17, 0x80u);
      if ( v9 < 0 )
        goto LABEL_160;
      updated = EtwpUpdateGroupMasks((int *)v18, &v80);
LABEL_159:
      v9 = updated;
      goto LABEL_160;
    case 3:
      if ( v4 == 8 )
      {
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          v14 = *((_DWORD *)Address + 1);
          v79 = v14;
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          v9 = NtSetIntervalProfile(v14, ProfileTime);
          if ( v9 >= 0 )
            EtwpProfileInterval = v14;
          goto LABEL_32;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    case 5:
      if ( ((v4 - 16) & 0xFFFFFFFB) == 0 )
      {
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v9 = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          v10 = *((_DWORD *)Address + 1);
          v76 = v10;
          if ( !v10 )
            return 3221225485LL;
          v11 = *((_DWORD *)Address + 2);
          v77 = v11;
          if ( v11 < 0x3E8 )
            return 3221225485LL;
          v12 = *((_DWORD *)Address + 3);
          v78 = v12;
          if ( !v12 )
            return 3221225485LL;
          v13 = EtwpSpinLockHoldThreshold;
          v70 = EtwpSpinLockHoldThreshold;
          if ( v4 == 20 )
          {
            v13 = *((_DWORD *)Address + 4);
            v70 = v13;
            if ( (unsigned int)(v13 - 1) <= 0xF423E )
              return 3221225485LL;
          }
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpSpinLockHoldThreshold = v13;
          EtwpSpinLockSpinThreshold = v10;
          EtwpSpinLockAcquireSampleRate = v11;
          EtwpSpinLockContentionSampleRate = v12;
          goto LABEL_32;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
  }
  if ( v69 != 6 )
  {
    if ( v69 == 7 )
    {
      if ( v4 == 16 )
      {
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v9 = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          v73 = *((_DWORD *)Address + 1);
          v74 = *((_DWORD *)Address + 2);
          v75 = *((_DWORD *)Address + 3);
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpExecutiveResourceReleaseSampleRate = v73;
          EtwpExecutiveResourceContentionSampleRate = v74;
          EtwpExecutiveResourceTimeout = v75;
LABEL_32:
          KeReleaseMutex(&EtwpGroupMaskMutex, 0);
          return (unsigned int)v9;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
LABEL_47:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v21 = v4 - 16;
  if ( (v21 & 3) == 0 )
  {
    if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v69 - 14) <= 1 )
      return 3221225506LL;
    v56 = v21 >> 2;
    v57 = Address + 16;
    P = (PVOID)*((_QWORD *)Address + 1);
    v58 = (unsigned __int16)P;
    if ( (unsigned __int16)P == 0xFFFF )
      v58 = *(unsigned __int8 *)(v7 + 4232);
    v59 = KeGetCurrentThread();
    --v59->KernelApcDisable;
    v60 = EtwpAcquireLoggerContextByLoggerId(v7, v58, 1);
    v18 = (__int64)v60;
    if ( v60 )
    {
      v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v60);
      if ( v9 >= 0 )
      {
        switch ( v69 )
        {
          case 6:
            updated = EtwpUpdateStackTracing(v18, v57, v56);
            goto LABEL_159;
          case 15:
            updated = EtwpUpdatePmcCounters(v18, v57, v56);
            goto LABEL_159;
          case 14:
            updated = EtwpUpdatePmcEvents(v18, v57, v56);
            goto LABEL_159;
        }
        if ( v69 != 20 )
        {
          updated = EtwpUpdateProcessorTraceEvents(v18, v57, v56);
          goto LABEL_159;
        }
        EtwpUpdateLastBranchTracingEvents(v18, v57, v56);
      }
LABEL_160:
      EtwpReleaseLoggerContext((unsigned int *)v18, 1);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  return 3221225485LL;
}
