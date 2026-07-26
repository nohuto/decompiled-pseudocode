/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00108B0
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
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C0101250 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C0103890 (ndisNsiGetInterfaceRosEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  struct _NDIS_M_DRIVER_BLOCK *v1; // r12
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v2; // rsi
  int v3; // edi
  unsigned int v4; // r15d
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  PACCESS_TOKEN v10; // rax
  void *v11; // rsi
  NTSTATUS v12; // ebx
  unsigned int ThreadSessionId; // ebx
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // r11
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rdx
  void *v20; // rdx
  size_t v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  _LIST_ENTRY *v26; // r14
  unsigned int v27; // r8d
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY *v29; // rdi
  _NDIS_IF_BLOCK *IfBlock; // r15
  _LIST_ENTRY *v31; // r14
  KIRQL v32; // bl
  __int64 v33; // rbx
  __int64 v34; // rbx
  ULONG_PTR Blink; // r8
  __int64 v36; // r10
  unsigned __int8 v37; // r9
  unsigned __int8 v38; // al
  _BYTE *v39; // rdx
  bool v40; // zf
  char v41; // cl
  __int64 p_DeferredContext; // rbx
  KIRQL v43; // al
  ULONG_PTR v44; // r8
  KIRQL v45; // si
  int v46; // ecx
  __int64 v47; // r10
  unsigned __int8 v48; // r9
  _BYTE *v49; // rdx
  char v50; // al
  ULONG_PTR v51; // r8
  int v52; // ecx
  __int64 v53; // r10
  unsigned __int8 v54; // r9
  _BYTE *v55; // rdx
  char v56; // al
  _LIST_ENTRY *v57; // rax
  struct _NDIS_MINIPORT_BLOCK *v58; // rsi
  unsigned int v59; // edi
  KIRQL v60; // al
  struct _NDIS_M_DRIVER_BLOCK *v61; // r15
  KIRQL v62; // r14
  KSPIN_LOCK *p_SpinLock; // r13
  KIRQL v64; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v66; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v68; // r12
  struct _NDIS_MINIPORT_BLOCK *v69; // r13
  struct _NDIS_MINIPORT_BLOCK *v70; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v72; // rcx
  char v73; // si
  KIRQL v74; // r14
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v76; // ecx
  unsigned int *p_Number; // rax
  KIRQL v78; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v80; // al
  ULONG_PTR v81; // r8
  KIRQL v82; // si
  int v83; // ecx
  __int64 v84; // r10
  unsigned __int8 v85; // r9
  _BYTE *v86; // rdx
  int (__fastcall *LiveDumpCallback)(NDIS_MEMORYDUMP_HANDLE__ *, int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, const _GUID *, void *, unsigned int), unsigned int, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, void *); // rdi
  KIRQL v88; // si
  unsigned __int16 v89; // cx
  KIRQL v90; // di
  ULONG_PTR PauseHandler; // r8
  int v92; // ecx
  __int64 v93; // r10
  unsigned __int8 v94; // r9
  _BYTE *v95; // rdx
  struct _KEVENT *CmNotifyCloseAfCompleteHandler; // rcx
  char v97; // si
  KIRQL v98; // al
  ULONG_PTR UnloadHandler; // r10
  KIRQL v100; // r14
  int v101; // ecx
  __int64 v102; // r9
  unsigned __int8 v103; // r8
  _BYTE *v104; // rdx
  char v105; // al
  unsigned int v106; // esi
  _NDIS_MINIPORT_BLOCK *v107; // rdi
  KIRQL v108; // al
  struct _NDIS_M_DRIVER_BLOCK *v109; // r12
  KIRQL v110; // r15
  KSPIN_LOCK *p_Type; // r13
  KIRQL v112; // bl
  unsigned __int16 v113; // cx
  KIRQL v114; // al
  _NDIS_MINIPORT_BLOCK *v115; // rbx
  struct _NDIS_MINIPORT_BLOCK *v116; // r13
  _NDIS_BIND_PATHS *v117; // rdx
  _LIST_ENTRY *v118; // rcx
  char v119; // r15
  KIRQL v120; // r12
  struct _NDIS_REFCOUNT_BLOCK *v121; // rcx
  unsigned int v122; // ecx
  unsigned int *v123; // rax
  KIRQL v124; // al
  struct _NDIS_M_DRIVER_BLOCK *v125; // rsi
  KIRQL v126; // bl
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  KIRQL v128; // r15
  unsigned __int16 v129; // cx
  KIRQL v130; // bl
  ULONG_PTR NsiRefCountTracker; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v133; // si
  KIRQL v134; // al
  ULONG_PTR v135; // rcx
  KIRQL v136; // r14
  KIRQL v137; // al
  KIRQL v138; // bl
  unsigned int CurrentProcessSessionId; // eax
  KIRQL v141; // r8
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v144; // rax
  struct _NDIS_M_DRIVER_BLOCK **v145; // rcx
  wchar_t *v146; // rcx
  _NDIS_WRAPPER_HANDLE *v147; // rcx
  _NDIS_PENDING_IM_INSTANCE *v148; // rcx
  _NDIS_PENDING_IM_INSTANCE *v149; // rbx
  struct _KEVENT *RemoveReadyEvent; // rcx
  _LIST_ENTRY *v151; // rax
  struct _KEVENT *v152; // rcx
  ULONG_PTR v153; // rbx
  unsigned int v154; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v155; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v161; // rbx
  unsigned int v162; // r9d
  char v163; // al
  ULONG_PTR v164; // rbx
  unsigned int v165; // r8d
  char v166; // al
  struct _KEVENT *v167; // rcx
  ULONG_PTR v168; // rdi
  unsigned int v169; // r9d
  ULONG_PTR v170; // rbx
  unsigned int v171; // r9d
  _LIST_ENTRY *v172; // rdx
  _LIST_ENTRY *v173; // rcx
  _LIST_ENTRY *v174; // rdx
  _LIST_ENTRY *v175; // rcx
  _LIST_ENTRY *v176; // rdx
  _LIST_ENTRY *v177; // rcx
  ULONG_PTR v178; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v182; // rbx
  unsigned int v183; // r9d
  _LIST_ENTRY *v184; // rcx
  _LIST_ENTRY *v185; // rax
  _LIST_ENTRY *v186; // rdx
  _LIST_ENTRY *v187; // rcx
  _LIST_ENTRY *v188; // rdx
  _LIST_ENTRY *v189; // rcx
  ULONG_PTR v190; // rcx
  _LIST_ENTRY *v191; // rcx
  _LIST_ENTRY *v192; // rcx
  struct _KEVENT *v193; // rcx
  __int64 v194; // [rsp+30h] [rbp-D0h]
  KIRQL v195; // [rsp+40h] [rbp-C0h]
  KIRQL v196; // [rsp+41h] [rbp-BFh]
  KIRQL v197; // [rsp+41h] [rbp-BFh]
  BOOLEAN EffectiveOnly; // [rsp+42h] [rbp-BEh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+43h] [rbp-BDh] BYREF
  int v200; // [rsp+44h] [rbp-BCh]
  struct _NDIS_MINIPORT_BLOCK *v201; // [rsp+48h] [rbp-B8h]
  unsigned int v202; // [rsp+50h] [rbp-B0h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v203; // [rsp+58h] [rbp-A8h]
  struct _NDIS_M_DRIVER_BLOCK *v204; // [rsp+60h] [rbp-A0h]
  unsigned int v205; // [rsp+68h] [rbp-98h]
  unsigned int v206; // [rsp+6Ch] [rbp-94h]
  int v207; // [rsp+70h] [rbp-90h]
  unsigned int v208; // [rsp+74h] [rbp-8Ch]
  _LIST_ENTRY *v209; // [rsp+78h] [rbp-88h]
  _LIST_ENTRY *v210; // [rsp+80h] [rbp-80h]
  struct _NDIS_M_DRIVER_BLOCK *v211; // [rsp+88h] [rbp-78h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v213; // [rsp+98h] [rbp-68h]
  void *v214; // [rsp+A0h] [rbp-60h]
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v216; // [rsp+B0h] [rbp-50h]
  __int64 v217; // [rsp+B8h] [rbp-48h]
  _REFERENCE_EX *p_Ref; // [rsp+C0h] [rbp-40h]
  _LIST_ENTRY *v219; // [rsp+C8h] [rbp-38h]
  _QWORD v220[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v221; // [rsp+110h] [rbp+10h]
  __int128 v222; // [rsp+118h] [rbp+18h]

  v1 = 0LL;
  v203 = a1;
  v2 = a1;
  v3 = 0;
  memset(v220, 0, sizeof(v220));
  v4 = *((_DWORD *)v2 + 22);
  v208 = v4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      v2);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  v221 = 0LL;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v7 = 1;
  if ( ThreadProperty )
  {
    v7 = *ThreadProperty;
    LODWORD(v221) = ThreadProperty[1];
    HIDWORD(v221) = v7;
    ObfDereferenceObject(ThreadProperty);
    v8 = v7;
    if ( v7 )
      goto LABEL_15;
    v7 = 1;
  }
  else
  {
    LODWORD(v221) = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    goto LABEL_234;
  }
  v10 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v11 = v10;
  if ( !v10
    || (v12 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v11),
        v12 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    v2 = v203;
LABEL_234:
    ThreadSessionId = CurrentProcessSessionId;
    goto LABEL_11;
  }
  ThreadSessionId = (unsigned int)TokenInformation;
  v2 = v203;
