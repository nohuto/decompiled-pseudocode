/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000CD10 (NdisDereferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D740 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C000F740 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisDereferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C00110D4 (-ndisDereferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00176F0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017B50 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00181E8 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00380F0 (memcmp.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisIsMacAddressHidden @ 0x1C010D9C0 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EB20 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C010EE30 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // r14d
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v2; // r15
  int v3; // edi
  unsigned int v4; // r13d
  const struct _GUID *v5; // rcx
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  int v9; // r12d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  KIRQL v16; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v17; // rcx
  KIRQL v18; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v19; // rax
  KIRQL v20; // r11
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rdx
  void *v23; // rcx
  size_t v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  _LIST_ENTRY *v29; // rsi
  unsigned int v30; // r8d
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rdi
  _NDIS_IF_BLOCK *IfBlock; // r13
  _LIST_ENTRY *v34; // rsi
  KIRQL v35; // bl
  _LIST_ENTRY *v36; // rax
  _REFERENCE_EX *v37; // r15
  unsigned int v38; // edi
  KIRQL v39; // al
  struct _NDIS_M_DRIVER_BLOCK *v40; // rsi
  KIRQL v41; // r14
  _REFERENCE_EX *v42; // r13
  KIRQL v43; // bl
  unsigned __int16 v44; // ax
  struct _NDIS_REFCOUNT_BLOCK *v45; // rcx
  KIRQL v46; // al
  _NDIS_MINIPORT_BLOCK *v47; // rbx
  KIRQL v48; // r12
  struct _NDIS_MINIPORT_BLOCK *v49; // r13
  struct _NDIS_MINIPORT_BLOCK *v50; // r12
  _NDIS_BIND_PATHS *v51; // rdx
  _LIST_ENTRY *v52; // rcx
  KIRQL v53; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v55; // al
  ULONG_PTR v56; // r8
  KIRQL v57; // si
  int v58; // ecx
  __int64 v59; // r10
  unsigned __int8 v60; // r9
  _BYTE *v61; // rdx
  bool v62; // zf
  __int64 v63; // rdi
  KIRQL v64; // si
  unsigned __int16 v65; // ax
  struct _NDIS_REFCOUNT_BLOCK *v66; // rcx
  KIRQL v67; // di
  ULONG_PTR SpinLock; // r8
  int v69; // ecx
  __int64 v70; // r10
  unsigned __int8 v71; // dl
  _BYTE *v72; // r9
  struct _KEVENT *v73; // rcx
  char v74; // si
  KIRQL v75; // al
  ULONG_PTR v76; // r8
  KIRQL v77; // r14
  int v78; // ecx
  __int64 v79; // r10
  unsigned __int8 v80; // r9
  _BYTE *v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 p_DeferredContext; // rbx
  KIRQL v85; // al
  ULONG_PTR v86; // r8
  KIRQL v87; // si
  int v88; // ecx
  __int64 v89; // r10
  unsigned __int8 v90; // r9
  _BYTE *v91; // rdx
  ULONG_PTR v92; // r8
  int v93; // ecx
  __int64 v94; // r10
  unsigned __int8 v95; // r9
  _BYTE *v96; // rdx
  ULONG_PTR v97; // r8
  __int64 v98; // r10
  unsigned __int8 v99; // r9
  unsigned __int8 v100; // al
  _BYTE *v101; // rdx
  char v102; // cl
  char v103; // al
  char v104; // al
  char v105; // si
  KIRQL v106; // r14
  struct _NDIS_REFCOUNT_BLOCK *v107; // rcx
  unsigned int v108; // ecx
  unsigned int *v109; // rax
  char v110; // al
  _NDIS_MINIPORT_BLOCK *v111; // r15
  unsigned int v112; // r14d
  KIRQL v113; // al
  struct _NDIS_M_DRIVER_BLOCK *v114; // rdi
  KIRQL v115; // r12
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v117; // bl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v120; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v122; // r12
  struct _NDIS_MINIPORT_BLOCK *v123; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _LIST_ENTRY *Blink; // rcx
  KIRQL v126; // al
  KIRQL v127; // r14
  struct _NDIS_REFCOUNT_BLOCK *v128; // rax
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  KIRQL v130; // r14
  unsigned __int16 v131; // ax
  struct _NDIS_REFCOUNT_BLOCK *v132; // rcx
  char v133; // di
  KIRQL v134; // bl
  ULONG_PTR NsiRefCountTracker; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v137; // al
  ULONG_PTR v138; // rcx
  KIRQL v139; // si
  KIRQL v140; // bl
  unsigned int *p_Number; // rax
  NTSTATUS v142; // ebx
  KIRQL v144; // r8
  unsigned __int64 v145; // r8
  unsigned __int64 v146; // rdx
  struct _NDIS_REFCOUNT_WITH_STACK *References; // rbx
  unsigned int v148; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v149; // r13
  struct _NDIS_M_DRIVER_BLOCK *v150; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  struct _KEVENT *RemoveReadyEvent; // rcx
  _LIST_ENTRY *v157; // rax
  struct _KEVENT *v158; // rcx
  ULONG_PTR v159; // rbx
  unsigned int v160; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v161; // rsi
  struct _NDIS_M_DRIVER_BLOCK *v162; // rax
  struct _NDIS_M_DRIVER_BLOCK **v163; // rcx
  wchar_t *v164; // rcx
  _NDIS_WRAPPER_HANDLE *v165; // rcx
  _NDIS_PENDING_IM_INSTANCE *v166; // rcx
  _NDIS_PENDING_IM_INSTANCE *v167; // rbx
  ULONG_PTR v168; // rbx
  unsigned int v169; // r9d
  char v170; // al
  ULONG_PTR v171; // rbx
  unsigned int v172; // r9d
  char v173; // al
  struct _KEVENT *v174; // rcx
  ULONG_PTR v175; // rdi
  unsigned int v176; // r9d
  ULONG_PTR v177; // rbx
  unsigned int v178; // r9d
  _LIST_ENTRY *v179; // rdx
  _LIST_ENTRY *v180; // rcx
  _LIST_ENTRY *v181; // rdx
  _LIST_ENTRY *v182; // rcx
  _LIST_ENTRY *v183; // rdx
  _LIST_ENTRY *v184; // rcx
  ULONG_PTR v185; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v189; // rbx
  unsigned int v190; // r9d
  _LIST_ENTRY *v191; // rcx
  _LIST_ENTRY *v192; // rax
  _LIST_ENTRY *v193; // rdx
  _LIST_ENTRY *v194; // rcx
  _LIST_ENTRY *v195; // rdx
  _LIST_ENTRY *v196; // rcx
  ULONG_PTR v197; // rcx
  _LIST_ENTRY *v198; // rcx
  _LIST_ENTRY *v199; // rcx
  struct _KEVENT *v200; // rcx
  __int64 v201; // [rsp+30h] [rbp-D0h]
  KIRQL v202; // [rsp+40h] [rbp-C0h]
  KIRQL v203; // [rsp+41h] [rbp-BFh]
  KIRQL v204; // [rsp+41h] [rbp-BFh]
  int v205; // [rsp+44h] [rbp-BCh]
  int v206; // [rsp+44h] [rbp-BCh]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-B8h] BYREF
  BOOLEAN CopyOnOpen[7]; // [rsp+49h] [rbp-B7h] BYREF
  char v209[8]; // [rsp+50h] [rbp-B0h]
  _REFERENCE_EX *v210; // [rsp+58h] [rbp-A8h]
  unsigned int v211; // [rsp+60h] [rbp-A0h]
  struct _NDIS_MINIPORT_BLOCK *v212; // [rsp+68h] [rbp-98h]
  _LIST_ENTRY *v213; // [rsp+70h] [rbp-90h]
  _LIST_ENTRY *v214; // [rsp+78h] [rbp-88h]
  unsigned int v215; // [rsp+80h] [rbp-80h]
  unsigned int v216; // [rsp+84h] [rbp-7Ch]
  int v217; // [rsp+88h] [rbp-78h]
  unsigned int v218; // [rsp+8Ch] [rbp-74h]
  _REFERENCE_EX *v219; // [rsp+90h] [rbp-70h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+98h] [rbp-68h] BYREF
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v221; // [rsp+A0h] [rbp-60h]
  void *v222; // [rsp+A8h] [rbp-58h]
  PVOID TokenInformation; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v224; // [rsp+B8h] [rbp-48h]
  __int64 v225; // [rsp+C0h] [rbp-40h]
  _LIST_ENTRY *v226; // [rsp+C8h] [rbp-38h]
  _LIST_ENTRY *v227; // [rsp+D0h] [rbp-30h]
  _QWORD v228[11]; // [rsp+E0h] [rbp-20h] BYREF

  v1 = 0;
  v221 = a1;
  v2 = a1;
  v3 = 0;
  memset(v228, 0, 0x40uLL);
  v4 = *((_DWORD *)v2 + 22);
  v218 = v4;
  v5 = &WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      v2);
  CurrentProcess = PsGetCurrentProcess(v5);
  CopyOnOpen[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  memset(&v228[8], 0, 24);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v9 = 1;
  if ( !ThreadProperty )
  {
    LODWORD(v228[8]) = 0;
    goto LABEL_7;
  }
  v9 = *ThreadProperty;
  LODWORD(v228[8]) = ThreadProperty[1];
  LODWORD(v210) = v9;
  HIDWORD(v228[8]) = v9;
  ObfDereferenceObject(ThreadProperty);
  v10 = v9;
  if ( !v9 )
  {
    v9 = 1;
LABEL_7:
    CopyOnOpen[0] = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    }
    else
    {
      v12 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v13 = v12;
      if ( v12 )
      {
        v142 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v13);
        if ( v142 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          v1 = 0;
          goto LABEL_11;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
      v1 = 0;
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_11:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00F7620 )
    {
      v9 = 0;
      v144 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
      if ( ThreadSessionId < dword_1C00F7620 )
        v9 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00F5D78, v144);
      if ( !v9 )
        v9 = 1;
    }
    LODWORD(v210) = v9;
    v10 = v9;
    HIDWORD(v228[8]) = v9;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = 0LL;
  v18 = v16;
  v19 = qword_1C00F5DA0;
  if ( qword_1C00F5DA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
  {
    while ( *((_DWORD *)v19 + 4) != v10 )
    {
      if ( *((_DWORD *)v19 + 4) <= v10 )
      {
        v19 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v19;
        if ( v19 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
          continue;
      }
      goto LABEL_18;
    }
    v17 = v19;
  }
LABEL_18:
  *(_OWORD *)&v228[9] = *(_OWORD *)((char *)v17 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v202 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = v202;
  if ( !v4 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Flink = i[9].Flink;
      if ( v9 == LODWORD(Flink[1].Flink) )
        goto LABEL_21;
      if ( LODWORD(v228[8]) == -1 )
      {
        v145 = v228[9] - *(unsigned __int64 *)((char *)&Flink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v228[9] == *(_LIST_ENTRY **)((char *)&Flink[105].Flink + 4) )
          v145 = v228[10] - *(unsigned __int64 *)((char *)&Flink[105].Blink + 4);
        if ( !v145 )
          goto LABEL_21;
      }
      if ( ((__int64)Flink[105].Flink & 2) == 0 && v9 == 1 )
LABEL_21:
        ++v3;
    }
    *((_DWORD *)v2 + 22) = v3;
    if ( v3 )
      v1 = 261;
    goto LABEL_25;
  }
  v23 = (void *)*((_QWORD *)v2 + 2);
  v24 = *((unsigned int *)v2 + 6);
  v25 = *((_QWORD *)v2 + 7);
  v26 = *((_QWORD *)v2 + 9);
  v27 = *((_DWORD *)v2 + 16);
  v28 = *((_DWORD *)v2 + 20);
  v211 = *((_DWORD *)v2 + 6);
  v215 = v27;
  v216 = v28;
  v222 = v23;
  v224 = v25;
  v225 = v26;
  if ( v23 && (_DWORD)v24 != 8
    || *((_QWORD *)v2 + 5)
    || *((_DWORD *)v2 + 12)
    || v25 && v27 < 0x28C
    || v26 && v28 < 0x238 )
  {
    v1 = -1073741306;
    goto LABEL_25;
  }
  v29 = ndisIfList.Flink;
  v214 = ndisIfList.Flink;
  v30 = 0;
  if ( ndisIfList.Flink == &ndisIfList )
    goto LABEL_156;
  do
  {
    v31 = v29[9].Flink;
    v32 = v29 - 77;
    v227 = v29;
    v213 = v29 - 77;
    if ( v9 != LODWORD(v31[1].Flink) )
    {
      if ( LODWORD(v228[8]) != -1 )
        goto LABEL_260;
      v146 = v228[9] - *(unsigned __int64 *)((char *)&v31[105].Flink + 4);
      if ( (_LIST_ENTRY *)v228[9] == *(_LIST_ENTRY **)((char *)&v31[105].Flink + 4) )
        v146 = v228[10] - *(unsigned __int64 *)((char *)&v31[105].Blink + 4);
      if ( v146 )
      {
LABEL_260:
        if ( ((__int64)v31[105].Flink & 2) != 0 || v9 != 1 )
        {
          v29 = v29->Flink;
          v20 = v202;
          v214 = v29;
          continue;
        }
      }
    }
    v217 = ++v30;
    if ( v30 > v4 )
    {
      v29 = v29->Flink;
      v20 = v202;
      v214 = v29;
      continue;
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32[89].Blink, 6u);
    ++LODWORD(v32[81].Blink);
    IfBlock = 0LL;
    if ( !BYTE1(v32[87].Flink) || *((_QWORD *)v2 + 1) >= 2uLL )
      goto LABEL_112;
    v34 = 0LL;
    v35 = KeAcquireSpinLockRaiseToDpc(&::SpinLock);
    if ( BYTE3(v32[87].Flink) )
    {
      v34 = v32[88].Flink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32[90].Flink, 3u);
      ++HIDWORD(v32[87].Flink);
    }
    KeReleaseSpinLock(&::SpinLock, v35);
    if ( v34 )
    {
      v62 = v34[235].Blink == 0LL;
      v111 = 0LL;
      v212 = 0LL;
      v112 = 1;
      v206 = 1;
      if ( v62 )
        goto LABEL_234;
      v113 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v114 = ndisMiniDriverList;
      v115 = v113;
      *(_QWORD *)v209 = ndisMiniDriverList;
      if ( !ndisMiniDriverList )
        goto LABEL_201;
      while ( 1 )
      {
        p_Ref = &v114->Ref;
        v219 = &v114->Ref;
        v117 = KeAcquireSpinLockRaiseToDpc(&v114->Ref.SpinLock);
        if ( !v114->Ref.Closing )
        {
          ReferenceCount = v114->Ref.ReferenceCount;
          if ( ReferenceCount < 0xFFEBu )
          {
            RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v114->Ref.RefCountTracker;
            v114->Ref.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(RefCountTracker, 8u);
            KeReleaseSpinLock(&v114->Ref.SpinLock, v117);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v115);
            v120 = KeAcquireSpinLockRaiseToDpc(&v114->Ref.SpinLock);
            MiniportQueue = v114->MiniportQueue;
            v122 = v120;
            v204 = v120;
            if ( MiniportQueue )
            {
              v123 = v212;
              do
              {
                BindPaths = MiniportQueue->BindPaths;
                if ( BindPaths )
                {
                  if ( BindPaths->Number >= v112 )
                  {
                    Blink = v34[235].Blink;
                    if ( LOWORD(Blink->Blink) == BindPaths->Paths[0].Length
                      && !memcmp(Blink[1].Flink, BindPaths->Paths[0].Buffer, LOWORD(Blink->Blink)) )
                    {
                      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
                      v62 = (MiniportQueue->Flags & 0x80200020) == 0;
                      MiniportQueue->MiniportThread = KeGetCurrentThread();
                      if ( v62
                        && (MiniportQueue->PnPFlags & 0x1084110) == 0
                        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                        && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0
                        && ndisReferenceMiniport(MiniportQueue, MPREF_IF_FINDTOP) )
                      {
                        v123 = v111;
                        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 2u);
                        p_Number = &MiniportQueue->BindPaths->Number;
                        v111 = MiniportQueue;
                        ++MiniportQueue->NsiOpenReferences;
                        v112 = *p_Number;
                      }
                      MiniportQueue->MiniportThread = 0LL;
                      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
                      if ( v123 )
                      {
                        ndisDereferenceMiniportForNsi(v123, 2u, 0x3Cu);
                        v123 = 0LL;
                      }
                    }
                  }
                }
                MiniportQueue = MiniportQueue->NextMiniport;
              }
              while ( MiniportQueue );
              v114 = *(struct _NDIS_M_DRIVER_BLOCK **)v209;
              v122 = v204;
              v212 = v123;
              p_Ref = v219;
              v206 = v112;
            }
            KeReleaseSpinLock(&p_Ref->SpinLock, v122);
            v126 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            v114 = v114->NextDriver;
            v115 = v126;
            v127 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
            v128 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)p_Ref->RefCountTracker);
            if ( v128 )
            {
              if ( v128->NumRefTags <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v128, 8uLL);
              if ( v128->Type )
              {
                if ( v128->Type == 1 )
                {
                  References = (struct _NDIS_REFCOUNT_WITH_STACK *)v128[7].RefWithStack[0].Block.References;
                  v148 = *(_DWORD *)&v128[8].Flags;
                  if ( v148 >> 17 < 0x3FFE && (unsigned __int16)v148 >> 1 == (v148 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain(&References->Block);
                    *((_DWORD *)References + 14) &= 0x10001u;
                  }
                  else
                  {
                    if ( (unsigned __int16)v148 >> 1 == 0 && (v148 & 1) == 0 )
                      ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v128, 8uLL);
                    ndisReferenceWithTagStackTrace(References, 0);
                  }
                }
              }
              else
              {
                ndisDereferenceWithTagCompact((ULONG_PTR)v128, 8u);
              }
            }
            v62 = p_Ref->ReferenceCount-- == 1;
            if ( v62 )
            {
              if ( !p_Ref->ZeroBased )
              {
                NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
                p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
              KeReleaseSpinLock(&p_Ref->SpinLock, v127);
              v149 = *(struct _NDIS_M_DRIVER_BLOCK **)v209;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x17u,
                  (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                  *(_QWORD *)v209);
              v150 = ndisMiniDriverList;
              p_NextDriver = &ndisMiniDriverList;
              if ( ndisMiniDriverList )
              {
                while ( v150 != v149 )
                {
                  p_NextDriver = &v150->NextDriver;
                  v150 = v150->NextDriver;
                  if ( !v150 )
                    goto LABEL_279;
                }
                *p_NextDriver = v149->NextDriver;
                ObfDereferenceObject(ndisDriverObject);
              }
LABEL_279:
              Buffer = v149->ImageName.Buffer;
              if ( Buffer )
              {
                ExFreePoolWithTag(Buffer, 0);
                v149->ImageName.Buffer = 0LL;
              }
              NdisDriverInfo = v149->NdisDriverInfo;
              if ( NdisDriverInfo )
              {
                ExFreePoolWithTag(NdisDriverInfo, 0);
                v149->NdisDriverInfo = 0LL;
              }
              if ( (v149->Flags & 1) != 0 )
              {
                PendingDeviceList = v149->PendingDeviceList;
                if ( PendingDeviceList )
                {
                  do
                  {
                    Next = PendingDeviceList->Next;
                    ExFreePoolWithTag(PendingDeviceList, 0);
                    PendingDeviceList = Next;
                  }
                  while ( Next );
                }
              }
              KeSetEvent(&v149->MiniportsRemovedEvent, 0, 0);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x18u,
                  (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                  v149);
            }
            else
            {
              KeReleaseSpinLock(&p_Ref->SpinLock, v127);
            }
            v112 = v206;
            goto LABEL_199;
          }
          ndisRefCountReferenceCountOverflow = 1;
        }
        KeReleaseSpinLock(&v114->Ref.SpinLock, v117);
        v114 = v114->NextDriver;
LABEL_199:
        *(_QWORD *)v209 = v114;
        if ( !v114 )
        {
          LODWORD(v210) = HIDWORD(v228[8]);
LABEL_201:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v115);
          if ( v111 )
          {
            KeAcquireSpinLockAtDpcLevel(&v111->Lock);
            HighestFilter = v111->HighestFilter;
            v111->MiniportThread = KeGetCurrentThread();
            if ( !HighestFilter )
            {
LABEL_236:
              IfBlock = v111->IfBlock;
              goto LABEL_206;
            }
            while ( 1 )
            {
              v130 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
              if ( !HighestFilter->PnPRef.Closing )
              {
                v131 = HighestFilter->PnPRef.ReferenceCount;
                if ( v131 < 0xFFEBu )
                {
                  v132 = (struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker;
                  HighestFilter->PnPRef.ReferenceCount = v131 + 1;
                  NdisReferenceWithTag(v132, 0xBu);
                  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v130);
                  IfBlock = HighestFilter->IfBlock;
LABEL_206:
                  v133 = 0;
                  v111->MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(&v111->Lock);
                  v134 = KeAcquireSpinLockRaiseToDpc(&v111->Lock);
                  NsiRefCountTracker = (ULONG_PTR)v111->NsiRefCountTracker;
                  v111->MiniportThread = KeGetCurrentThread();
                  NdisDereferenceWithTag(NsiRefCountTracker, 2u);
                  v62 = v111->NsiOpenReferences-- == 1;
                  if ( v62 )
                  {
                    NsiRequestsCompletedEvent = v111->NsiRequestsCompletedEvent;
                    if ( NsiRequestsCompletedEvent )
                      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
                  }
                  v111->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v111->Lock, v134);
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0x14u,
                      0x19u,
                      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                      v111);
                  v137 = KeAcquireSpinLockRaiseToDpc(&v111->Ref.SpinLock);
                  v138 = (ULONG_PTR)v111->RefCountTracker;
                  v139 = v137;
                  if ( v138 )
                    NdisDereferenceWithTag(v138, 0x3Cu);
                  v62 = v111->Ref.ReferenceCount-- == 1;
                  if ( v62 )
                    v133 = 1;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v201) = v111->Ref.ReferenceCount;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0x14u,
                      0xEu,
                      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                      (char)v111,
                      v201);
                  }
                  KeReleaseSpinLock(&v111->Ref.SpinLock, v139);
                  if ( v133 )
                  {
                    RemoveReadyEvent = v111->RemoveReadyEvent;
                    if ( RemoveReadyEvent )
                      KeSetEvent(RemoveReadyEvent, 0, 0);
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0x14u,
                      0x1Au,
                      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                      v111);
                  v9 = HIDWORD(v228[8]);
                  v32 = v213;
                  LODWORD(v210) = HIDWORD(v228[8]);
LABEL_221:
                  v140 = KeAcquireSpinLockRaiseToDpc(&::SpinLock);
                  NdisDereferenceWithTag((ULONG_PTR)v32[90].Flink, 3u);
                  v62 = HIDWORD(v32[87].Flink)-- == 1;
                  if ( v62 )
                  {
                    v157 = v32[88].Flink;
                    if ( v157 )
                    {
                      v158 = (struct _KEVENT *)v157[253].Flink;
                      if ( v158 )
                        KeSetEvent(v158, 0, 0);
                    }
                  }
                  KeReleaseSpinLock(&::SpinLock, v140);
                  goto LABEL_107;
                }
                ndisRefCountReferenceCountOverflow = 1;
              }
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v130);
              HighestFilter = HighestFilter->LowerFilter;
              if ( !HighestFilter )
                goto LABEL_236;
            }
          }
          v9 = (int)v210;
          v32 = v213;
