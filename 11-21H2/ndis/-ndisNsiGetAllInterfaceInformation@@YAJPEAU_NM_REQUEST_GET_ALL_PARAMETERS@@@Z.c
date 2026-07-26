/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DD50 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0017680 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017748 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0017EF4 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C0101250 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C0101E50 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C0102390 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C01027E0 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C0103890 (ndisNsiGetInterfaceRosEnumObject.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v2; // r13
  _NDIS_IF_BLOCK *IfBlock; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _LIST_ENTRY **v5; // rbx
  _LIST_ENTRY *v6; // rbx
  _DWORD *ThreadProperty; // rax
  int v8; // r12d
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v11; // rcx
  PACCESS_TOKEN v12; // rax
  void *v13; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v15; // edi
  KIRQL v16; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v17; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rdx
  KIRQL v19; // al
  int v20; // ecx
  KIRQL v21; // r14
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v23; // rdi
  unsigned int v24; // ebx
  _LIST_ENTRY *v25; // rdx
  _LIST_ENTRY *v26; // r13
  KIRQL v27; // bl
  _LIST_ENTRY *v28; // rax
  _NDIS_MINIPORT_BLOCK *v29; // r14
  struct _NDIS_MINIPORT_BLOCK *v30; // rsi
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK *v32; // r12
  KIRQL v33; // r15
  struct _NDIS_MINIPORT_BLOCK *v34; // rdi
  _REFERENCE_EX *v35; // r13
  KIRQL v36; // bl
  unsigned __int16 v37; // cx
  KIRQL v38; // al
  _NDIS_MINIPORT_BLOCK *v39; // rbx
  unsigned int v40; // r13d
  _NDIS_BIND_PATHS *v41; // rdx
  _NDIS_BIND_PATHS *v42; // rcx
  bool v43; // zf
  char v44; // r15
  int v45; // edx
  KIRQL v46; // r12
  struct _NDIS_REFCOUNT_BLOCK *v47; // rcx
  unsigned int v48; // ecx
  unsigned int *v49; // rax
  KIRQL v50; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v52; // bl
  _NDIS_FILTER_BLOCK *v53; // rsi
  KIRQL v54; // al
  KIRQL v55; // r12
  unsigned __int16 v56; // cx
  KIRQL v57; // bl
  ULONG_PTR v58; // rcx
  struct _KEVENT *v59; // rcx
  __int16 v60; // dx
  char v61; // r15
  KIRQL v62; // al
  int v63; // edx
  ULONG_PTR v64; // rcx
  KIRQL v65; // r12
  __int16 v66; // dx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v68; // dx
  KIRQL v69; // al
  _BYTE *v70; // rdx
  ULONG_PTR v71; // r8
  KIRQL v72; // r13
  int v73; // ecx
  __int64 v74; // r10
  unsigned __int8 v75; // r9
  __int16 v76; // dx
  KIRQL v77; // al
  ULONG_PTR v78; // r8
  KIRQL v79; // bl
  int v80; // ecx
  __int64 v81; // r9
  unsigned __int8 v82; // dl
  _BYTE *v83; // r10
  __int64 v84; // rax
  KIRQL v85; // r14
  __int64 p_DeferredContext; // r15
  KIRQL v87; // al
  ULONG_PTR v88; // r8
  KIRQL v89; // r12
  int v90; // ecx
  __int64 v91; // r9
  unsigned __int8 v92; // r10
  _BYTE *v93; // rdx
  char v94; // al
  ULONG_PTR v95; // r8
  int v96; // ecx
  __int64 v97; // r9
  unsigned __int8 v98; // r10
  _BYTE *v99; // rdx
  ULONG_PTR v100; // r8
  int v101; // ecx
  __int64 v102; // r10
  unsigned __int8 v103; // r9
  _BYTE *v104; // rdx
  int v105; // edx
  char v107; // al
  char v108; // al
  struct _NDIS_MINIPORT_BLOCK *v109; // r14
  KIRQL v110; // al
  struct _NDIS_M_DRIVER_BLOCK *v111; // rsi
  KIRQL v112; // r12
  _REFERENCE_EX *p_Ref; // r15
  KIRQL v114; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v116; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v118; // edi
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _LIST_ENTRY *Blink; // rcx
  char v121; // r15
  int v122; // edx
  KIRQL v123; // r12
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v125; // ecx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rcx
  unsigned int *p_Number; // rax
  KIRQL v128; // al
  KIRQL v129; // al
  ULONG_PTR v130; // r8
  KIRQL v131; // r13
  int v132; // ecx
  __int64 v133; // r10
  unsigned __int8 v134; // r9
  _BYTE *v135; // rdx
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  KIRQL v137; // r12
  unsigned __int16 v138; // cx
  KIRQL v139; // bl
  ULONG_PTR v140; // r8
  int v141; // ecx
  __int64 v142; // r9
  unsigned __int8 v143; // dl
  _BYTE *v144; // r10
  struct _NDIS_REFCOUNT_BLOCK *v145; // rcx
  char v146; // al
  _LIST_ENTRY *v147; // rax
  _LIST_ENTRY *v148; // rcx
  NTSTATUS v149; // edi
  unsigned int ThreadSessionId; // eax
  KIRQL v151; // r8
  unsigned __int64 v152; // rdx
  unsigned __int64 v153; // r8
  ULONG_PTR v154; // rbx
  unsigned int v155; // r9d
  __int16 v156; // dx
  struct _NDIS_M_DRIVER_BLOCK *v157; // r15
  struct _NDIS_M_DRIVER_BLOCK *v158; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int16 v164; // dx
  ULONG_PTR v165; // r13
  unsigned int v166; // edx
  int v167; // ecx
  char v168; // al
  ULONG_PTR v169; // r15
  unsigned int v170; // edx
  int v171; // ecx
  char v172; // al
  char v173; // r12
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v175; // r14
  unsigned int v176; // edx
  int v177; // ecx
  char v178; // al
  _LIST_ENTRY *v179; // rax
  struct _KEVENT *v180; // rcx
  __int16 v181; // dx
  struct _NDIS_M_DRIVER_BLOCK *v182; // rax
  struct _NDIS_M_DRIVER_BLOCK **v183; // rcx
  wchar_t *v184; // rcx
  _NDIS_WRAPPER_HANDLE *v185; // rcx
  _NDIS_PENDING_IM_INSTANCE *v186; // rcx
  _NDIS_PENDING_IM_INSTANCE *v187; // rbx
  __int16 v188; // dx
  struct _KEVENT *v189; // rcx
  ULONG_PTR v190; // r13
  unsigned int v191; // edx
  int v192; // ecx
  ULONG_PTR v193; // r13
  unsigned int v194; // edx
  int v195; // ecx
  _LIST_ENTRY *v196; // rdx
  _LIST_ENTRY *v197; // rcx
  _LIST_ENTRY *v198; // rdx
  _LIST_ENTRY *v199; // rcx
  _LIST_ENTRY *v200; // rdx
  _LIST_ENTRY *v201; // rcx
  ULONG_PTR v202; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v206; // rsi
  unsigned int v207; // edx
  int v208; // ecx
  _LIST_ENTRY *v209; // rdx
  _LIST_ENTRY *v210; // rcx
  _LIST_ENTRY *v211; // rdx
  _LIST_ENTRY *v212; // rcx
  _LIST_ENTRY *v213; // rdx
  _LIST_ENTRY *v214; // rcx
  ULONG_PTR v215; // rcx
  _LIST_ENTRY *v216; // rcx
  _LIST_ENTRY *v217; // rcx
  struct _KEVENT *v218; // rcx
  KIRQL v219; // [rsp+40h] [rbp-79h]
  KIRQL v220; // [rsp+41h] [rbp-78h]
  KIRQL v221; // [rsp+41h] [rbp-78h]
  BOOLEAN EffectiveOnly; // [rsp+42h] [rbp-77h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+43h] [rbp-76h] BYREF
  int v224; // [rsp+44h] [rbp-75h]
  char v225[8]; // [rsp+48h] [rbp-71h]
  struct _NDIS_MINIPORT_BLOCK *v226; // [rsp+50h] [rbp-69h]
  _LIST_ENTRY *v227; // [rsp+58h] [rbp-61h]
  _LIST_ENTRY *v228; // [rsp+60h] [rbp-59h]
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v229; // [rsp+68h] [rbp-51h]
  _REFERENCE_EX *v230; // [rsp+70h] [rbp-49h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-41h] BYREF
  char v232[64]; // [rsp+80h] [rbp-39h] BYREF
  PVOID TokenInformation; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v234; // [rsp+C8h] [rbp+Fh]
  __int128 v235; // [rsp+D0h] [rbp+17h]

  v2 = a1;
  v229 = a1;
  IfBlock = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      26,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)a1);
  }
  memset(v232, 0, sizeof(v232));
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 )
  {
    v24 = -1073741808;
    v85 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    goto LABEL_166;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = (_LIST_ENTRY **)*((_QWORD *)v2 + 2);
  v234 = 0LL;
  v6 = *v5;
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v8 = ThreadProperty[1];
    HIDWORD(v234) = *ThreadProperty;
    v9 = HIDWORD(v234);
    LODWORD(v234) = v8;
    ObfDereferenceObject(ThreadProperty);
    v10 = v9;
    if ( v9 )
      goto LABEL_16;
  }
  else
  {
    v8 = 0;
    LODWORD(v234) = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
  }
  else
  {
    v12 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v13 = v12;
    if ( v12 )
    {
      v149 = SeQueryInformationToken(v12, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v13);
      if ( v149 >= 0 )
      {
        v15 = (unsigned int)TokenInformation;
        goto LABEL_11;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  v15 = CurrentProcessSessionId;
LABEL_11:
  if ( v15 == -1 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    v8 = v234;
    v15 = ThreadSessionId;
  }
  if ( v15 < dword_1C00EE550 )
  {
    v9 = 0;
    v151 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( v15 < dword_1C00EE550 )
      v9 = *((_DWORD *)qword_1C00EE558 + 6 * v15);
    KeReleaseSpinLock(&qword_1C00ECD98, v151);
    if ( !v9 )
      v9 = 1;
  }
  else
  {
    v9 = 1;
  }
  HIDWORD(v234) = v9;
  v10 = v9;
LABEL_16:
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = qword_1C00ECDC0;
  v18 = 0LL;
  if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    while ( *((_DWORD *)v17 + 4) != v10 )
    {
      if ( *((_DWORD *)v17 + 4) <= v10 )
      {
        v17 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v17;
        if ( v17 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
          continue;
      }
      goto LABEL_19;
    }
    v18 = v17;
  }
LABEL_19:
  v235 = *(_OWORD *)((char *)v18 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = *((_DWORD *)v2 + 8);
  v21 = v19;
  v219 = v19;
  if ( v20 == 2 )
    goto LABEL_20;
  if ( v20 )
  {
    if ( v20 != 1 )
    {
      v24 = -1073741811;
      KeReleaseSpinLock(&ndisIfListLock, v19);
      v85 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      goto LABEL_166;
    }
    v6 = 0LL;
    while ( 1 )
    {
LABEL_20:
      Flink = ndisIfList.Flink;
      v23 = 0LL;
      v228 = 0LL;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( 1 )
        {
          v23 = Flink - 77;
          v228 = Flink - 77;
          if ( Flink[5].Flink > v6 )
            break;
          Flink = Flink->Flink;
          if ( Flink == &ndisIfList )
            goto LABEL_23;
        }
      }
      if ( !v23 )
        goto LABEL_24;
      v25 = v23[86].Flink;
      v6 = v23[82].Flink;
      if ( v9 == LODWORD(v25[1].Flink) )
        goto LABEL_30;
      if ( v8 == -1 )
      {
        v153 = v235 - *(unsigned __int64 *)((char *)&v25[105].Flink + 4);
        if ( (_LIST_ENTRY *)v235 == *(_LIST_ENTRY **)((char *)&v25[105].Flink + 4) )
          v153 = *((_QWORD *)&v235 + 1) - *(unsigned __int64 *)((char *)&v25[105].Blink + 4);
        if ( !v153 )
          goto LABEL_30;
      }
      if ( ((__int64)v25[105].Flink & 2) == 0 && v9 == 1 )
        goto LABEL_30;
    }
  }
  v147 = ndisIfList.Flink;
  v23 = 0LL;
  v228 = 0LL;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( v147[5].Flink != v6 )
    {
      if ( v147[5].Flink > v6 )
        goto LABEL_236;
      v147 = v147->Flink;
      if ( v147 == &ndisIfList )
        goto LABEL_24;
    }
    v23 = v147 - 77;
    v228 = v147 - 77;
  }
LABEL_236:
  if ( !v23 )
  {
LABEL_24:
    KeReleaseSpinLock(&ndisIfListLock, v21);
LABEL_25:
    v24 = -1073741772;
    if ( *((_DWORD *)v2 + 8) )
      v24 = -2147483622;
    goto LABEL_129;
  }
  v148 = v23[86].Flink;
  if ( v9 != LODWORD(v148[1].Flink) )
  {
    v152 = v235 - *(unsigned __int64 *)((char *)&v148[105].Flink + 4);
    if ( (_LIST_ENTRY *)v235 == *(_LIST_ENTRY **)((char *)&v148[105].Flink + 4) )
      v152 = *((_QWORD *)&v235 + 1) - *(unsigned __int64 *)((char *)&v148[105].Blink + 4);
    if ( v152 && (((__int64)v148[105].Flink & 2) != 0 || v9 != 1) )
    {
LABEL_23:
      v23 = 0LL;
      goto LABEL_24;
    }
  }
LABEL_30:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v23[89].Blink);
  ++LODWORD(v23[81].Blink);
  if ( !BYTE1(v23[87].Flink) || *((_QWORD *)v2 + 1) >= 2uLL )
    goto LABEL_125;
  v26 = 0LL;
  v227 = 0LL;
  v27 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( BYTE3(v23[87].Flink) )
  {
    v26 = v23[88].Flink;
    v145 = (struct _NDIS_REFCOUNT_BLOCK *)v23[90].Flink;
    v227 = v26;
    NdisReferenceWithTag(v145);
    ++HIDWORD(v23[87].Flink);
  }
  KeReleaseSpinLock(&SpinLock, v27);
  if ( v26 )
  {
    v109 = 0LL;
    v226 = 0LL;
    v224 = 1;
    if ( !v26[235].Blink )
      goto LABEL_250;
    v110 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v111 = ndisMiniDriverList;
    v112 = v110;
    *(_QWORD *)v225 = ndisMiniDriverList;
    if ( !ndisMiniDriverList )
      goto LABEL_213;
    while ( 1 )
    {
      p_Ref = &v111->Ref;
      v230 = &v111->Ref;
      v114 = KeAcquireSpinLockRaiseToDpc(&v111->Ref.SpinLock);
      if ( v111->Ref.Closing )
        goto LABEL_302;
      ReferenceCount = v111->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
LABEL_302:
        KeReleaseSpinLock(&v111->Ref.SpinLock, v114);
        v111 = v111->NextDriver;
        goto LABEL_212;
      }
      v111->Ref.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v111->Ref.RefCountTracker);
      KeReleaseSpinLock(&v111->Ref.SpinLock, v114);
      KeReleaseSpinLock(&ndisMiniDriverListLock, v112);
      v116 = KeAcquireSpinLockRaiseToDpc(&v111->Ref.SpinLock);
      MiniportQueue = v111->MiniportQueue;
      v221 = v116;
      if ( !MiniportQueue )
        goto LABEL_200;
      v118 = v224;
      do
      {
        BindPaths = MiniportQueue->BindPaths;
        if ( !BindPaths )
          goto LABEL_198;
        if ( BindPaths->Number < v118 )
          goto LABEL_198;
        Blink = v26[235].Blink;
        if ( LOWORD(Blink->Blink) != BindPaths->Paths[0].Length
          || memcmp(Blink[1].Flink, BindPaths->Paths[0].Buffer, LOWORD(Blink->Blink)) )
        {
          goto LABEL_198;
        }
        KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
        v43 = (MiniportQueue->Flags & 0x80200020) == 0;
        MiniportQueue->MiniportThread = KeGetCurrentThread();
        if ( v43
          && (MiniportQueue->PnPFlags & 0x1084110) == 0
          && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
          && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
        {
          v121 = 1;
          v123 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
          if ( !MiniportQueue->Ref.Closing )
          {
            RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
            if ( RefCountTracker )
              NdisReferenceWithTag(RefCountTracker);
            v125 = MiniportQueue->Ref.ReferenceCount;
            MiniportQueue->Ref.ReferenceCount = v125 + 1;
            if ( v125 != -1 )
              goto LABEL_191;
            MiniportQueue->Ref.ReferenceCount = -1;
          }
          v121 = 0;
LABEL_191:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v122) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v122,
              20,
              12,
              (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
              (char)MiniportQueue,
              MiniportQueue->Ref.ReferenceCount);
          }
          KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v123);
          if ( v121 )
          {
            NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
            v226 = v109;
            NdisReferenceWithTag(NsiRefCountTracker);
            p_Number = &MiniportQueue->BindPaths->Number;
            v109 = MiniportQueue;
            ++MiniportQueue->NsiOpenReferences;
            v118 = *p_Number;
          }
        }
        MiniportQueue->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
        if ( v226 )
        {
          ndisDereferenceMiniportForNsi(v226, NSIREF_IFTOP, MPREF_IF_FINDTOP);
          v226 = 0LL;
        }
        v26 = v227;
