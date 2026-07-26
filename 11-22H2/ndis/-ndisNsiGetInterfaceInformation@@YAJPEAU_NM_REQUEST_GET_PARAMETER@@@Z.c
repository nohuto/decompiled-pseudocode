/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000D980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D740 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00176F0 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017B50 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00181E8 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EEA0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00380F0 (memcmp.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00B7574 (-ndisIfFindNextInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C010CD00 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C010D240 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C010D690 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisIsMacAddressHidden @ 0x1C010D9C0 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EB20 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C010EE30 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *IfBlock; // r15
  struct _NM_REQUEST_GET_PARAMETER *v2; // r14
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  union _NET_LUID_LH *v5; // rbx
  union _NET_LUID_LH v6; // rbx
  int *ThreadProperty; // rax
  __int64 v8; // rcx
  PACCESS_TOKEN v9; // rax
  void *v10; // rbp
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // esi
  int v13; // edi
  unsigned int v14; // ebp
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v17; // rdx
  KIRQL v18; // al
  int v19; // edx
  KIRQL v20; // r12
  _LIST_ENTRY *Flink; // rax
  struct _NDIS_IF_BLOCK *v22; // rbp
  unsigned int InterfaceRodInformation; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  KIRQL v25; // al
  KIRQL v26; // bl
  _NDIS_MINIPORT_BLOCK *v27; // rsi
  struct _NDIS_REFCOUNT_BLOCK *MpRefCountTracker; // rcx
  _NDIS_MINIPORT_BLOCK *v29; // rdi
  unsigned int v30; // r15d
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK *v32; // r12
  KIRQL v33; // r14
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v35; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v37; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  struct _NDIS_MINIPORT_BLOCK *v39; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v41; // rcx
  bool v42; // zf
  char v43; // r14
  KIRQL v44; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v46; // ecx
  unsigned int *p_Number; // rax
  KIRQL v48; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v50; // al
  ULONG_PTR v51; // r8
  KIRQL v52; // r15
  int v53; // ecx
  __int64 v54; // r10
  unsigned __int8 v55; // r9
  _BYTE *v56; // rdx
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  KIRQL v58; // r15
  unsigned __int16 v59; // cx
  KIRQL v60; // bl
  ULONG_PTR NsiRefCountTracker; // r8
  int v62; // ecx
  __int64 v63; // r9
  unsigned __int8 v64; // dl
  _BYTE *v65; // r10
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  char v67; // r14
  KIRQL v68; // al
  ULONG_PTR v69; // r8
  KIRQL v70; // r12
  int v71; // ecx
  __int64 v72; // r10
  unsigned __int8 v73; // r9
  _BYTE *v74; // rdx
  KIRQL v75; // al
  ULONG_PTR v76; // r8
  KIRQL v77; // bl
  int v78; // ecx
  __int64 v79; // r9
  unsigned __int8 v80; // dl
  _BYTE *v81; // r10
  __int64 v82; // rax
  int v83; // eax
  KIRQL v84; // r12
  __int64 p_DeferredContext; // rbx
  KIRQL v86; // al
  ULONG_PTR v87; // r8
  KIRQL v88; // si
  int v89; // ecx
  __int64 v90; // r10
  unsigned __int8 v91; // r9
  _BYTE *v92; // rdx
  char v93; // al
  ULONG_PTR v94; // r8
  int v95; // ecx
  __int64 v96; // r9
  unsigned __int8 v97; // dl
  _BYTE *v98; // r10
  ULONG_PTR v99; // r8
  int v100; // ecx
  __int64 v101; // r10
  unsigned __int8 v102; // r9
  _BYTE *v103; // rdx
  char v105; // al
  char v106; // al
  char v107; // al
  NTSTATUS v108; // edi
  int v109; // eax
  KIRQL v110; // al
  int v111; // edx
  struct _NDIS_IF_BLOCK *NextInterfaceByNetLuid; // rax
  __int64 v113; // rdx
  ULONG_PTR v114; // rbx
  unsigned int v115; // r9d
  struct _NDIS_M_DRIVER_BLOCK *v116; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v122; // rsi
  unsigned int v123; // edx
  int v124; // ecx
  char v125; // al
  ULONG_PTR v126; // rsi
  unsigned int v127; // edx
  int v128; // ecx
  char v129; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v131; // rdi
  unsigned int v132; // edx
  int v133; // ecx
  char v134; // al
  _NDIS_MINIPORT_BLOCK *v135; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  ULONG_PTR v137; // r14
  unsigned int v138; // edx
  int v139; // ecx
  ULONG_PTR v140; // rbx
  unsigned int v141; // edx
  int v142; // ecx
  _LIST_ENTRY *v143; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v145; // rdx
  _LIST_ENTRY *v146; // rcx
  _LIST_ENTRY *v147; // rdx
  _LIST_ENTRY *v148; // rcx
  ULONG_PTR v149; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v153; // rbx
  unsigned int v154; // edx
  int v155; // ecx
  _LIST_ENTRY *v156; // rdx
  _LIST_ENTRY *v157; // rcx
  _LIST_ENTRY *v158; // rdx
  _LIST_ENTRY *v159; // rcx
  _LIST_ENTRY *v160; // rdx
  _LIST_ENTRY *v161; // rcx
  ULONG_PTR v162; // rcx
  _IF_COUNTED_STRING_LH *v163; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v164; // rcx
  struct _KEVENT *v165; // rcx
  __int64 v166; // [rsp+30h] [rbp-A8h]
  BOOLEAN EffectiveOnly; // [rsp+40h] [rbp-98h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+41h] [rbp-97h] BYREF
  KIRQL v169; // [rsp+42h] [rbp-96h]
  KIRQL v170; // [rsp+43h] [rbp-95h]
  char IsMacAddressHidden; // [rsp+44h] [rbp-94h]
  int v172; // [rsp+48h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+4Ch] [rbp-8Ch] BYREF
  struct _NDIS_MINIPORT_BLOCK *v174; // [rsp+50h] [rbp-88h]
  struct _NDIS_IF_BLOCK *v175; // [rsp+58h] [rbp-80h]
  _NDIS_MINIPORT_BLOCK *Miniport; // [rsp+60h] [rbp-78h]
  struct _NM_REQUEST_GET_PARAMETER *v177; // [rsp+68h] [rbp-70h]
  PVOID TokenInformation; // [rsp+70h] [rbp-68h] BYREF
  struct _NDIS_M_DRIVER_BLOCK *v179; // [rsp+78h] [rbp-60h]
  _REFERENCE_EX *v180; // [rsp+80h] [rbp-58h]
  _BYTE v181[24]; // [rsp+88h] [rbp-50h] BYREF

  v177 = a1;
  IfBlock = 0LL;
  v2 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      a1);
  CurrentProcess = PsGetCurrentProcess();
  IsMacAddressHidden = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 || !*((_DWORD *)v2 + 12) || !*((_QWORD *)v2 + 5) )
  {
    InterfaceRodInformation = -1073741808;
    v84 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    goto LABEL_167;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = (union _NET_LUID_LH *)*((_QWORD *)v2 + 2);
  memset(v181, 0, sizeof(v181));
  v6.Value = v5->Value;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty
    || (v13 = *ThreadProperty,
        *(_DWORD *)v181 = ThreadProperty[1],
        *(_DWORD *)&v181[4] = v13,
        ObfDereferenceObject(ThreadProperty),
        (v14 = v13) == 0) )
  {
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v10 = v9;
      if ( v9 )
      {
        v108 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v108 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_11;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_11:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00F7620 )
    {
      v13 = 0;
      v110 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
      if ( ThreadSessionId < dword_1C00F7620 )
        v13 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00F5D78, v110);
      if ( !v13 )
        v13 = 1;
    }
    else
    {
      v13 = 1;
    }
    *(_DWORD *)&v181[4] = v13;
    v14 = v13;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v16 = qword_1C00F5DA0;
  v17 = 0LL;
  if ( qword_1C00F5DA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
  {
    while ( *((_DWORD *)v16 + 4) != v14 )
    {
      if ( *((_DWORD *)v16 + 4) <= v14 )
      {
        v16 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v16;
        if ( v16 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
          continue;
      }
      goto LABEL_19;
    }
    v17 = v16;
  }
LABEL_19:
  *(_OWORD *)&v181[8] = *(_OWORD *)((char *)v17 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v15);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v19 = *((_DWORD *)v2 + 14);
  v20 = v18;
  v170 = v18;
  if ( !v19 )
  {
    Flink = ndisIfList.Flink;
    v175 = 0LL;
    v22 = 0LL;
    if ( ndisIfList.Flink != &ndisIfList )
    {
      while ( Flink[5].Flink != (_LIST_ENTRY *)v6.Value )
      {
        if ( Flink[5].Flink > (_LIST_ENTRY *)v6.Value )
          goto LABEL_29;
        Flink = Flink->Flink;
        if ( Flink == &ndisIfList )
          goto LABEL_24;
      }
      v22 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
      v175 = (struct _NDIS_IF_BLOCK *)&Flink[-77];
    }
LABEL_29:
    if ( !v22 )
      goto LABEL_24;
    Compartment = v22->Compartment;
    if ( v13 != *((_DWORD *)Compartment + 4) )
    {
      v113 = *(_QWORD *)&v181[8] - *(_QWORD *)((char *)Compartment + 1684);
      if ( *(_QWORD *)&v181[8] == *(_QWORD *)((char *)Compartment + 1684) )
        v113 = *(_QWORD *)&v181[16] - *(_QWORD *)((char *)Compartment + 1692);
      if ( v113 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || v13 != 1) )
      {
        v22 = 0LL;
LABEL_24:
        KeReleaseSpinLock(&ndisIfListLock, v20);
LABEL_25:
        InterfaceRodInformation = -2147483622;
        if ( !*((_DWORD *)v2 + 14) )
          InterfaceRodInformation = -1073741772;
        goto LABEL_130;
      }
    }
LABEL_31:
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v22->RefCountTracker, 1u);
    ++v22->Ref;
    if ( !v22->bNdisIsProvider || *((_QWORD *)v2 + 1) >= 2uLL )
      goto LABEL_124;
    v25 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v26 = v25;
    if ( v22->MiniportAvailable )
    {
      MpRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v22->MpRefCountTracker;
      Miniport = v22->Miniport;
      v27 = Miniport;
      NdisReferenceWithTag(MpRefCountTracker, 3u);
      ++v22->MiniportLinkReference;
      KeReleaseSpinLock(&SpinLock, v26);
      if ( v27 )
      {
        v29 = 0LL;
        v30 = 1;
        v174 = 0LL;
        v172 = 1;
        if ( !v27->BindPaths )
          goto LABEL_185;
        v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v32 = ndisMiniDriverList;
        v33 = v31;
        v179 = ndisMiniDriverList;
        if ( !ndisMiniDriverList )
          goto LABEL_75;
        while ( 1 )
        {
          p_Ref = &v32->Ref;
          v180 = &v32->Ref;
          v35 = KeAcquireSpinLockRaiseToDpc(&v32->Ref.SpinLock);
          if ( v32->Ref.Closing )
            goto LABEL_245;
          ReferenceCount = v32->Ref.ReferenceCount;
          if ( ReferenceCount >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
LABEL_245:
            KeReleaseSpinLock(&v32->Ref.SpinLock, v35);
            NextDriver = v32->NextDriver;
            goto LABEL_74;
          }
          v32->Ref.ReferenceCount = ReferenceCount + 1;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v32->Ref.RefCountTracker, 8u);
          KeReleaseSpinLock(&v32->Ref.SpinLock, v35);
          KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
          v37 = KeAcquireSpinLockRaiseToDpc(&v32->Ref.SpinLock);
          MiniportQueue = v32->MiniportQueue;
          v169 = v37;
          if ( !MiniportQueue )
            goto LABEL_62;
          v39 = v174;
          do
          {
            BindPaths = MiniportQueue->BindPaths;
            if ( !BindPaths )
              goto LABEL_60;
            if ( BindPaths->Number < v30 )
              goto LABEL_60;
            v41 = v27->BindPaths;
            if ( v41->Paths[0].Length != BindPaths->Paths[0].Length
              || memcmp(v41->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v41->Paths[0].Length) )
            {
              goto LABEL_60;
            }
            KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
            v42 = (MiniportQueue->Flags & 0x80200020) == 0;
            MiniportQueue->MiniportThread = KeGetCurrentThread();
            if ( v42
              && (MiniportQueue->PnPFlags & 0x1084110) == 0
              && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
              && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v43 = 1;
              v44 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
              if ( !MiniportQueue->Ref.Closing )
              {
                RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
                if ( RefCountTracker )
                  NdisReferenceWithTag(RefCountTracker, 0x3Cu);
                v46 = MiniportQueue->Ref.ReferenceCount;
                MiniportQueue->Ref.ReferenceCount = v46 + 1;
                if ( v46 != -1 )
                  goto LABEL_53;
                MiniportQueue->Ref.ReferenceCount = -1;
              }
              v43 = 0;
LABEL_53:
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v166) = MiniportQueue->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xCu,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)MiniportQueue,
                  v166);
              }
              KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v44);
              if ( v43 )
              {
                v39 = v29;
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 2u);
                p_Number = &MiniportQueue->BindPaths->Number;
                v29 = MiniportQueue;
                ++MiniportQueue->NsiOpenReferences;
                v30 = *p_Number;
                v172 = *p_Number;
              }
              else
              {
                v30 = v172;
              }
              v27 = Miniport;
            }
            MiniportQueue->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
            if ( v39 )
            {
              ndisDereferenceMiniportForNsi(v39, 2u, 0x3Cu);
              v39 = 0LL;
            }