LABEL_234:
          IfBlock = 0LL;
          goto LABEL_221;
        }
      }
    }
    if ( !BYTE2(v32[87].Flink) )
      goto LABEL_111;
    v36 = v32[88].Flink;
    v37 = 0LL;
    v38 = 1;
    v219 = 0LL;
    v212 = 0LL;
    v205 = 1;
    v226 = v36[2].Flink;
    if ( !v226[235].Blink )
      goto LABEL_345;
    v39 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v40 = ndisMiniDriverList;
    v41 = v39;
    *(_QWORD *)v209 = ndisMiniDriverList;
    if ( !ndisMiniDriverList )
      goto LABEL_70;
    do
    {
      v42 = &v40->Ref;
      v210 = &v40->Ref;
      v43 = KeAcquireSpinLockRaiseToDpc(&v40->Ref.SpinLock);
      if ( v40->Ref.Closing )
        goto LABEL_324;
      v44 = v40->Ref.ReferenceCount;
      if ( v44 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
LABEL_324:
        KeReleaseSpinLock(&v40->Ref.SpinLock, v43);
        NextDriver = v40->NextDriver;
        goto LABEL_68;
      }
      v45 = (struct _NDIS_REFCOUNT_BLOCK *)v40->Ref.RefCountTracker;
      v40->Ref.ReferenceCount = v44 + 1;
      NdisReferenceWithTag(v45, 8u);
      KeReleaseSpinLock(&v40->Ref.SpinLock, v43);
      KeReleaseSpinLock(&ndisMiniDriverListLock, v41);
      v46 = KeAcquireSpinLockRaiseToDpc(&v40->Ref.SpinLock);
      v47 = v40->MiniportQueue;
      v48 = v46;
      v203 = v46;
      if ( !v47 )
        goto LABEL_57;
      v49 = (struct _NDIS_MINIPORT_BLOCK *)v219;
      v50 = v212;
      do
      {
        v51 = v47->BindPaths;
        if ( !v51 )
          goto LABEL_55;
        if ( v51->Number < v38 )
          goto LABEL_55;
        v52 = v226[235].Blink;
        if ( LOWORD(v52->Blink) != v51->Paths[0].Length
          || memcmp(v52[1].Flink, v51->Paths[0].Buffer, LOWORD(v52->Blink)) )
        {
          goto LABEL_55;
        }
        KeAcquireSpinLockAtDpcLevel(&v47->Lock);
        v62 = (v47->Flags & 0x80200020) == 0;
        v47->MiniportThread = KeGetCurrentThread();
        if ( v62
          && (v47->PnPFlags & 0x1084110) == 0
          && v47->PnPDeviceState == NdisPnPDeviceStarted
          && v47->CurrentDevicePowerState == PowerDeviceD0 )
        {
          v105 = 1;
          v106 = KeAcquireSpinLockRaiseToDpc(&v47->Ref.SpinLock);
          if ( !v47->Ref.Closing )
          {
            v107 = (struct _NDIS_REFCOUNT_BLOCK *)v47->RefCountTracker;
            if ( v107 )
              NdisReferenceWithTag(v107, 0x3Cu);
            v108 = v47->Ref.ReferenceCount;
            v47->Ref.ReferenceCount = v108 + 1;
            if ( v108 != -1 )
              goto LABEL_172;
            v47->Ref.ReferenceCount = -1;
          }
          v105 = 0;
LABEL_172:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v201) = v47->Ref.ReferenceCount;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0xCu,
              (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
              (char)v47,
              v201);
          }
          KeReleaseSpinLock(&v47->Ref.SpinLock, v106);
          if ( v105 )
          {
            v50 = v49;
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v47->NsiRefCountTracker, 2u);
            v109 = &v47->BindPaths->Number;
            v49 = v47;
            ++v47->NsiOpenReferences;
            v38 = *v109;
            v205 = *v109;
          }
          else
          {
            v38 = v205;
          }
        }
        v47->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v47->Lock);
        if ( v50 )
        {
          ndisDereferenceMiniportForNsi(v50, 2u, 0x3Cu);
          v50 = 0LL;
        }
