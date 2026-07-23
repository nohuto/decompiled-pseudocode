/*
 * XREFs of MmQueryVirtualMemory @ 0x1406F8560
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140465952 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x1406F8520 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x14097F270 (PfpVirtualQuery.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiGetNextVad @ 0x1402150EC (MiGetNextVad.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402756C0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiReferenceVad @ 0x1402756E4 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiGetVadPageSize @ 0x140275904 (MiGetVadPageSize.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiVadMapsLargeImage @ 0x14027D1D0 (MiVadMapsLargeImage.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x14032A674 (MiUnlockVadShared.c)
 *     MiIsSoftwareEnclave @ 0x14033E1F0 (MiIsSoftwareEnclave.c)
 *     MiGetWorkingSetInfo @ 0x1403633B0 (MiGetWorkingSetInfo.c)
 *     MiSetBasicInfoPartitionId @ 0x14036A29C (MiSetBasicInfoPartitionId.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x140429C30 (RtlCompareMemoryUlong.c)
 *     VslQueryVirtualMemory @ 0x14054C634 (VslQueryVirtualMemory.c)
 *     MiGetAweVadPartition @ 0x14064AEB0 (MiGetAweVadPartition.c)
 *     MiWaitForVadDeletion @ 0x1406611A8 (MiWaitForVadDeletion.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D064C (MiIsUserQueryVmCallerTrusted.c)
 *     ExRaiseAccessViolation @ 0x140874020 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     MmQueryBadAddresses @ 0x140A30088 (MmQueryBadAddresses.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 PreviousMode; // r10
  int v13; // edi
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _KPROCESS *Process; // rcx
  PVOID v20; // rbx
  PVOID v21; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r13
  int v37; // r13d
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  unsigned __int16 *ProcessPartition; // r10
  __int64 v42; // r11
  int v43; // ecx
  __int64 *v44; // rax
  unsigned __int16 v45; // r15
  int v46; // ebx
  unsigned __int64 v47; // r14
  char v48; // di
  _QWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  __int64 result; // rax
  unsigned __int64 AddressSpan; // rax
  __int64 v60; // rax
  int v61; // ecx
  int v62; // edx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // r10d
  __int64 v66; // rcx
  unsigned __int64 v67; // r8
  int v68; // r10d
  __int64 v69; // r11
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r8
  PVOID v72; // rbx
  __int64 v73; // rdx
  unsigned __int64 NextVad; // rax
  unsigned __int64 v75; // rbx
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rbx
  int MemoryPhysicalContiguity; // ebx
  __int64 *v80; // rax
  int IsUserQueryVmCallerTrusted; // eax
  bool v82; // cf
  __int64 v83; // rbx
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rbx
  int VirtualMemory; // eax
  __int16 v88; // cx
  __int64 VadEvent; // rax
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  int BadAddresses; // ebx
  int v96; // [rsp+40h] [rbp-158h]
  char v97; // [rsp+40h] [rbp-158h]
  char v98; // [rsp+44h] [rbp-154h]
  unsigned int v99; // [rsp+48h] [rbp-150h] BYREF
  PVOID Object; // [rsp+50h] [rbp-148h]
  __int64 v101; // [rsp+60h] [rbp-138h]
  PVOID v102; // [rsp+68h] [rbp-130h] BYREF
  unsigned __int64 v103; // [rsp+70h] [rbp-128h]
  unsigned __int64 VadPageSize; // [rsp+78h] [rbp-120h]
  unsigned __int64 v105; // [rsp+80h] [rbp-118h]
  _OWORD v106[3]; // [rsp+88h] [rbp-110h] BYREF
  __int128 v107; // [rsp+B8h] [rbp-E0h]
  __int64 v108; // [rsp+C8h] [rbp-D0h]
  int v109; // [rsp+D0h] [rbp-C8h]
  __int64 P; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD *v111; // [rsp+E8h] [rbp-B0h]
  __int128 Source; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v113; // [rsp+100h] [rbp-98h]
  __int128 v114; // [rsp+110h] [rbp-88h]
  $115DCDF994C6370D29323EAB0E0C9502 v115; // [rsp+120h] [rbp-78h] BYREF

  v111 = (_QWORD *)a4;
  v109 = a3;
  v105 = a2;
  v101 = a6;
  v99 = 0;
  v102 = 0LL;
  P = 0LL;
  memset(v106, 0, sizeof(v106));
  v107 = 0LL;
  v108 = 0LL;
  memset(&v115, 0, sizeof(v115));
  v96 = 0;
  VadPageSize = 0LL;
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = a5;
          v82 = a5 < 8;
          goto LABEL_185;
        case 2:
          goto LABEL_176;
        case 4:
          v10 = a5;
          v82 = a5 < 0x10;
LABEL_185:
          if ( !v82 )
            goto LABEL_186;
          return 3221225476LL;
        case 5:
          v10 = a5;
          if ( a5 >= 8 )
            goto LABEL_3;
          return 3221225476LL;
        case 6:
          v10 = a5;
          if ( a5 < 0x18 )
            return 3221225476LL;
          goto LABEL_3;
        case 7:
          v10 = a5;
          if ( a5 < 0x20 )
            return 3221225476LL;
          goto LABEL_3;
        case 8:
          break;
        case 11:
          v10 = a5;
          if ( a5 < 0x28 )
            return 3221225476LL;
LABEL_186:
          v96 = 256;
          goto LABEL_3;
        case 12:
          if ( a2 )
            return 3221225485LL;
LABEL_176:
          v10 = a5;
          goto LABEL_3;
        default:
          return 3221225475LL;
      }
    }
    v10 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  v10 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v98 = PreviousMode;
  v13 = v96;
  if ( v96 == 256
    && PreviousMode
    && (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted(CurrentThread),
        PreviousMode = v98,
        !IsUserQueryVmCallerTrusted) )
  {
    v14 = a7 | 0x40000000;
  }
  else
  {
    v14 = a7;
  }
  if ( PreviousMode )
  {
    if ( v10 )
    {
      v15 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v10 + a4 - 1;
      if ( a4 > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      v13 = v96;
    }
    if ( v101 )
    {
      v18 = v101;
      if ( (unsigned __int64)v101 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
      v13 = v96;
    }
  }
  if ( v105 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v103 = v105 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_22;
  Source = *(_OWORD *)a4;
  v113 = *(_OWORD *)(a4 + 16);
  v114 = *(_OWORD *)(a4 + 32);
  v83 = *((_QWORD *)&v113 + 1);
  *((_QWORD *)&v113 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  v84 = v83 - 1;
  if ( !v83 )
    v84 = 0LL;
  v85 = v105 + v84;
  if ( v85 < v105 || v85 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  VadPageSize = (((v105 & 0xFFF) + v83 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v103;
  v10 = a5;
  PreviousMode = v98;
LABEL_22:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v102 = Process;
  }
  else
  {
    v62 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v62 = 1024;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v62,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v102,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v102;
    Object = v102;
    if ( (*((_DWORD *)v102 + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v102, 0x6D566D4Du);
      return 3221225506LL;
    }
    PreviousMode = v98;
  }
  if ( a3 == 11 )
  {
    MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(Process, a4, v10, PreviousMode);
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    if ( MemoryPhysicalContiguity >= 0 )
    {
      if ( v101 )
        *(_QWORD *)v101 = a5;
      return 0LL;
    }
    return (unsigned int)MemoryPhysicalContiguity;
  }
  if ( (unsigned int)(a3 - 12) <= 1 )
  {
    BadAddresses = MmQueryBadAddresses((ULONG_PTR)Process, v10, v101);
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    result = 0LL;
    if ( BadAddresses < 0 )
      return (unsigned int)BadAddresses;
    return result;
  }
  switch ( a3 )
  {
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList(Process, v14, a4, v10);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v101 )
          *(_QWORD *)v101 = a5;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)Process, v14, a4, v10, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v101 )
          *(_QWORD *)v101 = 8 * P + 8;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 5:
      v86 = Process[2].Affinity.StaticBitmap[12];
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v102, 0x6D566D4Du);
      *(_QWORD *)a4 = v86;
      if ( v101 )
        *(_QWORD *)v101 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(Process, 0, (__int64)&v115);
    v13 |= 1u;
  }
  v97 = v13;
  v20 = Object;
  if ( a3 == 8 )
  {
    if ( *((_QWORD *)Object + 124) )
    {
      VirtualMemory = VslQueryVirtualMemory((__int64)Object, v105, v106);
      if ( VirtualMemory >= 0 )
      {
        if ( LODWORD(v106[2]) == 4096 )
          v88 = *(_WORD *)MiGetProcessPartition((__int64)Object);
        else
          v88 = 0;
        WORD2(v106[1]) = v88;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v115);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        }
        *(_OWORD *)a4 = v106[0];
        *(__m256i *)(a4 + 16) = *(__m256i *)&v106[1];
        if ( v101 )
          *(_QWORD *)v101 = 48LL;
        return 0LL;
      }
    }
  }
  while ( 2 )
  {
    while ( 2 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v20);
      v21 = Object;
      if ( (*((_DWORD *)Object + 281) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v115);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v22 = 0LL;
      v23 = 0LL;
      v24 = *((_QWORD *)Object + 251);
      if ( !v24 )
        goto LABEL_43;
      v23 = v105 >> 12;
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = v24;
          v25 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
          if ( v23 >= v25 )
            break;
LABEL_40:
          v24 = *(_QWORD *)v24;
          if ( !v24 )
            goto LABEL_43;
        }
        if ( v23 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
          break;
        if ( v23 < v25 )
          goto LABEL_40;
        v24 = *(_QWORD *)(v24 + 8);
        if ( !v24 )
          goto LABEL_43;
      }
      v13 |= 2u;
      v97 = v13;
LABEL_43:
      if ( (v13 & 2) == 0 )
      {
        if ( v22 )
        {
          v73 = *(unsigned int *)(v22 + 24);
          if ( (v73 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) >= v23 )
          {
            v75 = v73 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32);
            goto LABEL_160;
          }
          NextVad = MiGetNextVad(v22);
          if ( NextVad )
          {
            v75 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
LABEL_160:
            v76 = v75 << 12;
            goto LABEL_161;
          }
          v76 = 0x7FFFFFFF0000LL;
        }
        else
        {
          v76 = 0x7FFFFFFF0000LL;
        }
LABEL_161:
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v21);
        v77 = v103;
        v78 = v76 - v103;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v115);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v77 = v103;
        }
        if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
        {
          *(_QWORD *)(a4 + 8) = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
          *(_QWORD *)a4 = v77;
          *(_QWORD *)(a4 + 24) = v78;
          *(_DWORD *)(a4 + 32) = 0x10000;
          *(_QWORD *)(a4 + 36) = 1LL;
          MiSetBasicInfoPartitionId(a4, 0);
          if ( v101 )
            *(_QWORD *)v101 = 48LL;
          return 0LL;
        }
        return 3221225793LL;
      }
      MiReferenceVad(v22);
      --CurrentThread->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v26);
      MiLockVadShared((__int64)CurrentThread, v22);
      v27 = CurrentThread->KernelApcDisable++ == -1;
      if ( v27
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (unsigned int)MiVadDeleted(v22) )
      {
        MiUnlockVadShared((__int64)CurrentThread, v22);
        MiLockVad((__int64)CurrentThread, v22);
        MiWaitForVadDeletion(v22);
        MiUnlockAndDereferenceVad((char *)v22);
        v13 &= ~2u;
        v97 = v13;
        v20 = Object;
        continue;
      }
      break;
    }
    if ( v23 < (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
      || v23 > (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((char *)v22);
      v13 &= ~2u;
      v97 = v13;
      v20 = Object;
      continue;
    }
    break;
  }
  memset((char *)&v106[1] + 4, 0, 20);
  HIDWORD(v106[2]) = 0;
  *(_QWORD *)&v106[0] = v103;
  *((_QWORD *)&v106[0] + 1) = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
  LODWORD(v106[1]) = MmProtectToValue[(*(_DWORD *)(v22 + 48) >> 7) & 0x1F] | MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v22);
  v30 = *(_DWORD *)(v22 + 48);
  if ( (v30 & 0x200000) != 0 )
  {
    DWORD2(v106[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v22) )
    {
      LOBYTE(v13) = v13 | 0x40;
      v97 = v13;
    }
    v60 = *(unsigned int *)(v22 + 52);
    LODWORD(v60) = v60 & 0x7FFFFFFF;
    if ( (v60 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v13) = v13 | 0x80;
      v97 = v13;
    }
    v61 = *(_DWORD *)(v22 + 48);
    if ( (v61 & 0x70) == 0x10 )
    {
      LOBYTE(v13) = v13 | 8;
      v97 = v13;
    }
    if ( (v61 & 0x70) == 0x30 )
    {
      LOBYTE(v13) = v13 | 0x10;
      v97 = v13;
    }
    v34 = 1LL;
    v31 = a5;
    v36 = v29;
    if ( (v61 & 0x400000) != 0 )
    {
      LOBYTE(v13) = v13 | 0x20;
      v97 = v13;
    }
    goto LABEL_59;
  }
  if ( (v30 & 0x70) == 0x20 )
  {
    DWORD2(v106[2]) = 0x1000000;
    if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v22 + 72) + 62LL) & 0xC) == 4 )
    {
      LOBYTE(v13) = v13 | 4;
      v97 = v13;
    }
    v31 = a5;
    goto LABEL_137;
  }
  DWORD2(v106[2]) = 0x40000;
  v31 = a5;
  if ( (a3 != 3 || a5 < 0x30) && a3 != 7 )
  {
LABEL_137:
    v34 = 1LL;
    goto LABEL_57;
  }
  v32 = *(__int64 **)(v22 + 72);
  v33 = *v32;
  v34 = 1LL;
  if ( *(_QWORD *)(*v32 + 64) == v29 )
    v35 = v29;
  else
    v35 = 1;
  if ( v35 )
  {
    if ( a3 == 7 && (*(_BYTE *)(v33 + 62) & 0xC) == 4 )
    {
      LOBYTE(v13) = v13 | 4;
      v97 = v13;
    }
  }
  else
  {
    DWORD2(v106[2]) = 0x8000000;
  }
LABEL_57:
  if ( a3 == 2 )
  {
    v80 = *(__int64 **)(v22 + 72);
    v36 = *(_QWORD *)(*v80 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v36 )
    {
      v36 = MiReferenceControlAreaFile(*v80);
      v29 = 0LL;
      v28 = v103;
    }
    if ( !v36 )
      v36 = 1LL;
  }
  else
  {
    v36 = v29;
  }
LABEL_59:
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v107 = 0LL;
      v108 = 0LL;
      v63 = *(_DWORD *)(v22 + 48);
      if ( (v63 & 0x200000) != 0 || (v63 & 0x70) != 0x20 )
      {
        v72 = Object;
      }
      else
      {
        v64 = ***(_QWORD ***)(v22 + 72);
        *(_QWORD *)&v107 = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
        *((_QWORD *)&v107 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v64 + 24), -1LL, -1LL);
        v65 = v108 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v64 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v108) = v65;
        if ( (*(_DWORD *)(v22 + 48) & 0xF80) == 0x80 )
          LODWORD(v108) = v65 | 2;
        if ( (unsigned int)MiVadMapsLargeImage(v22) )
        {
          VadEvent = MiLocateVadEvent(v66, 16LL);
          v70 = *(_QWORD *)(VadEvent + 16);
          *(_QWORD *)&v107 = v90 + ((unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16);
        }
        else
        {
          v70 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
              - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
              + 1;
        }
        if ( (v67 & 0xFFF) == 0 )
          v34 = v69;
        v71 = v34 + (v67 >> 12);
        v72 = v102;
        LOBYTE(v13) = v97;
        if ( v70 < v71 )
          LODWORD(v108) = v68 | 1;
      }
      MiUnlockAndDereferenceVadShared((char *)v22);
      if ( (v13 & 1) != 0 )
      {
        KiUnstackDetachProcess(&v115);
        ObfDereferenceObjectWithTag(v72, 0x6D566D4Du);
      }
      v99 = 24;
      *(_OWORD *)a4 = v107;
      *(_QWORD *)(a4 + 16) = v108;
      if ( v101 )
        *(_QWORD *)v101 = 24LL;
      return 0LL;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v106, v28, VadPageSize, v22);
      *((_QWORD *)&v106[1] + 1) = AddressSpan - *(_QWORD *)&v106[0];
    }
    MiUnlockAndDereferenceVadShared((char *)v22);
    if ( (v13 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v115);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(_OWORD *)a4 = v106[0];
      *(__m256i *)(a4 + 16) = *(__m256i *)&v106[1];
      if ( v101 )
        *(_QWORD *)v101 = 48LL;
      return 0LL;
    }
    if ( v36 )
    {
      if ( v36 == 1 )
        return 3221225624LL;
      if ( (unsigned int)v31 < v31 )
      {
        ObfDereferenceObject((PVOID)v36);
        return 3221225715LL;
      }
      v99 = 0;
      MemoryPhysicalContiguity = ObQueryNameStringMode(v36, a4, v31, (unsigned int)&v99, v98);
      ObfDereferenceObject((PVOID)v36);
      if ( v101 )
        *(_QWORD *)v101 = v99;
      return (unsigned int)MemoryPhysicalContiguity;
    }
    return 3221225793LL;
  }
  v37 = v29;
  v38 = ((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
       - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
       + 1) << 12;
  v39 = *(unsigned int *)(v22 + 52);
  LODWORD(v39) = v39 & 0x7FFFFFFF;
  v40 = v39 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31);
  if ( v40 >= 0x7FFFFFFFDLL )
    v40 = v29;
  VadPageSize = MiGetVadPageSize(v22);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)Object);
  v43 = *(_DWORD *)(v22 + 48);
  if ( (v43 & 0x200000) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      MiGetAweVadPartition(v22);
      VadPageSize = MiGetAweVadPageSize(v22, v91, v92, v93);
    }
    else
    {
      if ( (v43 & 0x800000) == 0 && (v43 & 0x180000u) < 0x100000 )
        goto LABEL_66;
      v94 = MiLocateVadEvent(v22, 16LL);
      if ( v94 )
      {
        v42 = *(_QWORD *)(v94 + 24);
        if ( !v42 || PsReferencePartitionSafe(*(_QWORD *)(v94 + 24)) )
          goto LABEL_66;
        v37 = -1073740640;
      }
      v42 = 0LL;
    }
  }
  else
  {
    v44 = *(__int64 **)(v22 + 72);
    if ( v44 && *v44 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v44);
  }
LABEL_66:
  if ( v37 < 0 )
    v45 = 0;
  else
    v45 = *ProcessPartition;
  if ( v42 )
    PsDereferencePartition(v42);
  v46 = (*(_DWORD *)(v22 + 48) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared((char *)v22);
  if ( (v13 & 1) != 0 )
  {
    KiUnstackDetachProcess(&v115);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  if ( v37 < 0 )
    return (unsigned int)v37;
  v47 = v40 << 12;
  v48 = v13 & 0xFD;
  v49 = v111;
  *v111 = *((_QWORD *)&v106[0] + 1);
  *((_DWORD *)v49 + 2) = v106[1];
  v49[2] = v38;
  if ( v109 != 7 )
  {
    v50 = DWORD2(v106[2]);
    goto LABEL_75;
  }
  v53 = 0;
  *((_DWORD *)v49 + 3) = 0;
  if ( DWORD2(v106[2]) == 0x20000 )
  {
    v53 = 1;
    *((_DWORD *)v49 + 3) = 1;
  }
  else if ( (v48 & 8) != 0 )
  {
    *((_DWORD *)v49 + 3) = 16;
    v53 = 16;
  }
  else
  {
    switch ( DWORD2(v106[2]) )
    {
      case 0x40000:
        *((_DWORD *)v49 + 3) = 2;
        v53 = 2;
        break;
      case 0x1000000:
        *((_DWORD *)v49 + 3) = 4;
        v53 = 4;
        break;
      case 0x8000000:
        *((_DWORD *)v49 + 3) = 8;
        v53 = 8;
        break;
    }
  }
  switch ( VadPageSize )
  {
    case 0x10uLL:
      v53 |= 0x80u;
      goto LABEL_101;
    case 0x200uLL:
      v53 |= 0x800u;
      goto LABEL_101;
    case 0x40000uLL:
      v53 |= 0x1000u;
LABEL_101:
      *((_DWORD *)v49 + 3) = v53;
      break;
  }
  v54 = v53 | (32 * (v48 & 0x20));
  *((_DWORD *)v49 + 3) = v54;
  v55 = v54 | (32 * (v48 & 0x10));
  *((_DWORD *)v49 + 3) = v55;
  v56 = v55 | (8 * (v48 & 4));
  *((_DWORD *)v49 + 3) = v56;
  v57 = v56 | v48 & 0x40;
  *((_DWORD *)v49 + 3) = v57;
  v50 = v57 | (2 * (v48 & 0x80));
LABEL_75:
  *((_DWORD *)v49 + 3) = v50;
  v51 = 24LL;
  v99 = 24;
  if ( a5 >= 0x20 )
  {
    v49[3] = v47;
    v51 = 32LL;
    v99 = 32;
  }
  if ( a5 >= 0x28 )
  {
    v49[4] = v45;
    v51 = 40LL;
    v99 = 40;
  }
  if ( a5 >= 0x30 )
  {
    if ( v46 )
      v52 = (unsigned int)(v46 - 1);
    else
      v52 = 0xFFFFFFFFLL;
    v49[5] = v52;
    v99 = 48;
    v51 = 48LL;
  }
  if ( v101 )
    *(_QWORD *)v101 = v51;
  return 0LL;
}