LABEL_60:
            MiniportQueue = MiniportQueue->NextMiniport;
          }
          while ( MiniportQueue );
          v22 = v175;
          v37 = v169;
          v32 = v179;
          v174 = v39;
          p_Ref = v180;
LABEL_62:
          KeReleaseSpinLock(&p_Ref->SpinLock, v37);
          v48 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v32->NextDriver;
          v33 = v48;
          v50 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
          v51 = (ULONG_PTR)p_Ref->RefCountTracker;
          v52 = v50;
          if ( v51 - 2 > 1 )
          {
            if ( v51 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v51, 0LL);
            if ( *(_BYTE *)(v51 + 2) <= 8u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v51, 8uLL);
            v53 = *(unsigned __int8 *)(v51 + 1);
            if ( *(_BYTE *)(v51 + 1) )
            {
              if ( v53 != 1 )
                goto LABEL_71;
              v114 = v51 + 520;
              v115 = *(_DWORD *)(v51 + 576);
              if ( v115 >> 17 < 0x3FFE && (unsigned __int16)v115 >> 1 == (v115 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 520));
                *(_DWORD *)(v114 + 56) &= 0x10001u;
                goto LABEL_71;
              }
              if ( (unsigned __int16)v115 >> 1 != 0 || (v115 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 520), 0);
                goto LABEL_71;
              }
            }
            else
            {
              v54 = *(_QWORD *)(v51 + 8);
              if ( v54 )
              {
                v55 = *(_BYTE *)(v51 + 3);
                if ( v55 )
                {
                  while ( 1 )
                  {
                    v56 = (_BYTE *)(v54 + 2LL * (unsigned __int8)v53);
                    if ( *v56 == 8 )
                    {
                      v105 = v56[1];
                      if ( v105 )
                        break;
                    }
                    LOBYTE(v53) = v53 + 1;
                    if ( (unsigned __int8)v53 >= v55 )
                      goto LABEL_70;
                  }
                  v56[1] = v105 - 1;
                  goto LABEL_71;
                }
              }
LABEL_70:
              if ( _bittestandreset((signed __int32 *)(v51 + 16), 8u) )
                goto LABEL_71;
            }
            ndisBugCheckEx(0x1EuLL, 0LL, v51, 8uLL);
          }
