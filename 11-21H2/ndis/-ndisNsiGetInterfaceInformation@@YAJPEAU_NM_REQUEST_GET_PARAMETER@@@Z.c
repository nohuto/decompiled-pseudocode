/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DD50 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0017680 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017748 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0017EF4 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001D9E8 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002BB04 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00B2374 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C0101250 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C0101E50 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C0102390 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C01027E0 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C0103890 (ndisNsiGetInterfaceRosEnumObject.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  struct _NDIS_IF_BLOCK *IfBlock; // rsi
  struct _NM_REQUEST_GET_PARAMETER *v3; // r13
  struct _KTHREAD *CurrentThread; // r14
  union _NET_LUID_LH v5; // rbx
  int *ThreadProperty; // rax
  __int64 v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  int v12; // ebp
  unsigned int v13; // edi
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // al
  int v18; // ecx
  KIRQL v19; // r14
  _LIST_ENTRY *Flink; // rax
  struct _NDIS_IF_BLOCK *v21; // rdi
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  KIRQL v23; // bl
  struct _NDIS_REFCOUNT_BLOCK *MpRefCountTracker; // rcx
  _NDIS_MINIPORT_BLOCK *v25; // rbp
  unsigned int v26; // esi
  KIRQL v27; // al
  struct _NDIS_M_DRIVER_BLOCK *v28; // r12
  KIRQL v29; // r14
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v31; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v33; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  struct _NDIS_MINIPORT_BLOCK *v35; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v37; // rcx
  bool v38; // zf
  char v39; // r14
  KIRQL v40; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v42; // ecx
  unsigned int *p_Number; // rax
  KIRQL v44; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v46; // al
  ULONG_PTR v47; // r8
  KIRQL v48; // r15
  int v49; // ecx
  __int64 v50; // r10
  unsigned __int8 v51; // r9
  _BYTE *v52; // rdx
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  KIRQL v54; // r15
  unsigned __int16 v55; // cx
  KIRQL v56; // bl
  ULONG_PTR NsiRefCountTracker; // r8
  int v58; // ecx
  __int64 v59; // r9
  unsigned __int8 v60; // dl
  _BYTE *v61; // r10
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v63; // r15
  KIRQL v64; // al
  ULONG_PTR v65; // r8
  KIRQL v66; // r12
  int v67; // ecx
  __int64 v68; // r10
  unsigned __int8 v69; // r9
  _BYTE *v70; // rdx
  KIRQL v71; // al
  ULONG_PTR v72; // r8
  KIRQL v73; // bl
  int v74; // ecx
  __int64 v75; // r9
  unsigned __int8 v76; // dl
  _BYTE *v77; // r10
  __int64 v78; // rax
  unsigned int InterfaceRodInformation; // ebx
  int v80; // eax
  KIRQL v81; // r14
  __int64 p_DeferredContext; // rbp
  KIRQL v83; // al
  ULONG_PTR v84; // r8
  KIRQL v85; // r15
  int v86; // ecx
  __int64 v87; // r9
  unsigned __int8 v88; // r10
  _BYTE *v89; // rdx
  char v90; // al
  ULONG_PTR v91; // r8
  int v92; // ecx
  __int64 v93; // rdx
  unsigned __int8 v94; // r9
  _BYTE *v95; // r10
  ULONG_PTR v96; // r8
  int v97; // ecx
  __int64 v98; // r10
  unsigned __int8 v99; // r9
  _BYTE *v100; // rdx
  char v102; // al
  char v103; // al
  char v104; // al
  NTSTATUS v105; // edi
  int v106; // eax
  KIRQL v107; // r8
  int v108; // ecx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v110; // rdx
  ULONG_PTR v111; // rbx
  unsigned int v112; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v113; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v119; // r15
  unsigned int v120; // edx
  int v121; // ecx
  char v122; // al
  ULONG_PTR v123; // r14
  unsigned int v124; // edx
  int v125; // ecx
  char v126; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v128; // rbp
  unsigned int v129; // edx
  int v130; // ecx
  char v131; // al
  _NDIS_MINIPORT_BLOCK *v132; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  ULONG_PTR v134; // r13
  unsigned int v135; // edx
  int v136; // ecx
  ULONG_PTR v137; // rbp
  unsigned int v138; // edx
  int v139; // ecx
  _LIST_ENTRY *v140; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v142; // rdx
  _LIST_ENTRY *v143; // rcx
  _LIST_ENTRY *v144; // rdx
  _LIST_ENTRY *v145; // rcx
  ULONG_PTR v146; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v150; // rsi
  unsigned int v151; // edx
  int v152; // ecx
  _LIST_ENTRY *v153; // rdx
  _LIST_ENTRY *v154; // rcx
  _LIST_ENTRY *v155; // rdx
  _LIST_ENTRY *v156; // rcx
  _LIST_ENTRY *v157; // rdx
  _LIST_ENTRY *v158; // rcx
  ULONG_PTR v159; // rcx
  _IF_COUNTED_STRING_LH *v160; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v161; // rcx
  struct _KEVENT *v162; // rcx
  __int64 v163; // [rsp+30h] [rbp-A8h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-98h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+41h] [rbp-97h] BYREF
  KIRQL v166; // [rsp+42h] [rbp-96h]
  KIRQL v167; // [rsp+43h] [rbp-95h]
  int v168; // [rsp+44h] [rbp-94h]
  _NDIS_MINIPORT_BLOCK *v169; // [rsp+48h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+50h] [rbp-88h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v171; // [rsp+58h] [rbp-80h]
  struct _NDIS_IF_BLOCK *v172; // [rsp+60h] [rbp-78h]
  struct _NM_REQUEST_GET_PARAMETER *v173; // [rsp+68h] [rbp-70h]
  PVOID TokenInformation; // [rsp+70h] [rbp-68h] BYREF
  struct _NDIS_M_DRIVER_BLOCK *v175; // [rsp+78h] [rbp-60h]
  _REFERENCE_EX *v176; // [rsp+80h] [rbp-58h]
  int v177; // [rsp+88h] [rbp-50h] BYREF
  int v178; // [rsp+8Ch] [rbp-4Ch]
  __int128 v179; // [rsp+90h] [rbp-48h]

  Miniport = 0LL;
  v173 = a1;
  IfBlock = 0LL;
  v3 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 || !*((_DWORD *)v3 + 12) || !*((_QWORD *)v3 + 5) )
  {
    InterfaceRodInformation = -1073741808;
    v81 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    goto LABEL_167;
  }
  CurrentThread = KeGetCurrentThread();
  v5.Value = (*((union _NET_LUID_LH **)v3 + 2))->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    v177 = ThreadProperty[1];
    v178 = v12;
    ObfDereferenceObject(ThreadProperty);
    v13 = v12;
    if ( v12 )
      goto LABEL_17;
  }
  else
  {
    v177 = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  }
  else
  {
    v8 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v9 = v8;
    if ( v8 )
    {
      v105 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v9);
      if ( v105 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_12;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_12:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    v12 = 0;
    v107 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( ThreadSessionId < dword_1C00EE550 )
      v12 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00ECD98, v107);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  v178 = v12;
  v13 = v12;
LABEL_17:
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = qword_1C00ECDC0;
  v16 = 0LL;
  if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    while ( *((_DWORD *)v15 + 4) != v13 )
    {
      if ( *((_DWORD *)v15 + 4) <= v13 )
      {
        v15 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v15;
        if ( v15 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
          continue;
      }
      goto LABEL_20;
    }
    v16 = v15;
  }
LABEL_20:
  v179 = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v14);
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = *((_DWORD *)v3 + 14);
  v19 = v17;
  v167 = v17;
  if ( !v18 )
  {
    Flink = ndisIfList.Flink;
    v172 = 0LL;
    v21 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( Flink[5].Flink != (_LIST_ENTRY *)v5.Value )
      {
        if ( Flink[5].Flink > (_LIST_ENTRY *)v5.Value )
          goto LABEL_27;
        Flink = Flink->Flink;
        if ( Flink == &ndisIfList )
          goto LABEL_215;
      }
      v21 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
      v172 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
    }