LABEL_198:
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( MiniportQueue );
      p_Ref = v230;
      v111 = *(struct _NDIS_M_DRIVER_BLOCK **)v225;
      v116 = v221;
      v224 = v118;
      v23 = v228;
LABEL_200:
      KeReleaseSpinLock(&p_Ref->SpinLock, v116);
      v128 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v111 = v111->NextDriver;
      v112 = v128;
      v129 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
      v130 = (ULONG_PTR)p_Ref->RefCountTracker;
      v131 = v129;
      if ( v130 - 2 > 1 )
      {
        if ( v130 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v130, 0LL);
        if ( *(_BYTE *)(v130 + 2) <= 8u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v130, 8uLL);
        v132 = *(unsigned __int8 *)(v130 + 1);
        if ( *(_BYTE *)(v130 + 1) )
        {
          if ( v132 != 1 )
            goto LABEL_209;
          v154 = v130 + 520;
          v155 = *(_DWORD *)(v130 + 576);
          if ( v155 >> 17 < 0x3FFE && (unsigned __int16)v155 >> 1 == (v155 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v130 + 520));
            *(_DWORD *)(v154 + 56) &= 0x10001u;
            goto LABEL_209;
          }
          if ( (unsigned __int16)v155 >> 1 != 0 || (v155 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v130 + 520), 0);
            goto LABEL_209;
          }
        }
        else
        {
          v133 = *(_QWORD *)(v130 + 8);
          if ( v133 )
          {
            v134 = *(_BYTE *)(v130 + 3);
            if ( v134 )
            {
              while ( 1 )
              {
                v135 = (_BYTE *)(v133 + 2LL * (unsigned __int8)v132);
                if ( *v135 == 8 )
                {
                  v146 = v135[1];
                  if ( v146 )
                    break;
                }
                LOBYTE(v132) = v132 + 1;
                if ( (unsigned __int8)v132 >= v134 )
                  goto LABEL_208;
              }
              v135[1] = v146 - 1;
              goto LABEL_209;
            }
          }
LABEL_208:
          if ( _bittestandreset((signed __int32 *)(v130 + 16), 8u) )
            goto LABEL_209;
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v130, 8uLL);
      }