LABEL_71:
          v42 = p_Ref->ReferenceCount-- == 1;
          if ( v42 )
          {
            if ( !p_Ref->ZeroBased )
            {
              NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
              p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
            KeReleaseSpinLock(&p_Ref->SpinLock, v52);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x17u,
                (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                v32);
            v116 = ndisMiniDriverList;
            p_NextDriver = &ndisMiniDriverList;
            if ( ndisMiniDriverList )
            {
              while ( v116 != v32 )
              {
                p_NextDriver = &v116->NextDriver;
                v116 = v116->NextDriver;
                if ( !v116 )
                  goto LABEL_235;
              }
              *p_NextDriver = v32->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
            }
LABEL_235:
            Buffer = v32->ImageName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              v32->ImageName.Buffer = 0LL;
            }
            NdisDriverInfo = v32->NdisDriverInfo;
            if ( NdisDriverInfo )
            {
              ExFreePoolWithTag(NdisDriverInfo, 0);
              v32->NdisDriverInfo = 0LL;
            }
            if ( (v32->Flags & 1) != 0 )
            {
              PendingDeviceList = v32->PendingDeviceList;
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
            KeSetEvent(&v32->MiniportsRemovedEvent, 0, 0);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x18u,
                (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                v32);
          }
          else
          {
            KeReleaseSpinLock(&p_Ref->SpinLock, v52);
          }
          v30 = v172;
LABEL_74:
          v179 = NextDriver;
          v32 = NextDriver;
          if ( !NextDriver )
          {
LABEL_75:
            KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
            if ( v29 )
            {
              KeAcquireSpinLockAtDpcLevel(&v29->Lock);
              HighestFilter = v29->HighestFilter;
              for ( v29->MiniportThread = KeGetCurrentThread(); HighestFilter; HighestFilter = HighestFilter->LowerFilter )
              {
                v58 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
                if ( !HighestFilter->PnPRef.Closing )
                {
                  v59 = HighestFilter->PnPRef.ReferenceCount;
                  if ( v59 < 0xFFEBu )
                  {
                    HighestFilter->PnPRef.ReferenceCount = v59 + 1;
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker, 0xBu);
                    KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v58);
                    IfBlock = HighestFilter->IfBlock;
                    goto LABEL_80;
                  }
                  ndisRefCountReferenceCountOverflow = 1;
                }
                KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v58);
              }
              IfBlock = v29->IfBlock;
