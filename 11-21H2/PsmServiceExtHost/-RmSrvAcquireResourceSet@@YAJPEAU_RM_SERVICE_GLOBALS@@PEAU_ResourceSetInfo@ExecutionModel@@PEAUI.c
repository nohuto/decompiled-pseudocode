/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HOST_GROUP@@_K@Z @ 0x180020D64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HOST_GROUP@@_K@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180039220 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180083000 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001F450 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001F7D0 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18008CD4C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        __int64 a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        __int64 a3,
        __int64 a4,
        wchar_t *a5,
        PSID Sid,
        int a7,
        int a8,
        __int64 a9,
        char a10,
        char a11,
        void *a12,
        void *a13,
        _BYTE *a14)
{
  const unsigned __int16 *v14; // rsi
  __int128 v17; // xmm0
  __int64 v18; // r12
  __int128 v19; // xmm1
  signed __int64 *v20; // r15
  __int128 v21; // xmm0
  ULONG v22; // eax
  struct ExecutionModel::_ResourceSetInfo *v23; // rdi
  __int16 v24; // ax
  signed int PackageFullNameFromKey; // r14d
  DWORD v26; // edi
  _QWORD *Value; // rbx
  __int64 v28; // rbx
  unsigned int v29; // r15d
  __int64 v30; // rdi
  __int64 v31; // r11
  __int64 v32; // r10
  int v33; // r14d
  __int64 *v34; // rax
  __int64 v35; // rcx
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  bool v38; // zf
  signed __int64 v39; // rtt
  _BYTE *v41; // rdx
  unsigned __int8 v42; // r15
  int v43; // eax
  DWORD v44; // ebx
  int v45; // eax
  int PartitionHandlesForPackage; // r14d
  volatile signed __int64 *v47; // rdi
  __int64 v48; // r15
  signed __int64 v49; // rax
  bool v50; // cc
  signed __int64 v51; // rax
  __int64 v52; // r8
  char v53; // [rsp+90h] [rbp-80h] BYREF
  struct ExecutionModel::_ResourceSetInfo *v54; // [rsp+98h] [rbp-78h] BYREF
  PVOID P; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+A8h] [rbp-68h]
  __int64 v57; // [rsp+B0h] [rbp-60h]
  int v58; // [rsp+B8h] [rbp-58h]
  unsigned int v59; // [rsp+BCh] [rbp-54h] BYREF
  _BYTE *v60; // [rsp+C0h] [rbp-50h] BYREF
  HANDLE v61; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp-38h] BYREF
  int v64; // [rsp+E0h] [rbp-30h] BYREF
  int v65; // [rsp+E4h] [rbp-2Ch] BYREF
  BOOL v66; // [rsp+E8h] [rbp-28h] BYREF
  int v67; // [rsp+ECh] [rbp-24h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+100h] [rbp-10h] BYREF
  __int64 v71; // [rsp+108h] [rbp-8h] BYREF
  __int64 v72; // [rsp+110h] [rbp+0h] BYREF
  __int64 v73; // [rsp+118h] [rbp+8h] BYREF
  void *v74; // [rsp+120h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+128h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR v76; // [rsp+138h] [rbp+28h] BYREF
  EVENT_DESCRIPTOR v77; // [rsp+148h] [rbp+38h] BYREF
  char *v78; // [rsp+158h] [rbp+48h]
  __int16 v79; // [rsp+160h] [rbp+50h] BYREF
  void *v80; // [rsp+170h] [rbp+60h]
  _OWORD v81[4]; // [rsp+180h] [rbp+70h] BYREF
  int v82; // [rsp+1C0h] [rbp+B0h]
  _BYTE TlsValue[144]; // [rsp+1D0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+260h] [rbp+150h] BYREF
  void *v85; // [rsp+270h] [rbp+160h]
  int v86; // [rsp+278h] [rbp+168h]
  int v87; // [rsp+27Ch] [rbp+16Ch]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+280h] [rbp+170h] BYREF
  void *v89; // [rsp+290h] [rbp+180h]
  int v90; // [rsp+298h] [rbp+188h]
  int v91; // [rsp+29Ch] [rbp+18Ch]
  __int16 *v92; // [rsp+2A0h] [rbp+190h]
  __int64 v93; // [rsp+2A8h] [rbp+198h]
  char *v94; // [rsp+2B0h] [rbp+1A0h]
  __int64 v95; // [rsp+2B8h] [rbp+1A8h]
  _OWORD *v96; // [rsp+2C0h] [rbp+1B0h]
  int v97; // [rsp+2C8h] [rbp+1B8h]
  int v98; // [rsp+2CCh] [rbp+1BCh]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+2D0h] [rbp+1C0h] BYREF
  void *v100; // [rsp+2E0h] [rbp+1D0h]
  int v101; // [rsp+2E8h] [rbp+1D8h]
  int v102; // [rsp+2ECh] [rbp+1DCh]
  struct ExecutionModel::_ResourceSetInfo **v103; // [rsp+2F0h] [rbp+1E0h]
  __int64 v104; // [rsp+2F8h] [rbp+1E8h]
  void **v105; // [rsp+300h] [rbp+1F0h]
  __int64 v106; // [rsp+308h] [rbp+1F8h]
  const unsigned __int16 *v107; // [rsp+310h] [rbp+200h]
  int v108; // [rsp+318h] [rbp+208h]
  int v109; // [rsp+31Ch] [rbp+20Ch]
  _BYTE **v110; // [rsp+320h] [rbp+210h]
  __int64 v111; // [rsp+328h] [rbp+218h]
  __int64 *v112; // [rsp+330h] [rbp+220h]
  __int64 v113; // [rsp+338h] [rbp+228h]
  __int64 *v114; // [rsp+340h] [rbp+230h]
  __int64 v115; // [rsp+348h] [rbp+238h]
  __int64 *v116; // [rsp+350h] [rbp+240h]
  __int64 v117; // [rsp+358h] [rbp+248h]
  __int64 *v118; // [rsp+360h] [rbp+250h]
  __int64 v119; // [rsp+368h] [rbp+258h]
  __int64 *v120; // [rsp+370h] [rbp+260h]
  __int64 v121; // [rsp+378h] [rbp+268h]
  char *v122; // [rsp+380h] [rbp+270h]
  __int64 v123; // [rsp+388h] [rbp+278h]
  __int64 *v124; // [rsp+390h] [rbp+280h]
  __int64 v125; // [rsp+398h] [rbp+288h]
  int *v126; // [rsp+3A0h] [rbp+290h]
  __int64 v127; // [rsp+3A8h] [rbp+298h]
  BOOL *v128; // [rsp+3B0h] [rbp+2A0h]
  __int64 v129; // [rsp+3B8h] [rbp+2A8h]
  int *v130; // [rsp+3C0h] [rbp+2B0h]
  __int64 v131; // [rsp+3C8h] [rbp+2B8h]
  _BYTE v132[464]; // [rsp+3D0h] [rbp+2C0h] BYREF

  v14 = a5;
  v69 = a4;
  v68 = a3;
  v54 = a2;
  v60 = a14;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v44 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v44, TlsValue);
    }
    v58 = 1;
  }
  else
  {
    v58 = 0;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v85 = &unk_1800C2D48;
    UserData.Reserved = 2;
    v86 = 23;
    v87 = 1;
    v56 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v17 = *(_OWORD *)(a1 + 3156);
  v18 = 0LL;
  v19 = *(_OWORD *)(a1 + 3172);
  v20 = 0LL;
  v82 = *(_DWORD *)(a1 + 3220);
  v81[0] = v17;
  v21 = *(_OWORD *)(a1 + 3188);
  v81[1] = v19;
  v81[2] = v21;
  v56 = 0;
  v62 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v61 = 0LL;
  v81[3] = *(_OWORD *)(a1 + 3204);
  if ( a8 != 2 && a8 != 4 && a8 != 8 )
  {
    PackageFullNameFromKey = -1073741578;
LABEL_108:
    v23 = v54;
    goto LABEL_109;
  }
  if ( !a5 )
  {
    PackageFullNameFromKey = -1073741581;
    goto LABEL_108;
  }
  if ( !Sid )
    goto LABEL_107;
  if ( a9 == -1 )
  {
    PackageFullNameFromKey = -1073741577;
    goto LABEL_108;
  }
  if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) > 0x44 )
  {
LABEL_107:
    PackageFullNameFromKey = -1073741580;
    goto LABEL_108;
  }
  memset_0(v81, 0, 0x44uLL);
  v22 = RtlLengthSid(Sid);
  memcpy_0(v81, Sid, v22);
  v23 = v54;
  if ( !RmpResourceSetInfoIsValid(v54) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_109;
  }
  v24 = *((_WORD *)v54 + 8);
  if ( (v24 & 0x200) != 0 && (*(_BYTE *)(a1 + 508) & 8) == 0 || (v24 & 0x500) == 0x400 )
  {
    PackageFullNameFromKey = -1073741585;
    goto LABEL_109;
  }
  if ( a12 == (void *)-1LL )
  {
    PackageFullNameFromKey = -1073741574;
    goto LABEL_109;
  }
  if ( (*((_BYTE *)v54 + 40) & 0x20) != 0 && !a3 )
  {
    PackageFullNameFromKey = -1073741583;
    goto LABEL_109;
  }
  if ( (a9 & 0xF000000000000000uLL) != 0x2000000000000000LL
    && (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v64 = 464;
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a5, v132, &v64);
    if ( PackageFullNameFromKey >= 0 )
    {
      PartitionHandlesForPackage = GetPartitionHandlesForPackage(v132, &Handle, &v61, &v59);
      if ( PartitionHandlesForPackage >= 0 )
      {
        if ( (v59 & 1) != 0 )
        {
          v45 = 1;
LABEL_82:
          if ( v45 )
            *((_BYTE *)v54 + 42) |= 0x80u;
          goto LABEL_23;
        }
LABEL_81:
        v45 = (int)v54;
        goto LABEL_82;
      }
      PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    }
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_109;
    goto LABEL_81;
  }
  Handle = (HANDLE)-2LL;
