/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000CEA0 (NdisDereferenceWithTag.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D8D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     NdisFreeRefCount @ 0x1C0015420 (NdisFreeRefCount.c)
 *     ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0017880 (-ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x1C0017CE0 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0018378 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F7C8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C010CCC0 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C010D200 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C010D650 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisIsMacAddressHidden @ 0x1C010D980 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EAE0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C010EDF0 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  _NDIS_IF_BLOCK *IfBlock; // r13
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v3; // rsi
  __int64 CurrentProcess; // rax
  _LIST_ENTRY **v5; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v7; // rbx
  _DWORD *ThreadProperty; // rax
  int v9; // r15d
  int v10; // r14d
  unsigned int v11; // edi
  __int64 v12; // rcx
  PACCESS_TOKEN v13; // rax
  void *v14; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v16; // edi
  KIRQL v17; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rcx
  KIRQL v19; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // rax
  KIRQL v21; // al
  KIRQL v22; // r9
  int v23; // ecx
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v25; // rdi
  unsigned int v26; // r14d
  _LIST_ENTRY *v27; // rdx
  KIRQL v28; // al
  KIRQL v29; // bl
  _LIST_ENTRY *v30; // rax
  _NDIS_MINIPORT_BLOCK *v31; // rsi
  struct _NDIS_MINIPORT_BLOCK *v32; // r14
  KIRQL v33; // al
  struct _NDIS_M_DRIVER_BLOCK *v34; // r12
  KIRQL v35; // r15
  _REFERENCE_EX *v36; // r13
  KIRQL v37; // bl
  unsigned __int16 v38; // ax
  struct _NDIS_REFCOUNT_BLOCK *v39; // rcx
  KIRQL v40; // al
  _NDIS_MINIPORT_BLOCK *v41; // rbx
  unsigned int v42; // r13d
  struct _NDIS_MINIPORT_BLOCK *v43; // rdi
  _NDIS_BIND_PATHS *v44; // rdx
  _NDIS_BIND_PATHS *v45; // rcx
  KIRQL v46; // al
  struct _NDIS_M_DRIVER_BLOCK *v47; // r14
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // r12
  int v51; // ecx
  __int64 v52; // r10
  unsigned __int8 v53; // r9
  _BYTE *v54; // rdx
  bool v55; // zf
  _NDIS_FILTER_BLOCK *v56; // r14
  KIRQL v57; // r12
  unsigned __int16 v58; // ax
  struct _NDIS_REFCOUNT_BLOCK *v59; // rcx
  char v60; // r14
  KIRQL v61; // bl
  ULONG_PTR v62; // rcx
  struct _KEVENT *v63; // rcx
  __int16 v64; // dx
  KIRQL v65; // al
  int v66; // edx
  ULONG_PTR v67; // rcx
  KIRQL v68; // r15
  __int16 v69; // dx
  struct _NDIS_M_DRIVER_BLOCK *v70; // r12
  _NDIS_FILTER_BLOCK *HighestFilter; // r14
  KIRQL v72; // r12
  unsigned __int16 v73; // ax
  struct _NDIS_REFCOUNT_BLOCK *v74; // rcx
  KIRQL v75; // bl
  ULONG_PTR NsiRefCountTracker; // rcx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v78; // dx
  char v79; // r15
  KIRQL v80; // al
  _BYTE *v81; // rdx
  ULONG_PTR v82; // r8
  KIRQL v83; // r12
  int v84; // ecx
  __int64 v85; // r10
  unsigned __int8 v86; // r9
  __int16 v87; // dx
  KIRQL v88; // al
  ULONG_PTR v89; // r8
  KIRQL v90; // bl
  int v91; // ecx
  __int64 v92; // r9
  unsigned __int8 v93; // dl
  _BYTE *v94; // r10
  KIRQL v95; // dl
  __int64 v96; // rax
  KIRQL v97; // r15
  __int64 p_DeferredContext; // rbx
  KIRQL v99; // al
  ULONG_PTR v100; // r8
  KIRQL v101; // si
  int v102; // ecx
  __int64 v103; // r10
  unsigned __int8 v104; // r9
  _BYTE *v105; // rdx
  char v106; // al
  ULONG_PTR v107; // r8
  int v108; // ecx
  __int64 v109; // r10
  unsigned __int8 v110; // r9
  _BYTE *v111; // rdx
  ULONG_PTR v112; // r8
  int v113; // ecx
  __int64 v114; // r10
  unsigned __int8 v115; // r9
  _BYTE *v116; // rdx
  int v117; // edx
  char v119; // al
  char v120; // al
  struct _NDIS_MINIPORT_BLOCK *v121; // r14
  struct _NDIS_REFCOUNT_BLOCK *v122; // rcx
  struct _NDIS_MINIPORT_BLOCK *v123; // rsi
  KIRQL v124; // al
  KIRQL v125; // r15
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v127; // bl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v130; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v132; // edi
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v134; // rcx
  KIRQL v135; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  KIRQL v137; // al
  ULONG_PTR v138; // r8
  KIRQL v139; // r12
  int v140; // ecx
  __int64 v141; // r10
  unsigned __int8 v142; // r9
  _BYTE *v143; // rdx
  char v144; // r15
  int v145; // edx
  KIRQL v146; // r12
  struct _NDIS_REFCOUNT_BLOCK *v147; // rcx
  unsigned int v148; // ecx
  struct _NDIS_REFCOUNT_BLOCK *v149; // rcx
  unsigned int *p_Number; // rax
  char v151; // r15
  int v152; // edx
  KIRQL v153; // r12
  struct _NDIS_REFCOUNT_BLOCK *v154; // rcx
  unsigned int v155; // ecx
  unsigned int *v156; // rax
  char v157; // al
  _LIST_ENTRY *v158; // rax
  char v159; // al
  _LIST_ENTRY *v160; // rcx
  NTSTATUS InformationToken; // edi
  _LIST_ENTRY *v162; // rdx
  _LIST_ENTRY *v163; // rcx
  _LIST_ENTRY *v164; // rdx
  _LIST_ENTRY *v165; // rcx
  _LIST_ENTRY *v166; // rdx
  _LIST_ENTRY *v167; // rcx
  ULONG_PTR v168; // rcx
  _LIST_ENTRY *v169; // rcx
  _LIST_ENTRY *v170; // rcx
  struct _KEVENT *v171; // rcx
  unsigned int ThreadSessionId; // eax
  KIRQL v173; // r8
  char *v174; // rdx
  char *v175; // r8
  ULONG_PTR v176; // rbx
  unsigned int v177; // r9d
  __int16 v178; // dx
  struct _NDIS_M_DRIVER_BLOCK *v179; // r13
  struct _NDIS_M_DRIVER_BLOCK *v180; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int16 v186; // dx
  ULONG_PTR v187; // r14
  unsigned int v188; // edx
  int v189; // ecx
  char v190; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v192; // rsi
  unsigned int v193; // edx
  int v194; // ecx
  char v195; // al
  _LIST_ENTRY *v196; // rax
  struct _KEVENT *v197; // rcx
  ULONG_PTR v198; // rbx
  unsigned int v199; // r9d
  __int16 v200; // dx
  struct _NDIS_M_DRIVER_BLOCK *v201; // r13
  struct _NDIS_M_DRIVER_BLOCK *v202; // rax
  struct _NDIS_M_DRIVER_BLOCK **v203; // rcx
  wchar_t *v204; // rcx
  _NDIS_WRAPPER_HANDLE *v205; // rcx
  _NDIS_PENDING_IM_INSTANCE *v206; // rcx
  _NDIS_PENDING_IM_INSTANCE *v207; // rbx
  __int16 v208; // dx
  struct _KEVENT *v209; // rcx
  ULONG_PTR v210; // r14
  unsigned int v211; // edx
  int v212; // ecx
  ULONG_PTR v213; // rbx
  unsigned int v214; // edx
  int v215; // ecx
  _LIST_ENTRY *v216; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v218; // rdx
  _LIST_ENTRY *v219; // rcx
  _LIST_ENTRY *v220; // rdx
  _LIST_ENTRY *v221; // rcx
  ULONG_PTR v222; // rcx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  ULONG_PTR v226; // rbx
  unsigned int v227; // edx
  int v228; // ecx
  KIRQL v229; // [rsp+40h] [rbp-89h]
  KIRQL v230; // [rsp+40h] [rbp-89h]
  BOOLEAN EffectiveOnly; // [rsp+41h] [rbp-88h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+42h] [rbp-87h] BYREF
  KIRQL v233; // [rsp+43h] [rbp-86h]
  char IsMacAddressHidden; // [rsp+44h] [rbp-85h]
  unsigned int v235; // [rsp+48h] [rbp-81h]
  int v236; // [rsp+4Ch] [rbp-7Dh]
  char v237[8]; // [rsp+50h] [rbp-79h]
  struct _NDIS_MINIPORT_BLOCK *v238; // [rsp+58h] [rbp-71h]
  struct _NDIS_MINIPORT_BLOCK *v239; // [rsp+60h] [rbp-69h]
  _LIST_ENTRY *v240; // [rsp+68h] [rbp-61h]
  char v241[8]; // [rsp+70h] [rbp-59h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-51h] BYREF
  _REFERENCE_EX *v243; // [rsp+80h] [rbp-49h]
  char v244[64]; // [rsp+90h] [rbp-39h] BYREF
  PVOID TokenInformation[4]; // [rsp+D0h] [rbp+7h] BYREF

  *(_QWORD *)v241 = a1;
  IfBlock = 0LL;
  v235 = 0;
  v3 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      26,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)a1);
  }
  memset(v244, 0, sizeof(v244));
  CurrentProcess = PsGetCurrentProcess();
  IsMacAddressHidden = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v26 = -1073741808;
    v97 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    goto LABEL_163;
  }
  v5 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  CurrentThread = KeGetCurrentThread();
  v7 = *v5;
  memset(&TokenInformation[1], 0, 24);
  ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v9 = ThreadProperty[1];
    HIDWORD(TokenInformation[1]) = *ThreadProperty;
    v10 = HIDWORD(TokenInformation[1]);
    LODWORD(TokenInformation[1]) = v9;
    ObfDereferenceObject(ThreadProperty);
    v11 = v10;
    if ( v10 )
      goto LABEL_16;
  }
  else
  {
    v9 = 0;
    LODWORD(TokenInformation[1]) = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation[0] = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
  }
  else
  {
    v13 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v14 = v13;
    if ( v13 )
    {
      InformationToken = SeQueryInformationToken(v13, TokenSessionId, TokenInformation);
      PsDereferenceImpersonationToken(v14);
      if ( InformationToken >= 0 )
      {
        v16 = (unsigned int)TokenInformation[0];
        goto LABEL_11;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  v16 = CurrentProcessSessionId;
LABEL_11:
  if ( v16 == -1 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    v9 = (int)TokenInformation[1];
    v16 = ThreadSessionId;
  }
  if ( v16 < dword_1C00F7620 )
  {
    v10 = 0;
    v173 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D80);
    if ( v16 < dword_1C00F7620 )
      v10 = *((_DWORD *)qword_1C00F7628 + 6 * v16);
    KeReleaseSpinLock(&qword_1C00F5D80, v173);
    if ( !v10 )
      v10 = 1;
  }
  else
  {
    v10 = 1;
  }
  HIDWORD(TokenInformation[1]) = v10;
  v11 = v10;
LABEL_16:
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v18 = 0LL;
  v19 = v17;
  v20 = qword_1C00F5DA8;
  if ( qword_1C00F5DA8 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8 )
  {
    while ( *((_DWORD *)v20 + 4) != v11 )
    {
      if ( *((_DWORD *)v20 + 4) <= v11 )
      {
        v20 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v20;
        if ( v20 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8 )
          continue;
      }
      goto LABEL_19;
    }
    v18 = v20;
  }
LABEL_19:
  *(_OWORD *)&TokenInformation[2] = *(_OWORD *)((char *)v18 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v19);
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v3 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v241;
  v22 = v21;
  v233 = v21;
  v23 = *(_DWORD *)(*(_QWORD *)v241 + 32LL);
  if ( v23 == 2 )
    goto LABEL_20;
  if ( v23 )
  {
    if ( v23 != 1 )
    {
      v26 = -1073741811;
      KeReleaseSpinLock(&ndisIfListLock, v21);
      v97 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      goto LABEL_163;
    }
    v7 = 0LL;
    while ( 1 )
    {
LABEL_20:
      Flink = ndisIfList.Flink;
      v25 = 0LL;
      v240 = 0LL;
      if ( ndisIfList.Flink != &ndisIfList )
      {
        while ( 1 )
        {
          v25 = Flink - 77;
          v240 = Flink - 77;
          if ( Flink[5].Flink > v7 )
            break;
          Flink = Flink->Flink;
          if ( Flink == &ndisIfList )
            goto LABEL_23;
        }
      }
      if ( !v25 )
        goto LABEL_24;
      v27 = v25[86].Flink;
      v7 = v25[82].Flink;
      if ( v10 == LODWORD(v27[1].Flink) )
        goto LABEL_30;
      if ( v9 == -1 )
      {
        v175 = (char *)((_LIST_ENTRY *)TokenInformation[2] - *(_LIST_ENTRY **)((char *)&v27[105].Flink + 4));
        if ( TokenInformation[2] == *(PVOID *)((char *)&v27[105].Flink + 4) )
          v175 = (char *)((_LIST_ENTRY *)TokenInformation[3] - *(_LIST_ENTRY **)((char *)&v27[105].Blink + 4));
        if ( !v175 )
          goto LABEL_30;
      }
      if ( ((__int64)v27[105].Flink & 2) == 0 && v10 == 1 )
        goto LABEL_30;
    }
  }
  v158 = ndisIfList.Flink;
  v240 = 0LL;
  v25 = 0LL;
  if ( ndisIfList.Flink != &ndisIfList )
  {
    while ( v158[5].Flink != v7 )
    {
      if ( v158[5].Flink > v7 )
        goto LABEL_233;
      v158 = v158->Flink;
      if ( v158 == &ndisIfList )
        goto LABEL_24;
    }
    v25 = v158 - 77;
    v240 = v158 - 77;
  }
LABEL_233:
  if ( !v25 )
  {
LABEL_24:
    KeReleaseSpinLock(&ndisIfListLock, v22);
LABEL_25:
    v26 = -1073741772;
    if ( *((_DWORD *)v3 + 8) )
      v26 = -2147483622;
    goto LABEL_27;
  }
  v160 = v25[86].Flink;
  if ( v10 != LODWORD(v160[1].Flink) )
  {
    v174 = (char *)((_LIST_ENTRY *)TokenInformation[2] - *(_LIST_ENTRY **)((char *)&v160[105].Flink + 4));
    if ( TokenInformation[2] == *(PVOID *)((char *)&v160[105].Flink + 4) )
      v174 = (char *)((_LIST_ENTRY *)TokenInformation[3] - *(_LIST_ENTRY **)((char *)&v160[105].Blink + 4));
    if ( v174 && (((__int64)v160[105].Flink & 2) != 0 || v10 != 1) )
    {
LABEL_23:
      v25 = 0LL;
      goto LABEL_24;
    }
  }
LABEL_30:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v25[89].Blink);
  ++LODWORD(v25[81].Blink);
  if ( !BYTE1(v25[87].Flink) || *((_QWORD *)v3 + 1) >= 2uLL )
    goto LABEL_123;
  v28 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v29 = v28;
  if ( BYTE3(v25[87].Flink) )
  {
    v122 = (struct _NDIS_REFCOUNT_BLOCK *)v25[90].Flink;
    v239 = (struct _NDIS_MINIPORT_BLOCK *)v25[88].Flink;
    v121 = v239;
    NdisReferenceWithTag(v122);
    ++HIDWORD(v25[87].Flink);
    KeReleaseSpinLock(&SpinLock, v29);
    if ( !v121 )
      goto LABEL_34;
    v123 = 0LL;
    v236 = 1;
    v238 = 0LL;
    if ( !v121->BindPaths )
      goto LABEL_245;
    v124 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v70 = ndisMiniDriverList;
    *(_QWORD *)v237 = ndisMiniDriverList;
    v125 = v124;
    if ( !ndisMiniDriverList )
      goto LABEL_82;
LABEL_173:
    p_Ref = &v70->Ref;
    v127 = KeAcquireSpinLockRaiseToDpc(&v70->Ref.SpinLock);
    if ( v70->Ref.Closing )
      goto LABEL_314;
    ReferenceCount = v70->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_314:
      KeReleaseSpinLock(&v70->Ref.SpinLock, v127);
      NextDriver = v70->NextDriver;
      goto LABEL_81;
    }
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v70->Ref.RefCountTracker;
    v70->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag(RefCountTracker);
    KeReleaseSpinLock(&v70->Ref.SpinLock, v127);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v125);
    v130 = KeAcquireSpinLockRaiseToDpc(&v70->Ref.SpinLock);
    MiniportQueue = v70->MiniportQueue;
    v230 = v130;
    if ( !MiniportQueue )
      goto LABEL_183;
    v132 = v236;
    while ( 1 )
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( BindPaths )
      {
        if ( BindPaths->Number >= v132 )
        {
          v134 = v121->BindPaths;
          if ( v134->Paths[0].Length == BindPaths->Paths[0].Length
            && !memcmp(v134->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v134->Paths[0].Length) )
          {
            break;
          }
        }
      }