LABEL_55:
        v47 = v47->NextMiniport;
      }
      while ( v47 );
      v40 = *(struct _NDIS_M_DRIVER_BLOCK **)v209;
      v212 = v50;
      v48 = v203;
      v219 = (_REFERENCE_EX *)v49;
      v42 = v210;
LABEL_57:
      KeReleaseSpinLock(&v42->SpinLock, v48);
      v53 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v40->NextDriver;
      v41 = v53;
      v55 = KeAcquireSpinLockRaiseToDpc(&v42->SpinLock);
      v56 = (ULONG_PTR)v42->RefCountTracker;
      v57 = v55;
      if ( v56 - 2 > 1 )
      {
        if ( v56 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v56, 0LL);
        if ( *(_BYTE *)(v56 + 2) <= 8u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v56, 8uLL);
        v58 = *(unsigned __int8 *)(v56 + 1);
        if ( *(_BYTE *)(v56 + 1) )
        {
          if ( v58 != 1 )
            goto LABEL_66;
          v159 = v56 + 520;
          v160 = *(_DWORD *)(v56 + 576);
          if ( v160 >> 17 < 0x3FFE && (unsigned __int16)v160 >> 1 == (v160 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 520));
            *(_DWORD *)(v159 + 56) &= 0x10001u;
            goto LABEL_66;
          }
          if ( (unsigned __int16)v160 >> 1 != 0 || (v160 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 520), 0);
            goto LABEL_66;
          }
        }
        else
        {
          v59 = *(_QWORD *)(v56 + 8);
          if ( v59 )
          {
            v60 = *(_BYTE *)(v56 + 3);
            if ( v60 )
            {
              while ( 1 )
              {
                v61 = (_BYTE *)(v59 + 2LL * (unsigned __int8)v58);
                if ( *v61 == 8 )
                {
                  v104 = v61[1];
                  if ( v104 )
                    break;
                }
                LOBYTE(v58) = v58 + 1;
                if ( (unsigned __int8)v58 >= v60 )
                  goto LABEL_65;
              }
              v61[1] = v104 - 1;
              goto LABEL_66;
            }
          }
LABEL_65:
          if ( _bittestandreset((signed __int32 *)(v56 + 16), 8u) )
            goto LABEL_66;
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v56, 8uLL);
      }
