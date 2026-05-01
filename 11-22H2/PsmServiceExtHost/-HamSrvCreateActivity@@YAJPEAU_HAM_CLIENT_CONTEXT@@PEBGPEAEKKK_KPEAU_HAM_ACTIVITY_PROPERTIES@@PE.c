/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x18002F110 (HamRpcSrvCreateActivity.c)
 *     ?HampInProcCreateActivity@@YAJPEAXPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@0PEA_K@Z @ 0x18004AED0 (-HampInProcCreateActivity@@YAJPEAXPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@0PEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U2@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@34553433AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800015E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U2@U1.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180030590 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800309B0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180031260 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180031520 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180032ADC (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800371DC (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x1800395E0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A284 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003B268 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AA48 (--2@YAPEAX_K@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180070C00 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        signed __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  struct _HAM_ACTIVITY_PROPERTIES *v10; // r15
  unsigned int v11; // esi
  DWORD v12; // ebx
  struct _HAM_CLIENT_CONTEXT *v14; // r13
  __int64 v15; // rdi
  bool v16; // cf
  struct _RM_HAM_ACTIVITY_HOST *v17; // r12
  int Host; // ebx
  char *v19; // r14
  int v20; // ebx
  unsigned int v21; // eax
  signed __int64 v22; // r9
  _WORD *v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // ax
  _WORD *v26; // rax
  int v27; // edx
  struct _HOST_ACTIVITY_MANAGER *v28; // r13
  int v29; // r15d
  DWORD v30; // r14d
  __int64 v31; // r12
  _QWORD *Value; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  DWORD v35; // r14d
  _QWORD *v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rcx
  DWORD v41; // r14d
  _QWORD *v42; // rbx
  __int64 *v43; // rax
  __int64 v44; // rcx
  DWORD v45; // r15d
  _QWORD *v46; // r14
  DWORD CurrentThreadId; // eax
  DWORD v48; // ecx
  __int64 *v49; // rax
  __int64 v50; // rdx
  DWORD v51; // esi
  __int64 v52; // r14
  _QWORD *v53; // rbx
  char v54; // bl
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  char *Heap; // rax
  char *v59; // r14
  signed __int64 v60; // rax
  _QWORD *v61; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v62; // rax
  __int64 v63; // r15
  __int64 v64; // rdx
  __int128 v65; // xmm0
  DWORD v66; // esi
  _QWORD *v67; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v68; // rbx
  __int64 v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v72; // rax
  __int64 v73; // rax
  DWORD v74; // ecx
  __int64 v75; // rbx
  __int64 v76; // rdx
  ExecutionModel::_ResourceInfo *v77; // rbx
  __int64 v78; // r13
  __int64 v79; // rsi
  unsigned __int64 v80; // r13
  ExecutionModel::_ResourceInfo *v81; // rbx
  struct ExecutionModel::_ResourceSetInfo *v82; // r8
  __int64 v83; // rdx
  _DWORD *v84; // rcx
  _DWORD *v85; // rax
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int64 v100; // rax
  __int64 v101; // rcx
  ULONG v102; // ebx
  int *v103; // rsi
  _QWORD *v104; // rax
  int v105; // eax
  struct _HAM_CLIENT_CONTEXT *v106; // rcx
  int v107; // eax
  struct _HAM_ACTIVITY *v108; // rsi
  struct _HAM_CLIENT_CONTEXT *v109; // rax
  signed __int64 v110; // rcx
  bool v111; // zf
  struct _HAM_CLIENT_CONTEXT *v112; // rtt
  unsigned __int64 v113; // r14
  signed __int64 v114; // rax
  bool v115; // cc
  signed __int64 v116; // rax
  struct _RM_HAM_ACTIVITY_HOST *v117; // r15
  DWORD v118; // r14d
  _QWORD *v119; // rsi
  signed __int64 *v120; // rax
  struct _RM_HAM_ACTIVITY_HOST *v121; // rsi
  struct _RM_ACTIVITY_HOST *v122; // rcx
  DWORD v123; // esi
  DWORD ProcessId; // edx
  char v126; // [rsp+90h] [rbp-80h]
  bool v127; // [rsp+91h] [rbp-7Fh]
  char v128[6]; // [rsp+92h] [rbp-7Eh] BYREF
  struct _HAM_ACTIVITY *v129; // [rsp+98h] [rbp-78h] BYREF
  struct _HAM_CLIENT_CONTEXT *v130; // [rsp+A0h] [rbp-70h] BYREF
  struct _HAM_ACTIVITY_PROPERTIES *v131; // [rsp+A8h] [rbp-68h] BYREF
  HANDLE Process; // [rsp+B0h] [rbp-60h] BYREF
  char *v133; // [rsp+B8h] [rbp-58h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v134; // [rsp+C0h] [rbp-50h]
  struct _RM_HAM_ACTIVITY_HOST *v135; // [rsp+C8h] [rbp-48h] BYREF
  DWORD v136; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 *v137; // [rsp+D8h] [rbp-38h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v138; // [rsp+E0h] [rbp-30h]
  signed __int64 v139; // [rsp+E8h] [rbp-28h]
  char *v140; // [rsp+F0h] [rbp-20h]
  unsigned int v141; // [rsp+F8h] [rbp-18h]
  struct _RM_HAM_ACTIVITY_HOST *v142[4]; // [rsp+100h] [rbp-10h] BYREF
  unsigned __int64 v143; // [rsp+120h] [rbp+10h] BYREF
  char *v144; // [rsp+128h] [rbp+18h] BYREF
  __int64 v145; // [rsp+130h] [rbp+20h] BYREF
  const unsigned __int16 *v146; // [rsp+138h] [rbp+28h] BYREF
  const unsigned __int16 *v147; // [rsp+140h] [rbp+30h] BYREF
  unsigned __int64 v148; // [rsp+148h] [rbp+38h] BYREF
  signed __int64 v149; // [rsp+150h] [rbp+40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+158h] [rbp+48h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+168h] [rbp+58h] BYREF
  _DWORD v152[6]; // [rsp+180h] [rbp+70h] BYREF
  __int128 v153; // [rsp+198h] [rbp+88h]
  __int16 v154; // [rsp+1A8h] [rbp+98h]
  char v155; // [rsp+1AAh] [rbp+9Ah]
  int v156; // [rsp+1ACh] [rbp+9Ch]
  int v157; // [rsp+1B0h] [rbp+A0h]
  __int64 v158; // [rsp+1B8h] [rbp+A8h]
  __int64 v159; // [rsp+1C0h] [rbp+B0h]
  int v160; // [rsp+1C8h] [rbp+B8h]
  _DWORD v161[20]; // [rsp+1D0h] [rbp+C0h] BYREF
  _OWORD v162[12]; // [rsp+220h] [rbp+110h] BYREF
  int v163; // [rsp+2E0h] [rbp+1D0h]
  __int64 v164; // [rsp+2E8h] [rbp+1D8h]
  int v165; // [rsp+2F4h] [rbp+1E4h]
  _DWORD v166[6]; // [rsp+300h] [rbp+1F0h] BYREF
  __int128 v167; // [rsp+318h] [rbp+208h]
  __int16 v168; // [rsp+328h] [rbp+218h]
  char v169; // [rsp+32Ah] [rbp+21Ah]
  int v170; // [rsp+32Ch] [rbp+21Ch]
  int v171; // [rsp+330h] [rbp+220h]
  __int64 v172; // [rsp+338h] [rbp+228h]
  __int64 v173; // [rsp+340h] [rbp+230h]
  int v174; // [rsp+348h] [rbp+238h]
  _DWORD v175[20]; // [rsp+350h] [rbp+240h] BYREF
  __m128i si128; // [rsp+3A0h] [rbp+290h]
  __m128i v177; // [rsp+3B0h] [rbp+2A0h]
  __m128i v178; // [rsp+3C0h] [rbp+2B0h]
  __m128i v179; // [rsp+3D0h] [rbp+2C0h]
  __m128i v180; // [rsp+3E0h] [rbp+2D0h]
  __m128i v181; // [rsp+3F0h] [rbp+2E0h]
  __m128i v182; // [rsp+400h] [rbp+2F0h]
  __m128i v183; // [rsp+410h] [rbp+300h]
  __m128i v184; // [rsp+420h] [rbp+310h]
  __m128i v185; // [rsp+430h] [rbp+320h]
  __m128i v186; // [rsp+440h] [rbp+330h]
  __m128i v187; // [rsp+450h] [rbp+340h]
  int v188; // [rsp+460h] [rbp+350h]
  __int64 v189; // [rsp+468h] [rbp+358h]
  int v190; // [rsp+474h] [rbp+364h]
  _OWORD TlsValue[8]; // [rsp+480h] [rbp+370h] BYREF
  __int64 v192; // [rsp+500h] [rbp+3F0h]
  _BYTE v193[464]; // [rsp+510h] [rbp+400h] BYREF
  _BYTE DestinationSid[68]; // [rsp+6E0h] [rbp+5D0h] BYREF
  unsigned int v195; // [rsp+724h] [rbp+614h]
  unsigned int v196; // [rsp+728h] [rbp+618h]
  __int64 v197; // [rsp+730h] [rbp+620h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+740h] [rbp+630h] BYREF
  void *v199; // [rsp+750h] [rbp+640h]
  int v200; // [rsp+758h] [rbp+648h]
  int v201; // [rsp+75Ch] [rbp+64Ch]

  v10 = a8;
  v11 = a4;
  v12 = HampLockTrackerId;
  Process = a9;
  v14 = (struct _HAM_CLIENT_CONTEXT *)a1;
  v137 = a10;
  v133 = a2;
  v130 = (struct _HAM_CLIENT_CONTEXT *)a1;
  v131 = a8;
  v192 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, TlsValue);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v199 = &unk_1800C052B;
    UserData.Reserved = 2;
    v200 = 19;
    v201 = 1;
    LODWORD(v129) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v15 = 0LL;
  v16 = *(_DWORD *)a8 < 0x8000000u;
  v17 = 0LL;
  v129 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v126 = 0;
  v139 = -1LL;
  if ( !v16
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    *((_WORD *)a8 + 69) = 0;
    Host = -1073741578;
    *((_WORD *)a8 + 133) = 0;
    v19 = 0LL;
    goto LABEL_199;
  }
  if ( !HampClientIsActive(v14) )
  {
    Host = -1073741661;
LABEL_15:
    v19 = 0LL;
    goto LABEL_199;
  }
  if ( (unsigned __int8)PsmIsValidKey(v133) )
  {
    if ( v11 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == v11 )
    {
      if ( a6 && ((a6 - 1) & a6) == 0 && (_BitScanForward(&v21, a6), v141 = v21, v21 < 4) )
      {
        if ( a7 != -1 )
        {
          memset_0(v193, 0, 0x228uLL);
          v22 = v133 - v193;
          v23 = v193;
          v24 = 232LL;
          do
          {
            if ( v24 == -2147483414 )
              break;
            v25 = *(_WORD *)((char *)v23 + v22);
            if ( !v25 )
              break;
            *v23++ = v25;
            --v24;
          }
          while ( v24 );
          v26 = v23 - 1;
          if ( v24 )
            v26 = v23;
          *v26 = 0;
          RtlCopySid(0x44u, DestinationSid, a3);
          v195 = a5;
          v196 = a6;
          v197 = a7;
          goto LABEL_36;
        }
        v20 = -1073741580;
      }
      else
      {
        v20 = -1073741581;
      }
    }
    else
    {
      v20 = -1073741584;
    }
  }
  else
  {
    v20 = -1073741585;
  }
  Host = v20 + 1;
  if ( Host < 0 )
    goto LABEL_15;
LABEL_36:
  v19 = DestinationSid;
  v140 = DestinationSid;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v193, a8) )
  {
    Host = -1073741578;
    goto LABEL_199;
  }
  v27 = *(_DWORD *)a8;
  if ( (*(_DWORD *)a8 & 0x80000) != 0 && !Process )
  {
    Host = -1073741776;
    goto LABEL_199;
  }
  v127 = (v27 & 0x2000000) != 0;
  v28 = (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)v14 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                        - 48LL * *((unsigned __int8 *)v14 + 164)
                                        - 16);
  if ( (v27 & 0x200000) == 0 )
  {
    v138 = 0LL;
    Host = RmHamFindOrCreateHost(v28);
    if ( Host < 0 )
    {
LABEL_96:
      v10 = v131;
      goto LABEL_97;
    }
    v29 = 0;
    v30 = HampLockTrackerId;
    v31 = *(_QWORD *)(*((_QWORD *)v138 + 99) + 88LL);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockShared(0LL);
    if ( (MEMORY[0x298] & 0x800000000000LL) != 0 )
      goto LABEL_61;
    if ( HampLockTrackerId != -1 )
    {
      v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v34 = *v33;
      if ( (*v33 & 2) == 0 )
        __int2c();
      v111 = v33[2]-- == 1;
      if ( v111 )
        *v33 = v34 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(0LL);
    v29 = 1;
    HampPkgEnterInsertion((struct _HAM_PACKAGE *)v31);
    v35 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v36 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v36 |= 2uLL;
      ++v36[2];
    }
    RtlAcquireSRWLockShared(0LL);
    if ( (MEMORY[0x298] & 0x800000000000LL) != 0 )
    {
LABEL_61:
      Host = 0;
      if ( HampLockTrackerId != -1 )
      {
        v37 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v38 = *v37;
        if ( (*v37 & 2) == 0 )
          __int2c();
        v111 = v37[2]-- == 1;
        if ( v111 )
          *v37 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(0LL);
      if ( !v29 )
        goto LABEL_94;
    }
    else
    {
      if ( HampLockTrackerId != -1 )
      {
        v39 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v40 = *v39;
        if ( (*v39 & 2) == 0 )
          __int2c();
        v111 = v39[2]-- == 1;
        if ( v111 )
          *v39 = v40 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(0LL);
      Host = HampHostCompletePackageInsertion(0LL);
      if ( Host >= 0 )
      {
        v41 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v42 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v42 |= 2uLL;
          ++v42[2];
        }
        RtlAcquireSRWLockExclusive(0LL);
        MEMORY[8] = GetCurrentThreadId();
        MEMORY[0x298] |= 0x800000000000uLL;
        if ( HampLockTrackerId != -1 )
        {
          v43 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v44 = *v43;
          if ( (*v43 & 2) == 0 )
            __int2c();
          v111 = v43[2]-- == 1;
          if ( v111 )
            *v43 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        MEMORY[8] = 0;
        RtlReleaseSRWLockExclusive(0LL);
        Host = 0;
      }
    }
    v45 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v46 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v46 |= 0x40uLL;
      ++v46[7];
    }
    RtlAcquireSRWLockExclusive(v31 + 304);
    CurrentThreadId = GetCurrentThreadId();
    v48 = HampLockTrackerId;
    *(_DWORD *)(v31 + 312) = CurrentThreadId;
    *(_DWORD *)(v31 + 336) = 0;
    if ( v48 != -1 )
    {
      v49 = (__int64 *)TlsGetValue(v48);
      v50 = *v49;
      if ( (*v49 & 0x40) == 0 )
        __int2c();
      v111 = v49[7]-- == 1;
      if ( v111 )
        *v49 = v50 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *(_DWORD *)(v31 + 312) = 0;
    RtlReleaseSRWLockExclusive(v31 + 304);
    RtlWakeAddressSingle(v31 + 336);
LABEL_94:
    v17 = 0LL;
    if ( Host >= 0 )
    {
      v134 = 0LL;
      v138 = 0LL;
    }
    goto LABEL_96;
  }
  Host = RmHamFindHost((__int64)v28, v197, (v27 & 0x2000000) != 0, v142);
  if ( Host >= 0 )
    v17 = v142[0];
  v134 = v17;
LABEL_97:
  if ( Host >= 0 )
  {
    v51 = HampLockTrackerId;
    v52 = *(_QWORD *)(*((_QWORD *)v17 + 99) + 88LL);
    if ( HampLockTrackerId != -1 )
    {
      v53 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v51) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v53 |= 0x40uLL;
      ++v53[7];
    }
    RtlAcquireSRWLockShared(v52 + 304);
    v54 = *(_BYTE *)(v52 + 340) & 1;
    if ( HampLockTrackerId != -1 )
    {
      v55 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v56 = *v55;
      if ( (*v55 & 0x40) == 0 )
        __int2c();
      v111 = v55[7]-- == 1;
      if ( v111 )
        *v55 = v56 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    RtlReleaseSRWLockShared(v52 + 304);
    if ( v54 && (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
    {
      v142[2] = *((struct _RM_HAM_ACTIVITY_HOST **)v17 - 4);
      v142[3] = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v17 + 24);
      v142[1] = (struct _RM_HAM_ACTIVITY_HOST *)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v57,
        &unk_1800C1A24);
    }
    if ( !Process )
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
      v59 = Heap;
      if ( !Heap )
      {
        Host = -1073741801;
        goto LABEL_165;
      }
      memset_0(Heap + 40, 0, 0x210uLL);
      *(_QWORD *)v59 = 0LL;
      *((_QWORD *)v59 + 1) = 0LL;
      *((_QWORD *)v59 + 4) = (char *)v28 + 440;
      *((_QWORD *)v59 + 3) = 1LL;
      *((_QWORD *)v59 + 2) = -1LL;
      v60 = _InterlockedIncrement64(&qword_1800DC518);
      if ( (v60 & 0xFE00000000000000uLL) != 0 )
        __fastfail(0xC0000095);
      *((_WORD *)v59 + 281) = 1536;
      v61 = v59 + 112;
      *((_QWORD *)v59 + 5) = v60 | 0x1A00000000000000LL;
      v62 = v10;
      v63 = 3LL;
      v64 = 3LL;
      do
      {
        v61 += 16;
        v65 = *(_OWORD *)v62;
        v62 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v62 + 128);
        *((_OWORD *)v61 - 8) = v65;
        *((_OWORD *)v61 - 7) = *((_OWORD *)v62 - 7);
        *((_OWORD *)v61 - 6) = *((_OWORD *)v62 - 6);
        *((_OWORD *)v61 - 5) = *((_OWORD *)v62 - 5);
        *((_OWORD *)v61 - 4) = *((_OWORD *)v62 - 4);
        *((_OWORD *)v61 - 3) = *((_OWORD *)v62 - 3);
        *((_OWORD *)v61 - 2) = *((_OWORD *)v62 - 2);
        *((_OWORD *)v61 - 1) = *((_OWORD *)v62 - 1);
        --v64;
      }
      while ( v64 );
      v66 = HampLockTrackerId;
      *v61 = *(_QWORD *)v62;
      if ( v66 != -1 )
      {
        v67 = TlsGetValue(v66);
        if ( *(_QWORD *)TlsGetValue(v66) )
          __int2c();
        *v67 |= 1uLL;
        ++v67[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      v68 = v134;
      dword_1800DC590 = GetCurrentThreadId();
      v69 = *((_QWORD *)v134 + 75);
      if ( !v69 )
        __int2c();
      if ( *((int *)v134 - 10) >= 0 )
        *((_QWORD *)v134 + 75) = v69 + 1;
      *((_QWORD *)v59 + 10) = v68;
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v70 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v71 = *v70;
        if ( (*v70 & 1) == 0 )
          __int2c();
        v111 = v70[1]-- == 1;
        if ( v111 )
          *v70 = v71 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v72 = v131;
      *((_QWORD *)v59 + 64) = 0LL;
      if ( (*(_DWORD *)v72 & 0x40000) != 0 )
      {
        HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v59 + 10));
        v73 = *((_QWORD *)v68 + 102);
        v74 = HampLockTrackerId;
        v75 = *((_QWORD *)v59 + 10);
        *((_QWORD *)v59 + 65) = v73;
        CempLockTrackerMarkReleased(v74, v76, 1u);
        RtlReleaseSRWLockShared(v75);
      }
      else
      {
        *((_QWORD *)v59 + 65) = 0LL;
      }
      v77 = (ExecutionModel::_ResourceInfo *)v161;
      v78 = *((_QWORD *)v59 + 4);
      v79 = 3LL;
      *((_QWORD *)v59 + 8) = v130;
      v80 = v78 & 0xFFFFFFFFFFFFFFFCuLL;
      v152[0] = -1;
      v152[1] = 0;
      v152[2] = 101;
      v152[3] = 32;
      v157 = 0;
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0;
      do
      {
        ExecutionModel::_ResourceInfo::_ResourceInfo(v77);
        v77 = (ExecutionModel::_ResourceInfo *)((char *)v77 + 24);
        --v79;
      }
      while ( v79 );
      v81 = (ExecutionModel::_ResourceInfo *)v175;
      v162[0] = _mm_load_si128((const __m128i *)&_xmm);
      v162[1] = v162[0];
      v162[2] = v162[0];
      v162[3] = v162[0];
      v162[4] = v162[0];
      v162[5] = v162[0];
      v162[6] = v162[0];
      v162[7] = v162[0];
      v162[8] = v162[0];
      v162[9] = v162[0];
      v162[10] = v162[0];
      v162[11] = v162[0];
      v153 = 0LL;
      DWORD2(v153) = 101;
      v163 = 0;
      v164 = 0LL;
      v161[6] = 1;
      v161[0] = 0;
      v161[12] = 2;
      v161[18] = 101;
      v161[19] = 101;
      v165 = 0;
      v154 = 0;
      v155 = 0;
      v156 = 1;
      v152[4] = 0;
      v166[0] = -1;
      v166[1] = 0;
      v166[2] = 101;
      v166[3] = 32;
      v171 = 0;
      v172 = 0LL;
      v173 = 0LL;
      v174 = 0;
      do
      {
        ExecutionModel::_ResourceInfo::_ResourceInfo(v81);
        v81 = (ExecutionModel::_ResourceInfo *)((char *)v81 + 24);
        --v63;
      }
      while ( v63 );
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v83 = 2LL;
      v177 = si128;
      v178 = si128;
      v179 = si128;
      v180 = si128;
      v181 = si128;
      v182 = si128;
      v183 = si128;
      v184 = si128;
      v185 = si128;
      v186 = si128;
      v187 = si128;
      v167 = 0LL;
      DWORD2(v167) = 101;
      v188 = 0;
      v189 = 0LL;
      v175[6] = 1;
      v175[0] = 0;
      v175[12] = 2;
      v175[18] = 101;
      v175[19] = 101;
      v190 = 0;
      v168 = 0;
      v169 = 0;
      v170 = 1;
      v166[4] = 0;
      if ( *((_WORD *)v59 + 126) )
      {
        Host = RmRpsQueryResourceSetInfo(*(_QWORD *)(v80 - 2024), v59 + 252, v166);
        if ( Host < 0 )
          goto LABEL_156;
        v83 = 2LL;
      }
      v84 = v152;
      v85 = v166;
      do
      {
        v84 += 32;
        v86 = *(_OWORD *)v85;
        v87 = *((_OWORD *)v85 + 1);
        v85 += 32;
        *((_OWORD *)v84 - 8) = v86;
        v88 = *((_OWORD *)v85 - 6);
        *((_OWORD *)v84 - 7) = v87;
        v89 = *((_OWORD *)v85 - 5);
        *((_OWORD *)v84 - 6) = v88;
        v90 = *((_OWORD *)v85 - 4);
        *((_OWORD *)v84 - 5) = v89;
        v91 = *((_OWORD *)v85 - 3);
        *((_OWORD *)v84 - 4) = v90;
        v92 = *((_OWORD *)v85 - 2);
        *((_OWORD *)v84 - 3) = v91;
        v93 = *((_OWORD *)v85 - 1);
        *((_OWORD *)v84 - 2) = v92;
        *((_OWORD *)v84 - 1) = v93;
        --v83;
      }
      while ( v83 );
      v94 = *((_OWORD *)v85 + 1);
      *(_OWORD *)v84 = *(_OWORD *)v85;
      v95 = *((_OWORD *)v85 + 2);
      *((_OWORD *)v84 + 1) = v94;
      v96 = *((_OWORD *)v85 + 3);
      *((_OWORD *)v84 + 2) = v95;
      v97 = *((_OWORD *)v85 + 4);
      *((_OWORD *)v84 + 3) = v96;
      v98 = *((_OWORD *)v85 + 5);
      *((_OWORD *)v84 + 4) = v97;
      v99 = *((_OWORD *)v85 + 6);
      v100 = *((_QWORD *)v85 + 14);
      *((_OWORD *)v84 + 5) = v98;
      *((_OWORD *)v84 + 6) = v99;
      *((_QWORD *)v84 + 14) = v100;
      ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
        (ExecutionModel *)(v59 + 392),
        (struct _RM_RESOURCE_SET_PROPERTIES *)v152,
        v82);
      if ( (*(_BYTE *)(v101 + 40) & 0x10) != 0 && *(_QWORD *)(v101 + 80) < *(_QWORD *)(v101 + 64) )
      {
        Host = -1073741811;
        CemRcObjectDereference(v59);
        goto LABEL_165;
      }
      RtlInitializeBitMap(&BitMapHeader, (PULONG)v59 + 124, 0x2Fu);
      v102 = 0;
      v103 = (int *)v162 + 1;
      do
      {
        if ( *v103 < 101 )
          RtlSetBit(&BitMapHeader, v102);
        ++v102;
        ++v103;
      }
      while ( v102 < 0x2F );
      if ( (v155 & 7) == 4 )
        *((_DWORD *)v59 + 28) |= 0x80000u;
      *((_DWORD *)v59 + 28) &= ~0x80000u;
      v104 = operator new(0x20uLL);
      if ( v104 )
      {
        v104[1] = v59;
        *v104 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
        *((_DWORD *)v104 + 6) = 1;
        v104[2] = -1LL;
        *((_QWORD *)v59 + 11) = v104;
        Host = HampActInsert((struct _HAM_ACTIVITY *)v59);
        if ( Host >= 0 )
        {
          v129 = (struct _HAM_ACTIVITY *)v59;
          goto LABEL_164;
        }
      }
      else
      {
        Host = -1073741801;
      }
LABEL_156:
      CemRcObjectDereference(v59);
      goto LABEL_165;
    }
    v105 = HampHostFindByProcessHandle(v28, Process, v127, &v135, &v143);
    Host = v105;
    if ( v105 == -1073741275 )
    {
      Host = -1058275323;
    }
    else if ( v105 >= 0 )
    {
      v106 = v130;
      if ( v17 == v135 )
      {
        *((_DWORD *)v10 + 92) &= ~0x20u;
        *((_QWORD *)v10 + 40) |= 0xFuLL;
        *((_QWORD *)v10 + 41) = 0LL;
        *((_QWORD *)v10 + 42) = 0LL;
        *((_QWORD *)v10 + 43) = 0LL;
        *((_QWORD *)v10 + 44) = 0LL;
        v126 = 1;
        v107 = HampActCreate(v106, v28, v17, v10, 0, 0LL, &v129);
      }
      else
      {
        v107 = HampDepGroupAddDonationDependency(v130, v135, v143, v17, v10, &v129);
      }
      Host = v107;
      if ( v107 < 0 )
      {
LABEL_165:
        v108 = v129;
        if ( v129 )
        {
          _m_prefetchw((char *)v129 + 24);
          v109 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)v129 + 3);
          v110 = (signed __int64)v109 - 1;
          v111 = v109 == (struct _HAM_CLIENT_CONTEXT *)1;
          if ( (__int64)v109 - 1 <= 0 )
          {
LABEL_169:
            if ( !v111 )
              __fastfail(0xEu);
            v113 = *((_QWORD *)v129 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( *((_QWORD *)v129 + 2) == -1LL )
            {
              if ( _InterlockedDecrement64((volatile signed __int64 *)v108 + 3) <= -1 )
                __fastfail(0xEu);
              (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v113 + 24))(v129);
            }
            else
            {
              RtlAcquireSRWLockExclusive(v113 + 16);
              v114 = _InterlockedExchangeAdd64((volatile signed __int64 *)v108 + 3, 0xFFFFFFFFFFFFFFFFuLL);
              v115 = v114 <= 1;
              v116 = v114 - 1;
              if ( v115 )
              {
                if ( v116 )
                  __fastfail(0xEu);
                RtlReleaseSRWLockExclusive(v113 + 16);
                (*(void (__fastcall **)(struct _HAM_ACTIVITY *))(v113 + 24))(v129);
              }
              else
              {
                RtlReleaseSRWLockExclusive(v113 + 16);
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v112 = v109;
              v109 = (struct _HAM_CLIENT_CONTEXT *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v108 + 3,
                                                     v110,
                                                     (signed __int64)v109);
              a1 = (signed __int64)v109;
              if ( v112 == v109 )
                break;
              v110 = (signed __int64)v109 - 1;
              v111 = v109 == (struct _HAM_CLIENT_CONTEXT *)1;
              if ( (__int64)v109 - 1 <= 0 )
                goto LABEL_169;
            }
          }
        }
        goto LABEL_180;
      }