LABEL_27:
    if ( !v21 )
      goto LABEL_215;
    Compartment = v21->Compartment;
    if ( v12 != *((_DWORD *)Compartment + 4) )
    {
      v110 = v179 - *(_QWORD *)((char *)Compartment + 1684);
      if ( (_QWORD)v179 == *(_QWORD *)((char *)Compartment + 1684) )
        v110 = *((_QWORD *)&v179 + 1) - *(_QWORD *)((char *)Compartment + 1692);
      if ( v110 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || v12 != 1) )
      {
        v21 = 0LL;
LABEL_215:
        KeReleaseSpinLock(&ndisIfListLock, v19);
LABEL_216:
        InterfaceRodInformation = -1073741772;
        if ( *((_DWORD *)v3 + 14) )
          InterfaceRodInformation = -2147483622;
        goto LABEL_130;
      }
    }
LABEL_29:
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v21->RefCountTracker, 1u);
    ++v21->Ref;
    if ( !v21->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
      goto LABEL_124;
    v169 = 0LL;
    v23 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( v21->MiniportAvailable )
    {
      Miniport = v21->Miniport;
      MpRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v21->MpRefCountTracker;
      v169 = Miniport;
      NdisReferenceWithTag(MpRefCountTracker, 3u);
      ++v21->MiniportLinkReference;
    }
    KeReleaseSpinLock(&SpinLock, v23);
    if ( Miniport )
    {
      v25 = 0LL;
      v171 = 0LL;
      v26 = 1;
      v168 = 1;
      if ( !Miniport->BindPaths )
        goto LABEL_185;
      v27 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v28 = ndisMiniDriverList;
      v29 = v27;
      v175 = ndisMiniDriverList;
      if ( !ndisMiniDriverList )
        goto LABEL_75;
      while ( 1 )
      {
        p_Ref = &v28->Ref;
        v176 = &v28->Ref;
        v31 = KeAcquireSpinLockRaiseToDpc(&v28->Ref.SpinLock);
        if ( v28->Ref.Closing )
          goto LABEL_247;
        ReferenceCount = v28->Ref.ReferenceCount;
        if ( ReferenceCount >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
LABEL_247:
          KeReleaseSpinLock(&v28->Ref.SpinLock, v31);
          NextDriver = v28->NextDriver;
          goto LABEL_73;
        }
        v28->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v28->Ref.RefCountTracker, 8u);
        KeReleaseSpinLock(&v28->Ref.SpinLock, v31);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
        v33 = KeAcquireSpinLockRaiseToDpc(&v28->Ref.SpinLock);
        MiniportQueue = v28->MiniportQueue;
        v166 = v33;
        if ( !MiniportQueue )
          goto LABEL_61;
        v35 = v171;
        do
        {
          BindPaths = MiniportQueue->BindPaths;
          if ( !BindPaths )
            goto LABEL_59;
          if ( BindPaths->Number < v26 )
            goto LABEL_59;
          v37 = Miniport->BindPaths;
          if ( v37->Paths[0].Length != BindPaths->Paths[0].Length
            || memcmp(v37->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v37->Paths[0].Length) )
          {
            goto LABEL_59;
          }
          KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
          v38 = (MiniportQueue->Flags & 0x80200020) == 0;
          MiniportQueue->MiniportThread = KeGetCurrentThread();
          if ( v38
            && (MiniportQueue->PnPFlags & 0x1084110) == 0
            && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
          {
            v39 = 1;
            v40 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
            if ( !MiniportQueue->Ref.Closing )
            {
              RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
              if ( RefCountTracker )
                NdisReferenceWithTag(RefCountTracker, 0x3Cu);
              v42 = MiniportQueue->Ref.ReferenceCount;
              MiniportQueue->Ref.ReferenceCount = v42 + 1;
              if ( v42 != -1 )
                goto LABEL_52;
              MiniportQueue->Ref.ReferenceCount = -1;
            }
            v39 = 0;
LABEL_52:
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v163) = MiniportQueue->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xCu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)MiniportQueue,
                v163);
            }
            KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v40);
            if ( v39 )
            {
              v35 = v25;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 2u);
              p_Number = &MiniportQueue->BindPaths->Number;
              v25 = MiniportQueue;
              ++MiniportQueue->NsiOpenReferences;
              v26 = *p_Number;
              v168 = *p_Number;
            }
            else
            {
              v26 = v168;
            }
            Miniport = v169;
          }
          MiniportQueue->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
          if ( v35 )
          {
            ndisDereferenceMiniportForNsi(v35, 2u, 0x3Cu);
            v35 = 0LL;
          }