LABEL_23:
  if ( v61 )
  {
    if ( v61 == (HANDLE)-2LL )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_109;
    }
    if ( (int)NtCompareObjects(*(_QWORD *)(a1 + 360), v61) >= 0 )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_109;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_PARTITION_TABLE *)(a1 + 312),
                             Handle,
                             (struct _RM_PARTITION **)&P);
  if ( PackageFullNameFromKey >= 0 )
  {
    v26 = HampLockTrackerId;
    v56 = 1;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v26) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DD4E8 = GetCurrentThreadId();
    RtlAcquireSRWLockShared(a1 + 552);
    v28 = -1LL;
    v29 = *(_DWORD *)(a1 + 540);
    v30 = 0LL;
    v80 = a12;
    v31 = -1LL << (v29 & 0x1F);
    v32 = v31 & (HIBYTE(a12)
               + 37
               * (BYTE6(a12)
                + 37
                * (BYTE5(a12)
                 + 37
                 * (BYTE4(a12)
                  + 37 * (BYTE3(a12) + 37 * (BYTE2(a12) + 37 * (BYTE1(a12) + 37 * ((unsigned __int8)a12 + 11623883LL))))))));
    v57 = v32;
LABEL_30:
    if ( v30 )
      goto LABEL_33;
    if ( v29 >> 5 )
    {
      v30 = *(_QWORD *)(a1 + 544)
          + 8LL
          * ((37
            * (BYTE6(v57)
             + 37
             * (BYTE5(v57)
              + 37
              * (BYTE4(v57)
               + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v32 + 11623883)))))))
            + HIBYTE(v57)) & ((v29 >> 5) - 1));