LABEL_181:
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( !MiniportQueue )
      {
        v130 = v230;
        v70 = *(struct _NDIS_M_DRIVER_BLOCK **)v237;
        v236 = v132;
        v25 = v240;
LABEL_183:
        KeReleaseSpinLock(&p_Ref->SpinLock, v130);
        v135 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v70->NextDriver;
        v125 = v135;
        v137 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v138 = (ULONG_PTR)p_Ref->RefCountTracker;
        v139 = v137;
        if ( v138 - 2 > 1 )
        {
          if ( v138 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v138, 0LL);
          if ( *(_BYTE *)(v138 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v138, 8uLL);
          v140 = *(unsigned __int8 *)(v138 + 1);
          if ( *(_BYTE *)(v138 + 1) )
          {
            if ( v140 != 1 )
              goto LABEL_79;
            v176 = v138 + 520;
            v177 = *(_DWORD *)(v138 + 576);
            if ( v177 >> 17 < 0x3FFE && (unsigned __int16)v177 >> 1 == (v177 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v138 + 520));
              *(_DWORD *)(v176 + 56) &= 0x10001u;
              goto LABEL_79;
            }
            if ( (unsigned __int16)v177 >> 1 != 0 || (v177 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v138 + 520), 0);
              goto LABEL_79;
            }
          }
          else
          {
            v141 = *(_QWORD *)(v138 + 8);
            if ( v141 )
            {
              v142 = *(_BYTE *)(v138 + 3);
              if ( v142 )
              {
                while ( 1 )
                {
                  v143 = (_BYTE *)(v141 + 2LL * (unsigned __int8)v140);
                  if ( *v143 == 8 )
                  {
                    v157 = v143[1];
                    if ( v157 )
                      break;
                  }
                  LOBYTE(v140) = v140 + 1;
                  if ( (unsigned __int8)v140 >= v142 )
                    goto LABEL_78;
                }
                v143[1] = v157 - 1;
                goto LABEL_79;
              }
            }
LABEL_78:
            if ( _bittestandreset((signed __int32 *)(v138 + 16), 8u) )
              goto LABEL_79;
          }
          ndisBugCheckEx(0x1EuLL, 0LL, v138, 8uLL);
        }
