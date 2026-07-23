/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1407A4210
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     MiValidateMemoryRangeEntries @ 0x1407A48AC (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 *     VmPrefetchVirtualAddresses @ 0x1409DC0E4 (VmPrefetchVirtualAddresses.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     MiProcessRemoveFromWorkingSet @ 0x140A31400 (MiProcessRemoveFromWorkingSet.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  unsigned __int64 v7; // r13
  ULONG_PTR v9; // r15
  char v10; // r11
  int v11; // ebx
  int valid; // edi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // r9
  LONG *p_LockNV; // r8
  char PreviousMode; // r9
  unsigned __int64 v17; // rax
  char *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r13
  __int64 v21; // r13
  NTSTATUS result; // eax
  _QWORD *Pool; // r15
  int v24; // r8d
  __int32 v25; // r14d
  __int32 v26; // r14d
  _BYTE *v27; // r14
  bool v28; // zf
  PVOID v29; // r13
  __int64 v30; // r8
  int v31; // r9d
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r8
  __int32 v35; // r14d
  __int32 v36; // r14d
  int v37; // r14d
  int v38; // r14d
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-318h]
  PVOID v40; // [rsp+58h] [rbp-310h]
  _BYTE *v41; // [rsp+60h] [rbp-308h]
  unsigned int v42; // [rsp+68h] [rbp-300h]
  unsigned int v43; // [rsp+70h] [rbp-2F8h]
  char v44; // [rsp+78h] [rbp-2F0h]
  PVOID Object; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2E0h]
  int v47; // [rsp+90h] [rbp-2D8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-2C8h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-2B8h]
  __int64 v51; // [rsp+C0h] [rbp-2A8h]
  PVOID v52; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KTHREAD *v53; // [rsp+D0h] [rbp-298h]
  HANDLE v54; // [rsp+D8h] [rbp-290h]
  LONG *v55; // [rsp+E0h] [rbp-288h]
  void *Src; // [rsp+E8h] [rbp-280h]
  $115DCDF994C6370D29323EAB0E0C9502 v57; // [rsp+100h] [rbp-268h] BYREF
  _BYTE v58[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v59[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = VirtualAddresses;
  v7 = NumberOfEntries;
  P = (PVOID)NumberOfEntries;
  v9 = (ULONG_PTR)ProcessHandle;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v54 = ProcessHandle;
  Object = 0LL;
  memset(&v57, 0, sizeof(v57));
  v47 = 0;
  v40 = 0LL;
  v10 = 0;
  v44 = 0;
  v11 = 0;
  v41 = v58;
  valid = 0;
  v42 = 0;
  if ( (unsigned int)VmInformationClass >= VmCfgCallTargetInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v13 = VmInformationLength;
      if ( VmInformationLength == 40 )
        goto LABEL_4;
      return -1073741580;
    }
    if ( VmInformationClass != VmPageDirtyStateInformation
      && VmInformationClass != VmImageHotPatchInformation
      && VmInformationClass != VmPhysicalContiguityInformation
      && (unsigned int)(VmInformationClass - 6) >= 2 )
    {
      return -1073741584;
    }
  }
  if ( !VmInformation )
    return -1073741581;
  v13 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmInformationLength )
  {
    if ( !dword_140C6987C )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_4:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  v55 = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[628] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v44 = v10;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Handle = 0LL;
  v51 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v17 = v7;
    if ( 16 * v7 )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v17] > 0x7FFFFFFF0000LL || &VirtualAddresses[v17] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v13 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = (char *)VmInformation + v13;
        if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_OWORD *)Handle = *((_OWORD *)VmInformation + 1);
      v51 = *((_QWORD *)VmInformation + 4);
      v19 = _mm_cvtsi128_si32(*(__m128i *)Address);
      v43 = v19;
      if ( !v19 )
        return -1073741581;
      v20 = v19;
      if ( HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      v21 = 16 * v20;
      if ( v21 )
      {
        if ( ((__int64)Handle[0] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Handle[0] + v21 > 0x7FFFFFFF0000LL || (char *)Handle[0] + v21 < Handle[0] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v7 = (unsigned __int64)P;
      PreviousMode = AccessMode;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v42 = *(_DWORD *)VmInformation;
      v43 = (unsigned int)Address[0];
    }
    p_LockNV = v55;
    v9 = BugCheckParameter1;
    goto LABEL_36;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v42 = *(_DWORD *)VmInformation;
    v43 = (unsigned int)Address[0];
    goto LABEL_36;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_OWORD *)Handle = *((_OWORD *)VmInformation + 1);
  v51 = *((_QWORD *)VmInformation + 4);
  v43 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v43 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_36:
  if ( v9 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v9,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  Pool = v59;
  P = v59;
  if ( v7 > 0x10 )
  {
    Pool = MiAllocatePool(64, 16 * v7, 0x724D6D4Du);
    P = Pool;
    if ( !Pool )
    {
      Pool = v59;
LABEL_100:
      v27 = v58;
      valid = -1073741670;
      v29 = 0LL;
      goto LABEL_53;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v43 > 0x10 )
    {
      v41 = MiAllocatePool(64, 16LL * v43, 0x724D6D4Du);
      if ( !v41 )
        goto LABEL_100;
    }
    if ( Handle[1] )
    {
      v52 = 0LL;
      valid = ObReferenceObjectByHandle(Handle[1], 1u, MmSectionObjectType, AccessMode, &v52, 0LL);
      v40 = v52;
      if ( valid < 0 )
      {
        v29 = v52;
        goto LABEL_74;
      }
    }
  }
  memmove(Pool, Src, 16 * v7);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v41, Handle[0], 16LL * v43);
  if ( v53->ApcState.Process != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_73;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v57);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(Pool, v7, 0LL) )
  {
    valid = -1073741582;
    goto LABEL_73;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v42 == v24 )
    {
      MiGetEffectivePagePriorityThread((__int64)v53);
      if ( (int)PsGetIoPriorityThread(v30) <= 1 )
        v31 |= 0x400u;
      v32 = MiPrefetchVirtualMemory(v7, (__int64)Pool, (__int64)Object + 1664, v31);
      goto LABEL_72;
    }
    goto LABEL_116;
  }
  v25 = VmInformationClass - 1;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( !v26 )
    {
      v27 = v41;
      v28 = v7 == 1;
      v29 = v40;
      if ( v28 )
      {
        valid = MiCfgMarkValidEntries(
                  (_DWORD)Object,
                  *Pool,
                  Pool[1],
                  (_DWORD)v41,
                  v43,
                  (__int64)&v47,
                  v44,
                  (__int64)v40,
                  v51,
                  AccessMode == (KPROCESSOR_MODE)v24);
        if ( v11 )
        {
          KiUnstackDetachProcess(&v57);
          LOBYTE(v11) = 0;
        }
        *(_DWORD *)Address[1] = v47;
      }
      else
      {
        valid = -1073741582;
      }
      goto LABEL_53;
    }
    v35 = v26 - 1;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( !v38 )
          {
            if ( v42 != v24 )
            {
              valid = -1073741811;
              goto LABEL_73;
            }
            v32 = VmPrefetchVirtualAddresses(Pool);
            goto LABEL_72;
          }
          if ( v38 != 1 )
            goto LABEL_73;
          if ( (v42 & 0xFFFFFFFE) == 0 )
          {
            v32 = MiProcessRemoveFromWorkingSet(v7, Pool, v42);
            goto LABEL_72;
          }