LABEL_59:
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v172;
        v33 = v166;
        v28 = v175;
        v171 = v35;
        p_Ref = v176;
LABEL_61:
        KeReleaseSpinLock(&p_Ref->SpinLock, v33);
        v44 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v28->NextDriver;
        v29 = v44;
        v46 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v47 = (ULONG_PTR)p_Ref->RefCountTracker;
        v48 = v46;
        if ( v47 - 2 > 1 )
        {
          if ( v47 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v47, 0LL);
          if ( *(_BYTE *)(v47 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v47, 8uLL);
          v49 = *(unsigned __int8 *)(v47 + 1);
          if ( *(_BYTE *)(v47 + 1) )
          {
            if ( v49 != 1 )
              goto LABEL_70;
            v111 = v47 + 520;
            v112 = *(_DWORD *)(v47 + 576);
            if ( v112 >> 17 < 0x3FFE && (unsigned __int16)v112 >> 1 == (v112 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 520));
              *(_DWORD *)(v111 + 56) &= 0x10001u;
              goto LABEL_70;
            }
            if ( (unsigned __int16)v112 >> 1 != 0 || (v112 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 520), 0);
              goto LABEL_70;
            }
          }
          else
          {
            v50 = *(_QWORD *)(v47 + 8);
            if ( v50 )
            {
              v51 = *(_BYTE *)(v47 + 3);
              if ( v51 )
              {
                while ( 1 )
                {
                  v52 = (_BYTE *)(v50 + 2LL * (unsigned __int8)v49);
                  if ( *v52 == 8 )
                  {
                    v102 = v52[1];
                    if ( v102 )
                      break;
                  }
                  LOBYTE(v49) = v49 + 1;
                  if ( (unsigned __int8)v49 >= v51 )
                    goto LABEL_69;
                }
                v52[1] = v102 - 1;
                goto LABEL_70;
              }
            }
LABEL_69:
            if ( _bittestandreset((signed __int32 *)(v47 + 16), 8u) )
              goto LABEL_70;
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v47, 8uLL);
        }