LABEL_209:
      v43 = p_Ref->ReferenceCount-- == 1;
      if ( v43 )
      {
        if ( !p_Ref->ZeroBased )
        {
          NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
          p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
        KeReleaseSpinLock(&p_Ref->SpinLock, v131);
        v157 = *(struct _NDIS_M_DRIVER_BLOCK **)v225;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v156) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v156,
            20,
            23,
            (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
            v225[0]);
        }
        v158 = ndisMiniDriverList;
        p_NextDriver = &ndisMiniDriverList;
        if ( ndisMiniDriverList )
        {
          while ( v158 != v157 )
          {
            p_NextDriver = &v158->NextDriver;
            v158 = v158->NextDriver;
            if ( !v158 )
              goto LABEL_292;
          }
          *p_NextDriver = v157->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_292:
        Buffer = v157->ImageName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          v157->ImageName.Buffer = 0LL;
        }
        NdisDriverInfo = v157->NdisDriverInfo;
        if ( NdisDriverInfo )
        {
          ExFreePoolWithTag(NdisDriverInfo, 0);
          v157->NdisDriverInfo = 0LL;
        }
        if ( (v157->Flags & 1) != 0 )
        {
          PendingDeviceList = v157->PendingDeviceList;
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
        KeSetEvent(&v157->MiniportsRemovedEvent, 0, 0);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v164) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v164,
            20,
            24,
            (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
            (char)v157);
        }
      }
      else
      {
        KeReleaseSpinLock(&p_Ref->SpinLock, v131);
      }
      v26 = v227;