LABEL_79:
        v55 = p_Ref->ReferenceCount-- == 1;
        if ( v55 )
        {
          if ( !p_Ref->ZeroBased )
          {
            NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
            p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v139);
          v179 = *(struct _NDIS_M_DRIVER_BLOCK **)v237;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v178) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v178,
              20,
              23,
              (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
              v237[0]);
          }
          v180 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v180 != v179 )
            {
              p_NextDriver = &v180->NextDriver;
              v180 = v180->NextDriver;
              if ( !v180 )
                goto LABEL_304;
            }
            *p_NextDriver = v179->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_304:
          Buffer = v179->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v179->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v179->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v179->NdisDriverInfo = 0LL;
          }
          if ( (v179->Flags & 1) != 0 )
          {
            PendingDeviceList = v179->PendingDeviceList;
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
          KeSetEvent(&v179->MiniportsRemovedEvent, 0, 0);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v186) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v186,
              20,
              24,
              (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
              (char)v179);
          }
        }
        else
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v139);
        }
LABEL_81:
        *(_QWORD *)v237 = NextDriver;
        v70 = NextDriver;
        if ( !NextDriver )
        {
LABEL_82:
          KeReleaseSpinLock(&ndisMiniDriverListLock, v125);
          if ( v123 )
          {
            KeAcquireSpinLockAtDpcLevel(&v123->Lock);
            HighestFilter = v123->HighestFilter;
            v123->MiniportThread = KeGetCurrentThread();
            if ( !HighestFilter )
            {
LABEL_249:
              IfBlock = v123->IfBlock;
              goto LABEL_87;
            }
            while ( 1 )
            {
              v72 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
              if ( !HighestFilter->PnPRef.Closing )
              {
                v73 = HighestFilter->PnPRef.ReferenceCount;
                if ( v73 < 0xFFEBu )
                {
                  v74 = (struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker;
                  HighestFilter->PnPRef.ReferenceCount = v73 + 1;
                  NdisReferenceWithTag(v74);
                  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v72);
                  IfBlock = HighestFilter->IfBlock;
LABEL_87:
                  v123->MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(&v123->Lock);
                  v75 = KeAcquireSpinLockRaiseToDpc(&v123->Lock);
                  NsiRefCountTracker = (ULONG_PTR)v123->NsiRefCountTracker;
                  v123->MiniportThread = KeGetCurrentThread();
                  NdisDereferenceWithTag(NsiRefCountTracker);
                  v55 = v123->NsiOpenReferences-- == 1;
                  if ( v55 )
                  {
                    NsiRequestsCompletedEvent = v123->NsiRequestsCompletedEvent;
                    if ( NsiRequestsCompletedEvent )
                      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
                  }
                  v123->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v123->Lock, v75);
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v78) = 4;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v78,
                      20,
                      25,
                      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                      (char)v123);
                  }
                  v79 = 0;
                  v80 = KeAcquireSpinLockRaiseToDpc(&v123->Ref.SpinLock);
                  v82 = (ULONG_PTR)v123->RefCountTracker;
                  v83 = v80;
                  if ( v82 && v82 - 2 > 1 )
                  {
                    if ( v82 == 1 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                    if ( *(_BYTE *)(v82 + 2) <= 0x3Cu )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v82, 0x3CuLL);
                    v84 = *(unsigned __int8 *)(v82 + 1);
                    if ( *(_BYTE *)(v82 + 1) )
                    {
                      if ( v84 != 1 )
                        goto LABEL_102;
                      v187 = v82 + 3848;
                      v188 = *(_DWORD *)(v82 + 3904);
                      v189 = (unsigned __int16)v188 >> 1;
                      if ( v188 >> 17 < 0x3FFE && v189 == (v188 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v82 + 3848));
                        *(_DWORD *)(v187 + 56) &= 0x10001u;
                        goto LABEL_102;
                      }
                      if ( v189 != 0 || (v188 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 3848), 0);
                        goto LABEL_102;
                      }
                    }
                    else
                    {
                      v85 = *(_QWORD *)(v82 + 8);
                      if ( v85 )
                      {
                        v86 = *(_BYTE *)(v82 + 3);
                        if ( v86 )
                        {
                          while ( 1 )
                          {
                            v81 = (_BYTE *)(v85 + 2LL * (unsigned __int8)v84);
                            if ( *v81 == 60 )
                            {
                              v190 = v81[1];
                              if ( v190 )
                                break;
                            }
                            LOBYTE(v84) = v84 + 1;
                            if ( (unsigned __int8)v84 >= v86 )
                              goto LABEL_101;
                          }
                          v81[1] = v190 - 1;
                          goto LABEL_102;
                        }
                      }
LABEL_101:
                      if ( _bittestandreset((signed __int32 *)(v82 + 20), 0x1Cu) )
                        goto LABEL_102;
                    }
                    ndisBugCheckEx(0x1EuLL, 0LL, v82, 0x3CuLL);
                  }