LABEL_11:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    v7 = 0;
    v141 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( ThreadSessionId < dword_1C00EE550 )
      v7 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00ECD98, v141);
    if ( !v7 )
      v7 = 1;
  }
  HIDWORD(v221) = v7;
  v8 = v7;
LABEL_15:
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = qword_1C00ECDC0;
  v16 = 0LL;
  if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    while ( *((_DWORD *)v15 + 4) != v8 )
    {
      if ( *((_DWORD *)v15 + 4) <= v8 )
      {
        v15 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v15;
        if ( v15 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
          continue;
      }
      goto LABEL_18;
    }
    v16 = v15;
  }
LABEL_18:
  v222 = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v14);
  v195 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v17 = v195;
  if ( !v4 )
  {
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      Flink = i[9].Flink;
      if ( v7 == LODWORD(Flink[1].Flink) )
        goto LABEL_21;
      if ( (_DWORD)v221 == -1 )
      {
        v142 = v222 - *(unsigned __int64 *)((char *)&Flink[105].Flink + 4);
        if ( (_LIST_ENTRY *)v222 == *(_LIST_ENTRY **)((char *)&Flink[105].Flink + 4) )
          v142 = *((_QWORD *)&v222 + 1) - *(unsigned __int64 *)((char *)&Flink[105].Blink + 4);
        if ( !v142 )
          goto LABEL_21;
      }
      if ( ((__int64)Flink[105].Flink & 2) == 0 && v7 == 1 )
LABEL_21:
        ++v3;
    }
    *((_DWORD *)v2 + 22) = v3;
    if ( v3 )
      LODWORD(v1) = 261;
    goto LABEL_25;
  }
  v20 = (void *)*((_QWORD *)v2 + 2);
  v21 = *((unsigned int *)v2 + 6);
  v22 = *((_QWORD *)v2 + 7);
  v23 = *((_QWORD *)v2 + 9);
  v24 = *((_DWORD *)v2 + 16);
  v25 = *((_DWORD *)v2 + 20);
  v202 = *((_DWORD *)v2 + 6);
  v205 = v24;
  v206 = v25;
  v214 = v20;
  v216 = v22;
  v217 = v23;
  if ( v20 && (_DWORD)v21 != 8
    || *((_QWORD *)v2 + 5)
    || *((_DWORD *)v2 + 12)
    || v22 && v24 < 0x28C
    || v23 && v25 < 0x238 )
  {
    LODWORD(v1) = -1073741306;
    goto LABEL_25;
  }
  v26 = ndisIfList.Flink;
  v210 = ndisIfList.Flink;
  v27 = 0;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( 1 )
    {
      v28 = v26[9].Flink;
      v29 = v26 - 77;
      v219 = v26;
      v209 = v26 - 77;
      if ( v7 == LODWORD(v28[1].Flink) )
        break;
      if ( (_DWORD)v221 == -1 )
      {
        v143 = v222 - *(unsigned __int64 *)((char *)&v28[105].Flink + 4);
        if ( (_LIST_ENTRY *)v222 == *(_LIST_ENTRY **)((char *)&v28[105].Flink + 4) )
          v143 = *((_QWORD *)&v222 + 1) - *(unsigned __int64 *)((char *)&v28[105].Blink + 4);
        if ( !v143 )
          break;
      }
      if ( ((__int64)v28[105].Flink & 2) == 0 && v7 == 1 )
        break;
      v26 = v26->Flink;
      v17 = v195;
      v210 = v26;
LABEL_64:
      if ( v26 == &ndisIfList )
        goto LABEL_65;
    }
    v207 = ++v27;
    if ( v27 > v4 )
    {
      v26 = v26->Flink;
      v17 = v195;
      v210 = v26;
      goto LABEL_64;
    }
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v29[89].Blink, 6u);
    ++LODWORD(v29[81].Blink);
    IfBlock = 0LL;
    if ( !BYTE1(v29[87].Flink) || *((_QWORD *)v2 + 1) >= 2uLL )
      goto LABEL_46;
    v31 = 0LL;
    v32 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( BYTE3(v29[87].Flink) )
    {
      v31 = v29[88].Flink;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v29[90].Flink, 3u);
      ++HIDWORD(v29[87].Flink);
    }
    KeReleaseSpinLock(&SpinLock, v32);
    if ( !v31 )
    {
      if ( !BYTE2(v29[87].Flink) )
        goto LABEL_45;
      v57 = v29[88].Flink;
      v204 = 0LL;
      v213 = 0LL;
      v58 = (struct _NDIS_MINIPORT_BLOCK *)v57[2].Flink;
      v201 = v58;
      v59 = 1;
      v200 = 1;
      if ( !v58->BindPaths )
        goto LABEL_343;
      v60 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v61 = ndisMiniDriverList;
      v62 = v60;
      v211 = ndisMiniDriverList;
      if ( !ndisMiniDriverList )
        goto LABEL_138;
      while ( 1 )
      {
        p_SpinLock = &v61->Ref.SpinLock;
        p_Ref = &v61->Ref;
        v64 = KeAcquireSpinLockRaiseToDpc(&v61->Ref.SpinLock);
        if ( v61->Ref.Closing )
          goto LABEL_323;
        ReferenceCount = v61->Ref.ReferenceCount;
        if ( ReferenceCount >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
LABEL_323:
          KeReleaseSpinLock(&v61->Ref.SpinLock, v64);
          NextDriver = v61->NextDriver;
          goto LABEL_136;
        }
        v61->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v61->Ref.RefCountTracker, 8u);
        KeReleaseSpinLock(&v61->Ref.SpinLock, v64);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v62);
        v66 = KeAcquireSpinLockRaiseToDpc(&v61->Ref.SpinLock);
        MiniportQueue = v61->MiniportQueue;
        v68 = v66;
        v196 = v66;
        if ( !MiniportQueue )
          goto LABEL_124;
        v69 = v213;
        v70 = (struct _NDIS_MINIPORT_BLOCK *)v204;
        do
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( !BindPaths )
            goto LABEL_122;
          if ( BindPaths->Number < v59 )
            goto LABEL_122;
          v72 = v58->BindPaths;
          if ( v72->Paths[0].Length != BindPaths->Paths[0].Length
            || memcmp(v72->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v72->Paths[0].Length) )
          {
            goto LABEL_122;
          }
          KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
          v40 = (MiniportQueue->Flags & 0x80200020) == 0;
          MiniportQueue->MiniportThread = KeGetCurrentThread();
          if ( v40
            && (MiniportQueue->PnPFlags & 0x1084110) == 0
            && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
          {
            v73 = 1;
            v74 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
            if ( !MiniportQueue->Ref.Closing )
            {
              RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
              if ( RefCountTracker )
                NdisReferenceWithTag(RefCountTracker, 0x3Cu);
              v76 = MiniportQueue->Ref.ReferenceCount;
              MiniportQueue->Ref.ReferenceCount = v76 + 1;
              if ( v76 != -1 )
                goto LABEL_115;
              MiniportQueue->Ref.ReferenceCount = -1;
            }
            v73 = 0;
LABEL_115:
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v194) = MiniportQueue->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xCu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)MiniportQueue,
                v194);
            }
            KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v74);
            if ( v73 )
            {
              v69 = v70;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 2u);
              p_Number = &MiniportQueue->BindPaths->Number;
              v70 = MiniportQueue;
              ++MiniportQueue->NsiOpenReferences;
              v59 = *p_Number;
              v200 = *p_Number;
            }
            else
            {
              v59 = v200;
            }
            v58 = v201;
          }
          MiniportQueue->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
          if ( v69 )
          {
            ndisDereferenceMiniportForNsi(v69, 2u, 0x3Cu);
            v69 = 0LL;
          }