LABEL_212:
      *(_QWORD *)v225 = v111;
      if ( !v111 )
      {
LABEL_213:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v112);
        if ( v109 )
        {
          KeAcquireSpinLockAtDpcLevel(&v109->Lock);
          HighestFilter = v109->HighestFilter;
          for ( v109->MiniportThread = KeGetCurrentThread(); HighestFilter; HighestFilter = HighestFilter->LowerFilter )
          {
            v137 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
            if ( !HighestFilter->PnPRef.Closing )
            {
              v138 = HighestFilter->PnPRef.ReferenceCount;
              if ( v138 < 0xFFEBu )
              {
                HighestFilter->PnPRef.ReferenceCount = v138 + 1;
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker);
                KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v137);
                IfBlock = HighestFilter->IfBlock;
                goto LABEL_218;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v137);
          }
          IfBlock = v109->IfBlock;
LABEL_218:
          v173 = 0;
          v109->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v109->Lock);
          v139 = KeAcquireSpinLockRaiseToDpc(&v109->Lock);
          v140 = (ULONG_PTR)v109->NsiRefCountTracker;
          v109->MiniportThread = KeGetCurrentThread();
          if ( v140 - 2 > 1 )
          {
            if ( v140 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v140, 0LL);
            if ( *(_BYTE *)(v140 + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v140, 2uLL);
            v141 = *(unsigned __int8 *)(v140 + 1);
            if ( *(_BYTE *)(v140 + 1) )
            {
              if ( v141 != 1 )
                goto LABEL_88;
              v165 = v140 + 136;
              v166 = *(_DWORD *)(v140 + 192);
              v167 = (unsigned __int16)v166 >> 1;
              if ( v166 >> 17 < 0x3FFE && v167 == (v166 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v140 + 136));
                *(_DWORD *)(v165 + 56) &= 0x10001u;
                goto LABEL_88;
              }
              if ( v167 != 0 || (v166 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v140 + 136), 0);
                goto LABEL_88;
              }
            }
            else
            {
              v142 = *(_QWORD *)(v140 + 8);
              if ( v142 )
              {
                v143 = *(_BYTE *)(v140 + 3);
                if ( v143 )
                {
                  while ( 1 )
                  {
                    v144 = (_BYTE *)(v142 + 2LL * (unsigned __int8)v141);
                    if ( *v144 == 2 )
                    {
                      v168 = v144[1];
                      if ( v168 )
                        break;
                    }
                    LOBYTE(v141) = v141 + 1;
                    if ( (unsigned __int8)v141 >= v143 )
                      goto LABEL_87;
                  }
                  v144[1] = v168 - 1;
                  goto LABEL_88;
                }
              }
LABEL_87:
              if ( _bittestandreset((signed __int32 *)(v140 + 16), 2u) )
                goto LABEL_88;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v140, 2uLL);
          }