LABEL_164:
      Host = 0;
      a1 = *((_QWORD *)v129 + 5);
      v139 = a1;
      *v137 = a1;
      goto LABEL_165;
    }
  }
LABEL_180:
  v117 = v134;
  if ( v134 )
  {
    v118 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v119 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v118) )
        __int2c();
      *v119 |= 1uLL;
      ++v119[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DC590 = GetCurrentThreadId();
    v111 = (*((_QWORD *)v117 + 75))-- == 1LL;
    if ( v111 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v117 - 64));
    dword_1800DC590 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    a1 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v120 = (signed __int64 *)TlsGetValue(HampLockTrackerId);
      a1 = *v120;
      if ( (*v120 & 1) == 0 )
        __int2c();
      v111 = v120[1]-- == 1;
      if ( v111 )
      {
        a1 &= ~1uLL;
        *v120 = a1;
      }
    }
  }
  v121 = v135;
  if ( v135 )
  {
    RmpAcquireGlobalLock();
    v111 = (*((_QWORD *)v121 + 75))-- == 1LL;
    if ( v111 )
    {
      v122 = 0LL;
      if ( v121 )
        v122 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v121 - 64);
      RmpActivityHostCheckQueueDelete(v122);
    }
    RmpReleaseGlobalLock();
  }
  v19 = v140;
  v14 = v130;
  v10 = v131;