LABEL_70:
        v38 = p_Ref->ReferenceCount-- == 1;
        if ( v38 )
        {
          if ( !p_Ref->ZeroBased )
          {
            NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
            p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v48);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x17u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              v28);
          v113 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v113 != v28 )
            {
              p_NextDriver = &v113->NextDriver;
              v113 = v113->NextDriver;
              if ( !v113 )
                goto LABEL_237;
            }
            *p_NextDriver = v28->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_237:
          Buffer = v28->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v28->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v28->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v28->NdisDriverInfo = 0LL;
          }
          if ( (v28->Flags & 1) != 0 )
          {
            PendingDeviceList = v28->PendingDeviceList;
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
          KeSetEvent(&v28->MiniportsRemovedEvent, 0, 0);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x18u,
              (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
              v28);
        }
        else
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v48);
        }
        Miniport = v169;
LABEL_73:
        v175 = NextDriver;
        v28 = NextDriver;
        if ( !NextDriver )
        {
          v3 = v173;
LABEL_75:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
          if ( v25 )
          {
            KeAcquireSpinLockAtDpcLevel(&v25->Lock);
            HighestFilter = v25->HighestFilter;
            for ( v25->MiniportThread = KeGetCurrentThread(); HighestFilter; HighestFilter = HighestFilter->LowerFilter )
            {
              v54 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
              if ( !HighestFilter->PnPRef.Closing )
              {
                v55 = HighestFilter->PnPRef.ReferenceCount;
                if ( v55 < 0xFFEBu )
                {
                  HighestFilter->PnPRef.ReferenceCount = v55 + 1;
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker, 0xBu);
                  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v54);
                  IfBlock = HighestFilter->IfBlock;
                  goto LABEL_80;
                }
                ndisRefCountReferenceCountOverflow = 1;
              }
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v54);
            }
            IfBlock = v25->IfBlock;