LABEL_88:
          v43 = v109->NsiOpenReferences-- == 1;
          if ( v43 )
          {
            NsiRequestsCompletedEvent = v109->NsiRequestsCompletedEvent;
            if ( NsiRequestsCompletedEvent )
              KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
          }
          v109->MiniportThread = 0LL;
          KeReleaseSpinLock(&v109->Lock, v139);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v68) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v68,
              20,
              25,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              (char)v109);
          }
          v69 = KeAcquireSpinLockRaiseToDpc(&v109->Ref.SpinLock);
          v71 = (ULONG_PTR)v109->RefCountTracker;
          v72 = v69;
          if ( v71 && v71 - 2 > 1 )
          {
            if ( v71 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(v71 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v71, 0x3CuLL);
            v73 = *(unsigned __int8 *)(v71 + 1);
            if ( *(_BYTE *)(v71 + 1) )
            {
              if ( v73 != 1 )
                goto LABEL_103;
              v169 = v71 + 3848;
              v170 = *(_DWORD *)(v71 + 3904);
              v171 = (unsigned __int16)v170 >> 1;
              if ( v170 >> 17 < 0x3FFE && v171 == (v170 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v71 + 3848));
                *(_DWORD *)(v169 + 56) &= 0x10001u;
                goto LABEL_103;
              }
              if ( v171 != 0 || (v170 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v71 + 3848), 0);
                goto LABEL_103;
              }
            }
            else
            {
              v74 = *(_QWORD *)(v71 + 8);
              if ( v74 )
              {
                v75 = *(_BYTE *)(v71 + 3);
                if ( v75 )
                {
                  while ( 1 )
                  {
                    v70 = (_BYTE *)(v74 + 2LL * (unsigned __int8)v73);
                    if ( *v70 == 60 )
                    {
                      v172 = v70[1];
                      if ( v172 )
                        break;
                    }
                    LOBYTE(v73) = v73 + 1;
                    if ( (unsigned __int8)v73 >= v75 )
                      goto LABEL_102;
                  }
                  v70[1] = v172 - 1;
                  goto LABEL_103;
                }
              }
LABEL_102:
              if ( _bittestandreset((signed __int32 *)(v71 + 20), 0x1Cu) )
                goto LABEL_103;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v71, 0x3CuLL);
          }
LABEL_103:
          v43 = v109->Ref.ReferenceCount-- == 1;
          if ( v43 )
            v173 = 1;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v70) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v70,
              20,
              14,
              (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
              (char)v109,
              v109->Ref.ReferenceCount);
          }
          KeReleaseSpinLock(&v109->Ref.SpinLock, v72);
          if ( v173 )
          {
            RemoveReadyEvent = v109->RemoveReadyEvent;
            if ( RemoveReadyEvent )
              KeSetEvent(RemoveReadyEvent, 0, 0);
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v76) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v76,
              20,
              26,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              (char)v109);
          }
LABEL_110:
          v77 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
          v78 = (ULONG_PTR)v23[90].Flink;
          v79 = v77;
          if ( v78 - 2 > 1 )
          {
            if ( v78 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v78, 0LL);
            if ( *(_BYTE *)(v78 + 2) <= 3u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v78, 3uLL);
            v80 = *(unsigned __int8 *)(v78 + 1);
            if ( *(_BYTE *)(v78 + 1) )
            {
              if ( v80 != 1 )
                goto LABEL_119;
              v175 = v78 + 200;
              v176 = *(_DWORD *)(v78 + 256);
              v177 = (unsigned __int16)v176 >> 1;
              if ( v176 >> 17 < 0x3FFE && v177 == (v176 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v78 + 200));
                *(_DWORD *)(v175 + 56) &= 0x10001u;
                goto LABEL_119;
              }
              if ( v177 != 0 || (v176 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v78 + 200), 0);
                goto LABEL_119;
              }
            }
            else
            {
              v81 = *(_QWORD *)(v78 + 8);
              if ( v81 )
              {
                v82 = *(_BYTE *)(v78 + 3);
                if ( v82 )
                {
                  while ( 1 )
                  {
                    v83 = (_BYTE *)(v81 + 2LL * (unsigned __int8)v80);
                    if ( *v83 == 3 )
                    {
                      v178 = v83[1];
                      if ( v178 )
                        break;
                    }
                    LOBYTE(v80) = v80 + 1;
                    if ( (unsigned __int8)v80 >= v82 )
                      goto LABEL_118;
                  }
                  v83[1] = v178 - 1;
                  goto LABEL_119;
                }
              }
LABEL_118:
              if ( _bittestandreset((signed __int32 *)(v78 + 16), 3u) )
                goto LABEL_119;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v78, 3uLL);
          }
LABEL_119:
          v43 = HIDWORD(v23[87].Flink)-- == 1;
          if ( v43 )
          {
            v179 = v23[88].Flink;
            if ( v179 )
            {
              v180 = (struct _KEVENT *)v179[253].Flink;
              if ( v180 )
                KeSetEvent(v180, 0, 0);
            }
          }
          KeReleaseSpinLock(&SpinLock, v79);
          goto LABEL_121;
        }
LABEL_250:
        IfBlock = 0LL;
        goto LABEL_110;
      }
    }
  }
  if ( !BYTE2(v23[87].Flink) )
    goto LABEL_124;
  v28 = v23[88].Flink;
  v29 = 0LL;
  v224 = 1;
  v30 = (struct _NDIS_MINIPORT_BLOCK *)v28[2].Flink;
  v226 = v30;
  if ( !v30->BindPaths )
    goto LABEL_371;
  v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v32 = ndisMiniDriverList;
  *(_QWORD *)v225 = ndisMiniDriverList;
  v33 = v31;
  if ( !ndisMiniDriverList )
    goto LABEL_68;
  v34 = 0LL;
  do
  {
    v35 = &v32->Ref;
    v230 = &v32->Ref;
    v36 = KeAcquireSpinLockRaiseToDpc(&v32->Ref.SpinLock);
    if ( v32->Ref.Closing )
      goto LABEL_367;
    v37 = v32->Ref.ReferenceCount;
    if ( v37 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_367:
      KeReleaseSpinLock(&v32->Ref.SpinLock, v36);
      NextDriver = v32->NextDriver;
      goto LABEL_66;
    }
    v32->Ref.ReferenceCount = v37 + 1;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32->Ref.RefCountTracker);
    KeReleaseSpinLock(&v32->Ref.SpinLock, v36);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
    v38 = KeAcquireSpinLockRaiseToDpc(&v32->Ref.SpinLock);
    v39 = v32->MiniportQueue;
    v220 = v38;
    if ( v39 )
    {
      v40 = v224;
      while ( 1 )
      {
        v41 = v39->BindPaths;
        if ( v41 )
        {
          if ( v41->Number >= v40 )
          {
            v42 = v30->BindPaths;
            if ( v42->Paths[0].Length == v41->Paths[0].Length
              && !memcmp(v42->Paths[0].Buffer, v41->Paths[0].Buffer, v42->Paths[0].Length) )
            {
              break;
            }
          }
        }
LABEL_62:
        v39 = v39->NextMiniport;
        if ( !v39 )
        {
          v32 = *(struct _NDIS_M_DRIVER_BLOCK **)v225;
          v38 = v220;
          v224 = v40;
          v35 = v230;
          goto LABEL_64;
        }
      }
      KeAcquireSpinLockAtDpcLevel(&v39->Lock);
      v43 = (v39->Flags & 0x80200020) == 0;
      v39->MiniportThread = KeGetCurrentThread();
      if ( !v43
        || (v39->PnPFlags & 0x1084110) != 0
        || v39->PnPDeviceState != NdisPnPDeviceStarted
        || v39->CurrentDevicePowerState != PowerDeviceD0 )
      {
LABEL_60:
        v39->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v39->Lock);
        if ( v34 )
        {
          ndisDereferenceMiniportForNsi(v34, NSIREF_IFTOP, MPREF_IF_FINDTOP);
          v34 = 0LL;
        }
        goto LABEL_62;
      }
      v44 = 1;
      v46 = KeAcquireSpinLockRaiseToDpc(&v39->Ref.SpinLock);
      if ( !v39->Ref.Closing )
      {
        v47 = (struct _NDIS_REFCOUNT_BLOCK *)v39->RefCountTracker;
        if ( v47 )
          NdisReferenceWithTag(v47);
        v48 = v39->Ref.ReferenceCount;
        v39->Ref.ReferenceCount = v48 + 1;
        if ( v48 != -1 )
          goto LABEL_55;
        v39->Ref.ReferenceCount = -1;
      }
      v44 = 0;