LABEL_102:
                  v55 = v123->Ref.ReferenceCount-- == 1;
                  if ( v55 )
                    v79 = 1;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v81) = 4;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v81,
                      20,
                      14,
                      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                      (char)v123,
                      v123->Ref.ReferenceCount);
                  }
                  KeReleaseSpinLock(&v123->Ref.SpinLock, v83);
                  if ( v79 )
                  {
                    RemoveReadyEvent = v123->RemoveReadyEvent;
                    if ( RemoveReadyEvent )
                      KeSetEvent(RemoveReadyEvent, 0, 0);
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v87) = 4;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v87,
                      20,
                      26,
                      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                      (char)v123);
                  }
LABEL_109:
                  v88 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                  v89 = (ULONG_PTR)v25[90].Flink;
                  v90 = v88;
                  if ( v89 - 2 > 1 )
                  {
                    if ( v89 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v89, 0LL);
                    if ( *(_BYTE *)(v89 + 2) <= 3u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v89, 3uLL);
                    v91 = *(unsigned __int8 *)(v89 + 1);
                    if ( *(_BYTE *)(v89 + 1) )
                    {
                      if ( v91 != 1 )
                        goto LABEL_118;
                      v192 = v89 + 200;
                      v193 = *(_DWORD *)(v89 + 256);
                      v194 = (unsigned __int16)v193 >> 1;
                      if ( v193 >> 17 < 0x3FFE && v194 == (v193 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v89 + 200));
                        *(_DWORD *)(v192 + 56) &= 0x10001u;
                        goto LABEL_118;
                      }
                      if ( v194 != 0 || (v193 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v89 + 200), 0);
                        goto LABEL_118;
                      }
                    }
                    else
                    {
                      v92 = *(_QWORD *)(v89 + 8);
                      if ( v92 )
                      {
                        v93 = *(_BYTE *)(v89 + 3);
                        if ( v93 )
                        {
                          while ( 1 )
                          {
                            v94 = (_BYTE *)(v92 + 2LL * (unsigned __int8)v91);
                            if ( *v94 == 3 )
                            {
                              v195 = v94[1];
                              if ( v195 )
                                break;
                            }
                            LOBYTE(v91) = v91 + 1;
                            if ( (unsigned __int8)v91 >= v93 )
                              goto LABEL_117;
                          }
                          v94[1] = v195 - 1;
                          goto LABEL_118;
                        }
                      }
LABEL_117:
                      if ( _bittestandreset((signed __int32 *)(v89 + 16), 3u) )
                        goto LABEL_118;
                    }
                    ndisBugCheckEx(0x1EuLL, 0LL, v89, 3uLL);
                  }