LABEL_80:
              v29->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&v29->Lock);
              v60 = KeAcquireSpinLockRaiseToDpc(&v29->Lock);
              NsiRefCountTracker = (ULONG_PTR)v29->NsiRefCountTracker;
              v29->MiniportThread = KeGetCurrentThread();
              if ( NsiRefCountTracker - 2 > 1 )
              {
                if ( NsiRefCountTracker < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
                if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
                v62 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
                if ( *(_BYTE *)(NsiRefCountTracker + 1) )
                {
                  if ( v62 != 1 )
                    goto LABEL_89;
                  v122 = NsiRefCountTracker + 136;
                  v123 = *(_DWORD *)(NsiRefCountTracker + 192);
                  v124 = (unsigned __int16)v123 >> 1;
                  if ( v123 >> 17 < 0x3FFE && v124 == (v123 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                    *(_DWORD *)(v122 + 56) &= 0x10001u;
                    goto LABEL_89;
                  }
                  if ( v124 != 0 || (v123 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                    goto LABEL_89;
                  }
                }
                else
                {
                  v63 = *(_QWORD *)(NsiRefCountTracker + 8);
                  if ( v63 )
                  {
                    v64 = *(_BYTE *)(NsiRefCountTracker + 3);
                    if ( v64 )
                    {
                      while ( 1 )
                      {
                        v65 = (_BYTE *)(v63 + 2LL * (unsigned __int8)v62);
                        if ( *v65 == 2 )
                        {
                          v125 = v65[1];
                          if ( v125 )
                            break;
                        }
                        LOBYTE(v62) = v62 + 1;
                        if ( (unsigned __int8)v62 >= v64 )
                          goto LABEL_88;
                      }
                      v65[1] = v125 - 1;
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
              v42 = v29->NsiOpenReferences-- == 1;
              if ( v42 )
              {
                NsiRequestsCompletedEvent = v29->NsiRequestsCompletedEvent;
                if ( NsiRequestsCompletedEvent )
                  KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
              }
              v29->MiniportThread = 0LL;
              KeReleaseSpinLock(&v29->Lock, v60);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0x19u,
                  (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                  v29);
              v67 = 0;
              v68 = KeAcquireSpinLockRaiseToDpc(&v29->Ref.SpinLock);
              v69 = (ULONG_PTR)v29->RefCountTracker;
              v70 = v68;
              if ( v69 && v69 - 2 > 1 )
              {
                if ( v69 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v69 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v69, 0x3CuLL);
                v71 = *(unsigned __int8 *)(v69 + 1);
                if ( *(_BYTE *)(v69 + 1) )
                {
                  if ( v71 != 1 )
                    goto LABEL_104;
                  v126 = v69 + 3848;
                  v127 = *(_DWORD *)(v69 + 3904);
                  v128 = (unsigned __int16)v127 >> 1;
                  if ( v127 >> 17 < 0x3FFE && v128 == (v127 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v69 + 3848));
                    *(_DWORD *)(v126 + 56) &= 0x10001u;
                    goto LABEL_104;
                  }
                  if ( v128 != 0 || (v127 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v69 + 3848), 0);
                    goto LABEL_104;
                  }
                }
                else
                {
                  v72 = *(_QWORD *)(v69 + 8);
                  if ( v72 )
                  {
                    v73 = *(_BYTE *)(v69 + 3);
                    if ( v73 )
                    {
                      while ( 1 )
                      {
                        v74 = (_BYTE *)(v72 + 2LL * (unsigned __int8)v71);
                        if ( *v74 == 60 )
                        {
                          v129 = v74[1];
                          if ( v129 )
                            break;
                        }
                        LOBYTE(v71) = v71 + 1;
                        if ( (unsigned __int8)v71 >= v73 )
                          goto LABEL_103;
                      }
                      v74[1] = v129 - 1;
                      goto LABEL_104;
                    }
                  }
LABEL_103:
                  if ( _bittestandreset((signed __int32 *)(v69 + 20), 0x1Cu) )
                    goto LABEL_104;
                }
                ndisBugCheckEx(0x1EuLL, 0LL, v69, 0x3CuLL);
              }
LABEL_104:
              v42 = v29->Ref.ReferenceCount-- == 1;
              if ( v42 )
                v67 = 1;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v166) = v29->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xEu,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)v29,
                  v166);
              }
              KeReleaseSpinLock(&v29->Ref.SpinLock, v70);
              if ( v67 )
              {
                RemoveReadyEvent = v29->RemoveReadyEvent;
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
                  v29);
LABEL_111:
              v75 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
              v76 = (ULONG_PTR)v22->MpRefCountTracker;
              v77 = v75;
              if ( v76 - 2 > 1 )
              {
                if ( v76 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v76, 0LL);
                if ( *(_BYTE *)(v76 + 2) <= 3u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v76, 3uLL);
                v78 = *(unsigned __int8 *)(v76 + 1);
                if ( *(_BYTE *)(v76 + 1) )
                {
                  if ( v78 != 1 )
                    goto LABEL_120;
                  v131 = v76 + 200;
                  v132 = *(_DWORD *)(v76 + 256);
                  v133 = (unsigned __int16)v132 >> 1;
                  if ( v132 >> 17 < 0x3FFE && v133 == (v132 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v76 + 200));
                    *(_DWORD *)(v131 + 56) &= 0x10001u;
                    goto LABEL_120;
                  }
                  if ( v133 != 0 || (v132 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v76 + 200), 0);
                    goto LABEL_120;
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
                        if ( *v81 == 3 )
                        {
                          v134 = v81[1];
                          if ( v134 )
                            break;
                        }
                        LOBYTE(v78) = v78 + 1;
                        if ( (unsigned __int8)v78 >= v80 )
                          goto LABEL_119;
                      }
                      v81[1] = v134 - 1;
                      goto LABEL_120;
                    }
                  }