LABEL_55:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v45,
          20,
          12,
          (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
          (char)v39,
          v39->Ref.ReferenceCount);
      }
      KeReleaseSpinLock(&v39->Ref.SpinLock, v46);
      if ( v44 )
      {
        v34 = v29;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v39->NsiRefCountTracker);
        v49 = &v39->BindPaths->Number;
        v29 = v39;
        ++v39->NsiOpenReferences;
        v40 = *v49;
      }
      v30 = v226;
      goto LABEL_60;
    }
LABEL_64:
    KeReleaseSpinLock(&v35->SpinLock, v38);
    v50 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v32->NextDriver;
    v33 = v50;
    v52 = KeAcquireSpinLockRaiseToDpc(&v35->SpinLock);
    NdisDereferenceWithTag((ULONG_PTR)v35->RefCountTracker);
    v43 = v35->ReferenceCount-- == 1;
    if ( v43 )
    {
      if ( !v35->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v35->RefCountTracker);
        v35->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&v35->SpinLock, v52);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v181) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v181,
          20,
          23,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          (char)v32);
      }
      v182 = ndisMiniDriverList;
      v183 = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v182 != v32 )
        {
          v183 = &v182->NextDriver;
          v182 = v182->NextDriver;
          if ( !v182 )
            goto LABEL_357;
        }
        *v183 = v32->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_357:
      v184 = v32->ImageName.Buffer;
      if ( v184 )
      {
        ExFreePoolWithTag(v184, 0);
        v32->ImageName.Buffer = 0LL;
      }
      v185 = v32->NdisDriverInfo;
      if ( v185 )
      {
        ExFreePoolWithTag(v185, 0);
        v32->NdisDriverInfo = 0LL;
      }
      if ( (v32->Flags & 1) != 0 )
      {
        v186 = v32->PendingDeviceList;
        if ( v186 )
        {
          do
          {
            v187 = v186->Next;
            ExFreePoolWithTag(v186, 0);
            v186 = v187;
          }
          while ( v187 );
        }
      }
      KeSetEvent(&v32->MiniportsRemovedEvent, 0, 0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v188) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v188,
          20,
          24,
          (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
          (char)v32);
      }
    }
    else
    {
      KeReleaseSpinLock(&v35->SpinLock, v52);
    }
LABEL_66:
    v32 = NextDriver;
    *(_QWORD *)v225 = NextDriver;
    v43 = NextDriver == 0LL;
    v30 = v226;
  }
  while ( !v43 );
  v23 = v228;
LABEL_68:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
  if ( !v29 )
  {
LABEL_371:
    IfBlock = 0LL;
    goto LABEL_123;
  }
  KeAcquireSpinLockAtDpcLevel(&v29->Lock);
  v53 = v29->HighestFilter;
  v29->MiniportThread = KeGetCurrentThread();
  if ( !v53 )
  {
LABEL_247:
    IfBlock = v29->IfBlock;
    goto LABEL_73;
  }
  while ( 2 )
  {
    v54 = KeAcquireSpinLockRaiseToDpc(&v53->PnPRef.SpinLock);
    v55 = v54;
    if ( v53->PnPRef.Closing )
    {
LABEL_246:
      KeReleaseSpinLock(&v53->PnPRef.SpinLock, v54);
      v53 = v53->LowerFilter;
      if ( !v53 )
        goto LABEL_247;
      continue;
    }
    break;
  }
  v56 = v53->PnPRef.ReferenceCount;
  if ( v56 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_246;
  }
  v53->PnPRef.ReferenceCount = v56 + 1;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v53->PnPRef.RefCountTracker);
  KeReleaseSpinLock(&v53->PnPRef.SpinLock, v55);
  IfBlock = v53->IfBlock;
LABEL_73:
  v29->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v29->Lock);
  v57 = KeAcquireSpinLockRaiseToDpc(&v29->Lock);
  v58 = (ULONG_PTR)v29->NsiRefCountTracker;
  v29->MiniportThread = KeGetCurrentThread();
  NdisDereferenceWithTag(v58);
  v43 = v29->NsiOpenReferences-- == 1;
  if ( v43 )
  {
    v59 = v29->NsiRequestsCompletedEvent;
    if ( v59 )
      KeSetEvent(v59, 0, 0);
  }
  v29->MiniportThread = 0LL;
  KeReleaseSpinLock(&v29->Lock, v57);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v60) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v60,
      20,
      25,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      (char)v29);
  }
  v61 = 0;
  v62 = KeAcquireSpinLockRaiseToDpc(&v29->Ref.SpinLock);
  v64 = (ULONG_PTR)v29->RefCountTracker;
  v65 = v62;
  if ( v64 )
    NdisDereferenceWithTag(v64);
  v43 = v29->Ref.ReferenceCount-- == 1;
  if ( v43 )
    v61 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v63) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v63,
      20,
      14,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)v29,
      v29->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v29->Ref.SpinLock, v65);
  if ( v61 )
  {
    v189 = v29->RemoveReadyEvent;
    if ( v189 )
      KeSetEvent(v189, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v66) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v66,
      20,
      26,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      (char)v29);
  }