LABEL_66:
      v62 = v42->ReferenceCount-- == 1;
      if ( v62 )
      {
        if ( !v42->ZeroBased )
        {
          NdisFreeRefCount((ULONG_PTR)v42->RefCountTracker);
          v42->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
        KeReleaseSpinLock(&v42->SpinLock, v57);
        v161 = *(struct _NDIS_M_DRIVER_BLOCK **)v209;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0x17u,
            (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
            *(_QWORD *)v209);
        v162 = ndisMiniDriverList;
        v163 = &ndisMiniDriverList;
        if ( ndisMiniDriverList )
        {
          while ( v162 != v161 )
          {
            v163 = &v162->NextDriver;
            v162 = v162->NextDriver;
            if ( !v162 )
              goto LABEL_314;
          }
          *v163 = v161->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_314:
        v164 = v161->ImageName.Buffer;
        if ( v164 )
        {
          ExFreePoolWithTag(v164, 0);
          v161->ImageName.Buffer = 0LL;
        }
        v165 = v161->NdisDriverInfo;
        if ( v165 )
        {
          ExFreePoolWithTag(v165, 0);
          v161->NdisDriverInfo = 0LL;
        }
        if ( (v161->Flags & 1) != 0 )
        {
          v166 = v161->PendingDeviceList;
          if ( v166 )
          {
            do
            {
              v167 = v166->Next;
              ExFreePoolWithTag(v166, 0);
              v166 = v167;
            }
            while ( v167 );
          }
        }
        KeSetEvent(&v161->MiniportsRemovedEvent, 0, 0);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0x18u,
            (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
            v161);
      }
      else
      {
        KeReleaseSpinLock(&v42->SpinLock, v57);
      }
LABEL_68:
      v40 = NextDriver;
      *(_QWORD *)v209 = NextDriver;
      v62 = NextDriver == 0LL;
      v38 = v205;
    }
    while ( !v62 );
    v9 = HIDWORD(v228[8]);
    v37 = v219;
    LODWORD(v210) = HIDWORD(v228[8]);
LABEL_70:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v41);
    if ( !v37 )
    {
      v1 = 0;
LABEL_345:
      v32 = v213;
      IfBlock = 0LL;
      goto LABEL_110;
    }
    KeAcquireSpinLockAtDpcLevel(&v37[4].SpinLock);
    v63 = *(_QWORD *)&v37[85].ReferenceCount;
    for ( v37[21].RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)KeGetCurrentThread(); v63; v63 = *(_QWORD *)(v63 + 112) )
    {
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v63 + 312));
      if ( !*(_BYTE *)(v63 + 322) )
      {
        v65 = *(_WORD *)(v63 + 320);
        if ( v65 < 0xFFEBu )
        {
          v66 = *(struct _NDIS_REFCOUNT_BLOCK **)(v63 + 328);
          *(_WORD *)(v63 + 320) = v65 + 1;
          NdisReferenceWithTag(v66, 0xBu);
          KeReleaseSpinLock((PKSPIN_LOCK)(v63 + 312), v64);
          IfBlock = *(_NDIS_IF_BLOCK **)(v63 + 688);
          goto LABEL_75;
        }
        ndisRefCountReferenceCountOverflow = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v63 + 312), v64);
    }
    IfBlock = *(_NDIS_IF_BLOCK **)&v37[168].ReferenceCount;
