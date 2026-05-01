/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x1800228B0 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800026DC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800045C4 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800220DC (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180023470 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023880 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023C00 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180024250 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180024380 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@_KPEAU_HAM_ACTIVITY@@@Z @ 0x180024640 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004650C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18006E6D8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180073DF0 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  struct _HAM_ACTIVITY_PROPERTIES *v11; // r15
  const unsigned __int16 *v12; // r14
  DWORD v14; // ebx
  char *v15; // r13
  __int64 v16; // r12
  bool v17; // cf
  __int64 v18; // rbx
  unsigned int v19; // edi
  unsigned int v20; // eax
  _WORD *v21; // rax
  __int64 v22; // rdx
  __int16 v23; // cx
  int v24; // ecx
  bool v25; // r15
  struct _HOST_ACTIVITY_MANAGER *v26; // r14
  __int64 v27; // rcx
  int Host; // esi
  DWORD v29; // edi
  __int64 v30; // rsi
  _QWORD *Value; // rbx
  char v32; // bl
  __int64 *v33; // rax
  __int64 v34; // rdx
  bool v35; // zf
  __int64 v36; // r8
  __int64 v37; // r9
  struct _RM_HAM_ACTIVITY_HOST *v38; // rbx
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v40; // r15
  __int64 v41; // rbx
  struct ExecutionModel::_ResourceSetInfo *v42; // r8
  __int64 v43; // rcx
  int *v44; // rdi
  ULONG i; // ebx
  int v46; // eax
  _QWORD *v47; // rax
  struct _RM_HAM_ACTIVITY_HOST *v48; // r14
  DWORD v49; // edi
  _QWORD *v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v53; // rbx
  DWORD v54; // ebx
  DWORD ProcessId; // edx
  int v56; // eax
  const unsigned __int16 *v57; // rcx
  const unsigned __int16 *v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  int v61; // r8d
  __int64 v62; // rax
  int v63; // ecx
  int v64; // eax
  int v66; // eax
  struct _HAM_CLIENT_CONTEXT *v67; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v68; // r9
  int v69; // eax
  __int64 v70; // rcx
  char v71; // [rsp+40h] [rbp-C0h]
  char v72; // [rsp+41h] [rbp-BFh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v73; // [rsp+48h] [rbp-B8h]
  struct _HAM_ACTIVITY_PROPERTIES *v74; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_CLIENT_CONTEXT *v75; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_ACTIVITY *v76; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Process; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v78; // [rsp+70h] [rbp-90h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v79; // [rsp+78h] [rbp-88h]
  struct _RM_HAM_ACTIVITY_HOST *v80; // [rsp+80h] [rbp-80h] BYREF
  DWORD v81; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v82; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h]
  _QWORD v85[4]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v87; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DESCRIPTOR v90; // [rsp+F0h] [rbp-10h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v92[464]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v94; // [rsp+324h] [rbp+224h]
  unsigned int v95; // [rsp+328h] [rbp+228h]
  __int64 v96; // [rsp+330h] [rbp+230h]
  _BYTE TlsValue[144]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v98[164]; // [rsp+3D0h] [rbp+2D0h] BYREF
  char v99; // [rsp+474h] [rbp+374h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+550h] [rbp+450h] BYREF
  void *v101; // [rsp+560h] [rbp+460h]
  int v102; // [rsp+568h] [rbp+468h]
  int v103; // [rsp+56Ch] [rbp+46Ch]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+570h] [rbp+470h] BYREF
  void *v105; // [rsp+580h] [rbp+480h]
  int v106; // [rsp+588h] [rbp+488h]
  int v107; // [rsp+58Ch] [rbp+48Ch]
  struct _HAM_ACTIVITY_PROPERTIES **v108; // [rsp+590h] [rbp+490h]
  __int64 v109; // [rsp+598h] [rbp+498h]
  __int64 *v110; // [rsp+5A0h] [rbp+4A0h]
  __int64 v111; // [rsp+5A8h] [rbp+4A8h]
  const unsigned __int16 *v112; // [rsp+5B0h] [rbp+4B0h]
  int v113; // [rsp+5B8h] [rbp+4B8h]
  int v114; // [rsp+5BCh] [rbp+4BCh]
  struct _HAM_CLIENT_CONTEXT **v115; // [rsp+5C0h] [rbp+4C0h]
  __int64 v116; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 *v117; // [rsp+5D0h] [rbp+4D0h]
  __int64 v118; // [rsp+5D8h] [rbp+4D8h]
  const unsigned __int16 *v119; // [rsp+5E0h] [rbp+4E0h]
  int v120; // [rsp+5E8h] [rbp+4E8h]
  int v121; // [rsp+5ECh] [rbp+4ECh]
  const unsigned __int16 *v122; // [rsp+5F0h] [rbp+4F0h]
  int v123; // [rsp+5F8h] [rbp+4F8h]
  int v124; // [rsp+5FCh] [rbp+4FCh]
  HANDLE *p_Process; // [rsp+600h] [rbp+500h]
  __int64 v126; // [rsp+608h] [rbp+508h]
  const unsigned __int16 **v127; // [rsp+610h] [rbp+510h]
  __int64 v128; // [rsp+618h] [rbp+518h]
  unsigned __int64 **v129; // [rsp+620h] [rbp+520h]
  __int64 v130; // [rsp+628h] [rbp+528h]
  DWORD *v131; // [rsp+630h] [rbp+530h]
  __int64 v132; // [rsp+638h] [rbp+538h]
  char *v133; // [rsp+640h] [rbp+540h]
  __int64 v134; // [rsp+648h] [rbp+548h]
  char *v135; // [rsp+650h] [rbp+550h]
  int v136; // [rsp+658h] [rbp+558h]
  int v137; // [rsp+65Ch] [rbp+55Ch]

  v11 = a8;
  v12 = a2;
  Process = a9;
  v78 = a2;
  v75 = a1;
  v82 = a10;
  v74 = a8;
  memset_0(TlsValue, 0, 0x88uLL);
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, TlsValue);
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v101 = &unk_1800BE63E;
    UserData.Reserved = 2;
    v102 = 19;
    v103 = 1;
    LODWORD(v73) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v15 = 0LL;
  v16 = -1LL;
  v17 = *(_DWORD *)a8 < 0x8000000u;
  v18 = 0LL;
  v73 = 0LL;
  v71 = 0;
  v76 = 0LL;
  v80 = 0LL;
  v84 = -1LL;
  if ( !v17
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    Host = -1073741578;
    *((_WORD *)a8 + 69) = 0;
    *((_WORD *)a8 + 133) = 0;
    goto LABEL_74;
  }
  if ( !(unsigned __int8)PsmIsValidKey(v12) )
  {
    Host = -1073741584;
LABEL_74:
    v19 = a6;
    goto LABEL_75;
  }
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
  {
    Host = -1073741583;
    goto LABEL_74;
  }
  v19 = a6;
  if ( !a6 || ((a6 - 1) & a6) != 0 || (_BitScanForward(&v20, a6), v83 = v20, v20 >= 4) )
  {
    Host = -1073741580;
    goto LABEL_75;
  }
  if ( a7 == -1 )
  {
    Host = -1073741579;
    goto LABEL_75;
  }
  memset_0(v92, 0, 0x228uLL);
  v21 = v92;
  v22 = 232LL;
  while ( v22 != -2147483414 )
  {
    v23 = *(_WORD *)((char *)v21 + (char *)v12 - v92);
    if ( !v23 )
      break;
    *v21++ = v23;
    if ( !--v22 )
    {
      --v21;
      break;
    }
  }
  *v21 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v94 = a5;
  v96 = a7;
  v95 = a6;
  v15 = DestinationSid;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v92, a8) )
  {
    Host = -1073741578;
    goto LABEL_75;
  }
  v24 = *(_DWORD *)a8;
  if ( (*(_DWORD *)a8 & 0x80000) == 0 || Process )
  {
    v25 = (v24 & 0x2000000) != 0;
    v17 = (v24 & 0x200000) != 0;
    v26 = *(struct _HOST_ACTIVITY_MANAGER **)v75;
    v27 = *(_QWORD *)v75;
    if ( v17 )
    {
      Host = RmHamFindHost(v27, v96, v25, v85);
      if ( Host >= 0 )
        v18 = v85[0];
      v73 = (struct _RM_HAM_ACTIVITY_HOST *)v18;
    }
    else
    {
      v79 = 0LL;
      v18 = 0LL;
      Host = RmHamFindOrCreateHost(v27);
      if ( Host < 0 || (Host = HampHostCheckCompletePackageInsertion(v79), Host < 0) )
      {
        v18 = 0LL;
      }
      else
      {
        v73 = 0LL;
        v79 = 0LL;
      }
    }
    if ( Host < 0 )
      goto LABEL_60;
    v29 = HampLockTrackerId;
    v30 = *(_QWORD *)(*(_QWORD *)(v18 + 792) + 88LL);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v29) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared(v30 + 304);
    v32 = *(_BYTE *)(v30 + 340) & 1;
    if ( HampLockTrackerId != -1 )
    {
      v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v34 = *v33;
      if ( (*v33 & 0x40) == 0 )
        __int2c();
      v35 = v33[7]-- == 1;
      if ( v35 )
        *v33 = v34 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    RtlReleaseSRWLockShared(v30 + 304);
    if ( v32
      && (unsigned int)dword_1800DC218 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 0x400000000008LL, v36, v37) )
    {
      v38 = v73;
      v85[1] = 0x1000000LL;
      v85[2] = *((_QWORD *)v73 - 4);
      v85[3] = (char *)v73 + 24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v70,
        &unk_1800BEC05);
    }
    else
    {
      v38 = v73;
    }
    if ( Process )
    {
      v66 = HampHostFindByProcessHandle(v26, Process, v25, &v80, &v86);
      Host = v66;
      if ( v66 == -1073741275 )
      {
        Host = -1058275323;
      }
      else if ( v66 >= 0 )
      {
        if ( v38 == v80 )
        {
          v67 = v75;
          v68 = v74;
          *((_DWORD *)v74 + 92) &= ~0x20u;
          *((_QWORD *)v68 + 41) = 0LL;
          *((_QWORD *)v68 + 42) = 0LL;
          *((_QWORD *)v68 + 43) = 0LL;
          *((_QWORD *)v68 + 44) = 0LL;
          *((_QWORD *)v68 + 40) |= 0xFuLL;
          v71 = 1;
          v69 = HampActCreate(v67, v26, v38, v68, 0, 0LL, &v76);
        }
        else
        {
          v69 = HampDepGroupAddDonationDependency(v75, v80, v86, v38, v74, &v76);
        }
        Host = v69;
        if ( v69 < 0 )
          goto LABEL_114;
        v40 = v76;
        goto LABEL_57;
      }
    }
    else
    {
      Heap = (struct _HAM_ACTIVITY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
      v40 = Heap;
      if ( Heap )
      {
        HampActInitialize(v26, v74, v38, 0LL, Heap);
        v41 = *((_QWORD *)v40 + 4);
        *((_QWORD *)v40 + 8) = v75;
        ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v98);
        Host = HampSystemQueryPolicyInfo(
                 (struct _HOST_ACTIVITY_MANAGER *)((v41 & 0xFFFFFFFFFFFFFFFCuLL) - 216),
                 (const unsigned __int16 *)v40 + 126,
                 (struct ExecutionModel::_ResourceSetInfo *)v98);
        if ( Host < 0 )
          goto LABEL_129;
        ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
          (struct _HAM_ACTIVITY *)((char *)v40 + 392),
          (struct _RM_RESOURCE_SET_PROPERTIES *)v98,
          v42);
        if ( (*(_BYTE *)(v43 + 40) & 0x10) != 0 && *(_QWORD *)(v43 + 80) < *(_QWORD *)(v43 + 64) )
        {
          Host = -1073741811;
          goto LABEL_129;
        }
        RtlInitializeBitMap(&BitMapHeader, (PULONG)v40 + 124, 0x2Fu);
        v44 = (int *)&v99;
        for ( i = 0; i < 0x2F; ++i )
        {
          if ( *v44 < 101 )
            RtlSetBit(&BitMapHeader, i);
          ++v44;
        }
        v46 = *((_DWORD *)v40 + 28);
        if ( (v98[42] & 7) == 4 )
          v46 |= 0x80000u;
        *((_DWORD *)v40 + 28) = v46 & 0xFFF7FFFF;
        v47 = operator new(0x20uLL);
        if ( !v47 )
        {
          Host = -1073741801;
          goto LABEL_129;
        }
        v47[1] = v40;
        *v47 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
        *((_DWORD *)v47 + 6) = 1;
        v47[2] = -1LL;
        *((_QWORD *)v40 + 11) = v47;
        Host = HampActInsert(v40);
        if ( Host < 0 )
        {
LABEL_129:
          CemRcObjectDereference(v40);
LABEL_114:
          v40 = v76;
LABEL_58:
          if ( v40 )
            CemRcObjectDereference(v40);
          goto LABEL_60;
        }
        v76 = v40;
LABEL_57:
        Host = 0;
        v84 = *((_QWORD *)v40 + 5);
        *v82 = v84;
        goto LABEL_58;
      }
      Host = -1073741801;
    }