LABEL_121:
  if ( IfBlock )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker);
    ++IfBlock->Ref;
  }
LABEL_123:
  v21 = v219;
LABEL_124:
  v2 = v229;
LABEL_125:
  **((_QWORD **)v2 + 2) = v23[82].Flink;
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( !v23 )
    goto LABEL_25;
  v84 = *((_QWORD *)v2 + 1);
  switch ( v84 )
  {
    case 0LL:
      goto LABEL_127;
    case 1LL:
LABEL_244:
      *(_DWORD *)&v232[32] = 1;
      *(_QWORD *)&v232[40] = *((_QWORD *)v2 + 7);
      *(_DWORD *)&v232[48] = *((_DWORD *)v2 + 16);
      ndisNsiGetInterfaceRodEnumObject((char)v23);
      *((_DWORD *)v2 + 16) = *(_DWORD *)&v232[48];
      *(_QWORD *)&v232[40] = *((_QWORD *)v2 + 9);
      *(_DWORD *)&v232[48] = *((_DWORD *)v2 + 20);
      *(_DWORD *)&v232[32] = 2;
      ndisNsiGetInterfaceRosEnumObject((char)v23);
LABEL_128:
      v24 = 0;
      *((_DWORD *)v2 + 20) = *(_DWORD *)&v232[48];
      break;
    case 12LL:
LABEL_127:
      *(_QWORD *)&v232[40] = *((_QWORD *)v2 + 5);
      *(_DWORD *)&v232[48] = *((_DWORD *)v2 + 12);
      ndisNsiGetInterfaceRwInformation((char)v23, (char)IfBlock, (char)v232);
      *((_DWORD *)v2 + 12) = *(_DWORD *)&v232[48];
      *(_DWORD *)&v232[32] = 1;
      *(_QWORD *)&v232[40] = *((_QWORD *)v2 + 7);
      *(_DWORD *)&v232[48] = *((_DWORD *)v2 + 16);
      ndisNsiGetInterfaceRodInformation((char)v23, (char)IfBlock, (char)v232);
      *((_DWORD *)v2 + 16) = *(_DWORD *)&v232[48];
      *(_QWORD *)&v232[40] = *((_QWORD *)v2 + 9);
      *(_DWORD *)&v232[48] = *((_DWORD *)v2 + 20);
      *(_DWORD *)&v232[32] = 2;
      ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)v23);
      goto LABEL_128;
    case 13LL:
      goto LABEL_244;
    default:
      v24 = -1073741811;
      break;
  }
LABEL_129:
  v85 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !IfBlock )
    goto LABEL_155;
  if ( !IfBlock->IsNdisFilter )
    goto LABEL_145;
  p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
  v87 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
  v88 = *(_QWORD *)(p_DeferredContext + 16);
  v89 = v87;
  if ( v88 - 2 <= 1 )
    goto LABEL_141;
  if ( v88 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v88, 0LL);
  if ( *(_BYTE *)(v88 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v88, 0xBuLL);
  v90 = *(unsigned __int8 *)(v88 + 1);
  if ( *(_BYTE *)(v88 + 1) )
  {
    if ( v90 != 1 )
      goto LABEL_141;
    v190 = v88 + 712;
    v191 = *(_DWORD *)(v88 + 768);
    v192 = (unsigned __int16)v191 >> 1;
    if ( v191 >> 17 < 0x3FFE && v192 == (v191 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v88 + 712));
      *(_DWORD *)(v190 + 56) &= 0x10001u;
    }
    else
    {
      if ( v192 == 0 && (v191 & 1) == 0 )
        goto LABEL_383;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v88 + 712), 0);
    }
    LOBYTE(v2) = (_BYTE)v229;
    goto LABEL_141;
  }
  v91 = *(_QWORD *)(v88 + 8);
  if ( !v91 || (v92 = *(_BYTE *)(v88 + 3)) == 0 )
  {
LABEL_140:
    if ( _bittestandreset((signed __int32 *)(v88 + 16), 0xBu) )
      goto LABEL_141;
LABEL_383:
    ndisBugCheckEx(0x1EuLL, 0LL, v88, 0xBuLL);
  }
  while ( 1 )
  {
    v93 = (_BYTE *)(v91 + 2LL * (unsigned __int8)v90);
    if ( *v93 == 11 )
    {
      v94 = v93[1];
      if ( v94 )
        break;
    }
    LOBYTE(v90) = v90 + 1;
    if ( (unsigned __int8)v90 >= v92 )
      goto LABEL_140;
  }
  v93[1] = v94 - 1;
LABEL_141:
  v43 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
  if ( v43 && !*(_BYTE *)(p_DeferredContext + 11) )
  {
    NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
    *(_QWORD *)(p_DeferredContext + 16) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v89);