LABEL_80:
            v25->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v25->Lock);
            v56 = KeAcquireSpinLockRaiseToDpc(&v25->Lock);
            NsiRefCountTracker = (ULONG_PTR)v25->NsiRefCountTracker;
            v25->MiniportThread = KeGetCurrentThread();
            if ( NsiRefCountTracker - 2 > 1 )
            {
              if ( NsiRefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
              if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
              v58 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
              if ( *(_BYTE *)(NsiRefCountTracker + 1) )
              {
                if ( v58 != 1 )
                  goto LABEL_89;
                v119 = NsiRefCountTracker + 136;
                v120 = *(_DWORD *)(NsiRefCountTracker + 192);
                v121 = (unsigned __int16)v120 >> 1;
                if ( v120 >> 17 < 0x3FFE && v121 == (v120 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                  *(_DWORD *)(v119 + 56) &= 0x10001u;
                  goto LABEL_89;
                }
                if ( v121 != 0 || (v120 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                  goto LABEL_89;
                }
              }
              else
              {
                v59 = *(_QWORD *)(NsiRefCountTracker + 8);
                if ( v59 )
                {
                  v60 = *(_BYTE *)(NsiRefCountTracker + 3);
                  if ( v60 )
                  {
                    while ( 1 )
                    {
                      v61 = (_BYTE *)(v59 + 2LL * (unsigned __int8)v58);
                      if ( *v61 == 2 )
                      {
                        v122 = v61[1];
                        if ( v122 )
                          break;
                      }
                      LOBYTE(v58) = v58 + 1;
                      if ( (unsigned __int8)v58 >= v60 )
                        goto LABEL_88;
                    }
                    v61[1] = v122 - 1;
                    goto LABEL_89;
                  }
                }
LABEL_88:
                if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                  goto LABEL_89;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, NsiRefCountTracker, 2uLL);
            }
LABEL_89:
            v38 = v25->NsiOpenReferences-- == 1;
            if ( v38 )
            {
              NsiRequestsCompletedEvent = v25->NsiRequestsCompletedEvent;
              if ( NsiRequestsCompletedEvent )
                KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
            }
            v25->MiniportThread = 0LL;
            KeReleaseSpinLock(&v25->Lock, v56);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x19u,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                v25);
            v63 = 0;
            v64 = KeAcquireSpinLockRaiseToDpc(&v25->Ref.SpinLock);
            v65 = (ULONG_PTR)v25->RefCountTracker;
            v66 = v64;
            if ( v65 && v65 - 2 > 1 )
            {
              if ( v65 == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(v65 + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, v65, 0x3CuLL);
              v67 = *(unsigned __int8 *)(v65 + 1);
              if ( *(_BYTE *)(v65 + 1) )
              {
                if ( v67 != 1 )
                  goto LABEL_104;
                v123 = v65 + 3848;
                v124 = *(_DWORD *)(v65 + 3904);
                v125 = (unsigned __int16)v124 >> 1;
                if ( v124 >> 17 < 0x3FFE && v125 == (v124 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v65 + 3848));
                  *(_DWORD *)(v123 + 56) &= 0x10001u;
                  goto LABEL_104;
                }
                if ( v125 != 0 || (v124 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v65 + 3848), 0);
                  goto LABEL_104;
                }
              }
              else
              {
                v68 = *(_QWORD *)(v65 + 8);
                if ( v68 )
                {
                  v69 = *(_BYTE *)(v65 + 3);
                  if ( v69 )
                  {
                    while ( 1 )
                    {
                      v70 = (_BYTE *)(v68 + 2LL * (unsigned __int8)v67);
                      if ( *v70 == 60 )
                      {
                        v126 = v70[1];
                        if ( v126 )
                          break;
                      }
                      LOBYTE(v67) = v67 + 1;
                      if ( (unsigned __int8)v67 >= v69 )
                        goto LABEL_103;
                    }
                    v70[1] = v126 - 1;
                    goto LABEL_104;
                  }
                }
LABEL_103:
                if ( _bittestandreset((signed __int32 *)(v65 + 20), 0x1Cu) )
                  goto LABEL_104;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v65, 0x3CuLL);
            }
LABEL_104:
            v38 = v25->Ref.ReferenceCount-- == 1;
            if ( v38 )
              v63 = 1;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v163) = v25->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xEu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)v25,
                v163);
            }
            KeReleaseSpinLock(&v25->Ref.SpinLock, v66);
            if ( v63 )
            {
              RemoveReadyEvent = v25->RemoveReadyEvent;
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
                v25);
LABEL_111:
            v71 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            v72 = (ULONG_PTR)v21->MpRefCountTracker;
            v73 = v71;
            if ( v72 - 2 > 1 )
            {
              if ( v72 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v72, 0LL);
              if ( *(_BYTE *)(v72 + 2) <= 3u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v72, 3uLL);
              v74 = *(unsigned __int8 *)(v72 + 1);
              if ( *(_BYTE *)(v72 + 1) )
              {
                if ( v74 != 1 )
                  goto LABEL_120;
                v128 = v72 + 200;
                v129 = *(_DWORD *)(v72 + 256);
                v130 = (unsigned __int16)v129 >> 1;
                if ( v129 >> 17 < 0x3FFE && v130 == (v129 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 200));
                  *(_DWORD *)(v128 + 56) &= 0x10001u;
                  goto LABEL_120;
                }
                if ( v130 != 0 || (v129 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 200), 0);
                  goto LABEL_120;
                }
              }
              else
              {
                v75 = *(_QWORD *)(v72 + 8);
                if ( v75 )
                {
                  v76 = *(_BYTE *)(v72 + 3);
                  if ( v76 )
                  {
                    while ( 1 )
                    {
                      v77 = (_BYTE *)(v75 + 2LL * (unsigned __int8)v74);
                      if ( *v77 == 3 )
                      {
                        v131 = v77[1];
                        if ( v131 )
                          break;
                      }
                      LOBYTE(v74) = v74 + 1;
                      if ( (unsigned __int8)v74 >= v76 )
                        goto LABEL_119;
                    }
                    v77[1] = v131 - 1;
                    goto LABEL_120;
                  }
                }
LABEL_119:
                if ( _bittestandreset((signed __int32 *)(v72 + 16), 3u) )
                  goto LABEL_120;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v72, 3uLL);
            }