LABEL_75:
    v37[21].RefCountTracker = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v37[4].SpinLock);
    v67 = KeAcquireSpinLockRaiseToDpc(&v37[4].SpinLock);
    SpinLock = v37[204].SpinLock;
    v37[21].RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)KeGetCurrentThread();
    if ( SpinLock - 2 > 1 )
    {
      if ( SpinLock < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, SpinLock, 0LL);
      if ( *(_BYTE *)(SpinLock + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, SpinLock, 2uLL);
      v69 = *(unsigned __int8 *)(SpinLock + 1);
      if ( *(_BYTE *)(SpinLock + 1) )
      {
        if ( v69 != 1 )
          goto LABEL_84;
        v168 = SpinLock + 136;
        v169 = *(_DWORD *)(SpinLock + 192);
        if ( v169 >> 17 < 0x3FFE && (unsigned __int16)v169 >> 1 == (v169 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(SpinLock + 136));
          *(_DWORD *)(v168 + 56) &= 0x10001u;
          goto LABEL_84;
        }
        if ( (unsigned __int16)v169 >> 1 != 0 || (v169 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(SpinLock + 136), 0);
          goto LABEL_84;
        }
      }
      else
      {
        v70 = *(_QWORD *)(SpinLock + 8);
        if ( v70 )
        {
          v71 = *(_BYTE *)(SpinLock + 3);
          if ( v71 )
          {
            while ( 1 )
            {
              v72 = (_BYTE *)(v70 + 2LL * (unsigned __int8)v69);
              if ( *v72 == 2 )
              {
                v170 = v72[1];
                if ( v170 )
                  break;
              }
              LOBYTE(v69) = v69 + 1;
              if ( (unsigned __int8)v69 >= v71 )
                goto LABEL_83;
            }
            v72[1] = v170 - 1;
            goto LABEL_84;
          }
        }
LABEL_83:
        if ( _bittestandreset((signed __int32 *)(SpinLock + 16), 2u) )
          goto LABEL_84;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, SpinLock, 2uLL);
    }
LABEL_84:
    v62 = HIDWORD(v37[130].SpinLock)-- == 1;
    if ( v62 )
    {
      v73 = (struct _KEVENT *)v37[130].RefCountTracker;
      if ( v73 )
        KeSetEvent(v73, 0, 0);
    }
    v37[21].RefCountTracker = 0LL;
    KeReleaseSpinLock(&v37[4].SpinLock, v67);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x19u,
        (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
        v37);
    v74 = 0;
    v75 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v37[184].RefCountTracker);
    v76 = (ULONG_PTR)v37[203].RefCountTracker;
    v77 = v75;
    if ( v76 && v76 - 2 > 1 )
    {
      if ( v76 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v76 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v76, 0x3CuLL);
      v78 = *(unsigned __int8 *)(v76 + 1);
      if ( *(_BYTE *)(v76 + 1) )
      {
        if ( v78 != 1 )
          goto LABEL_99;
        v171 = v76 + 3848;
        v172 = *(_DWORD *)(v76 + 3904);
        if ( v172 >> 17 < 0x3FFE && (unsigned __int16)v172 >> 1 == (v172 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v76 + 3848));
          *(_DWORD *)(v171 + 56) &= 0x10001u;
          goto LABEL_99;
        }
        if ( (unsigned __int16)v172 >> 1 != 0 || (v172 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v76 + 3848), 0);
          goto LABEL_99;
        }
      }
      else
      {
        v79 = *(_QWORD *)(v76 + 8);
        if ( v79 )
        {
          v80 = *(_BYTE *)(v76 + 3);
          if ( v80 )
          {
            while ( 1 )
            {
              v81 = (_BYTE *)(v79 + 2LL * (unsigned __int8)v78);
              if ( *v81 == 60 )
              {
                v173 = v81[1];
                if ( v173 )
                  break;
              }
              LOBYTE(v78) = v78 + 1;
              if ( (unsigned __int8)v78 >= v80 )
                goto LABEL_98;
            }
            v81[1] = v173 - 1;
            goto LABEL_99;
          }
        }
LABEL_98:
        if ( _bittestandreset((signed __int32 *)(v76 + 20), 0x1Cu) )
          goto LABEL_99;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v76, 0x3CuLL);
    }