LABEL_33:
      while ( 1 )
      {
        v30 = *(_QWORD *)v30;
        if ( (v30 & 1) != 0 )
          break;
        if ( v32 == (v31 & *(_QWORD *)(v30 + 8)) )
        {
          if ( a12 != *(void **)(v30 + 32) )
            goto LABEL_30;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v30 + 16)) <= 1 )
            __fastfail(0xEu);
          RtlReleaseSRWLockShared(a1 + 552);
          if ( v30 )
          {
            RmpObjectRelease((PVOID)v30);
            v18 = v62;
            PackageFullNameFromKey = -1073741574;
            v20 = (signed __int64 *)P;
            v23 = v54;
            goto LABEL_110;
          }
          goto LABEL_38;
        }
      }
    }
    RtlReleaseSRWLockShared(a1 + 552);
LABEL_38:
    v20 = (signed __int64 *)P;
    v23 = v54;
    v33 = ExecutionModel::ResourceManager::AcquireResourceSet(
            *(_QWORD *)(a1 + 3232),
            (__int128 *)v54,
            (struct _RM_PARTITION *)P,
            v61,
            v68,
            v69,
            a5,
            v81,
            a7,
            a8,
            a9,
            a10,
            a11,
            a13,
            v60,
            a12,
            &v62);
    if ( v33 >= 0 )
    {
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v34 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v35 = *v34;
        if ( (*v34 & 1) == 0 )
          __int2c();
        v38 = v34[1]-- == 1;
        if ( v38 )
          *v34 = v35 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v18 = v62;
      v33 = 0;
      goto LABEL_45;
    }
    v18 = v62;
LABEL_105:
    RmpReleaseGlobalLock();
LABEL_45:
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_47;
  }
  v20 = (signed __int64 *)P;
LABEL_109:
  v28 = -1LL;
LABEL_110:
  v33 = PackageFullNameFromKey | 0x10000000;
  if ( v56 )
    goto LABEL_105;