LABEL_122:
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v61 = v211;
        v204 = (struct _NDIS_M_DRIVER_BLOCK *)v70;
        v68 = v196;
        v213 = v69;
        p_SpinLock = &p_Ref->SpinLock;
LABEL_124:
        KeReleaseSpinLock(p_SpinLock, v68);
        v78 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v61->NextDriver;
        v62 = v78;
        v80 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
        v81 = p_SpinLock[2];
        v82 = v80;
        if ( v81 - 2 > 1 )
        {
          if ( v81 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v81, 0LL);
          if ( *(_BYTE *)(v81 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v81, 8uLL);
          v83 = *(unsigned __int8 *)(v81 + 1);
          if ( *(_BYTE *)(v81 + 1) )
          {
            if ( v83 != 1 )
              goto LABEL_133;
            v153 = v81 + 520;
            v154 = *(_DWORD *)(v81 + 576);
            if ( v154 >> 17 < 0x3FFE && (unsigned __int16)v154 >> 1 == (v154 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v81 + 520));
              *(_DWORD *)(v153 + 56) &= 0x10001u;
              goto LABEL_133;
            }
            if ( (unsigned __int16)v154 >> 1 != 0 || (v154 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v81 + 520), 0);
              goto LABEL_133;
            }
          }
          else
          {
            v84 = *(_QWORD *)(v81 + 8);
            if ( v84 )
            {
              v85 = *(_BYTE *)(v81 + 3);
              if ( v85 )
              {
                while ( 1 )
                {
                  v86 = (_BYTE *)(v84 + 2LL * (unsigned __int8)v83);
                  if ( *v86 == 8 )
                  {
                    v105 = v86[1];
                    if ( v105 )
                      break;
                  }
                  LOBYTE(v83) = v83 + 1;
                  if ( (unsigned __int8)v83 >= v85 )
                    goto LABEL_132;
                }
                v86[1] = v105 - 1;
                goto LABEL_133;
              }
            }
LABEL_132:
            if ( _bittestandreset((signed __int32 *)(v81 + 16), 8u) )
              goto LABEL_133;
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v81, 8uLL);
        }