LABEL_118:
                  v55 = HIDWORD(v25[87].Flink)-- == 1;
                  if ( v55 )
                  {
                    v196 = v25[88].Flink;
                    if ( v196 )
                    {
                      v197 = (struct _KEVENT *)v196[253].Flink;
                      if ( v197 )
                        KeSetEvent(v197, 0, 0);
                    }
                  }
                  KeReleaseSpinLock(&SpinLock, v90);
                  goto LABEL_120;
                }
                ndisRefCountReferenceCountOverflow = 1;
              }
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v72);
              HighestFilter = HighestFilter->LowerFilter;
              if ( !HighestFilter )
                goto LABEL_249;
            }
          }
LABEL_245:
          IfBlock = 0LL;
          goto LABEL_109;
        }
        v121 = v239;
        goto LABEL_173;
      }
    }
    KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
    v55 = (MiniportQueue->Flags & 0x80200020) == 0;
    MiniportQueue->MiniportThread = KeGetCurrentThread();
    if ( !v55
      || (MiniportQueue->PnPFlags & 0x1084110) != 0
      || MiniportQueue->PnPDeviceState != NdisPnPDeviceStarted
      || MiniportQueue->CurrentDevicePowerState != PowerDeviceD0 )
    {
LABEL_205:
      MiniportQueue->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v238 )
      {
        ndisDereferenceMiniportForNsi(v238, NSIREF_IFTOP, MPREF_IF_FINDTOP);
        v238 = 0LL;
      }
      goto LABEL_181;
    }
    v144 = 1;
    v146 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
    if ( !MiniportQueue->Ref.Closing )
    {
      v147 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
      if ( v147 )
        NdisReferenceWithTag(v147);
      v148 = MiniportQueue->Ref.ReferenceCount;
      MiniportQueue->Ref.ReferenceCount = v148 + 1;
      if ( v148 != -1 )
        goto LABEL_200;
      MiniportQueue->Ref.ReferenceCount = -1;
    }
    v144 = 0;
LABEL_200:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v145) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v145,
        20,
        12,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)MiniportQueue,
        MiniportQueue->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v146);
    if ( v144 )
    {
      v149 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
      v238 = v123;
      NdisReferenceWithTag(v149);
      p_Number = &MiniportQueue->BindPaths->Number;
      v123 = MiniportQueue;
      ++MiniportQueue->NsiOpenReferences;
      v132 = *p_Number;
    }
    v121 = v239;
    goto LABEL_205;
  }
  KeReleaseSpinLock(&SpinLock, v28);
LABEL_34:
  if ( !BYTE2(v25[87].Flink) )
    goto LABEL_123;
  v30 = v25[88].Flink;
  v31 = 0LL;
  v239 = 0LL;
  v236 = 1;
  v32 = (struct _NDIS_MINIPORT_BLOCK *)v30[2].Flink;
  v238 = v32;
  if ( !v32->BindPaths )
    goto LABEL_380;
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v34 = ndisMiniDriverList;
  *(_QWORD *)v237 = ndisMiniDriverList;
  v35 = v33;
  if ( !ndisMiniDriverList )
    goto LABEL_59;
  while ( 2 )
  {
    v36 = &v34->Ref;
    v243 = &v34->Ref;
    v37 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
    if ( v34->Ref.Closing )
      goto LABEL_373;
    v38 = v34->Ref.ReferenceCount;
    if ( v38 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_373:
      KeReleaseSpinLock(&v34->Ref.SpinLock, v37);
      v47 = v34->NextDriver;
      goto LABEL_58;
    }
    v39 = (struct _NDIS_REFCOUNT_BLOCK *)v34->Ref.RefCountTracker;
    v34->Ref.ReferenceCount = v38 + 1;
    NdisReferenceWithTag(v39);
    KeReleaseSpinLock(&v34->Ref.SpinLock, v37);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
    v40 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
    v41 = v34->MiniportQueue;
    v229 = v40;
    if ( !v41 )
      goto LABEL_47;
    v42 = v236;
    v43 = v239;
    do
    {
      v44 = v41->BindPaths;
      if ( !v44 )
        goto LABEL_45;
      if ( v44->Number < v42 )
        goto LABEL_45;
      v45 = v32->BindPaths;
      if ( v45->Paths[0].Length != v44->Paths[0].Length
        || memcmp(v45->Paths[0].Buffer, v44->Paths[0].Buffer, v45->Paths[0].Length) )
      {
        goto LABEL_45;
      }
      KeAcquireSpinLockAtDpcLevel(&v41->Lock);
      v55 = (v41->Flags & 0x80200020) == 0;
      v41->MiniportThread = KeGetCurrentThread();
      if ( v55
        && (v41->PnPFlags & 0x1084110) == 0
        && v41->PnPDeviceState == NdisPnPDeviceStarted
        && v41->CurrentDevicePowerState == PowerDeviceD0 )
      {
        v151 = 1;
        v153 = KeAcquireSpinLockRaiseToDpc(&v41->Ref.SpinLock);
        if ( !v41->Ref.Closing )
        {
          v154 = (struct _NDIS_REFCOUNT_BLOCK *)v41->RefCountTracker;
          if ( v154 )
            NdisReferenceWithTag(v154);
          v155 = v41->Ref.ReferenceCount;
          v41->Ref.ReferenceCount = v155 + 1;
          if ( v155 != -1 )
            goto LABEL_215;
          v41->Ref.ReferenceCount = -1;
        }
        v151 = 0;
LABEL_215:
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v152) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v152,
            20,
            12,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)v41,
            v41->Ref.ReferenceCount);
        }
        KeReleaseSpinLock(&v41->Ref.SpinLock, v153);
        if ( v151 )
        {
          v43 = v31;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v41->NsiRefCountTracker);
          v156 = &v41->BindPaths->Number;
          v31 = v41;
          ++v41->NsiOpenReferences;
          v42 = *v156;
        }
        v32 = v238;
      }
      v41->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v41->Lock);
      if ( v43 )
      {
        ndisDereferenceMiniportForNsi(v43, NSIREF_IFTOP, MPREF_IF_FINDTOP);
        v43 = 0LL;
      }