LABEL_47:
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v61 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v61);
  if ( v20 )
  {
    _m_prefetchw(v20);
    v36 = *v20;
    v37 = *v20 - 1;
    v38 = *v20 == 1;
    if ( v37 <= 0 )
    {
LABEL_113:
      if ( !v38 )
        __fastfail(0xEu);
      v47 = (volatile signed __int64 *)P;
      v48 = *((_QWORD *)P + 3);
      RtlAcquireSRWLockExclusive(v48 + 312);
      *(_DWORD *)(v48 + 320) = GetCurrentThreadId();
      v49 = _InterlockedExchangeAdd64(v47, 0xFFFFFFFFFFFFFFFFuLL);
      v50 = v49 <= 1;
      v51 = v49 - 1;
      if ( v50 )
      {
        if ( v51 )
          __fastfail(0xEu);
        if ( (unsigned int)CempListEntryIsNull((_QWORD *)P + 1) )
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)v52);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        }
        else
        {
          *(_DWORD *)(v52 + 240) &= ~1u;
          *(_DWORD *)(v52 + 240) |= 2u;
          SetEvent(*(HANDLE *)(v52 + 64));
        }
      }
      *(_DWORD *)(v48 + 320) = 0;
      RtlReleaseSRWLockExclusive(v48 + 312);
      v23 = v54;
    }
    else
    {
      while ( 1 )
      {
        v39 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)P, v37, v36);
        if ( v39 == v36 )
          break;
        v37 = v36 - 1;
        v38 = v36 == 1;
        if ( v36 - 1 <= 0 )
          goto LABEL_113;
      }
    }
  }
  if ( dword_1800DC1E0 )
  {
    v41 = v60;
    if ( v60 )
      v42 = *v60;
    else
      v42 = 0;
    if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v98 = 0;
      v78 = (char *)v23 + 152;
      v94 = (char *)v23 + 152;
      v93 = 2LL;
      v95 = 200LL;
      v79 = 50;
      *(_DWORD *)&v76.Id = 184549376;
      v96 = v81;
      v76.Keyword = 1LL;
      v97 = 4 * BYTE1(v81[0]) + 8;
      v92 = &v79;
      *(_DWORD *)&v76.Level = 5;
      v88.Ptr = (ULONGLONG)off_1800DC1E8;
      v88.Size = *(unsigned __int16 *)off_1800DC1E8;
      v89 = &unk_1800C27E4;
      v88.Reserved = 2;
      v90 = 68;
      v91 = 1;
      LODWORD(v54) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &v76, 0LL, 0LL, 5u, &v88);
      v41 = v60;
    }
    if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
    {
      v65 = a7;
      LODWORD(v54) = v33;
      v131 = 4LL;
      v66 = v41 != 0LL;
      v67 = *(_DWORD *)v23;
      v70 = *((_QWORD *)v23 + 3);
      v53 = *((_BYTE *)v23 + 42);
      v71 = *((_QWORD *)v23 + 17);
      v72 = *((_QWORD *)v23 + 14);
      LODWORD(v68) = *((_DWORD *)v23 + 2);
      LODWORD(v69) = v42;
      v73 = a9;
      LODWORD(v60) = a8;
      v74 = a12;
      v130 = &v65;
      v128 = &v66;
      v126 = &v67;
      v124 = &v70;
      v122 = &v53;
      v120 = &v71;
      v118 = &v72;
      v116 = &v68;
      v114 = &v69;
      v112 = &v73;
      v110 = &v60;
      v129 = 4LL;
      v127 = 4LL;
      v125 = 8LL;
      v123 = 1LL;
      v121 = 8LL;
      v119 = 8LL;
      v117 = 4LL;
      v115 = 4LL;
      v113 = 8LL;
      v111 = 4LL;
      if ( a5 )
      {
        do
          v38 = a5[++v28] == 0;
        while ( !v38 );
        v43 = 2 * v28 + 2;
      }
      else
      {
        v14 = &word_1800B7A9C;
        v43 = 2;
      }
      v108 = v43;
      v107 = v14;
      v105 = &v74;
      v109 = 0;
      v103 = &v54;
      *(_DWORD *)&v77.Level = 516;
      v99.Ptr = (ULONGLONG)off_1800DC1E8;
      v106 = 8LL;
      v104 = 4LL;
      *(_DWORD *)&v77.Id = 184549376;
      v77.Keyword = 9LL;
      v99.Size = *(unsigned __int16 *)off_1800DC1E8;
      v100 = &unk_1800C2A44;
      v102 = 1;
      v99.Reserved = 2;
      v101 = 231;
      v59 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &v77, 0LL, 0LL, 0x10u, &v99);
    }
  }
  if ( v58 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v33;
}