LABEL_133:
        v40 = (*((_WORD *)p_SpinLock + 4))-- == 1;
        if ( v40 )
        {
          if ( !*((_BYTE *)p_SpinLock + 11) )
          {
            NdisFreeRefCount(p_SpinLock[2]);
            p_SpinLock[2] = 1LL;
          }
          KeReleaseSpinLock(p_SpinLock, v82);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x17u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              v61);
          v155 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v155 != v61 )
            {
              p_NextDriver = &v155->NextDriver;
              v155 = v155->NextDriver;
              if ( !v155 )
                goto LABEL_313;
            }
            *p_NextDriver = v61->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_313:
          Buffer = v61->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v61->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v61->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v61->NdisDriverInfo = 0LL;
          }
          if ( (v61->Flags & 1) != 0 )
          {
            PendingDeviceList = v61->PendingDeviceList;
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
          KeSetEvent(&v61->MiniportsRemovedEvent, 0, 0);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x18u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              v61);
        }
        else
        {
          KeReleaseSpinLock(p_SpinLock, v82);
        }
        v58 = v201;
LABEL_136:
        v61 = NextDriver;
        v211 = NextDriver;
        v40 = NextDriver == 0LL;
        v59 = v200;
        if ( v40 )
        {
          v7 = HIDWORD(v221);
          v1 = v204;
LABEL_138:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v62);
          if ( v1 )
          {
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v1->PendingDeviceList);
            LiveDumpCallback = v1[1].LiveDumpCallback;
            for ( v1->CoActivateVcHandler = (int (__fastcall *)(void *, _CO_CALL_PARAMETERS *))KeGetCurrentThread();
                  LiveDumpCallback;
                  LiveDumpCallback = (int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, const _GUID *, void *, unsigned int), unsigned int, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, void *))*((_QWORD *)LiveDumpCallback + 14) )
            {
              v88 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LiveDumpCallback + 39);
              if ( !*((_BYTE *)LiveDumpCallback + 322) )
              {
                v89 = *((_WORD *)LiveDumpCallback + 160);
                if ( v89 < 0xFFEBu )
                {
                  *((_WORD *)LiveDumpCallback + 160) = v89 + 1;
                  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)LiveDumpCallback + 41), 0xBu);
                  KeReleaseSpinLock((PKSPIN_LOCK)LiveDumpCallback + 39, v88);
                  IfBlock = (_NDIS_IF_BLOCK *)*((_QWORD *)LiveDumpCallback + 86);
                  goto LABEL_143;
                }
                ndisRefCountReferenceCountOverflow = 1;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)LiveDumpCallback + 39, v88);
            }
            IfBlock = *(_NDIS_IF_BLOCK **)&v1[3].ServiceName.Length;