LABEL_99:
    v62 = LODWORD(v37[185].SpinLock)-- == 1;
    if ( v62 )
      v74 = 1;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v201) = v37[185].SpinLock;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)v37,
        v201);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&v37[184].RefCountTracker, v77);
    if ( v74 )
    {
      v174 = (struct _KEVENT *)v37[67].SpinLock;
      if ( v174 )
        KeSetEvent(v174, 0, 0);
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x1Au,
        (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
        v37);
    v9 = HIDWORD(v228[8]);
    v32 = v213;
    LODWORD(v210) = HIDWORD(v228[8]);
LABEL_107:
    if ( IfBlock )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker, 7u);
      ++IfBlock->Ref;
    }
    v1 = 0;
LABEL_110:
    v2 = v221;
LABEL_111:
    v29 = v214;
    v24 = v211;
LABEL_112:
    KeReleaseSpinLock(&ndisIfListLock, v202);
    if ( *((_QWORD *)v2 + 2) )
    {
      memmove(v222, &v32[82], v24);
      v222 = (char *)v222 + v24;
    }
    if ( *((_QWORD *)v2 + 7) )
    {
      v82 = v224;
      LODWORD(v228[4]) = 1;
      LODWORD(v228[6]) = v215;
      v228[5] = v224;
      ndisNsiGetInterfaceRodEnumObject((char)v32);
      v224 = v215 + v82;
    }
    if ( *((_QWORD *)v2 + 9) )
    {
      v83 = v225;
      v228[5] = v225;
      LODWORD(v228[4]) = 2;
      LODWORD(v228[6]) = v216;
      ndisNsiGetInterfaceRosEnumObject((char)v32);
      v225 = v216 + v83;
    }
    v202 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v20 = v202;
    if ( IfBlock )
    {
      if ( !IfBlock->IsNdisFilter )
        goto LABEL_133;
      p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v86 = *(_QWORD *)(p_DeferredContext + 16);
      v87 = v85;
      if ( v86 - 2 <= 1 )
        goto LABEL_129;
      if ( v86 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v86, 0LL);
      if ( *(_BYTE *)(v86 + 2) <= 0xBu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v86, 0xBuLL);
      v88 = *(unsigned __int8 *)(v86 + 1);
      if ( *(_BYTE *)(v86 + 1) )
      {
        if ( v88 != 1 )
          goto LABEL_129;
        v175 = v86 + 712;
        v176 = *(_DWORD *)(v86 + 768);
        if ( v176 >> 17 < 0x3FFE && (unsigned __int16)v176 >> 1 == (v176 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v86 + 712));
          *(_DWORD *)(v175 + 56) &= 0x10001u;
          v32 = v213;
          goto LABEL_129;
        }
        if ( (unsigned __int16)v176 >> 1 != 0 || (v176 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v86 + 712), 0);
          v32 = v213;
          goto LABEL_129;
        }
      }
      else
      {
        v89 = *(_QWORD *)(v86 + 8);
        if ( v89 )
        {
          v90 = *(_BYTE *)(v86 + 3);
          if ( v90 )
          {
            while ( 1 )
            {
              v91 = (_BYTE *)(v89 + 2LL * (unsigned __int8)v88);
              if ( *v91 == 11 )
              {
                v103 = v91[1];
                if ( v103 )
                  break;
              }
              LOBYTE(v88) = v88 + 1;
              if ( (unsigned __int8)v88 >= v90 )
                goto LABEL_128;
            }
            v91[1] = v103 - 1;
LABEL_129:
            v62 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
            if ( v62 && !*(_BYTE *)(p_DeferredContext + 11) )
            {
              NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
              *(_QWORD *)(p_DeferredContext + 16) = 1LL;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v87);
LABEL_133:
            v92 = (ULONG_PTR)IfBlock->RefCountTracker;
            if ( v92 - 2 > 1 )
            {
              if ( v92 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v92, 0LL);
              if ( *(_BYTE *)(v92 + 2) <= 7u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v92, 7uLL);
              v93 = *(unsigned __int8 *)(v92 + 1);
              if ( *(_BYTE *)(v92 + 1) )
              {
                if ( v93 != 1 )
                  goto LABEL_142;
                v177 = v92 + 456;
                v178 = *(_DWORD *)(v92 + 512);
                if ( v178 >> 17 < 0x3FFE && (unsigned __int16)v178 >> 1 == (v178 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v92 + 456));
                  *(_DWORD *)(v177 + 56) &= 0x10001u;
                  goto LABEL_142;
                }
                if ( (unsigned __int16)v178 >> 1 != 0 || (v178 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v92 + 456), 0);
                  goto LABEL_142;
                }
              }
              else
              {
                v94 = *(_QWORD *)(v92 + 8);
                if ( v94 )
                {
                  v95 = *(_BYTE *)(v92 + 3);
                  if ( v95 )
                  {
                    while ( 1 )
                    {
                      v96 = (_BYTE *)(v94 + 2LL * (unsigned __int8)v93);
                      if ( *v96 == 7 )
                      {
                        v110 = v96[1];
                        if ( v110 )
                          break;
                      }
                      LOBYTE(v93) = v93 + 1;
                      if ( (unsigned __int8)v93 >= v95 )
                        goto LABEL_141;
                    }
                    v96[1] = v110 - 1;
                    goto LABEL_142;
                  }
                }
LABEL_141:
                if ( _bittestandreset((signed __int32 *)(v92 + 16), 7u) )
                  goto LABEL_142;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v92, 7uLL);
            }
LABEL_142:
            v62 = IfBlock->Ref-- == 1;
            if ( !v62 )
            {
LABEL_143:
              v20 = v202;
              v29 = v214;
              goto LABEL_144;
            }
            ndisIfDeleteStackEntries(IfBlock);
            v179 = IfBlock->Link.Flink;
            if ( v179->Blink == &IfBlock->Link )
            {
              v180 = IfBlock->Link.Blink;
              if ( v180->Flink == &IfBlock->Link )
              {
                v180->Flink = v179;
                v179->Blink = v180;
                v181 = IfBlock->ProviderLink.Flink;
                if ( v181->Blink == &IfBlock->ProviderLink )
                {
                  v182 = IfBlock->ProviderLink.Blink;
                  if ( v182->Flink == &IfBlock->ProviderLink )
                  {
                    v182->Flink = v181;
                    v181->Blink = v182;
                    v183 = IfBlock->NetworkLink.Flink;
                    if ( v183->Blink == &IfBlock->NetworkLink )
                    {
                      v184 = IfBlock->NetworkLink.Blink;
                      if ( v184->Flink == &IfBlock->NetworkLink )
                      {
                        v184->Flink = v183;
                        v183->Blink = v184;
                        NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                        ndisIfFreeIfIndex(IfBlock->ifIndex);
                        v185 = (ULONG_PTR)IfBlock->RefCountTracker;
                        --ndisInterfaceCount;
                        NdisFreeRefCount(v185);
                        ifL2NetworkInfo = IfBlock->ifL2NetworkInfo;
                        IfBlock->RefCountTracker = 0LL;
                        if ( ifL2NetworkInfo )
                        {
                          ExFreePoolWithTag(ifL2NetworkInfo, 0);
                          IfBlock->ifL2NetworkInfo = 0LL;
                        }
                        ifRcvAddressTable = IfBlock->ifRcvAddressTable;
                        if ( ifRcvAddressTable )
                        {
                          ExFreePoolWithTag(ifRcvAddressTable, 0);
                          IfBlock->ifRcvAddressTable = 0LL;
                          *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
                        }
                        AsyncEvent = IfBlock->AsyncEvent;
                        if ( AsyncEvent )
                          KeSetEvent(AsyncEvent, 0, 0);
                        ExFreePoolWithTag(IfBlock, 0);
                        goto LABEL_143;
                      }
                    }
                  }
                }
              }
            }
LABEL_410:
            __fastfail(3u);
          }
        }