LABEL_45:
      v41 = v41->NextMiniport;
    }
    while ( v41 );
    v34 = *(struct _NDIS_M_DRIVER_BLOCK **)v237;
    v40 = v229;
    v239 = v43;
    v25 = v240;
    v236 = v42;
    v36 = v243;
LABEL_47:
    KeReleaseSpinLock(&v36->SpinLock, v40);
    v46 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v47 = v34->NextDriver;
    v35 = v46;
    v48 = KeAcquireSpinLockRaiseToDpc(&v36->SpinLock);
    v49 = (ULONG_PTR)v36->RefCountTracker;
    v50 = v48;
    if ( v49 - 2 > 1 )
    {
      if ( v49 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v49, 0LL);
      if ( *(_BYTE *)(v49 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v49, 8uLL);
      v51 = *(unsigned __int8 *)(v49 + 1);
      if ( *(_BYTE *)(v49 + 1) )
      {
        if ( v51 != 1 )
          goto LABEL_56;
        v198 = v49 + 520;
        v199 = *(_DWORD *)(v49 + 576);
        if ( v199 >> 17 < 0x3FFE && (unsigned __int16)v199 >> 1 == (v199 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 520));
          *(_DWORD *)(v198 + 56) &= 0x10001u;
          goto LABEL_56;
        }
        if ( (unsigned __int16)v199 >> 1 != 0 || (v199 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 520), 0);
          goto LABEL_56;
        }
      }
      else
      {
        v52 = *(_QWORD *)(v49 + 8);
        if ( v52 )
        {
          v53 = *(_BYTE *)(v49 + 3);
          if ( v53 )
          {
            while ( 1 )
            {
              v54 = (_BYTE *)(v52 + 2LL * (unsigned __int8)v51);
              if ( *v54 == 8 )
              {
                v159 = v54[1];
                if ( v159 )
                  break;
              }
              LOBYTE(v51) = v51 + 1;
              if ( (unsigned __int8)v51 >= v53 )
                goto LABEL_55;
            }
            v54[1] = v159 - 1;
            goto LABEL_56;
          }
        }
LABEL_55:
        if ( _bittestandreset((signed __int32 *)(v49 + 16), 8u) )
          goto LABEL_56;
      }
      ndisBugCheckEx(0x1EuLL, 0LL, v49, 8uLL);
    }
LABEL_56:
    v55 = v36->ReferenceCount-- == 1;
    if ( v55 )
    {
      if ( !v36->ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v36->RefCountTracker);
        v36->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&v36->SpinLock, v50);
      v201 = *(struct _NDIS_M_DRIVER_BLOCK **)v237;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v200) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v200,
          20,
          23,
          (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
          v237[0]);
      }
      v202 = ndisMiniDriverList;
      v203 = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v202 != v201 )
        {
          v203 = &v202->NextDriver;
          v202 = v202->NextDriver;
          if ( !v202 )
            goto LABEL_363;
        }
        *v203 = v201->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_363:
      v204 = v201->ImageName.Buffer;
      if ( v204 )
      {
        ExFreePoolWithTag(v204, 0);
        v201->ImageName.Buffer = 0LL;
      }
      v205 = v201->NdisDriverInfo;
      if ( v205 )
      {
        ExFreePoolWithTag(v205, 0);
        v201->NdisDriverInfo = 0LL;
      }
      if ( (v201->Flags & 1) != 0 )
      {
        v206 = v201->PendingDeviceList;
        if ( v206 )
        {
          do
          {
            v207 = v206->Next;
            ExFreePoolWithTag(v206, 0);
            v206 = v207;
          }
          while ( v207 );
        }
      }
      KeSetEvent(&v201->MiniportsRemovedEvent, 0, 0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v208) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v208,
          20,
          24,
          (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
          (char)v201);
      }
    }
    else
    {
      KeReleaseSpinLock(&v36->SpinLock, v50);
    }
LABEL_58:
    *(_QWORD *)v237 = v47;
    v34 = v47;
    if ( v47 )
    {
      v32 = v238;
      continue;
    }
    break;
  }
LABEL_59:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
  if ( !v31 )
  {
LABEL_380:
    IfBlock = 0LL;
    goto LABEL_122;
  }
  KeAcquireSpinLockAtDpcLevel(&v31->Lock);
  v56 = v31->HighestFilter;
  v31->MiniportThread = KeGetCurrentThread();
  if ( !v56 )
  {
LABEL_247:
    IfBlock = v31->IfBlock;
    goto LABEL_64;
  }
  while ( 2 )
  {
    v57 = KeAcquireSpinLockRaiseToDpc(&v56->PnPRef.SpinLock);
    if ( v56->PnPRef.Closing )
    {
LABEL_246:
      KeReleaseSpinLock(&v56->PnPRef.SpinLock, v57);
      v56 = v56->LowerFilter;
      if ( !v56 )
        goto LABEL_247;
      continue;
    }
    break;
  }
  v58 = v56->PnPRef.ReferenceCount;
  if ( v58 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_246;
  }
  v59 = (struct _NDIS_REFCOUNT_BLOCK *)v56->PnPRef.RefCountTracker;
  v56->PnPRef.ReferenceCount = v58 + 1;
  NdisReferenceWithTag(v59);
  KeReleaseSpinLock(&v56->PnPRef.SpinLock, v57);
  IfBlock = v56->IfBlock;
