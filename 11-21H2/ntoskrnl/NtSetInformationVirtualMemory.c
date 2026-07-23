/*
 * XREFs of NtSetInformationVirtualMemory @ 0x140753430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140753A88 @ 0x140753A88 (sub_140753A88.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_14096CF40 @ 0x14096CF40 (sub_14096CF40.c)
 *     sub_1409D8CF8 @ 0x1409D8CF8 (sub_1409D8CF8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  char v9; // r15
  int v10; // ebx
  NTSTATUS v11; // edi
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _DWORD *v14; // r9
  char v15; // r10
  ULONG_PTR v16; // rax
  unsigned int v17; // r12d
  char *v18; // rcx
  char *v19; // rdx
  NTSTATUS result; // eax
  _QWORD *v21; // r15
  __int64 v22; // r9
  int v23; // r8d
  __int32 v24; // esi
  __int64 v25; // r9
  __int64 v26; // r8
  NTSTATUS v27; // eax
  PVOID v28; // r13
  _BYTE *v29; // rsi
  HANDLE v30; // r12
  __int64 v31; // r9
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int32 v35; // esi
  bool v36; // zf
  NTSTATUS v37; // eax
  __int32 v38; // esi
  __int32 v39; // esi
  int v40; // esi
  int v41; // esi
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-308h]
  PVOID v43; // [rsp+58h] [rbp-300h]
  _BYTE *v44; // [rsp+60h] [rbp-2F8h]
  unsigned int v46; // [rsp+70h] [rbp-2E8h]
  char v47; // [rsp+7Ch] [rbp-2DCh]
  PVOID Object; // [rsp+80h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2D0h]
  int v50; // [rsp+90h] [rbp-2C8h] BYREF
  volatile void *Address[2]; // [rsp+98h] [rbp-2C0h]
  HANDLE Handle[2]; // [rsp+A8h] [rbp-2B0h]
  __int64 v53; // [rsp+B8h] [rbp-2A0h]
  PVOID v54; // [rsp+C0h] [rbp-298h] BYREF
  struct _KTHREAD *v55; // [rsp+C8h] [rbp-290h]
  HANDLE v56; // [rsp+D0h] [rbp-288h]
  void *Src; // [rsp+D8h] [rbp-280h]
  _OWORD v58[3]; // [rsp+F0h] [rbp-268h] BYREF
  _BYTE v59[256]; // [rsp+120h] [rbp-238h] BYREF
  _BYTE v60[256]; // [rsp+220h] [rbp-138h] BYREF

  Src = VirtualAddresses;
  v56 = ProcessHandle;
  Object = 0LL;
  memset(v58, 0, sizeof(v58));
  v50 = 0;
  v43 = 0LL;
  v9 = 0;
  v47 = 0;
  v10 = 0;
  v44 = v59;
  v11 = 0;
  v46 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass > VmPagePriorityInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v12 = VmInformationLength;
      if ( VmInformationLength == 40 )
        goto LABEL_6;
      return -1073741580;
    }
    if ( VmInformationClass > VmRemoveFromWorkingSetInformation )
      return -1073741584;
  }
  if ( !VmInformation )
    return -1073741581;
  v12 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmInformationLength )
  {
    if ( !dword_140C533A0 )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_6:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  v14 = (_DWORD *)*((_QWORD *)CurrentThread + 23);
  P = v14;
  if ( VmInformationClass == VmCfgCallTargetInformation && (v14[628] & 0x100) != 0 )
  {
    if ( (*((_DWORD *)CurrentThread + 344) & 0x40000) == 0 )
      v9 = 1;
    v47 = v9;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Handle = 0LL;
  v53 = 0LL;
  v15 = *((_BYTE *)CurrentThread + 562);
  AccessMode = v15;
  if ( v15 )
  {
    v16 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v16] > 0x7FFFFFFF0000LL || &VirtualAddresses[v16] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v12 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = (char *)VmInformation + v12;
        if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_OWORD *)Handle = *((_OWORD *)VmInformation + 1);
      v53 = *((_QWORD *)VmInformation + 4);
      v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v17 || HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((__int64)Handle[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (char *)Handle[0] + 16 * v17;
      if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Handle[0] )
        MEMORY[0x7FFFFFFF0000] = 0;
      v14 = P;
      v15 = AccessMode;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *(_DWORD *)VmInformation;
      v17 = (unsigned int)Address[0];
    }
    goto LABEL_35;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v46 = *(_DWORD *)VmInformation;
    v17 = (unsigned int)Address[0];
    goto LABEL_35;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_OWORD *)Handle = *((_OWORD *)VmInformation + 1);
  v53 = *((_QWORD *)VmInformation + 4);
  v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v17 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_35:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = v14;
  }
  else
  {
    result = sub_140732D40((ULONG_PTR)ProcessHandle, 8, (__int64)PsProcessType, v15, 0x66506D4Du, &Object, 0LL, 0LL);
    v11 = result;
    if ( result < 0 )
      return result;
  }
  v21 = v60;
  P = v60;
  if ( NumberOfEntries > 0x10 )
  {
    v21 = sub_1402828F0(64, 16 * NumberOfEntries, 0x724D6D4Du);
    P = v21;
    if ( !v21 )
    {
      v21 = v60;
LABEL_99:
      v29 = v59;
      v11 = -1073741670;
      v28 = 0LL;
      goto LABEL_51;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v17 > 0x10 )
    {
      v44 = sub_1402828F0(64, 16LL * v17, 0x724D6D4Du);
      if ( !v44 )
        goto LABEL_99;
    }
    if ( Handle[1] )
    {
      v54 = 0LL;
      v37 = ObReferenceObjectByHandle(Handle[1], 1u, MmSectionObjectType, AccessMode, &v54, 0LL);
      v11 = v37;
      v43 = v54;
      if ( v37 < 0 )
      {
        v28 = v54;
        goto LABEL_50;
      }
    }
  }
  memmove(v21, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v44, Handle[0], 16LL * v17);
  if ( *((PVOID *)v55 + 23) != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      v11 = -1073741585;
      goto LABEL_49;
    }
    sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v58, v22);
    v10 = 1;
  }
  if ( !(unsigned int)sub_140753A88(v21, NumberOfEntries, 0LL) )
  {
    v11 = -1073741582;
    goto LABEL_49;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v46 == v23 )
    {
      sub_1402E670C((__int64)v55);
      v32 = sub_14033D760(v31);
      v34 = 17408;
      if ( v32 > 1 )
        v34 = 0x4000;
      v27 = sub_140284EB0(NumberOfEntries, (__int64)v21, (__int64)Object + 1664, v33 | (unsigned int)v34);
      goto LABEL_48;
    }
    goto LABEL_115;
  }
  v24 = VmInformationClass - 1;
  if ( !v24 )
  {
    if ( v46 <= 5 )
    {
      v25 = v46;
      v26 = 1LL;
LABEL_47:
      v27 = sub_140753B20(NumberOfEntries, v21, v26, v25);
LABEL_48:
      v11 = v27;
LABEL_49:
      v28 = v43;
LABEL_50:
      v29 = v44;
      goto LABEL_51;
    }
LABEL_115:
    v11 = -1073741581;
    goto LABEL_49;
  }
  v35 = v24 - 1;
  if ( v35 )
  {
    v38 = v35 - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( v46 != v23 )
            {
              v11 = -1073741811;
              goto LABEL_49;
            }
            v27 = sub_1409D8CF8(v21);
            goto LABEL_48;
          }
          if ( v41 != 1 )
            goto LABEL_49;
          if ( (v46 & 0xFFFFFFFE) == 0 )
          {
            v27 = sub_14096CF40(NumberOfEntries, v21, v46);
            goto LABEL_48;
          }
          goto LABEL_115;
        }
        if ( v46 == 512 )
        {
          if ( !SeSinglePrivilegeCheck(stru_140D3CA80, AccessMode) )
          {
            v11 = -1073741727;
            goto LABEL_49;
          }
          v27 = sub_1405B4EA0((unsigned __int64)v21, NumberOfEntries);
          goto LABEL_48;
        }
      }
    }
    else
    {
      if ( v46 != v23 )
        goto LABEL_115;
      if ( (*((_DWORD *)Object + 281) & 0x10) != 0 )
      {
        v25 = 0LL;
        v26 = 3LL;
        goto LABEL_47;
      }
    }
    v11 = -1073741637;
    goto LABEL_49;
  }
  v29 = v44;
  v36 = NumberOfEntries == 1;
  v28 = v43;
  if ( v36 )
  {
    v11 = sub_140753C58(
            (_DWORD)Object,
            *v21,
            v21[1],
            (_DWORD)v44,
            v17,
            (__int64)&v50,
            v47,
            (__int64)v43,
            v53,
            AccessMode == (KPROCESSOR_MODE)v23);
    if ( v10 )
    {
      sub_1402D0930((__int64)v58, 0LL);
      LOBYTE(v10) = 0;
    }
    *(_DWORD *)Address[1] = v50;
    v30 = ProcessHandle;
    goto LABEL_52;
  }
  v11 = -1073741582;
LABEL_51:
  v30 = ProcessHandle;
LABEL_52:
  if ( (v10 & 1) != 0 )
    sub_1402D0930((__int64)v58, 0LL);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( v30 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( v21 != (_QWORD *)v60 )
    ExFreePoolWithTag(v21, 0);
  if ( v29 != v59 )
    ExFreePoolWithTag(v29, 0);
  return v11;
}