LABEL_119:
                  if ( _bittestandreset((signed __int32 *)(v76 + 16), 3u) )
                    goto LABEL_120;
                }
                ndisBugCheckEx(0x1EuLL, 0LL, v76, 3uLL);
              }
LABEL_120:
              v42 = v22->MiniportLinkReference-- == 1;
              if ( v42 )
              {
                v135 = v22->Miniport;
                if ( v135 )
                {
                  IfBlockPointerRefZeroEvent = v135->IfBlockPointerRefZeroEvent;
                  if ( IfBlockPointerRefZeroEvent )
                    KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
                }
              }
              KeReleaseSpinLock(&SpinLock, v77);
              v2 = v177;
              v20 = v170;
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
          v27 = Miniport;
        }
      }
    }
    else
    {
      KeReleaseSpinLock(&SpinLock, v25);
    }
    if ( v22->IsNdisFilter )
    {
      IfBlock = ndisNsiGetTopIfBlockFromMiniport(*(struct _NDIS_MINIPORT_BLOCK **)&v22->Miniport->Reserved4.Length);
      goto LABEL_122;
    }
LABEL_124:
    **((_QWORD **)v2 + 2) = v22->NetLuid.Value;
    KeReleaseSpinLock(&ndisIfListLock, v20);
    if ( !v22 )
      goto LABEL_25;
    v82 = *((_QWORD *)v2 + 1);
    InterfaceRodInformation = -1073741811;
    if ( !v82 )
      goto LABEL_126;
    if ( v82 != 1 )
    {
      if ( v82 == 12 )
      {
LABEL_126:
        v83 = *((_DWORD *)v2 + 8);
        if ( v83 )
        {
          if ( v83 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation((char)v22, (char)IfBlock, (char)v2);
          }
          else if ( v83 == 2 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(v22);
          }
        }
        else
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRwInformation((char)v22, (char)IfBlock, (char)v2);
        }
        goto LABEL_130;
      }
      if ( v82 != 13 )
        goto LABEL_130;
    }
    v109 = *((_DWORD *)v2 + 8);
    if ( v109 == 1 )
    {
      InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject((char)v22);
    }
    else if ( v109 == 2 )
    {
      InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject((char)v22);
    }