LABEL_64:
  v60 = 0;
  v31->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v31->Lock);
  v61 = KeAcquireSpinLockRaiseToDpc(&v31->Lock);
  v62 = (ULONG_PTR)v31->NsiRefCountTracker;
  v31->MiniportThread = KeGetCurrentThread();
  NdisDereferenceWithTag(v62);
  v55 = v31->NsiOpenReferences-- == 1;
  if ( v55 )
  {
    v63 = v31->NsiRequestsCompletedEvent;
    if ( v63 )
      KeSetEvent(v63, 0, 0);
  }
  v31->MiniportThread = 0LL;
  KeReleaseSpinLock(&v31->Lock, v61);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v64) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v64,
      20,
      25,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)v31);
  }
  v65 = KeAcquireSpinLockRaiseToDpc(&v31->Ref.SpinLock);
  v67 = (ULONG_PTR)v31->RefCountTracker;
  v68 = v65;
  if ( v67 )
    NdisDereferenceWithTag(v67);
  v55 = v31->Ref.ReferenceCount-- == 1;
  if ( v55 )
    v60 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v66) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v66,
      20,
      14,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)v31,
      v31->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v31->Ref.SpinLock, v68);
  if ( v60 )
  {
    v209 = v31->RemoveReadyEvent;
    if ( v209 )
      KeSetEvent(v209, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v69) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v69,
      20,
      26,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)v31);
  }
LABEL_120:
  if ( IfBlock )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->RefCountTracker);
    ++IfBlock->Ref;
  }
LABEL_122:
  v3 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v241;
LABEL_123:
  v95 = v233;
  **((_QWORD **)v3 + 2) = v25[82].Flink;
  KeReleaseSpinLock(&ndisIfListLock, v95);
  if ( !v25 )
    goto LABEL_25;
  v96 = *((_QWORD *)v3 + 1);
  if ( !v96 )
    goto LABEL_125;
  if ( v96 != 1 )
  {
    if ( v96 == 12 )
    {
LABEL_125:
      *(_QWORD *)&v244[40] = *((_QWORD *)v3 + 5);
      *(_DWORD *)&v244[48] = *((_DWORD *)v3 + 12);
      ndisNsiGetInterfaceRwInformation((char)v25, (char)IfBlock, (char)v244);
      *((_DWORD *)v3 + 12) = *(_DWORD *)&v244[48];
      *(_DWORD *)&v244[32] = 1;
      *(_QWORD *)&v244[40] = *((_QWORD *)v3 + 7);
      *(_DWORD *)&v244[48] = *((_DWORD *)v3 + 16);
      ndisNsiGetInterfaceRodInformation((char)v25, (char)IfBlock, (char)v244);
      *((_DWORD *)v3 + 16) = *(_DWORD *)&v244[48];
      *(_QWORD *)&v244[40] = *((_QWORD *)v3 + 9);
      *(_DWORD *)&v244[48] = *((_DWORD *)v3 + 20);
      *(_DWORD *)&v244[32] = 2;
      ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)v25);
      v26 = v235;
      *((_DWORD *)v3 + 20) = *(_DWORD *)&v244[48];
      goto LABEL_126;
    }
    if ( v96 == 13 )
      goto LABEL_241;
    v26 = -1073741811;
LABEL_27:
    v235 = v26;
    goto LABEL_126;
  }
LABEL_241:
  *(_DWORD *)&v244[32] = 1;
  *(_QWORD *)&v244[40] = *((_QWORD *)v3 + 7);
  *(_DWORD *)&v244[48] = *((_DWORD *)v3 + 16);
  ndisNsiGetInterfaceRodEnumObject((char)v25);
  *((_DWORD *)v3 + 16) = *(_DWORD *)&v244[48];
  *(_QWORD *)&v244[40] = *((_QWORD *)v3 + 9);
  *(_DWORD *)&v244[48] = *((_DWORD *)v3 + 20);
  *(_DWORD *)&v244[32] = 2;
  ndisNsiGetInterfaceRosEnumObject((char)v25);
  v26 = v235;
  *((_DWORD *)v3 + 20) = *(_DWORD *)&v244[48];
LABEL_126:
  v97 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( !IfBlock )
    goto LABEL_152;
  if ( !IfBlock->IsNdisFilter )
    goto LABEL_142;
  p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
  v99 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
  v100 = *(_QWORD *)(p_DeferredContext + 16);
  v101 = v99;
  if ( v100 - 2 <= 1 )
    goto LABEL_138;
  if ( v100 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v100, 0LL);
  if ( *(_BYTE *)(v100 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v100, 0xBuLL);
  v102 = *(unsigned __int8 *)(v100 + 1);
  if ( *(_BYTE *)(v100 + 1) )
  {
    if ( v102 != 1 )
      goto LABEL_138;
    v210 = v100 + 712;
    v211 = *(_DWORD *)(v100 + 768);
    v212 = (unsigned __int16)v211 >> 1;
    if ( v211 >> 17 < 0x3FFE && v212 == (v211 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v100 + 712));
      *(_DWORD *)(v210 + 56) &= 0x10001u;
    }
    else
    {
      if ( v212 == 0 && (v211 & 1) == 0 )
        goto LABEL_392;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v100 + 712), 0);
    }
    v26 = v235;
    goto LABEL_138;
  }
  v103 = *(_QWORD *)(v100 + 8);
  if ( !v103 || (v104 = *(_BYTE *)(v100 + 3)) == 0 )
  {
LABEL_137:
    if ( _bittestandreset((signed __int32 *)(v100 + 16), 0xBu) )
      goto LABEL_138;
LABEL_392:
    ndisBugCheckEx(0x1EuLL, 0LL, v100, 0xBuLL);
  }
  while ( 1 )
  {
    v105 = (_BYTE *)(v103 + 2LL * (unsigned __int8)v102);
    if ( *v105 == 11 )
    {
      v106 = v105[1];
      if ( v106 )
        break;
    }
    LOBYTE(v102) = v102 + 1;
    if ( (unsigned __int8)v102 >= v104 )
      goto LABEL_137;
  }
  v105[1] = v106 - 1;
LABEL_138:
  v55 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
  if ( v55 && !*(_BYTE *)(p_DeferredContext + 11) )
  {
    NdisFreeRefCount(*(_QWORD *)(p_DeferredContext + 16));
    *(_QWORD *)(p_DeferredContext + 16) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v101);
  LOBYTE(v3) = v241[0];