LABEL_143:
            v1->CoActivateVcHandler = 0LL;
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v1->PendingDeviceList);
            v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v1->PendingDeviceList);
            PauseHandler = (ULONG_PTR)v1[4].MiniportDriverCharacteristics.PauseHandler;
            v1->CoActivateVcHandler = (int (__fastcall *)(void *, _CO_CALL_PARAMETERS *))KeGetCurrentThread();
            if ( PauseHandler - 2 > 1 )
            {
              if ( PauseHandler < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, PauseHandler, 0LL);
              if ( *(_BYTE *)(PauseHandler + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, PauseHandler, 2uLL);
              v92 = *(unsigned __int8 *)(PauseHandler + 1);
              if ( *(_BYTE *)(PauseHandler + 1) )
              {
                if ( v92 != 1 )
                  goto LABEL_152;
                v161 = PauseHandler + 136;
                v162 = *(_DWORD *)(PauseHandler + 192);
                if ( v162 >> 17 < 0x3FFE && (unsigned __int16)v162 >> 1 == (v162 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(PauseHandler + 136));
                  *(_DWORD *)(v161 + 56) &= 0x10001u;
                  goto LABEL_152;
                }
                if ( (unsigned __int16)v162 >> 1 != 0 || (v162 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(PauseHandler + 136), 0);
                  goto LABEL_152;
                }
              }
              else
              {
                v93 = *(_QWORD *)(PauseHandler + 8);
                if ( v93 )
                {
                  v94 = *(_BYTE *)(PauseHandler + 3);
                  if ( v94 )
                  {
                    while ( 1 )
                    {
                      v95 = (_BYTE *)(v93 + 2LL * (unsigned __int8)v92);
                      if ( *v95 == 2 )
                      {
                        v163 = v95[1];
                        if ( v163 )
                          break;
                      }
                      LOBYTE(v92) = v92 + 1;
                      if ( (unsigned __int8)v92 >= v94 )
                        goto LABEL_151;
                    }
                    v95[1] = v163 - 1;
                    goto LABEL_152;
                  }
                }
LABEL_151:
                if ( _bittestandreset((signed __int32 *)(PauseHandler + 16), 2u) )
                  goto LABEL_152;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, PauseHandler, 2uLL);
            }
LABEL_152:
            v40 = HIDWORD(v1[2].CallMgrChars.CmOidRequestHandler)-- == 1;
            if ( v40 )
            {
              CmNotifyCloseAfCompleteHandler = (struct _KEVENT *)v1[2].CallMgrChars.CmNotifyCloseAfCompleteHandler;
              if ( CmNotifyCloseAfCompleteHandler )
                KeSetEvent(CmNotifyCloseAfCompleteHandler, 0, 0);
            }
            v1->CoActivateVcHandler = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&v1->PendingDeviceList, v90);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x19u,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                v1);
            v97 = 0;
            v98 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v1[3].ImageName.Buffer);
            UnloadHandler = (ULONG_PTR)v1[4].MiniportDriverCharacteristics.UnloadHandler;
            v100 = v98;
            if ( UnloadHandler && UnloadHandler - 2 > 1 )
            {
              if ( UnloadHandler == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(UnloadHandler + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v1[4].MiniportDriverCharacteristics.UnloadHandler, 0x3CuLL);
              v101 = *(unsigned __int8 *)(UnloadHandler + 1);
              if ( *(_BYTE *)(UnloadHandler + 1) )
              {
                if ( v101 != 1 )
                  goto LABEL_167;
                v164 = UnloadHandler + 3848;
                v165 = *(_DWORD *)(UnloadHandler + 3904);
                if ( v165 >> 17 < 0x3FFE && (unsigned __int16)v165 >> 1 == (v165 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(UnloadHandler + 3848));
                  *(_DWORD *)(v164 + 56) &= 0x10001u;
                  goto LABEL_167;
                }
                if ( (unsigned __int16)v165 >> 1 != 0 || (v165 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(UnloadHandler + 3848), 0);
                  goto LABEL_167;
                }
              }
              else
              {
                v102 = *(_QWORD *)(UnloadHandler + 8);
                if ( v102 )
                {
                  v103 = *(_BYTE *)(UnloadHandler + 3);
                  if ( v103 )
                  {
                    while ( 1 )
                    {
                      v104 = (_BYTE *)(v102 + 2LL * (unsigned __int8)v101);
                      if ( *v104 == 60 )
                      {
                        v166 = v104[1];
                        if ( v166 )
                          break;
                      }
                      LOBYTE(v101) = v101 + 1;
                      if ( (unsigned __int8)v101 >= v103 )
                        goto LABEL_166;
                    }
                    v104[1] = v166 - 1;
                    goto LABEL_167;
                  }
                }
LABEL_166:
                if ( _bittestandreset((signed __int32 *)(UnloadHandler + 20), 0x1Cu) )
                  goto LABEL_167;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, UnloadHandler, 0x3CuLL);
            }
LABEL_167:
            v40 = LODWORD(v1[3].HookDriverHandle)-- == 1;
            if ( v40 )
              v97 = 1;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v194) = v1[3].HookDriverHandle;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xEu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)v1,
                v194);
            }
            KeReleaseSpinLock((PKSPIN_LOCK)&v1[3].ImageName.Buffer, v100);
            if ( v97 )
            {
              v167 = (struct _KEVENT *)v1[1].IMStartRemoveMutex.Header.WaitListHead.Flink;
              if ( v167 )
                KeSetEvent(v167, 0, 0);
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x1Au,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                v1);
            v7 = HIDWORD(v221);
            v29 = v209;
LABEL_175:
            if ( IfBlock )
            {
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker, 7u);
              ++IfBlock->Ref;
            }
            v1 = 0LL;
LABEL_178:
            v2 = v203;
LABEL_45:
            v26 = v210;
            v21 = v202;