LABEL_60:
    v48 = v73;
    if ( v73 )
    {
      v49 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v50 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v49) )
          __int2c();
        *v50 |= 1uLL;
        ++v50[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DD4E8 = GetCurrentThreadId();
      v35 = (*((_QWORD *)v48 + 75))-- == 1LL;
      if ( v35 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v48 - 64));
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v51 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v52 = *v51;
        if ( (*v51 & 1) == 0 )
          __int2c();
        v35 = v51[1]-- == 1;
        if ( v35 )
          *v51 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
    v53 = v80;
    if ( v80 )
    {
      RmpAcquireGlobalLock();
      v35 = (*((_QWORD *)v53 + 75))-- == 1LL;
      if ( v35 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v53 - 64));
      RmpReleaseGlobalLock();
    }
    v11 = v74;
    v12 = v78;
    goto LABEL_74;
  }
  Host = -1073741776;
LABEL_75:
  v54 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v54, 0LL);
  }
  if ( Process )
    ProcessId = GetProcessId(Process);
  else
    ProcessId = 0;
  if ( !v15 )
    v15 = (char *)RmSvcGlobals + 3156;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v72 = v71;
    v81 = ProcessId;
    LODWORD(v82) = 0;
    if ( v75 )
      v56 = *((_DWORD *)v75 + 37);
    else
      v56 = 0;
    LODWORD(v78) = v56;
    v57 = (const unsigned __int16 *)((char *)v11 + 140);
    v58 = (const unsigned __int16 *)((char *)v11 + 12);
    LODWORD(Process) = *(_DWORD *)v11;
    v87 = a7;
    v88 = v84;
    LODWORD(v75) = v19;
    LODWORD(v74) = Host;
    v59 = (unsigned __int8)v15[1];
    v135 = v15;
    v137 = 0;
    v134 = 1LL;
    v132 = 4LL;
    v136 = 4 * v59 + 8;
    v133 = &v72;
    v131 = &v81;
    v129 = &v82;
    v127 = &v78;
    p_Process = &Process;
    v130 = 4LL;
    v128 = 4LL;
    v126 = 4LL;
    if ( v11 == (struct _HAM_ACTIVITY_PROPERTIES *)-140LL )
    {
      v57 = &word_1800B7A9C;
      v61 = 2;
    }
    else
    {
      v60 = -1LL;
      do
        v35 = v57[++v60] == 0;
      while ( !v35 );
      v61 = 2 * v60 + 2;
    }
    v122 = v57;
    v123 = v61;
    v124 = 0;
    if ( v11 == (struct _HAM_ACTIVITY_PROPERTIES *)-12LL )
    {
      v58 = &word_1800B7A9C;
      v63 = 2;
    }
    else
    {
      v62 = -1LL;
      do
        v35 = v58[++v62] == 0;
      while ( !v35 );
      v63 = 2 * v62 + 2;
    }
    v119 = v58;
    v117 = &v87;
    v115 = &v75;
    v120 = v63;
    v121 = 0;
    v118 = 8LL;
    v116 = 4LL;
    if ( v12 )
    {
      do
        v35 = v12[++v16] == 0;
      while ( !v35 );
      v64 = 2 * v16 + 2;
    }
    else
    {
      v12 = &word_1800B7A9C;
      v64 = 2;
    }
    v113 = v64;
    v114 = 0;
    v110 = &v88;
    v112 = v12;
    v108 = &v74;
    *(_DWORD *)&v90.Level = 516;
    v104.Ptr = (ULONGLONG)off_1800DC220;
    v111 = 8LL;
    v109 = 4LL;
    *(_DWORD *)&v90.Id = 184549376;
    v90.Keyword = 8LL;
    v104.Size = *(unsigned __int16 *)off_1800DC220;
    v105 = &unk_1800BF1CF;
    v104.Reserved = 2;
    v106 = 190;
    v107 = 1;
    v83 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v90, 0LL, 0LL, 0xFu, &v104);
  }
  return (unsigned int)Host;
}