LABEL_120:
            v38 = v21->MiniportLinkReference-- == 1;
            if ( v38 )
            {
              v132 = v21->Miniport;
              if ( v132 )
              {
                IfBlockPointerRefZeroEvent = v132->IfBlockPointerRefZeroEvent;
                if ( IfBlockPointerRefZeroEvent )
                  KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
              }
            }
            KeReleaseSpinLock(&SpinLock, v73);
            v19 = v167;
LABEL_122:
            if ( IfBlock )
            {
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker, 2u);
              ++IfBlock->Ref;
            }
            goto LABEL_124;
          }
LABEL_185:
          IfBlock = 0LL;
          goto LABEL_111;
        }
        v26 = v168;
      }
    }
    if ( v21->IsNdisFilter )
    {
      IfBlock = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v21->Miniport->Reserved4.Length);
      goto LABEL_122;
    }
LABEL_124:
    **((_QWORD **)v3 + 2) = v21->NetLuid.Value;
    KeReleaseSpinLock(&ndisIfListLock, v19);
    if ( !v21 )
      goto LABEL_216;
    v78 = *((_QWORD *)v3 + 1);
    InterfaceRodInformation = -1073741811;
    if ( !v78 )
      goto LABEL_126;
    if ( v78 != 1 )
    {
      if ( v78 == 12 )
      {
LABEL_126:
        v80 = *((_DWORD *)v3 + 8);
        if ( v80 )
        {
          if ( v80 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation((char)v21, (char)IfBlock, (char)v3);
          }
          else if ( v80 == 2 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v21);
          }
        }
        else
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRwInformation((char)v21, (char)IfBlock, (char)v3);
        }
        goto LABEL_130;
      }
      if ( v78 != 13 )
        goto LABEL_130;
    }
    v106 = *((_DWORD *)v3 + 8);
    if ( v106 == 1 )
    {
      InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject((char)v21);
    }
    else if ( v106 == 2 )
    {
      InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject((char)v21);
    }