LABEL_46:
            KeReleaseSpinLock(&ndisIfListLock, v195);
            if ( *((_QWORD *)v2 + 2) )
            {
              memmove(v214, &v29[82], v21);
              v214 = (char *)v214 + v21;
            }
            if ( *((_QWORD *)v2 + 7) )
            {
              v33 = v216;
              v220[5] = v216;
              LODWORD(v220[4]) = 1;
              LODWORD(v220[6]) = v205;
              ndisNsiGetInterfaceRodEnumObject((char)v29);
              v216 = v205 + v33;
            }
            if ( *((_QWORD *)v2 + 9) )
            {
              v34 = v217;
              v220[5] = v217;
              LODWORD(v220[4]) = 2;
              LODWORD(v220[6]) = v206;
              ndisNsiGetInterfaceRosEnumObject((char)v29);
              v217 = v206 + v34;
            }
            v195 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            v17 = v195;
            if ( !IfBlock )
            {
LABEL_53:
              Blink = (ULONG_PTR)v29[89].Blink;
              v26 = v26->Flink;
              v210 = v26;
              if ( Blink - 2 <= 1 )
                goto LABEL_62;
              if ( Blink < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, Blink, 0LL);
              if ( *(_BYTE *)(Blink + 2) <= 6u )
                ndisBugCheckEx(0x1EuLL, 2uLL, Blink, 6uLL);
              if ( *(_BYTE *)(Blink + 1) )
              {
                if ( *(_BYTE *)(Blink + 1) != 1 )
                  goto LABEL_62;
                v182 = Blink + 392;
                v183 = *(_DWORD *)(Blink + 448);
                if ( v183 >> 17 < 0x3FFE && (unsigned __int16)v183 >> 1 == (v183 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(Blink + 392));
                  *(_DWORD *)(v182 + 56) &= 0x10001u;
                  v17 = v195;
                  goto LABEL_62;
                }
                if ( (unsigned __int16)v183 >> 1 != 0 || (v183 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(Blink + 392), 0);
                  v17 = v195;
                  goto LABEL_62;
                }
              }
              else
              {
                v36 = *(_QWORD *)(Blink + 8);
                if ( v36 )
                {
                  v37 = *(_BYTE *)(Blink + 3);
                  v38 = 0;
                  if ( v37 )
                  {
                    while ( 1 )
                    {
                      v39 = (_BYTE *)(v36 + 2LL * v38);
                      if ( *v39 == 6 )
                      {
                        v41 = v39[1];
                        if ( v41 )
                          break;
                      }
                      if ( ++v38 >= v37 )
                        goto LABEL_61;
                    }
                    v39[1] = v41 - 1;
LABEL_62:
                    v40 = LODWORD(v29[81].Blink)-- == 1;
                    if ( !v40 )
                    {
LABEL_63:
                      v21 = v202;
                      v4 = v208;
                      v27 = v207;
                      goto LABEL_64;
                    }
                    ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v29);
                    v184 = v219->Flink;
                    if ( v219->Flink->Blink == v219 )
                    {
                      v185 = v219->Blink;
                      if ( v185->Flink == v219 )
                      {
                        v185->Flink = v184;
                        v184->Blink = v185;
                        v186 = v29[78].Flink;
                        if ( v186->Blink == &v29[78] )
                        {
                          v187 = v29[78].Blink;
                          if ( v187->Flink == &v29[78] )
                          {
                            v187->Flink = v186;
                            v186->Blink = v187;
                            v188 = v29[79].Flink;
                            if ( v188->Blink == &v29[79] )
                            {
                              v189 = v29[79].Blink;
                              if ( v189->Flink == &v29[79] )
                              {
                                v189->Flink = v188;
                                v188->Blink = v189;
                                NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v29[85].Blink);
                                ndisIfFreeIfIndex(HIDWORD(v29->Flink));
                                v190 = (ULONG_PTR)v29[89].Blink;
                                --ndisInterfaceCount;
                                NdisFreeRefCount(v190);
                                v191 = v29[89].Flink;
                                v29[89].Blink = 0LL;
                                if ( v191 )
                                {
                                  ExFreePoolWithTag(v191, 0);
                                  v29[89].Flink = 0LL;
                                }
                                v192 = v29[80].Flink;
                                if ( v192 )
                                {
                                  ExFreePoolWithTag(v192, 0);
                                  v29[80].Flink = 0LL;
                                  v29[80].Blink = 0LL;
                                }
                                v193 = (struct _KEVENT *)v29[86].Blink;
                                if ( v193 )
                                  KeSetEvent(v193, 0, 0);
                                ExFreePoolWithTag(v29, 0);
                                v17 = v195;
                                goto LABEL_63;
                              }
                            }
                          }
                        }
                      }
                    }
LABEL_406:
                    __fastfail(3u);
                  }
                }
LABEL_61:
                if ( _bittestandreset((signed __int32 *)(Blink + 16), 6u) )
                  goto LABEL_62;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, Blink, 6uLL);
            }
            if ( !IfBlock->IsNdisFilter )
              goto LABEL_84;
            p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
            v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
            v44 = *(_QWORD *)(p_DeferredContext + 16);
            v45 = v43;
            if ( v44 - 2 <= 1 )
              goto LABEL_80;
            if ( v44 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v44, 0LL);
            if ( *(_BYTE *)(v44 + 2) <= 0xBu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v44, 0xBuLL);
            v46 = *(unsigned __int8 *)(v44 + 1);
            if ( *(_BYTE *)(v44 + 1) )
            {
              if ( v46 != 1 )
                goto LABEL_80;
              v168 = v44 + 712;
              v169 = *(_DWORD *)(v44 + 768);
              if ( v169 >> 17 < 0x3FFE && (unsigned __int16)v169 >> 1 == (v169 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v44 + 712));
                *(_DWORD *)(v168 + 56) &= 0x10001u;
                v29 = v209;
                goto LABEL_80;
              }
              if ( (unsigned __int16)v169 >> 1 != 0 || (v169 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v44 + 712), 0);
                v29 = v209;
                goto LABEL_80;
              }
            }
            else
            {
              v47 = *(_QWORD *)(v44 + 8);
              if ( v47 )
              {
                v48 = *(_BYTE *)(v44 + 3);
                if ( v48 )
                {
                  while ( 1 )
                  {
                    v49 = (_BYTE *)(v47 + 2LL * (unsigned __int8)v46);
                    if ( *v49 == 11 )
                    {
                      v50 = v49[1];
                      if ( v50 )
                        break;
                    }
                    LOBYTE(v46) = v46 + 1;
                    if ( (unsigned __int8)v46 >= v48 )
                      goto LABEL_79;
                  }
                  v49[1] = v50 - 1;
LABEL_80:
                  v40 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
                  if ( v40 && !*(_BYTE *)(p_DeferredContext + 11) )
                  {
                    NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
                    *(_QWORD *)(p_DeferredContext + 16) = 1LL;
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v45);
                  v2 = v203;
LABEL_84:
                  v51 = (ULONG_PTR)IfBlock->RefCountTracker;
                  if ( v51 - 2 > 1 )
                  {
                    if ( v51 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v51, 0LL);
                    if ( *(_BYTE *)(v51 + 2) <= 7u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v51, 7uLL);
                    v52 = *(unsigned __int8 *)(v51 + 1);
                    if ( *(_BYTE *)(v51 + 1) )
                    {
                      if ( v52 != 1 )
                        goto LABEL_93;
                      v170 = v51 + 456;
                      v171 = *(_DWORD *)(v51 + 512);
                      if ( v171 >> 17 < 0x3FFE && (unsigned __int16)v171 >> 1 == (v171 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 456));
                        *(_DWORD *)(v170 + 56) &= 0x10001u;
                        goto LABEL_93;
                      }
                      if ( (unsigned __int16)v171 >> 1 != 0 || (v171 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 456), 0);
                        goto LABEL_93;
                      }
                    }
                    else
                    {
                      v53 = *(_QWORD *)(v51 + 8);
                      if ( v53 )
                      {
                        v54 = *(_BYTE *)(v51 + 3);
                        if ( v54 )
                        {
                          while ( 1 )
                          {
                            v55 = (_BYTE *)(v53 + 2LL * (unsigned __int8)v52);
                            if ( *v55 == 7 )
                            {
                              v56 = v55[1];
                              if ( v56 )
                                break;
                            }
                            LOBYTE(v52) = v52 + 1;
                            if ( (unsigned __int8)v52 >= v54 )
                              goto LABEL_92;
                          }
                          v55[1] = v56 - 1;
                          goto LABEL_93;
                        }
                      }
LABEL_92:
                      if ( _bittestandreset((signed __int32 *)(v51 + 16), 7u) )
                        goto LABEL_93;
                    }
                    ndisBugCheckEx(0x1EuLL, 0LL, v51, 7uLL);
                  }
LABEL_93:
                  v40 = IfBlock->Ref-- == 1;
                  if ( v40 )
                  {
                    ndisIfDeleteStackEntries(IfBlock);
                    v172 = IfBlock->Link.Flink;
                    if ( v172->Blink != &IfBlock->Link )
                      goto LABEL_406;
                    v173 = IfBlock->Link.Blink;
                    if ( v173->Flink != &IfBlock->Link )
                      goto LABEL_406;
                    v173->Flink = v172;
                    v172->Blink = v173;
                    v174 = IfBlock->ProviderLink.Flink;
                    if ( v174->Blink != &IfBlock->ProviderLink )
                      goto LABEL_406;
                    v175 = IfBlock->ProviderLink.Blink;
                    if ( v175->Flink != &IfBlock->ProviderLink )
                      goto LABEL_406;
                    v175->Flink = v174;
                    v174->Blink = v175;
                    v176 = IfBlock->NetworkLink.Flink;
                    if ( v176->Blink != &IfBlock->NetworkLink )
                      goto LABEL_406;
                    v177 = IfBlock->NetworkLink.Blink;
                    if ( v177->Flink != &IfBlock->NetworkLink )
                      goto LABEL_406;
                    v177->Flink = v176;
                    v176->Blink = v177;
                    NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                    ndisIfFreeIfIndex(IfBlock->ifIndex);
                    v178 = (ULONG_PTR)IfBlock->RefCountTracker;
                    --ndisInterfaceCount;
                    NdisFreeRefCount(v178);
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
                  }
                  v17 = v195;
                  goto LABEL_53;
                }
              }