LABEL_130:
    v84 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( !IfBlock )
      goto LABEL_156;
    if ( !IfBlock->IsNdisFilter )
    {
LABEL_146:
      v94 = (ULONG_PTR)IfBlock->RefCountTracker;
      if ( v94 - 2 <= 1 )
        goto LABEL_155;
      if ( v94 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v94, 0LL);
      if ( *(_BYTE *)(v94 + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v94, 2uLL);
      v95 = *(unsigned __int8 *)(v94 + 1);
      if ( *(_BYTE *)(v94 + 1) )
      {
        if ( v95 != 1 )
          goto LABEL_155;
        v140 = v94 + 136;
        v141 = *(_DWORD *)(v94 + 192);
        v142 = (unsigned __int16)v141 >> 1;
        if ( v141 >> 17 < 0x3FFE && v142 == (v141 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v94 + 136));
          *(_DWORD *)(v140 + 56) &= 0x10001u;
          goto LABEL_155;
        }
        if ( v142 != 0 || (v141 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v94 + 136), 0);
          goto LABEL_155;
        }
      }
      else
      {
        v96 = *(_QWORD *)(v94 + 8);
        if ( v96 )
        {
          v97 = *(_BYTE *)(v94 + 3);
          if ( v97 )
          {
            while ( 1 )
            {
              v98 = (_BYTE *)(v96 + 2LL * (unsigned __int8)v95);
              if ( *v98 == 2 )
              {
                v107 = v98[1];
                if ( v107 )
                  break;
              }
              LOBYTE(v95) = v95 + 1;
              if ( (unsigned __int8)v95 >= v97 )
                goto LABEL_154;
            }
            v98[1] = v107 - 1;
LABEL_155:
            v42 = IfBlock->Ref-- == 1;
            if ( v42 )
            {
              ndisIfDeleteStackEntries(IfBlock);
              v143 = IfBlock->Link.Flink;
              if ( v143->Blink != &IfBlock->Link )
                goto LABEL_346;
              Blink = IfBlock->Link.Blink;
              if ( Blink->Flink != &IfBlock->Link )
                goto LABEL_346;
              Blink->Flink = v143;
              v143->Blink = Blink;
              v145 = IfBlock->ProviderLink.Flink;
              if ( v145->Blink != &IfBlock->ProviderLink )
                goto LABEL_346;
              v146 = IfBlock->ProviderLink.Blink;
              if ( v146->Flink != &IfBlock->ProviderLink )
                goto LABEL_346;
              v146->Flink = v145;
              v145->Blink = v146;
              v147 = IfBlock->NetworkLink.Flink;
              if ( v147->Blink != &IfBlock->NetworkLink )
                goto LABEL_346;
              v148 = IfBlock->NetworkLink.Blink;
              if ( v148->Flink != &IfBlock->NetworkLink )
                goto LABEL_346;
              v148->Flink = v147;
              v147->Blink = v148;
              NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
              ndisIfFreeIfIndex(IfBlock->ifIndex);
              v149 = (ULONG_PTR)IfBlock->RefCountTracker;
              --ndisInterfaceCount;
              NdisFreeRefCount(v149);
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
            if ( !v22 )
              goto LABEL_167;
            v99 = (ULONG_PTR)v22->RefCountTracker;
            if ( v99 - 2 > 1 )
            {
              if ( v99 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v99, 0LL);
              if ( *(_BYTE *)(v99 + 2) <= 1u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v99, 1uLL);
              v100 = *(unsigned __int8 *)(v99 + 1);
              if ( *(_BYTE *)(v99 + 1) )
              {
                if ( v100 != 1 )
                  goto LABEL_166;
                v153 = v99 + 72;
                v154 = *(_DWORD *)(v99 + 128);
                v155 = (unsigned __int16)v154 >> 1;
                if ( v154 >> 17 < 0x3FFE && v155 == (v154 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v99 + 72));
                  *(_DWORD *)(v153 + 56) &= 0x10001u;
                  goto LABEL_166;
                }
                if ( v155 != 0 || (v154 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v99 + 72), 0);
                  goto LABEL_166;
                }
              }
              else
              {
                v101 = *(_QWORD *)(v99 + 8);
                if ( v101 )
                {
                  v102 = *(_BYTE *)(v99 + 3);
                  if ( v102 )
                  {
                    while ( 1 )
                    {
                      v103 = (_BYTE *)(v101 + 2LL * (unsigned __int8)v100);
                      if ( *v103 == 1 )
                      {
                        v106 = v103[1];
                        if ( v106 )
                          break;
                      }
                      LOBYTE(v100) = v100 + 1;
                      if ( (unsigned __int8)v100 >= v102 )
                        goto LABEL_165;
                    }
                    v103[1] = v106 - 1;
                    goto LABEL_166;
                  }
                }
LABEL_165:
                if ( _bittestandreset((signed __int32 *)(v99 + 16), 1u) )
                  goto LABEL_166;
              }
              ndisBugCheckEx(0x1EuLL, 0LL, v99, 1uLL);
            }
LABEL_166:
            v42 = v22->Ref-- == 1;
            if ( !v42 )
              goto LABEL_167;
            ndisIfDeleteStackEntries(v22);
            v156 = v22->Link.Flink;
            if ( v156->Blink == &v22->Link )
            {
              v157 = v22->Link.Blink;
              if ( v157->Flink == &v22->Link )
              {
                v157->Flink = v156;
                v156->Blink = v157;
                v158 = v22->ProviderLink.Flink;
                if ( v158->Blink == &v22->ProviderLink )
                {
                  v159 = v22->ProviderLink.Blink;
                  if ( v159->Flink == &v22->ProviderLink )
                  {
                    v159->Flink = v158;
                    v158->Blink = v159;
                    v160 = v22->NetworkLink.Flink;
                    if ( v160->Blink == &v22->NetworkLink )
                    {
                      v161 = v22->NetworkLink.Blink;
                      if ( v161->Flink == &v22->NetworkLink )
                      {
                        v161->Flink = v160;
                        v160->Blink = v161;
                        NETWORKBLOCK_DECREMENT_REF(v22->Network);
                        ndisIfFreeIfIndex(v22->ifIndex);
                        v162 = (ULONG_PTR)v22->RefCountTracker;
                        --ndisInterfaceCount;
                        NdisFreeRefCount(v162);
                        v163 = v22->ifL2NetworkInfo;
                        v22->RefCountTracker = 0LL;
                        if ( v163 )
                        {
                          ExFreePoolWithTag(v163, 0);
                          v22->ifL2NetworkInfo = 0LL;
                        }
                        v164 = v22->ifRcvAddressTable;
                        if ( v164 )
                        {
                          ExFreePoolWithTag(v164, 0);
                          v22->ifRcvAddressTable = 0LL;
                          *(_QWORD *)&v22->ifRcvAddressCount = 0LL;
                        }
                        v165 = v22->AsyncEvent;
                        if ( v165 )
                          KeSetEvent(v165, 0, 0);
                        ExFreePoolWithTag(v22, 0);
                        goto LABEL_167;
                      }
                    }
                  }
                }
              }
            }
LABEL_346:
            __fastfail(3u);
          }
        }