LABEL_199:
  v123 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v123, 0LL);
  }
  if ( Process )
    ProcessId = GetProcessId(Process);
  else
    ProcessId = 0;
  if ( !v19 )
    v19 = (char *)RmSvcGlobals + 3460;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v128[0] = v126;
    v144 = v19;
    v136 = ProcessId;
    LODWORD(v137) = 0;
    if ( v14 )
      v15 = *((_QWORD *)v14 + 19);
    LODWORD(Process) = *(_DWORD *)v10;
    v146 = (const unsigned __int16 *)((char *)v10 + 140);
    v147 = (const unsigned __int16 *)((char *)v10 + 12);
    v148 = a7;
    LODWORD(v131) = a6;
    v149 = v139;
    v145 = v15;
    LODWORD(v130) = Host;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSid<_SID>>(
      a1,
      (int)&unk_1800C100C,
      (__int64)a3,
      a4,
      (__int64)&v130,
      (__int64)&v149,
      (const unsigned __int16 **)&v133,
      (__int64)&v131,
      (__int64)&v148,
      &v147,
      &v146,
      (__int64)&Process,
      (__int64)&v145,
      (__int64)&v137,
      (__int64)&v136,
      (__int64)v128,
      (__int64 *)&v144);
  }
  return (unsigned int)Host;
}