LABEL_79:
              if ( _bittestandreset((signed __int32 *)(v44 + 16), 0xBu) )
                goto LABEL_80;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v44, 0xBuLL);
          }
LABEL_343:
          v29 = v209;
          v1 = 0LL;
          IfBlock = 0LL;
          goto LABEL_178;
        }
      }
    }
    v40 = v31[235].Blink == 0LL;
    v106 = 1;
    v200 = 1;
    v107 = 0LL;
    v201 = 0LL;
    if ( !v40 )
    {
      v108 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v109 = ndisMiniDriverList;
      v110 = v108;
      v204 = ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          p_Type = &v109->Ref.SpinLock;
          v211 = (struct _NDIS_M_DRIVER_BLOCK *)&v109->Ref;
          v112 = KeAcquireSpinLockRaiseToDpc(&v109->Ref.SpinLock);
          if ( v109->Ref.Closing )
            goto LABEL_288;
          v113 = v109->Ref.ReferenceCount;
          if ( v113 >= 0xFFEBu )
            break;
          v109->Ref.ReferenceCount = v113 + 1;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v109->Ref.RefCountTracker, 8u);
          KeReleaseSpinLock(&v109->Ref.SpinLock, v112);
          KeReleaseSpinLock(&ndisMiniDriverListLock, v110);
          v114 = KeAcquireSpinLockRaiseToDpc(&v109->Ref.SpinLock);
          v115 = v109->MiniportQueue;
          v197 = v114;
          if ( v115 )
          {
            v116 = v201;
            while ( 1 )
            {
              v117 = v115->BindPaths;
              if ( v117 )
              {
                if ( v117->Number >= v106 )
                {
                  v118 = v31[235].Blink;
                  if ( LOWORD(v118->Blink) == v117->Paths[0].Length
                    && !memcmp(v118[1].Flink, v117->Paths[0].Buffer, LOWORD(v118->Blink)) )
                  {
                    break;
                  }
                }
              }
LABEL_205:
              v115 = v115->NextMiniport;
              if ( !v115 )
              {
                v109 = v204;
                v114 = v197;
                v201 = v116;
                p_Type = (KSPIN_LOCK *)&v211->Header.Type;
                goto LABEL_207;
              }
            }
            KeAcquireSpinLockAtDpcLevel(&v115->Lock);
            v40 = (v115->Flags & 0x80200020) == 0;
            v115->MiniportThread = KeGetCurrentThread();
            if ( v40
              && (v115->PnPFlags & 0x1084110) == 0
              && v115->PnPDeviceState == NdisPnPDeviceStarted
              && v115->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v119 = 1;
              v120 = KeAcquireSpinLockRaiseToDpc(&v115->Ref.SpinLock);
              if ( !v115->Ref.Closing )
              {
                v121 = (struct _NDIS_REFCOUNT_BLOCK *)v115->RefCountTracker;
                if ( v121 )
                  NdisReferenceWithTag(v121, 0x3Cu);
                v122 = v115->Ref.ReferenceCount;
                v115->Ref.ReferenceCount = v122 + 1;
                if ( v122 != -1 )
                {
LABEL_199:
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v194) = v115->Ref.ReferenceCount;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0x14u,
                      0xCu,
                      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                      (char)v115,
                      v194);
                  }
                  KeReleaseSpinLock(&v115->Ref.SpinLock, v120);
                  if ( v119 )
                  {
                    v116 = v107;
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v115->NsiRefCountTracker, 2u);
                    v123 = &v115->BindPaths->Number;
                    v107 = v115;
                    ++v115->NsiOpenReferences;
                    v106 = *v123;
                    v200 = *v123;
                  }
                  else
                  {
                    v106 = v200;
                  }
                  goto LABEL_203;
                }
                v115->Ref.ReferenceCount = -1;
              }
              v119 = 0;
              goto LABEL_199;
            }