LABEL_130:
    v81 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( !IfBlock )
      goto LABEL_156;
    if ( !IfBlock->IsNdisFilter )
    {
LABEL_146:
      v91 = (ULONG_PTR)IfBlock->RefCountTracker;
      if ( v91 - 2 <= 1 )
        goto LABEL_155;
      if ( v91 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v91, 0LL);
      if ( *(_BYTE *)(v91 + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v91, 2uLL);
      v92 = *(unsigned __int8 *)(v91 + 1);
      if ( *(_BYTE *)(v91 + 1) )
      {
        if ( v92 != 1 )
          goto LABEL_155;
        v137 = v91 + 136;
        v138 = *(_DWORD *)(v91 + 192);
        v139 = (unsigned __int16)v138 >> 1;
        if ( v138 >> 17 < 0x3FFE && v139 == (v138 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v91 + 136));
          *(_DWORD *)(v137 + 56) &= 0x10001u;
          goto LABEL_155;
        }
        if ( v139 != 0 || (v138 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v91 + 136), 0);
          goto LABEL_155;
        }
      }
      else
      {
        v93 = *(_QWORD *)(v91 + 8);
        if ( v93 )
        {
          v94 = *(_BYTE *)(v91 + 3);
          if ( v94 )
          {
            while ( 1 )
            {
              v95 = (_BYTE *)(v93 + 2LL * (unsigned __int8)v92);
              if ( *v95 == 2 )
              {
                v104 = v95[1];
                if ( v104 )
                  break;
              }
              LOBYTE(v92) = v92 + 1;
              if ( (unsigned __int8)v92 >= v94 )
                goto LABEL_154;
            }
            v95[1] = v104 - 1;
LABEL_155:
            v38 = IfBlock->Ref-- == 1;
            if ( v38 )
            {
              ndisIfDeleteStackEntries(IfBlock);
              v140 = IfBlock->Link.Flink;
              if ( v140->Blink != &IfBlock->Link )
                goto LABEL_349;
              Blink = IfBlock->Link.Blink;
              if ( Blink->Flink != &IfBlock->Link )
                goto LABEL_349;
              Blink->Flink = v140;
              v140->Blink = Blink;
              v142 = IfBlock->ProviderLink.Flink;
              if ( v142->Blink != &IfBlock->ProviderLink )
                goto LABEL_349;
              v143 = IfBlock->ProviderLink.Blink;
              if ( v143->Flink != &IfBlock->ProviderLink )
                goto LABEL_349;
              v143->Flink = v142;
              v142->Blink = v143;
              v144 = IfBlock->NetworkLink.Flink;
              if ( v144->Blink != &IfBlock->NetworkLink )
                goto LABEL_349;
              v145 = IfBlock->NetworkLink.Blink;
              if ( v145->Flink != &IfBlock->NetworkLink )
                goto LABEL_349;
              v145->Flink = v144;
              v144->Blink = v145;
              NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
              ndisIfFreeIfIndex(IfBlock->ifIndex);
              v146 = (ULONG_PTR)IfBlock->RefCountTracker;
              --ndisInterfaceCount;
              NdisFreeRefCount(v146);
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
LABEL_156:
            if ( !v21 )
              goto LABEL_167;
            v96 = (ULONG_PTR)v21->RefCountTracker;
            if ( v96 - 2 > 1 )
            {
              if ( v96 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v96, 0LL);
              if ( *(_BYTE *)(v96 + 2) <= 1u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v96, 1uLL);
              v97 = *(unsigned __int8 *)(v96 + 1);
              if ( *(_BYTE *)(v96 + 1) )
              {
                if ( v97 != 1 )
                  goto LABEL_166;
                v150 = v96 + 72;
                v151 = *(_DWORD *)(v96 + 128);
                v152 = (unsigned __int16)v151 >> 1;
                if ( v151 >> 17 < 0x3FFE && v152 == (v151 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v96 + 72));
                  *(_DWORD *)(v150 + 56) &= 0x10001u;
                  goto LABEL_166;
                }
                if ( v152 != 0 || (v151 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 72), 0);
                  goto LABEL_166;
                }
              }
              else
              {
                v98 = *(_QWORD *)(v96 + 8);
                if ( v98 )
                {
                  v99 = *(_BYTE *)(v96 + 3);
                  if ( v99 )
                  {
                    while ( 1 )
                    {
                      v100 = (_BYTE *)(v98 + 2LL * (unsigned __int8)v97);
                      if ( *v100 == 1 )
                      {
                        v103 = v100[1];
                        if ( v103 )
                          break;
                      }
                      LOBYTE(v97) = v97 + 1;
                      if ( (unsigned __int8)v97 >= v99 )
                        goto LABEL_165;
                    }
                    v100[1] = v103 - 1;
                    goto LABEL_166;
                  }
                }
LABEL_165:
                if ( _bittestandreset((signed __int32 *)(v96 + 16), 1u) )
                  goto LABEL_166;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v96, 1uLL);
            }
LABEL_166:
            v38 = v21->Ref-- == 1;
            if ( !v38 )
              goto LABEL_167;
            ndisIfDeleteStackEntries(v21);
            v153 = v21->Link.Flink;
            if ( v153->Blink == &v21->Link )
            {
              v154 = v21->Link.Blink;
              if ( v154->Flink == &v21->Link )
              {
                v154->Flink = v153;
                v153->Blink = v154;
                v155 = v21->ProviderLink.Flink;
                if ( v155->Blink == &v21->ProviderLink )
                {
                  v156 = v21->ProviderLink.Blink;
                  if ( v156->Flink == &v21->ProviderLink )
                  {
                    v156->Flink = v155;
                    v155->Blink = v156;
                    v157 = v21->NetworkLink.Flink;
                    if ( v157->Blink == &v21->NetworkLink )
                    {
                      v158 = v21->NetworkLink.Blink;
                      if ( v158->Flink == &v21->NetworkLink )
                      {
                        v158->Flink = v157;
                        v157->Blink = v158;
                        NETWORKBLOCK_DECREMENT_REF(v21->Network);
                        ndisIfFreeIfIndex(v21->ifIndex);
                        v159 = (ULONG_PTR)v21->RefCountTracker;
                        --ndisInterfaceCount;
                        NdisFreeRefCount(v159);
                        v160 = v21->ifL2NetworkInfo;
                        v21->RefCountTracker = 0LL;
                        if ( v160 )
                        {
                          ExFreePoolWithTag(v160, 0);
                          v21->ifL2NetworkInfo = 0LL;
                        }
                        v161 = v21->ifRcvAddressTable;
                        if ( v161 )
                        {
                          ExFreePoolWithTag(v161, 0);
                          v21->ifRcvAddressTable = 0LL;
                          *(_QWORD *)&v21->ifRcvAddressCount = 0LL;
                        }
                        v162 = v21->AsyncEvent;
                        if ( v162 )
                          KeSetEvent(v162, 0, 0);
                        ExFreePoolWithTag(v21, 0);
                        goto LABEL_167;
                      }
                    }
                  }
                }
              }
            }
LABEL_349:
            __fastfail(3u);
          }
        }