LABEL_154:
        if ( _bittestandreset((signed __int32 *)(v94 + 16), 2u) )
          goto LABEL_155;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v94, 2uLL);
    }
    p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
    v86 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
    v87 = *(_QWORD *)(p_DeferredContext + 16);
    v88 = v86;
    if ( v87 - 2 <= 1 )
      goto LABEL_142;
    if ( v87 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v87, 0LL);
    if ( *(_BYTE *)(v87 + 2) <= 0xBu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v87, 0xBuLL);
    v89 = *(unsigned __int8 *)(v87 + 1);
    if ( !*(_BYTE *)(v87 + 1) )
    {
      v90 = *(_QWORD *)(v87 + 8);
      if ( v90 )
      {
        v91 = *(_BYTE *)(v87 + 3);
        if ( v91 )
        {
          while ( 1 )
          {
            v92 = (_BYTE *)(v90 + 2LL * (unsigned __int8)v89);
            if ( *v92 == 11 )
            {
              v93 = v92[1];
              if ( v93 )
                break;
            }
            LOBYTE(v89) = v89 + 1;
            if ( (unsigned __int8)v89 >= v91 )
              goto LABEL_141;
          }
          v92[1] = v93 - 1;
          goto LABEL_142;
        }
      }
LABEL_141:
      if ( _bittestandreset((signed __int32 *)(v87 + 16), 0xBu) )
      {
LABEL_142:
        v42 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
        if ( v42 && !*(_BYTE *)(p_DeferredContext + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
          *(_QWORD *)(p_DeferredContext + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v88);
        goto LABEL_146;
      }
LABEL_300:
      ndisBugCheckEx(0x1EuLL, 0LL, v87, 0xBuLL);
    }
    if ( v89 != 1 )
      goto LABEL_142;
    v137 = v87 + 712;
    v138 = *(_DWORD *)(v87 + 768);
    v139 = (unsigned __int16)v138 >> 1;
    if ( v138 >> 17 < 0x3FFE && v139 == (v138 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v87 + 712));
      *(_DWORD *)(v137 + 56) &= 0x10001u;
    }
    else
    {
      if ( v139 == 0 && (v138 & 1) == 0 )
        goto LABEL_300;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v87 + 712), 0);
    }
    LOBYTE(v2) = (_BYTE)v177;
    goto LABEL_142;
  }
  v111 = v19 - 1;
  if ( !v111 )
  {
    v6.Value = 0LL;
LABEL_208:
    while ( 1 )
    {
      NextInterfaceByNetLuid = ndisIfFindNextInterfaceByNetLuid(v6);
      v175 = NextInterfaceByNetLuid;
      v22 = NextInterfaceByNetLuid;
      if ( !NextInterfaceByNetLuid )
        goto LABEL_24;
      v6.Value = (ULONG64)NextInterfaceByNetLuid->NetLuid;
      if ( ndisIsCompartmentAccessibleByClient(
             NextInterfaceByNetLuid->Compartment,
             (const struct _NDIS_NSI_CLIENT_INFO *)v181,
             0) )
      {
        goto LABEL_31;
      }
    }
  }
  if ( v111 == 1 )
    goto LABEL_208;
  InterfaceRodInformation = -1073741808;
  KeReleaseSpinLock(&ndisIfListLock, v18);
  v84 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
LABEL_167:
  KeReleaseSpinLock(&ndisIfListLock, v84);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v166) = InterfaceRodInformation;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v2,
      v166);
  }
  KeLeaveCriticalRegion();
  return InterfaceRodInformation;
}