LABEL_203:
            v115->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v115->Lock);
            if ( v116 )
            {
              ndisDereferenceMiniportForNsi(v116, 2u, 0x3Cu);
              v116 = 0LL;
            }
            goto LABEL_205;
          }
LABEL_207:
          KeReleaseSpinLock(p_Type, v114);
          v124 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          v125 = v109->NextDriver;
          v110 = v124;
          v126 = KeAcquireSpinLockRaiseToDpc(p_Type);
          NdisDereferenceWithTag(p_Type[2], 8u);
          v40 = (*((_WORD *)p_Type + 4))-- == 1;
          if ( v40 )
          {
            if ( !*((_BYTE *)p_Type + 11) )
            {
              NdisFreeRefCount(p_Type[2]);
              p_Type[2] = 1LL;
            }
            KeReleaseSpinLock(p_Type, v126);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x17u,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                v109);
            v144 = ndisMiniDriverList;
            v145 = &ndisMiniDriverList;
            if ( ndisMiniDriverList )
            {
              while ( v144 != v109 )
              {
                v145 = &v144->NextDriver;
                v144 = v144->NextDriver;
                if ( !v144 )
                  goto LABEL_278;
              }
              *v145 = v109->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
            }
LABEL_278:
            v146 = v109->ImageName.Buffer;
            if ( v146 )
            {
              ExFreePoolWithTag(v146, 0);
              v109->ImageName.Buffer = 0LL;
            }
            v147 = v109->NdisDriverInfo;
            if ( v147 )
            {
              ExFreePoolWithTag(v147, 0);
              v109->NdisDriverInfo = 0LL;
            }
            if ( (v109->Flags & 1) != 0 )
            {
              v148 = v109->PendingDeviceList;
              if ( v148 )
              {
                do
                {
                  v149 = v148->Next;
                  ExFreePoolWithTag(v148, 0);
                  v148 = v149;
                }
                while ( v149 );
              }
            }
            KeSetEvent(&v109->MiniportsRemovedEvent, 0, 0);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x18u,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                v109);
          }
          else
          {
            KeReleaseSpinLock(p_Type, v126);
          }
LABEL_209:
          v109 = v125;
          v204 = v125;
          v40 = v125 == 0LL;
          v106 = v200;
          if ( v40 )
          {
            v7 = HIDWORD(v221);
            goto LABEL_211;
          }
        }
        ndisRefCountReferenceCountOverflow = 1;
LABEL_288:
        KeReleaseSpinLock(&v109->Ref.SpinLock, v112);
        v125 = v109->NextDriver;
        goto LABEL_209;
      }
LABEL_211:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v110);
      if ( v107 )
      {
        KeAcquireSpinLockAtDpcLevel(&v107->Lock);
        HighestFilter = v107->HighestFilter;
        v107->MiniportThread = KeGetCurrentThread();
        if ( !HighestFilter )
        {
LABEL_239:
          IfBlock = v107->IfBlock;
          goto LABEL_216;
        }
        while ( 1 )
        {
          v128 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
          if ( !HighestFilter->PnPRef.Closing )
          {
            v129 = HighestFilter->PnPRef.ReferenceCount;
            if ( v129 < 0xFFEBu )
            {
              HighestFilter->PnPRef.ReferenceCount = v129 + 1;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker, 0xBu);
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v128);
              IfBlock = HighestFilter->IfBlock;
LABEL_216:
              v107->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&v107->Lock);
              v130 = KeAcquireSpinLockRaiseToDpc(&v107->Lock);
              NsiRefCountTracker = (ULONG_PTR)v107->NsiRefCountTracker;
              v107->MiniportThread = KeGetCurrentThread();
              NdisDereferenceWithTag(NsiRefCountTracker, 2u);
              v40 = v107->NsiOpenReferences-- == 1;
              if ( v40 )
              {
                NsiRequestsCompletedEvent = v107->NsiRequestsCompletedEvent;
                if ( NsiRequestsCompletedEvent )
                  KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
              }
              v107->MiniportThread = 0LL;
              KeReleaseSpinLock(&v107->Lock, v130);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x19u,
                  (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                  v107);
              v133 = 0;
              v134 = KeAcquireSpinLockRaiseToDpc(&v107->Ref.SpinLock);
              v135 = (ULONG_PTR)v107->RefCountTracker;
              v136 = v134;
              if ( v135 )
                NdisDereferenceWithTag(v135, 0x3Cu);
              v40 = v107->Ref.ReferenceCount-- == 1;
              if ( v40 )
                v133 = 1;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v194) = v107->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xEu,
                  (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                  (char)v107,
                  v194);
              }
              KeReleaseSpinLock(&v107->Ref.SpinLock, v136);
              if ( v133 )
              {
                RemoveReadyEvent = v107->RemoveReadyEvent;
                if ( RemoveReadyEvent )
                  KeSetEvent(RemoveReadyEvent, 0, 0);
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x1Au,
                  (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                  v107);
              v7 = HIDWORD(v221);
LABEL_231:
              v137 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
              v29 = v209;
              v138 = v137;
              NdisDereferenceWithTag((ULONG_PTR)v209[90].Flink, 3u);
              v40 = HIDWORD(v29[87].Flink)-- == 1;
              if ( v40 )
              {
                v151 = v29[88].Flink;
                if ( v151 )
                {
                  v152 = (struct _KEVENT *)v151[253].Flink;
                  if ( v152 )
                    KeSetEvent(v152, 0, 0);
                }
              }
              KeReleaseSpinLock(&SpinLock, v138);
              goto LABEL_175;
            }
            ndisRefCountReferenceCountOverflow = 1;
          }
          KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v128);
          HighestFilter = HighestFilter->LowerFilter;
          if ( !HighestFilter )
            goto LABEL_239;
        }
      }
    }
    IfBlock = 0LL;
    goto LABEL_231;
  }
LABEL_65:
  *((_DWORD *)v2 + 22) = v27;
  if ( v27 > v4 )
    LODWORD(v1) = 261;
LABEL_25:
  KeReleaseSpinLock(&ndisIfListLock, v17);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v194) = (_DWORD)v1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)v2,
      v194);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