LABEL_128:
        if ( _bittestandreset((signed __int32 *)(v86 + 16), 0xBu) )
          goto LABEL_129;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v86, 0xBuLL);
    }
LABEL_144:
    v97 = (ULONG_PTR)v32[89].Blink;
    v29 = v29->Flink;
    v214 = v29;
    if ( v97 - 2 > 1 )
    {
      if ( v97 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v97, 0LL);
      if ( *(_BYTE *)(v97 + 2) <= 6u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v97, 6uLL);
      if ( *(_BYTE *)(v97 + 1) )
      {
        if ( *(_BYTE *)(v97 + 1) != 1 )
          goto LABEL_153;
        v189 = v97 + 392;
        v190 = *(_DWORD *)(v97 + 448);
        if ( v190 >> 17 < 0x3FFE && (unsigned __int16)v190 >> 1 == (v190 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v97 + 392));
          *(_DWORD *)(v189 + 56) &= 0x10001u;
          v20 = v202;
          goto LABEL_153;
        }
        if ( (unsigned __int16)v190 >> 1 != 0 || (v190 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v97 + 392), 0);
          v20 = v202;
          goto LABEL_153;
        }
      }
      else
      {
        v98 = *(_QWORD *)(v97 + 8);
        if ( v98 )
        {
          v99 = *(_BYTE *)(v97 + 3);
          v100 = 0;
          if ( v99 )
          {
            while ( 1 )
            {
              v101 = (_BYTE *)(v98 + 2LL * v100);
              if ( *v101 == 6 )
              {
                v102 = v101[1];
                if ( v102 )
                  break;
              }
              if ( ++v100 >= v99 )
                goto LABEL_152;
            }
            v101[1] = v102 - 1;
            goto LABEL_153;
          }
        }
LABEL_152:
        if ( _bittestandreset((signed __int32 *)(v97 + 16), 6u) )
          goto LABEL_153;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v97, 6uLL);
    }