LABEL_142:
  v107 = (ULONG_PTR)IfBlock->RefCountTracker;
  if ( v107 - 2 > 1 )
  {
    if ( v107 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v107, 0LL);
    if ( *(_BYTE *)(v107 + 2) <= 4u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v107, 4uLL);
    v108 = *(unsigned __int8 *)(v107 + 1);
    if ( *(_BYTE *)(v107 + 1) )
    {
      if ( v108 != 1 )
        goto LABEL_151;
      v213 = v107 + 264;
      v214 = *(_DWORD *)(v107 + 320);
      v215 = (unsigned __int16)v214 >> 1;
      if ( v214 >> 17 < 0x3FFE && v215 == (v214 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v107 + 264));
        *(_DWORD *)(v213 + 56) &= 0x10001u;
        goto LABEL_151;
      }
      if ( v215 != 0 || (v214 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v107 + 264), 0);
        goto LABEL_151;
      }
    }
    else
    {
      v109 = *(_QWORD *)(v107 + 8);
      if ( v109 )
      {
        v110 = *(_BYTE *)(v107 + 3);
        if ( v110 )
        {
          while ( 1 )
          {
            v111 = (_BYTE *)(v109 + 2LL * (unsigned __int8)v108);
            if ( *v111 == 4 )
            {
              v119 = v111[1];
              if ( v119 )
                break;
            }
            LOBYTE(v108) = v108 + 1;
            if ( (unsigned __int8)v108 >= v110 )
              goto LABEL_150;
          }
          v111[1] = v119 - 1;
          goto LABEL_151;
        }
      }
LABEL_150:
      if ( _bittestandreset((signed __int32 *)(v107 + 16), 4u) )
        goto LABEL_151;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v107, 4uLL);
  }
LABEL_151:
  v55 = IfBlock->Ref-- == 1;
  if ( v55 )
  {
    ndisIfDeleteStackEntries(IfBlock);
    v216 = IfBlock->Link.Flink;
    if ( v216->Blink == &IfBlock->Link )
    {
      Blink = IfBlock->Link.Blink;
      if ( Blink->Flink == &IfBlock->Link )
      {
        Blink->Flink = v216;
        v216->Blink = Blink;
        v218 = IfBlock->ProviderLink.Flink;
        if ( v218->Blink == &IfBlock->ProviderLink )
        {
          v219 = IfBlock->ProviderLink.Blink;
          if ( v219->Flink == &IfBlock->ProviderLink )
          {
            v219->Flink = v218;
            v218->Blink = v219;
            v220 = IfBlock->NetworkLink.Flink;
            if ( v220->Blink == &IfBlock->NetworkLink )
            {
              v221 = IfBlock->NetworkLink.Blink;
              if ( v221->Flink == &IfBlock->NetworkLink )
              {
                v221->Flink = v220;
                v220->Blink = v221;
                NETWORKBLOCK_DECREMENT_REF(IfBlock->Network);
                ndisIfFreeIfIndex(IfBlock->ifIndex);
                v222 = (ULONG_PTR)IfBlock->RefCountTracker;
                --ndisInterfaceCount;
                NdisFreeRefCount(v222);
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
                goto LABEL_152;
              }
            }
          }
        }
      }
    }
    goto LABEL_425;
  }
LABEL_152:
  if ( !v25 )
    goto LABEL_163;
  v112 = (ULONG_PTR)v25[89].Blink;
  if ( v112 - 2 <= 1 )
    goto LABEL_162;
  if ( v112 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v112, 0LL);
  if ( *(_BYTE *)(v112 + 2) <= 3u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v112, 3uLL);
  v113 = *(unsigned __int8 *)(v112 + 1);
  if ( *(_BYTE *)(v112 + 1) )
  {
    if ( v113 != 1 )
      goto LABEL_162;
    v226 = v112 + 200;
    v227 = *(_DWORD *)(v112 + 256);
    v228 = (unsigned __int16)v227 >> 1;
    if ( v227 >> 17 < 0x3FFE && v228 == (v227 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v112 + 200));
      *(_DWORD *)(v226 + 56) &= 0x10001u;
      goto LABEL_162;
    }
    if ( v228 != 0 || (v227 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v112 + 200), 0);
      goto LABEL_162;
    }
LABEL_423:
    ndisBugCheckEx(0x1EuLL, 0LL, v112, 3uLL);
  }
  v114 = *(_QWORD *)(v112 + 8);
  if ( !v114 || (v115 = *(_BYTE *)(v112 + 3)) == 0 )
  {
LABEL_161:
    if ( _bittestandreset((signed __int32 *)(v112 + 16), 3u) )
      goto LABEL_162;
    goto LABEL_423;
  }
  while ( 1 )
  {
    v116 = (_BYTE *)(v114 + 2LL * (unsigned __int8)v113);
    if ( *v116 == 3 )
    {
      v120 = v116[1];
      if ( v120 )
        break;
    }
    LOBYTE(v113) = v113 + 1;
    if ( (unsigned __int8)v113 >= v115 )
      goto LABEL_161;
  }
  v116[1] = v120 - 1;
LABEL_162:
  v55 = LODWORD(v25[81].Blink)-- == 1;
  if ( v55 )
  {
    ndisIfDeleteStackEntries((struct _NDIS_IF_BLOCK *)v25);
    v162 = v25[77].Flink;
    if ( v162->Blink == &v25[77] )
    {
      v163 = v25[77].Blink;
      if ( v163->Flink == &v25[77] )
      {
        v163->Flink = v162;
        v162->Blink = v163;
        v164 = v25[78].Flink;
        if ( v164->Blink == &v25[78] )
        {
          v165 = v25[78].Blink;
          if ( v165->Flink == &v25[78] )
          {
            v165->Flink = v164;
            v164->Blink = v165;
            v166 = v25[79].Flink;
            if ( v166->Blink == &v25[79] )
            {
              v167 = v25[79].Blink;
              if ( v167->Flink == &v25[79] )
              {
                v167->Flink = v166;
                v166->Blink = v167;
                NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v25[85].Blink);
                ndisIfFreeIfIndex(HIDWORD(v25->Flink));
                v168 = (ULONG_PTR)v25[89].Blink;
                --ndisInterfaceCount;
                NdisFreeRefCount(v168);
                v169 = v25[89].Flink;
                v25[89].Blink = 0LL;
                if ( v169 )
                {
                  ExFreePoolWithTag(v169, 0);
                  v25[89].Flink = 0LL;
                }
                v170 = v25[80].Flink;
                if ( v170 )
                {
                  ExFreePoolWithTag(v170, 0);
                  v25[80].Flink = 0LL;
                  v25[80].Blink = 0LL;
                }
                v171 = (struct _KEVENT *)v25[86].Blink;
                if ( v171 )
                  KeSetEvent(v171, 0, 0);
                ExFreePoolWithTag(v25, 0);
                goto LABEL_163;
              }
            }
          }
        }
      }
    }
LABEL_425:
    __fastfail(3u);
  }
LABEL_163:
  KeReleaseSpinLock(&ndisIfListLock, v97);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v117) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v117,
      22,
      27,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)v3,
      v26);
  }
  KeLeaveCriticalRegion();
  return v26;
}