LABEL_145:
  v95 = (ULONG_PTR)IfBlock->RefCountTracker;
  if ( v95 - 2 > 1 )
  {
    if ( v95 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v95, 0LL);
    if ( *(_BYTE *)(v95 + 2) <= 4u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v95, 4uLL);
    v96 = *(unsigned __int8 *)(v95 + 1);
    if ( !*(_BYTE *)(v95 + 1) )
    {
      v97 = *(_QWORD *)(v95 + 8);
      if ( v97 )
      {
        v98 = *(_BYTE *)(v95 + 3);
        if ( v98 )
        {
          while ( 1 )
          {
            v99 = (_BYTE *)(v97 + 2LL * (unsigned __int8)v96);
            if ( *v99 == 4 )
            {
              v108 = v99[1];
              if ( v108 )
                break;
            }
            LOBYTE(v96) = v96 + 1;
            if ( (unsigned __int8)v96 >= v98 )
              goto LABEL_153;
          }
          v99[1] = v108 - 1;
          goto LABEL_154;
        }
      }
LABEL_153:
      if ( _bittestandreset((signed __int32 *)(v95 + 16), 4u) )
        goto LABEL_154;
LABEL_393:
      ndisBugCheckEx(0x1EuLL, 0LL, v95, 4uLL);
    }
    if ( v96 != 1 )
      goto LABEL_154;
    v193 = v95 + 264;
    v194 = *(_DWORD *)(v95 + 320);
    v195 = (unsigned __int16)v194 >> 1;
    if ( v194 >> 17 < 0x3FFE && v195 == (v194 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v95 + 264));
      *(_DWORD *)(v193 + 56) &= 0x10001u;
    }
    else
    {
      if ( v195 == 0 && (v194 & 1) == 0 )
        goto LABEL_393;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v95 + 264), 0);
    }
    LOBYTE(v2) = (_BYTE)v229;
  }
LABEL_154:
  v43 = IfBlock->Ref-- == 1;
  if ( v43 )
  {
    ndisIfDeleteStackEntries(IfBlock);
    v196 = IfBlock->Link.Flink;
    if ( v196->Blink == &IfBlock->Link )
    {
      v197 = IfBlock->Link.Blink;
      if ( v197->Flink == &IfBlock->Link )
      {
        v197->Flink = v196;
        v196->Blink = v197;
        v198 = IfBlock->ProviderLink.Flink;
        if ( v198->Blink == &IfBlock->ProviderLink )
        {
          v199 = IfBlock->ProviderLink.Blink;
          if ( v199->Flink == &IfBlock->ProviderLink )
          {
            v199->Flink = v198;
            v198->Blink = v199;
            v200 = IfBlock->NetworkLink.Flink;
            if ( v200->Blink == &IfBlock->NetworkLink )
            {
              v201 = IfBlock->NetworkLink.Blink;
              if ( v201->Flink == &IfBlock->NetworkLink )
              {
                v201->Flink = v200;
                v200->Blink = v201;
                NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                ndisIfFreeIfIndex(IfBlock->ifIndex);
                v202 = (ULONG_PTR)IfBlock->RefCountTracker;
                --ndisInterfaceCount;
                NdisFreeRefCount(v202);
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
                goto LABEL_155;
              }
            }
          }
        }
      }
    }
    goto LABEL_430;
  }
LABEL_155:
  if ( !v23 )
    goto LABEL_166;
  v100 = (ULONG_PTR)v23[89].Blink;
  if ( v100 - 2 <= 1 )
    goto LABEL_165;
  if ( v100 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v100, 0LL);
  if ( *(_BYTE *)(v100 + 2) <= 3u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v100, 3uLL);
  v101 = *(unsigned __int8 *)(v100 + 1);
  if ( *(_BYTE *)(v100 + 1) )
  {
    if ( v101 != 1 )
      goto LABEL_165;
    v206 = v100 + 200;
    v207 = *(_DWORD *)(v100 + 256);
    v208 = (unsigned __int16)v207 >> 1;
    if ( v207 >> 17 < 0x3FFE && v208 == (v207 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 200));
      *(_DWORD *)(v206 + 56) &= 0x10001u;
      goto LABEL_165;
    }
    if ( v208 != 0 || (v207 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v100 + 200), 0);
      goto LABEL_165;
    }
LABEL_415:
    ndisBugCheckEx(0x1EuLL, 0LL, v100, 3uLL);
  }
  v102 = *(_QWORD *)(v100 + 8);
  if ( !v102 || (v103 = *(_BYTE *)(v100 + 3)) == 0 )
  {
LABEL_164:
    if ( _bittestandreset((signed __int32 *)(v100 + 16), 3u) )
      goto LABEL_165;
    goto LABEL_415;
  }
  while ( 1 )
  {
    v104 = (_BYTE *)(v102 + 2LL * (unsigned __int8)v101);
    if ( *v104 == 3 )
    {
      v107 = v104[1];
      if ( v107 )
        break;
    }
    LOBYTE(v101) = v101 + 1;
    if ( (unsigned __int8)v101 >= v103 )
      goto LABEL_164;
  }
  v104[1] = v107 - 1;
LABEL_165:
  v43 = LODWORD(v23[81].Blink)-- == 1;
  if ( v43 )
  {
    ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v23);
    v209 = v23[77].Flink;
    if ( v209->Blink == &v23[77] )
    {
      v210 = v23[77].Blink;
      if ( v210->Flink == &v23[77] )
      {
        v210->Flink = v209;
        v209->Blink = v210;
        v211 = v23[78].Flink;
        if ( v211->Blink == &v23[78] )
        {
          v212 = v23[78].Blink;
          if ( v212->Flink == &v23[78] )
          {
            v212->Flink = v211;
            v211->Blink = v212;
            v213 = v23[79].Flink;
            if ( v213->Blink == &v23[79] )
            {
              v214 = v23[79].Blink;
              if ( v214->Flink == &v23[79] )
              {
                v214->Flink = v213;
                v213->Blink = v214;
                NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v23[85].Blink);
                ndisIfFreeIfIndex(HIDWORD(v23->Flink));
                v215 = (ULONG_PTR)v23[89].Blink;
                --ndisInterfaceCount;
                NdisFreeRefCount(v215);
                v216 = v23[89].Flink;
                v23[89].Blink = 0LL;
                if ( v216 )
                {
                  ExFreePoolWithTag(v216, 0);
                  v23[89].Flink = 0LL;
                }
                v217 = v23[80].Flink;
                if ( v217 )
                {
                  ExFreePoolWithTag(v217, 0);
                  v23[80].Flink = 0LL;
                  v23[80].Blink = 0LL;
                }
                v218 = (struct _KEVENT *)v23[86].Blink;
                if ( v218 )
                  KeSetEvent(v218, 0, 0);
                ExFreePoolWithTag(v23, 0);
                goto LABEL_166;
              }
            }
          }
        }
      }
    }
LABEL_430:
    __fastfail(3u);
  }
LABEL_166:
  KeReleaseSpinLock(&ndisIfListLock, v85);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v105) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v105,
      22,
      27,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)v2,
      v24);
  }
  KeLeaveCriticalRegion();
  return v24;
}