LABEL_116:
          valid = -1073741581;
          goto LABEL_73;
        }
        if ( v42 == 512 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
          {
            valid = -1073741727;
            goto LABEL_73;
          }
          v32 = MiProcessVaContiguityInformation((unsigned __int64)Pool, v7);
          goto LABEL_72;
        }
      }
LABEL_123:
      valid = -1073741637;
      goto LABEL_73;
    }
    if ( v42 != v24 )
      goto LABEL_116;
    if ( (*((_DWORD *)Object + 281) & 0x10) == 0 )
      goto LABEL_123;
    v33 = 0LL;
    v34 = 3LL;
  }
  else
  {
    if ( v42 > 5 )
      goto LABEL_116;
    v33 = v42;
    v34 = 1LL;
  }
  v32 = MiProcessVaRangesInfoClass(v7, Pool, v34, v33);
LABEL_72:
  valid = v32;
LABEL_73:
  v29 = v40;
LABEL_74:
  v27 = v41;
LABEL_53:
  if ( (v11 & 1) != 0 )
    KiUnstackDetachProcess(&v57);
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( BugCheckParameter1 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v59 )
    ExFreePoolWithTag(Pool, 0);
  if ( v27 != v58 )
    ExFreePoolWithTag(v27, 0);
  return valid;
}