LABEL_153:
    v62 = LODWORD(v32[81].Blink)-- == 1;
    if ( v62 )
    {
      ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v32);
      v191 = v227->Flink;
      if ( v227->Flink->Blink != v227 )
        goto LABEL_410;
      v192 = v227->Blink;
      if ( v192->Flink != v227 )
        goto LABEL_410;
      v192->Flink = v191;
      v191->Blink = v192;
      v193 = v32[78].Flink;
      if ( v193->Blink != &v32[78] )
        goto LABEL_410;
      v194 = v32[78].Blink;
      if ( v194->Flink != &v32[78] )
        goto LABEL_410;
      v194->Flink = v193;
      v193->Blink = v194;
      v195 = v32[79].Flink;
      if ( v195->Blink != &v32[79] )
        goto LABEL_410;
      v196 = v32[79].Blink;
      if ( v196->Flink != &v32[79] )
        goto LABEL_410;
      v196->Flink = v195;
      v195->Blink = v196;
      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v32[85].Blink);
      ndisIfFreeIfIndex(HIDWORD(v32->Flink));
      v197 = (ULONG_PTR)v32[89].Blink;
      --ndisInterfaceCount;
      NdisFreeRefCount(v197);
      v198 = v32[89].Flink;
      v32[89].Blink = 0LL;
      if ( v198 )
      {
        ExFreePoolWithTag(v198, 0);
        v32[89].Flink = 0LL;
      }
      v199 = v32[80].Flink;
      if ( v199 )
      {
        ExFreePoolWithTag(v199, 0);
        v32[80].Flink = 0LL;
        v32[80].Blink = 0LL;
      }
      v200 = (struct _KEVENT *)v32[86].Blink;
      if ( v200 )
        KeSetEvent(v200, 0, 0);
      ExFreePoolWithTag(v32, 0);
      v20 = v202;
    }
    v24 = v211;
    v4 = v218;
    v30 = v217;
  }
  while ( v29 != &ndisIfList );
LABEL_156:
  *((_DWORD *)v2 + 22) = v30;
  if ( v30 > v4 )
    v1 = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v20);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v201) = v1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v2,
      v201);
  }
  KeLeaveCriticalRegion();
  return v1;
}