LABEL_154:
        if ( _bittestandreset((signed __int32 *)(v91 + 16), 2u) )
          goto LABEL_155;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v91, 2uLL);
    }
    p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
    v83 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
    v84 = *(_QWORD *)(p_DeferredContext + 16);
    v85 = v83;
    if ( v84 - 2 <= 1 )
      goto LABEL_142;
    if ( v84 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v84, 0LL);
    if ( *(_BYTE *)(v84 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v84, 0xBuLL);
    v86 = *(unsigned __int8 *)(v84 + 1);
    if ( !*(_BYTE *)(v84 + 1) )
    {
      v87 = *(_QWORD *)(v84 + 8);
      if ( v87 )
      {
        v88 = *(_BYTE *)(v84 + 3);
        if ( v88 )
        {
          while ( 1 )
          {
            v89 = (_BYTE *)(v87 + 2LL * (unsigned __int8)v86);
            if ( *v89 == 11 )
            {
              v90 = v89[1];
              if ( v90 )
                break;
            }
            LOBYTE(v86) = v86 + 1;
            if ( (unsigned __int8)v86 >= v88 )
              goto LABEL_141;
          }
          v89[1] = v90 - 1;
          goto LABEL_142;
        }
      }
LABEL_141:
      if ( _bittestandreset((signed __int32 *)(v84 + 16), 0xBu) )
      {
LABEL_142:
        v38 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
        if ( v38 && !*(_BYTE *)(p_DeferredContext + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
          *(_QWORD *)(p_DeferredContext + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v85);
        goto LABEL_146;
      }
LABEL_303:
      ndisBugCheckEx(0x1EuLL, 0LL, v84, 0xBuLL);
    }
    if ( v86 != 1 )
      goto LABEL_142;
    v134 = v84 + 712;
    v135 = *(_DWORD *)(v84 + 768);
    v136 = (unsigned __int16)v135 >> 1;
    if ( v135 >> 17 < 0x3FFE && v136 == (v135 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v84 + 712));
      *(_DWORD *)(v134 + 56) &= 0x10001u;
    }
    else
    {
      if ( v136 == 0 && (v135 & 1) == 0 )
        goto LABEL_303;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v84 + 712), 0);
    }
    LOBYTE(v3) = (_BYTE)v173;
    goto LABEL_142;
  }
  v108 = v18 - 1;
  if ( !v108 )
  {
    v5.Value = 0LL;
LABEL_206:
    while ( 1 )
    {
      NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v5);
      v172 = NextInterfaceByNetLuid;
      v21 = NextInterfaceByNetLuid;
      if ( !NextInterfaceByNetLuid )
        goto LABEL_215;
      v5.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
      if ( ndisIsCompartmentAccessibleByClient(
             NextInterfaceByNetLuid->Compartment,
             (const struct _NDIS_NSI_CLIENT_INFO *)&v177,
             0) )
      {
        goto LABEL_29;
      }
    }
  }
  if ( v108 == 1 )
    goto LABEL_206;
  InterfaceRodInformation = -1073741808;
  KeReleaseSpinLock(&ndisIfListLock, v17);
  v81 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
LABEL_167:
  KeReleaseSpinLock(&ndisIfListLock, v81);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v163) = InterfaceRodInformation;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)v3,
      v163);
  }
  KeLeaveCriticalRegion();
  return InterfaceRodInformation;
}
