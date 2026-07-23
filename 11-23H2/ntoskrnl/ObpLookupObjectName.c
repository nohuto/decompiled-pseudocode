/*
 * XREFs of ObpLookupObjectName @ 0x1406ED750
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     ObpFastReplenishReference @ 0x1402246EC (ObpFastReplenishReference.c)
 *     ObReferenceObjectByPointer @ 0x14022AA90 (ObReferenceObjectByPointer.c)
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeClearLearningModeObjectInformation @ 0x1402322E0 (SeClearLearningModeObjectInformation.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     PsGetThreadServerSilo @ 0x14028C420 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A2070 (PsGetCurrentProcessSessionId.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402F8898 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ObFastReferenceObjectLocked @ 0x140582FA0 (ObFastReferenceObjectLocked.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     ObpUseSystemDeviceMap @ 0x14067EA7C (ObpUseSystemDeviceMap.c)
 *     ObpLockDirectoryExclusive @ 0x140697B24 (ObpLockDirectoryExclusive.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F40 (ObCheckCreateObjectAccess.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C70F0 (ObpParseSymbolicLinkEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x1406FC4D8 (ObpDereferenceCurrentDeviceMap.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA49C (ObpLockUnrelatedDirectoryShared.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x1407AF7A4 (ObpSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     ObpSlowReferenceDeviceMap @ 0x1407AFB98 (ObpSlowReferenceDeviceMap.c)
 *     ObpDeleteDeviceMap @ 0x1407B0174 (ObpDeleteDeviceMap.c)
 *     ObpGetShadowDirectory @ 0x1407B4C9C (ObpGetShadowDirectory.c)
 *     ObpLookupDirectoryUsingHash @ 0x1407B7148 (ObpLookupDirectoryUsingHash.c)
 *     ObpInsertDirectoryEntry @ 0x1407C09BC (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x1407E0E04 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x14097B918 (ObpCheckTraverseAccess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11,
        int *a12,
        __int64 *a13)
{
  __int64 v13; // r15
  __int64 v14; // r9
  unsigned int v16; // r12d
  unsigned __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r8
  POBJECT_TYPE *v21; // r14
  int v22; // ecx
  int result; // eax
  __int16 v24; // dx
  __int64 v25; // rbx
  PVOID v26; // rax
  KPROCESSOR_MODE v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  PVOID ProcessServerSilo; // rbx
  bool v33; // r12
  struct _KTHREAD *v34; // r15
  _QWORD *p_Lock; // rbx
  signed __int64 *ServerSiloGlobals; // rax
  int TokenDeviceMap; // eax
  volatile signed __int64 *v38; // rsi
  signed __int64 v39; // r13
  signed __int64 v40; // rax
  _WORD *v41; // rcx
  unsigned __int16 v42; // r9
  __int16 v43; // ax
  _WORD *v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // r15
  signed __int64 *v48; // rbx
  signed __int64 v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rdi
  unsigned int v52; // edx
  char *v53; // rsi
  struct _KTHREAD *v54; // rax
  signed __int64 *v55; // rsi
  struct _KTHREAD *v56; // rax
  __int64 v57; // r14
  char v58; // cl
  NTSTATUS v59; // eax
  signed __int64 v60; // rax
  signed __int64 v61; // rtt
  int v62; // edx
  void *v63; // r12
  __int16 *v64; // rax
  __int16 v65; // cx
  volatile signed __int64 *v66; // rax
  void *v67; // rax
  int PermanentSiloContext; // eax
  __int64 v69; // r12
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 (__fastcall *v72)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rbx
  bool v73; // si
  struct _KTHREAD *v74; // rax
  ULONG_PTR v75; // rcx
  signed __int64 *v76; // rbx
  signed int v77; // r13d
  unsigned int v78; // ebx
  unsigned __int16 *v79; // rdi
  unsigned __int64 v80; // r11
  __int64 v81; // r9
  __int64 v82; // r10
  unsigned int v83; // edx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v85; // dx
  __int128 v86; // rt0
  unsigned int v87; // r10d
  unsigned int v88; // edx
  int v89; // r10d
  _QWORD *v90; // rax
  unsigned __int16 v91; // dx
  unsigned __int16 v92; // ax
  int v93; // r10d
  char v94; // r15
  int v95; // r15d
  __int64 v96; // rcx
  __int64 **v97; // r14
  __int64 *v98; // rsi
  _QWORD *v99; // rax
  __int64 v100; // rdx
  char *v101; // r11
  unsigned int v102; // ecx
  __int64 v103; // rbx
  char *v104; // r10
  _QWORD *v105; // r11
  char *v106; // rdi
  signed __int64 v107; // r11
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // r9
  char v110; // si
  __int64 (__fastcall *v111)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rax
  __int64 v112; // rbx
  __int64 ShadowDirectory; // rax
  NTSTATUS v114; // eax
  __int16 v115; // bx
  PVOID v116; // rax
  __int16 v117; // cx
  int v118; // eax
  KPROCESSOR_MODE v119; // r9
  struct _OBJECT_TYPE *v120; // r8
  void *v121; // rcx
  PVOID v122; // r14
  signed __int64 v123; // rax
  signed __int64 v124; // rtt
  signed __int64 v125; // rax
  signed __int64 v126; // rcx
  bool v127; // zf
  signed __int64 v128; // rtt
  char *v129; // rax
  struct _KTHREAD *v130; // rcx
  volatile signed __int64 *v131; // rbx
  signed __int64 v132; // rcx
  bool v133; // cc
  signed __int64 v134; // rcx
  ACCESS_MASK v135; // edx
  struct _ACCESS_STATE *v136; // r8
  _DWORD *v137; // r14
  int v138; // ebx
  unsigned int v139; // ebx
  void *Pool2; // rsi
  char *v141; // rbx
  void *v142; // rcx
  __int16 v143; // ax
  struct _KTHREAD *v144; // rax
  NTSTATUS v145; // ecx
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v147; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v148; // [rsp+68h] [rbp-98h]
  __int64 v149[2]; // [rsp+70h] [rbp-90h] BYREF
  int v150; // [rsp+80h] [rbp-80h]
  unsigned int v151; // [rsp+84h] [rbp-7Ch] BYREF
  volatile signed __int64 *v152; // [rsp+88h] [rbp-78h]
  volatile signed __int64 *v153; // [rsp+90h] [rbp-70h] BYREF
  int v154; // [rsp+98h] [rbp-68h]
  int v155; // [rsp+9Ch] [rbp-64h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v157[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v158; // [rsp+B4h] [rbp-4Ch]
  __int64 v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v162; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v163; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v164; // [rsp+E0h] [rbp-20h] BYREF
  PVOID ThreadServerSilo; // [rsp+E8h] [rbp-18h]
  __int64 v166; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int64 *v167; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v168; // [rsp+108h] [rbp+8h] BYREF
  __int128 v169; // [rsp+118h] [rbp+18h]
  __int128 v170; // [rsp+128h] [rbp+28h]
  __int64 v171; // [rsp+138h] [rbp+38h]
  char v172; // [rsp+190h] [rbp+90h]
  int v174; // [rsp+1A0h] [rbp+A0h]

  v174 = a3;
  v13 = 0LL;
  v14 = a5;
  Object = 0LL;
  v171 = 0LL;
  *(_OWORD *)a11 = 0LL;
  a11[2] = 0LL;
  v16 = a3;
  v157[1] = 0;
  v18 = 0LL;
  v166 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 64;
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  *(_OWORD *)v149 = 0LL;
  if ( a12 )
    *a12 = 0;
  v127 = ObpCaseInsensitive == 0;
  v19 = 0LL;
  v20 = a9;
  v21 = (POBJECT_TYPE *)a4;
  *a13 = 0LL;
  v157[0] = 16;
  v147 = 0;
  v155 = 0;
  v172 = 1;
  v148 = 0LL;
  v158 = -1;
  v159 = a9;
  if ( !v127
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 |= 0x40u;
    v174 = v16;
  }
  v22 = 1;
  if ( (v16 & 0x400) == 0 )
    v22 = a5;
  v150 = v22;
  v151 = v16 & 0x40;
  if ( !a8 )
    v151 = v16 & 0x40 | 1;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, a5, 0x746C6644u, &Object, 0LL, &v166);
    v147 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v166) )
    {
      v158 &= HIDWORD(v166);
      if ( (v158 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
    }
    v19 = (__int64)Object;
    if ( *(_WORD *)a2 )
    {
      if ( **(_WORD **)(a2 + 8) == 92
        && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(Object);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      v147 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
      if ( v147 >= 0 )
        v13 = v19;
      ObfDereferenceObject((PVOID)v19);
      result = v147;
      *a13 = v13;
      return result;
    }
    *(_OWORD *)v149 = *(_OWORD *)a2;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v169 + 1) = a2;
      *(_QWORD *)&v169 = a4 + 16;
      *(_QWORD *)&v170 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v168);
    }
    goto LABEL_142;
  }
  v24 = *(_WORD *)a2;
  if ( !v24 )
    return -1073741765;
  v25 = a2 + 8;
  if ( **(_WORD **)(a2 + 8) != 92 )
    return -1073741765;
  if ( v24 == 2 )
  {
    v26 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
    v28 = (__int64)v26;
    if ( v26 )
    {
      result = ObReferenceObjectByPointer(v26, 0, (POBJECT_TYPE)a4, v27);
      if ( result >= 0 )
        *a13 = v28;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, (POBJECT_TYPE)a4, v27);
      if ( result >= 0 )
        *a13 = (__int64)a8;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  v29 = a2;
  if ( SepLearningModeTokenCount )
  {
    *((_QWORD *)&v169 + 1) = a2;
    *(_QWORD *)&v169 = a4 + 16;
    *(_QWORD *)&v170 = 0LL;
    SeSetLearningModeObjectInformation((__int64)&v168);
  }
  while ( 1 )
  {
LABEL_39:
    if ( *(_WORD *)v29 < 8u )
    {
      if ( *(_WORD *)v29 == 6 && **(_DWORD **)v25 == 4128860 && *(_WORD *)(*(_QWORD *)v25 + 4LL) == 63 )
      {
        v66 = (volatile signed __int64 *)ObpReferenceCurrentDeviceMap(v16, &v153, v20, v14);
        v152 = v66;
        v18 = (unsigned __int64)v66;
        if ( v66 )
        {
          v67 = (void *)*v66;
          if ( v67 )
          {
            v119 = a5;
            v19 = (__int64)v67;
            v120 = (struct _OBJECT_TYPE *)v21;
            v121 = v67;
            goto LABEL_286;
          }
        }
      }
      goto LABEL_137;
    }
    if ( **(_QWORD **)v25 != 0x5C003F003F005CLL )
      goto LABEL_137;
    if ( v21 == IoFileObjectType && ObpUseSystemDeviceMap(v29) )
      v174 = v16 | 0x800;
    CurrentThread = KeGetCurrentThread();
    v152 = 0LL;
    v153 = 0LL;
    Process = (__int64)CurrentThread->Process;
    ProcessServerSilo = (PVOID)PsGetProcessServerSilo(Process);
    ThreadServerSilo = (PVOID)PsGetThreadServerSilo((__int64)CurrentThread);
    v33 = ProcessServerSilo != ThreadServerSilo;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || (v174 & 0x800) != 0 )
      goto LABEL_61;
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_62;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
        if ( !p_Lock )
          p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
      }
      else
      {
        p_Lock = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v34);
      if ( p_Lock )
      {
        if ( p_Lock[3] == 999LL )
        {
          v33 = 1;
          ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
          ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals((__int64)ThreadServerSilo);
          goto LABEL_64;
        }
        v167 = 0LL;
        TokenDeviceMap = SeGetTokenDeviceMap(p_Lock, &v167);
        v38 = v152;
        if ( TokenDeviceMap >= 0 )
          v38 = v167;
        v152 = v38;
        ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
        if ( v38 )
        {
          v18 = (unsigned __int64)v152;
          goto LABEL_74;
        }
LABEL_61:
        if ( v33 )
        {
LABEL_62:
          ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals((__int64)ThreadServerSilo);
          goto LABEL_64;
        }
      }
    }
    ServerSiloGlobals = (signed __int64 *)(Process + 1416);
LABEL_64:
    v153 = ServerSiloGlobals;
    _m_prefetchw(ServerSiloGlobals);
    v39 = *ServerSiloGlobals;
    if ( (*ServerSiloGlobals & 0xF) == 0 )
      goto LABEL_68;
    do
    {
      v40 = _InterlockedCompareExchange64(v153, v39 - 1, v39);
      if ( v39 == v40 )
        break;
      v39 = v40;
    }
    while ( (v40 & 0xF) != 0 );
    if ( (v39 & 0xF) != 0 )
    {
      v18 = v39 & 0xFFFFFFFFFFFFFFF0uLL;
      v152 = (volatile signed __int64 *)v18;
    }
    else
    {
LABEL_68:
      v18 = ObpSlowReferenceDeviceMap(v153);
      v152 = (volatile signed __int64 *)v18;
    }
    if ( v18 )
      goto LABEL_75;
    if ( !v33 )
    {
      v153 = 0LL;
      v18 = ObpSetCurrentProcessDeviceMap();
      v152 = (volatile signed __int64 *)v18;
    }
LABEL_74:
    if ( !v18 )
      goto LABEL_131;
LABEL_75:
    if ( !*(_QWORD *)v18 )
    {
LABEL_131:
      v29 = a2;
LABEL_137:
      if ( !v19 )
      {
        v163 = 0LL;
        PermanentSiloContext = PsGetPermanentSiloContext(
                                 a9,
                                 PsObjectDirectorySiloContextSlot,
                                 (unsigned __int64 *)&v163);
        v19 = v163;
        if ( PermanentSiloContext < 0 )
          v19 = (__int64)ObpRootDirectoryObject;
        v163 = v19;
      }
      *(_OWORD *)v149 = *(_OWORD *)v29;
LABEL_142:
      v57 = a10;
LABEL_143:
      v42 = v149[0];
      v44 = (_WORD *)v149[1];
LABEL_144:
      v69 = (__int64)a11;
      while ( 1 )
      {
        v70 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8);
        v71 = ObTypeIndexTable[v70];
        v72 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v71 + 144);
        if ( !v72 )
          break;
LABEL_244:
        v160 = 0LL;
        if ( v72 == ObpParseSymbolicLinkEx )
        {
          v29 = a2;
          v115 = v174;
          v62 = ObpParseSymbolicLinkEx(
                  (unsigned __int16 *)v19,
                  (POBJECT_TYPE)a4,
                  (struct _SECURITY_SUBJECT_CONTEXT *)v57,
                  v150,
                  v174,
                  a2,
                  (unsigned __int16 *)v149,
                  a6,
                  a7,
                  (__int64)v157,
                  (unsigned __int16 **)&v160);
          v147 = v62;
        }
        else
        {
          if ( a8 )
            goto LABEL_338;
          ObfReferenceObject((PVOID)v19);
          if ( *(_QWORD *)v69 )
          {
            ExReleasePushLockEx((__int64 *)(*(_QWORD *)v69 + 296LL), 0LL);
            if ( *(_BYTE *)(v69 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
              *(_BYTE *)(v69 + 22) = 0;
            }
            *(_QWORD *)v69 = 0LL;
            *(_BYTE *)(v69 + 21) = 0;
            KeLeaveCriticalRegion();
          }
          v127 = (*(_BYTE *)(v71 + 67) & 1) == 0;
          v29 = a2;
          if ( v127 )
            v114 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64, __int64 *, __int64, __int64, __int64 *))v72)(
                     v19,
                     a4,
                     v57,
                     (unsigned __int8)v150,
                     v174,
                     a2,
                     v149,
                     a6,
                     a7,
                     &v160);
          else
            v114 = v72(
                     (unsigned __int16 *)v19,
                     (POBJECT_TYPE)a4,
                     (struct _SECURITY_SUBJECT_CONTEXT *)v57,
                     v150,
                     v174,
                     a2,
                     (unsigned __int16 *)v149,
                     a6,
                     a7,
                     (__int64)v157,
                     (unsigned __int16 **)&v160);
          v147 = v114;
          ObfDereferenceObject((PVOID)v19);
          v62 = v147;
          v115 = v174;
        }
        if ( v62 < 0 )
          goto LABEL_287;
        v116 = v148;
        v19 = v160;
        if ( v148 )
        {
          ObDereferenceObjectDeferDelete(v148);
          v62 = v147;
          v116 = 0LL;
          v148 = 0LL;
        }
        if ( v62 != 260 )
        {
          if ( v62 != 872 )
            v116 = (PVOID)v19;
          v148 = v116;
        }
        if ( (v158 & *(_DWORD *)(v57 + 24)) != *(_DWORD *)(v57 + 24) )
          goto LABEL_345;
        if ( v62 != 260 && v62 != 872 && v62 != 280 )
          goto LABEL_339;
        if ( (v115 & 0x1000) != 0 && v62 != 872 )
          goto LABEL_342;
        if ( !--v154 )
          goto LABEL_344;
        if ( !*(_WORD *)v29 )
          goto LABEL_343;
        if ( v18 )
        {
          ObpDereferenceCurrentDeviceMap(v18, v153);
          v62 = v147;
          v18 = 0LL;
          v152 = 0LL;
        }
        if ( *(_QWORD *)v69 )
        {
          ExReleasePushLockEx((__int64 *)(*(_QWORD *)v69 + 296LL), 0LL);
          if ( *(_BYTE *)(v69 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
            *(_BYTE *)(v69 + 22) = 0;
          }
          *(_QWORD *)v69 = 0LL;
          *(_BYTE *)(v69 + 21) = 0;
          KeLeaveCriticalRegion();
          v62 = v147;
        }
        v25 = v29 + 8;
        v117 = **(_WORD **)(v29 + 8);
        if ( v62 != 280 )
        {
          if ( v117 != 92 )
            goto LABEL_343;
          if ( v62 == 872 )
          {
            v19 = (__int64)ObpRootDirectoryObject;
            v16 = v174;
            v21 = (POBJECT_TYPE *)a4;
          }
          else
          {
            v164 = 0LL;
            v118 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v164);
            v19 = v164;
            v25 = v29 + 8;
            v16 = v174;
            v21 = (POBJECT_TYPE *)a4;
            if ( v118 < 0 )
              v19 = (__int64)ObpRootDirectoryObject;
            v164 = v19;
          }
          goto LABEL_39;
        }
        if ( v117 == 92 )
          goto LABEL_343;
        *(_OWORD *)v149 = *(_OWORD *)v29;
        v44 = (_WORD *)v149[1];
        v42 = v149[0];
      }
LABEL_146:
      if ( (POBJECT_TYPE)v71 != ObpDirectoryObjectType )
      {
LABEL_338:
        v122 = v148;
        v147 = -1073741788;
        goto LABEL_289;
      }
      ThreadServerSilo = (PVOID)v19;
      if ( v42 && *v44 == 92 )
      {
        ++v44;
        v42 -= 2;
        WORD1(v149[0]) -= 2;
        v149[1] = (__int64)v44;
        LOWORD(v149[0]) = v42;
      }
      *(_OWORD *)Src = *(_OWORD *)v149;
      if ( v42 )
      {
        do
        {
          if ( *v44 == 92 )
            break;
          ++v44;
          v127 = v42 == 2;
          v42 -= 2;
          v149[1] = (__int64)v44;
          LOWORD(v149[0]) = v42;
        }
        while ( !v127 );
      }
      WORD1(v149[0]) -= LOWORD(Src[0]) - v42;
      LOWORD(Src[0]) -= v42;
      if ( !LOWORD(Src[0]) )
      {
        v122 = v148;
        v147 = -1073741773;
        goto LABEL_289;
      }
      if ( (_BYTE)v150 && (*(_DWORD *)(v57 + 12) & 1) == 0 )
      {
        v172 = ObpCheckTraverseAccess(v19, v70, v57);
        if ( !v172 )
        {
          v62 = v155;
          if ( v155 >= 0 )
            v62 = -1073741772;
          v155 = v62;
          if ( LOWORD(v149[0]) || !a8 )
            goto LABEL_336;
          v73 = 1;
LABEL_167:
          if ( *(_QWORD *)v69 )
          {
            v75 = v19 + 296;
            if ( v73 )
              ExAcquirePushLockExclusiveEx(v75, 0LL);
            else
              ExAcquirePushLockSharedEx(v75, 0LL);
            v76 = *(signed __int64 **)v69;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v69 + 296LL), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v76 + 37);
            KeAbPostRelease((ULONG_PTR)(v76 + 37));
            if ( *(_BYTE *)(v69 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v69, 0x554C624Fu);
              *(_BYTE *)(v69 + 22) = 0;
            }
            *(_QWORD *)v69 = v19;
            *(_BYTE *)(v69 + 21) = v73;
          }
          else if ( v73 )
          {
            ObpLockDirectoryExclusive(v69, v19);
          }
          else
          {
            *(_QWORD *)v69 = v19;
            *(_BYTE *)(v69 + 21) = 0;
            v74 = KeGetCurrentThread();
            --v74->KernelApcDisable;
            ExAcquirePushLockSharedEx(v19 + 296, 0LL);
          }
          v77 = LOWORD(Src[0]);
          v78 = LOWORD(Src[0]) >> 1;
          v79 = (unsigned __int16 *)Src[1];
          if ( v78 < 4 )
          {
            v87 = 0;
          }
          else
          {
            v80 = 0LL;
            do
            {
              v81 = *(_QWORD *)v79;
              if ( (*(_QWORD *)v79 & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v82 = 4LL;
                do
                {
                  v83 = (unsigned __int16)v81;
                  if ( (unsigned __int16)v81 >= 0x61u )
                  {
                    if ( (unsigned __int16)v81 <= 0x7Au )
                    {
                      v83 = (unsigned __int16)v81 - 32;
                    }
                    else
                    {
                      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                      v83 = NLS_UPCASE(CurrentServerSiloGlobals[154], v85);
                    }
                  }
                  *(_QWORD *)&v86 = v81;
                  *((_QWORD *)&v86 + 1) = v83;
                  v81 = v86 >> 16;
                  --v82;
                }
                while ( v82 );
              }
              else
              {
                v81 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              v79 += 4;
              v78 -= 4;
              v80 = v81 + (v80 >> 1) + 3 * v80;
            }
            while ( v78 >= 4 );
            v69 = (__int64)a11;
            v77 = LOWORD(Src[0]);
            v87 = v80 + HIDWORD(v80);
          }
          if ( !v78 )
          {
LABEL_199:
            v94 = v151;
            *(_DWORD *)(v69 + 16) = v87;
            v95 = v94 & 0x40;
            v96 = v87 % 0x25;
            v97 = (__int64 **)(*(_QWORD *)v69 + 8 * v96);
            *(_BYTE *)(v69 + 20) = v96;
            v98 = *v97;
            if ( !*v97 )
            {
LABEL_238:
              v19 = 0LL;
              goto LABEL_239;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v98 + 4) == *(_DWORD *)(v69 + 16) )
              {
                v99 = PsGetCurrentServerSiloGlobals();
                v102 = v77;
                v103 = v99[154];
                if ( v77 == *(unsigned __int16 *)(v100 + 8) )
                {
                  v104 = v101;
                  v105 = *(_QWORD **)(v100 + 16);
                  v106 = &v104[v77];
                  if ( (unsigned __int64)v77 >= 8 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v104 != *v105 )
                        break;
                      v102 -= 8;
                      if ( !v102 )
                        goto LABEL_224;
                      v104 += 8;
                      ++v105;
                    }
                    while ( v102 >= 8 );
                  }
                  if ( v104 >= v106 )
                  {
LABEL_224:
                    v19 = v98[1];
                    *(_QWORD *)(v69 + 8) = v97;
                    if ( v19 )
                    {
                      v18 = (unsigned __int64)v152;
                      v57 = a10;
                      v110 = v150;
                      goto LABEL_226;
                    }
LABEL_239:
                    v18 = (unsigned __int64)v152;
                    v57 = a10;
                    v110 = v150;
                    if ( (v151 & 1) != 0 )
                    {
                      v112 = *(_QWORD *)v69;
                      do
                      {
                        ShadowDirectory = ObpGetShadowDirectory(v112, v18, (unsigned int)&v151, a10, v110);
                        v112 = ShadowDirectory;
                        if ( !ShadowDirectory )
                          break;
                        ObpLockUnrelatedDirectoryShared(v69, ShadowDirectory);
                        v19 = ObpLookupDirectoryUsingHash(v112, Src, v69, v151);
                      }
                      while ( !v19 );
                    }
LABEL_226:
                    if ( v172 )
                    {
                      if ( !v19 )
                        goto LABEL_312;
                      v42 = v149[0];
                      if ( LOWORD(v149[0])
                        || (v111 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8)] + 144)) != 0LL
                        && (v111 == ObpParseSymbolicLinkEx || !a8) )
                      {
                        v70 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8);
                        v71 = ObTypeIndexTable[v70];
                        v72 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v71 + 144);
                        if ( v72 )
                          goto LABEL_244;
                        v44 = (_WORD *)v149[1];
                        goto LABEL_146;
                      }
                      v119 = a5;
                      v120 = (struct _OBJECT_TYPE *)a4;
                      v121 = (void *)v19;
LABEL_286:
                      v62 = ObReferenceObjectByPointer(v121, 0, v120, v119);
                      v147 = v62;
LABEL_287:
                      v122 = v148;
LABEL_288:
                      if ( v62 < 0 )
                        goto LABEL_289;
                      goto LABEL_293;
                    }
                    if ( !v19 )
                    {
LABEL_312:
                      if ( LOWORD(v149[0]) )
                      {
                        v122 = v148;
                        v147 = -1073741766;
                        goto LABEL_289;
                      }
                      if ( !a8 )
                      {
                        v122 = v148;
                        v147 = -1073741772;
                        goto LABEL_289;
                      }
                      v135 = 4;
                      v136 = (struct _ACCESS_STATE *)v57;
                      v137 = ThreadServerSilo;
                      if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                        v135 = 8;
                      LOBYTE(Tag) = 0;
                      if ( ObCheckCreateObjectAccess(
                             (__int64)ThreadServerSilo,
                             v135,
                             v136,
                             (__int64)Src,
                             Tag,
                             v110,
                             &v147) )
                      {
                        v138 = v137[85];
                        if ( v138 != -1
                          && ((POBJECT_TYPE)a4 == MmSectionObjectType || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                          && v138 != (unsigned int)PsGetCurrentProcessSessionId()
                          && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v110)
                          && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                        {
                          v122 = v148;
                          v147 = -1073741790;
                          goto LABEL_289;
                        }
                        v139 = LOWORD(Src[0]);
                        Pool2 = (void *)ExAllocatePool2(256LL, LOWORD(Src[0]), 1833853519LL);
                        if ( Pool2 )
                        {
                          if ( (unsigned __int8)ObpInsertDirectoryEntry(v137, a8) )
                          {
                            memmove(Pool2, Src[1], v139);
                            v141 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                            v142 = (void *)*((_QWORD *)v141 + 2);
                            if ( v142 )
                              ExFreePoolWithTag(v142, 0);
                            v143 = (__int16)Src[0];
                            v19 = (__int64)a8;
                            v122 = v148;
                            *((_WORD *)v141 + 4) = Src[0];
                            *((_WORD *)v141 + 5) = v143;
                            *((_QWORD *)v141 + 2) = Pool2;
                            v147 = 0;
                            goto LABEL_293;
                          }
                          ExFreePoolWithTag(Pool2, 0);
                        }
                        v122 = v148;
                        v147 = -1073741670;
                        goto LABEL_289;
                      }
                      v122 = v148;
                      if ( v147 < 0 )
                        goto LABEL_289;
                      v62 = -1073741772;
                      v147 = -1073741772;
                      goto LABEL_288;
                    }
                    v62 = v155;
LABEL_336:
                    v147 = v62;
                    goto LABEL_287;
                  }
                  if ( v95 )
                  {
                    v107 = (char *)v105 - v104;
                    while ( 1 )
                    {
                      v108 = *(unsigned __int16 *)v104;
                      v109 = *(unsigned __int16 *)&v104[v107];
                      if ( (_WORD)v108 != (_WORD)v109 )
                      {
                        if ( (unsigned int)v108 >= 0x61 )
                        {
                          if ( (unsigned int)v108 > 0x7A )
                          {
                            if ( v103 && (unsigned __int16)v108 >= 0xC0u )
                              LOWORD(v108) = *(_WORD *)(v103
                                                      + 2
                                                      * ((v108 & 0xF)
                                                       + *(unsigned __int16 *)(v103
                                                                             + 2LL
                                                                             * (((unsigned __int8)v108 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(v103 + 2 * (v108 >> 8))))))
                                           + v108;
                          }
                          else
                          {
                            LOWORD(v108) = v108 - 32;
                          }
                        }
                        if ( (unsigned int)v109 >= 0x61 )
                        {
                          if ( (unsigned int)v109 > 0x7A )
                          {
                            if ( v103 && (unsigned __int16)v109 >= 0xC0u )
                              LOWORD(v109) = *(_WORD *)(v103
                                                      + 2
                                                      * ((v109 & 0xF)
                                                       + *(unsigned __int16 *)(v103
                                                                             + 2LL
                                                                             * (((unsigned __int8)v109 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(v103 + 2 * (v109 >> 8))))))
                                           + v109;
                          }
                          else
                          {
                            LOWORD(v109) = v109 - 32;
                          }
                        }
                        if ( (_WORD)v108 != (_WORD)v109 )
                          break;
                      }
                      v104 += 2;
                      if ( v104 >= v106 )
                        goto LABEL_224;
                    }
                  }
                  else
                  {
                    while ( *(_WORD *)v104 == *(_WORD *)v105 )
                    {
                      v104 += 2;
                      v105 = (_QWORD *)((char *)v105 + 2);
                      if ( v104 >= v106 )
                        goto LABEL_224;
                    }
                  }
                }
              }
              v97 = (__int64 **)v98;
              v98 = (__int64 *)*v98;
              if ( !v98 )
                goto LABEL_238;
            }
          }
          while ( 1 )
          {
            v88 = *v79++;
            --v78;
            v89 = (v87 >> 1) + 3 * v87;
            if ( v88 < 0x61 )
              goto LABEL_197;
            if ( v88 <= 0x7A )
              break;
            v90 = PsGetCurrentServerSiloGlobals();
            v92 = NLS_UPCASE(v90[154], v91);
            v87 = v92 + v93;
LABEL_198:
            if ( !v78 )
              goto LABEL_199;
          }
          v89 -= 32;
LABEL_197:
          v87 = v88 + v89;
          goto LABEL_198;
        }
        v42 = v149[0];
      }
      v73 = a8 && !v42;
      goto LABEL_167;
    }
    v41 = *(_WORD **)(a2 + 8);
    v42 = *(_WORD *)a2 - 8;
    v43 = *(_WORD *)(a2 + 2) - 8;
    LOWORD(v149[0]) = v42;
    v44 = v41 + 4;
    v149[1] = (__int64)(v41 + 4);
    WORD1(v149[0]) = v43;
    if ( (POBJECT_TYPE *)a4 != IoFileObjectType
      || (v151 & 1) == 0
      || v42 < 6u
      || v41[5] != 58
      || v41[6] != 92
      || (v45 = ((unsigned __int16)*v44 | 0x20u) - 97, (unsigned int)v45 >= 0x1A) )
    {
LABEL_101:
      v19 = *(_QWORD *)v18;
      v57 = a10;
      goto LABEL_144;
    }
    v46 = v18;
    v47 = 8 * v45 + 32;
    while ( 1 )
    {
      v48 = (signed __int64 *)(v47 + v46);
      if ( !*(_QWORD *)(v47 + v46) )
        goto LABEL_99;
      _m_prefetchw(v48);
      v49 = *v48;
      if ( (*v48 & 0xF) != 0 )
      {
        do
        {
          v50 = _InterlockedCompareExchange64(v48, v49 - 1, v49);
          if ( v49 == v50 )
            break;
          v49 = v50;
        }
        while ( (v50 & 0xF) != 0 );
      }
      v51 = v49;
      v52 = v49 & 0xF;
      v19 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v52 <= 1 )
      {
        if ( !v52 )
          goto LABEL_93;
        ObpFastReplenishReference((signed __int64 *)(v47 + v46), v19);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48, 1, 1u, 0x554C624Fu);
      if ( v19 )
        break;
LABEL_93:
      v53 = (char *)PsGetServerSiloGlobals(*(_QWORD *)(v46 + 16));
      v54 = KeGetCurrentThread();
      v55 = (signed __int64 *)(v53 + 120);
      --v54->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v55, 0LL);
      v19 = ObFastReferenceObjectLocked((_QWORD *)(v47 + v46), 0x554C624Fu);
      if ( _InterlockedCompareExchange64(v55, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v55);
      KeAbPostRelease((ULONG_PTR)v55);
      v56 = KeGetCurrentThread();
      v127 = v56->SpecialApcDisable++ == -1;
      if ( v127 && ($C71981A45BEB2B45F82C232A7085991E *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
        KiCheckForKernelApcDelivery();
      if ( v19 )
        break;
LABEL_99:
      v46 = *(_QWORD *)(v46 + 24);
      if ( !v46 )
      {
        v44 = (_WORD *)v149[1];
        v42 = v149[0];
        goto LABEL_101;
      }
    }
    v149[1] += 4LL;
    LOWORD(v149[0]) -= 4;
    v57 = a10;
    v58 = ObHeaderCookie ^ *(_BYTE *)(v19 - 24) ^ ((unsigned __int16)(v19 - 48) >> 8);
    v162 = 0LL;
    if ( v58 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v59 = IopParseDevice(v19, v174, a2, (__int64)v149, a6, a7, (__int64)v157, (__int64)&v162);
    else
      v59 = ObpParseSymbolicLinkEx(
              (unsigned __int16 *)v19,
              (POBJECT_TYPE)a4,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v150,
              v174,
              a2,
              (unsigned __int16 *)v149,
              a6,
              a7,
              (__int64)v157,
              (unsigned __int16 **)&v162);
    v147 = v59;
    _m_prefetchw(v48);
    v60 = *v48;
    if ( (v19 ^ (unsigned __int64)*v48) >= 0xF )
    {
LABEL_108:
      ObfDereferenceObjectWithTag((PVOID)v19, 0x554C624Fu);
    }
    else
    {
      while ( 1 )
      {
        v61 = v60;
        v60 = _InterlockedCompareExchange64(v48, v60 + 1, v60);
        if ( v61 == v60 )
          break;
        if ( (v19 ^ (unsigned __int64)v60) >= 0xF )
          goto LABEL_108;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48, 0, 1u, 0x554C624Fu);
    }
    v62 = v147;
    if ( v147 < 0 )
      goto LABEL_287;
    v19 = v162;
    if ( v147 != 260 )
    {
      v63 = v148;
      if ( v147 != 872 )
        v63 = (void *)v162;
      v148 = v63;
    }
    if ( (v158 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
    {
LABEL_345:
      v122 = v148;
      v147 = -1073741790;
      goto LABEL_289;
    }
    if ( v147 != 260 && v147 != 872 && v147 != 280 )
    {
LABEL_339:
      v122 = 0LL;
      if ( !v19 )
        v62 = -1073741772;
      v147 = v62;
      goto LABEL_288;
    }
    v16 = v174;
    if ( (v174 & 0x1000) != 0 && v147 != 872 )
    {
LABEL_342:
      v122 = v148;
      v147 = -1073740533;
      goto LABEL_289;
    }
    if ( !--v154 )
    {
LABEL_344:
      v122 = v148;
      v147 = -1073741772;
      goto LABEL_289;
    }
    v29 = a2;
    if ( !*(_WORD *)a2 )
      goto LABEL_343;
    ObpDereferenceCurrentDeviceMap(v18, v153);
    v64 = *(__int16 **)(a2 + 8);
    v25 = a2 + 8;
    v18 = 0LL;
    v152 = 0LL;
    v65 = *v64;
    if ( v147 == 280 )
      break;
    if ( v65 != 92 )
      goto LABEL_343;
    if ( v147 == 872 )
    {
      v19 = (__int64)ObpRootDirectoryObject;
      v21 = (POBJECT_TYPE *)a4;
    }
    else
    {
      v21 = (POBJECT_TYPE *)a4;
      v19 = (__int64)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
    }
  }
  if ( v65 != 92 )
  {
    *(_OWORD *)v149 = *(_OWORD *)a2;
    goto LABEL_143;
  }
LABEL_343:
  v122 = v148;
  v147 = -1073741773;
LABEL_289:
  if ( *a11 )
  {
    ExReleasePushLockEx((__int64 *)(*a11 + 296LL), 0LL);
    if ( *((_BYTE *)a11 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)*a11, 0x554C624Fu);
      *((_BYTE *)a11 + 22) = 0;
    }
    *a11 = 0LL;
    *((_BYTE *)a11 + 21) = 0;
    KeLeaveCriticalRegion();
  }
LABEL_293:
  if ( v122 )
    ObDereferenceObjectDeferDelete(v122);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  SeClearLearningModeObjectInformation();
  if ( v18 )
  {
    if ( v153 && (_m_prefetchw((const void *)v153), v123 = *v153, (v18 ^ *v153) < 0xF) )
    {
      while ( 1 )
      {
        v124 = v123;
        v123 = _InterlockedCompareExchange64(v153, v123 + 1, v123);
        if ( v124 == v123 )
          break;
        if ( (v18 ^ v123) >= 0xF )
          goto LABEL_302;
      }
    }
    else
    {
LABEL_302:
      _m_prefetchw((const void *)(v18 + 240));
      v125 = *(_QWORD *)(v18 + 240);
      v126 = v125 - 1;
      v127 = v125 == 1;
      if ( v125 - 1 <= 0 )
      {
LABEL_305:
        if ( !v127 )
          __fastfail(0xEu);
        v129 = (char *)PsGetServerSiloGlobals(*(_QWORD *)(v18 + 16));
        v130 = KeGetCurrentThread();
        v131 = (volatile signed __int64 *)(v129 + 120);
        --v130->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v129 + 120), 0LL);
        v132 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 240), 0xFFFFFFFFFFFFFFFFuLL);
        v133 = v132 <= 1;
        v134 = v132 - 1;
        if ( v133 )
        {
          if ( v134 )
            __fastfail(0xEu);
          *(_QWORD *)(*(_QWORD *)v18 + 304LL) = 0LL;
        }
        else
        {
          v18 = 0LL;
        }
        if ( (_InterlockedExchangeAdd64(v131, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v131);
        KeAbPostRelease((ULONG_PTR)v131);
        v144 = KeGetCurrentThread();
        v127 = v144->SpecialApcDisable++ == -1;
        if ( v127 && ($C71981A45BEB2B45F82C232A7085991E *)v144->ApcState.ApcListHead[0].Flink != &v144->152 )
          KiCheckForKernelApcDelivery();
        if ( v18 )
          ObpDeleteDeviceMap((PVOID)v18);
      }
      else
      {
        while ( 1 )
        {
          v128 = v125;
          v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 240), v126, v125);
          if ( v128 == v125 )
            break;
          v126 = v125 - 1;
          v127 = v125 == 1;
          if ( v125 - 1 <= 0 )
            goto LABEL_305;
        }
      }
    }
  }
  v145 = v147;
  if ( v147 < 0 )
  {
    v19 = 0LL;
  }
  else if ( a12 && v158 != -1 )
  {
    *a12 = v158;
    result = v145;
    *a13 = v19;
    return result;
  }
  result = v147;
  *a13 = v19;
  return result;
}
