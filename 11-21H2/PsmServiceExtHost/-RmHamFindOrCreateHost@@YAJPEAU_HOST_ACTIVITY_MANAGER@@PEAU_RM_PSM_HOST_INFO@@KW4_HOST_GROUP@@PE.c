/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023C00
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AAF8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024984 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180024C60 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003B01C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007B11C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 *a5)
{
  char *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  struct _HAM_APPLICATION *v10; // r14
  __int64 v11; // rbp
  unsigned int v12; // r15d
  __int64 v13; // r11
  __int64 v14; // r10
  char v15; // r15
  DWORD v16; // esi
  _QWORD *Value; // rdi
  int v18; // edi
  void *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  bool v22; // zf
  struct _HOST_ACTIVITY_MANAGER *v24; // rbp
  int v25; // eax
  struct _RM_PARTITION *v26; // rsi
  int v27; // ebx
  int v28; // r14d
  ULONG v29; // ebx
  _WORD *v30; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  unsigned int v33; // r14d
  DWORD v34; // edi
  _QWORD *v35; // rbx
  int ActivityHost; // eax
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rcx
  PVOID v40; // rdi
  unsigned int v41; // [rsp+20h] [rbp-2C8h]
  struct _HAM_APPLICATION *v43; // [rsp+50h] [rbp-298h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-290h]
  struct _HOST_ACTIVITY_MANAGER *v45; // [rsp+60h] [rbp-288h]
  struct _RM_PARTITION *v46; // [rsp+68h] [rbp-280h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-278h] BYREF
  _BYTE v48[464]; // [rsp+80h] [rbp-268h] BYREF
  char DestinationSid[68]; // [rsp+250h] [rbp-98h] BYREF
  int v50; // [rsp+294h] [rbp-54h]

  v5 = (char *)a1 - 2216;
  v6 = *(_QWORD *)(a2 + 544);
  v7 = 0LL;
  v45 = a1;
  v44 = a3;
  P[0] = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  v11 = 0LL;
  v43 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 - 2216);
  v12 = *((_DWORD *)a1 - 557);
  v13 = -1LL << (v12 & 0x1F);
  v14 = v13 & (HIBYTE(v6)
             + 37
             * (BYTE6(v6)
              + 37
              * (BYTE5(v6)
               + 37
               * (BYTE4(v6)
                + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (37 * ((unsigned __int8)v6 + 11623883LL) + BYTE1(v6))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v12 >> 5 )
  {
    v7 = *((_QWORD *)v45 - 278)
       + 8LL
       * ((37
         * (BYTE6(v14)
          + 37
          * (BYTE5(v14)
           + 37
           * (BYTE4(v14)
            + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
         + HIBYTE(v14)) & ((v12 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v7 + 8)) )
      {
        if ( v6 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockShared(v5);
        v15 = a4;
        if ( *(_BYTE *)(v7 + 656) != a4 && a4 != 3 )
        {
          RmpObjectRelease((PVOID)v7);
          return 3221225520LL;
        }
        if ( (*(_BYTE *)(v7 + 852) & 1) != 0 )
        {
          v16 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            Value = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v16) )
              __int2c();
            *Value |= 1uLL;
            ++Value[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DD4E8 = GetCurrentThreadId();
          if ( *(int *)(v7 + 24) < 0 )
          {
            v18 = -1073741275;
          }
          else
          {
            ++*(_QWORD *)(v7 + 664);
            v11 = v7 + 64;
            v18 = 0;
          }
          dword_1800DD4E8 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          v19 = (void *)v7;
          if ( HampLockTrackerId != -1 )
          {
            v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v21 = *v20;
            if ( (*v20 & 1) == 0 )
              __int2c();
            v22 = v20[1]-- == 1;
            v19 = (void *)v7;
            if ( v22 )
              *v20 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
          }
        }
        else
        {
          v18 = -1073741776;
          v19 = (void *)v7;
        }
        if ( v19 )
          RmpObjectRelease(v19);
        if ( v18 >= 0 )
        {
          if ( !_wcsicmp((const wchar_t *)a2, (const wchar_t *)(v11 + 24))
            && !memcmp_0((const void *)(a2 + 464), (const void *)(v11 + 488), 0x58uLL) )
          {
            *a5 = v11;
            return 0LL;
          }
          v18 = -1073741584;
        }
        if ( v11 )
        {
          RmpAcquireGlobalLock();
          v22 = (*(_QWORD *)(v11 + 600))-- == 1LL;
          if ( v22 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v11 - 64));
          RmpReleaseGlobalLock();
        }
        if ( v18 != -1073741275 )
          return (unsigned int)v18;
        v10 = v43;
        goto LABEL_33;
      }
    }
  }
  RtlReleaseSRWLockShared(v5);
  v15 = a4;
LABEL_33:
  v24 = v45;
  v25 = RmpHamQueryActivityHostPartition(
          (struct _HOST_ACTIVITY_MANAGER *)((char *)v45 - 2248),
          (struct _RM_PSM_HOST_INFO *)a2,
          &v46);
  v26 = v46;
  v27 = v25;
  if ( v25 >= 0 )
  {
    v28 = *(_DWORD *)(a2 + 532);
    v29 = RtlLengthSid((PSID)(a2 + 464));
    memset_0(v48, 0, 0x218uLL);
    if ( (unsigned __int8)PsmIsValidKey(a2) && v29 >= 0xC && RtlValidSid((PSID)(a2 + 464)) )
      RtlLengthSid((PSID)(a2 + 464));
    v30 = v48;
    v31 = 232LL;
    while ( v31 != -2147483414 )
    {
      v32 = *(_WORD *)((char *)v30 + a2 - (_QWORD)v48);
      if ( !v32 )
        break;
      *v30++ = v32;
      if ( !--v31 )
      {
        --v30;
        break;
      }
    }
    *v30 = 0;
    RtlCopySid(0x44u, DestinationSid, (PSID)(a2 + 464));
    v50 = v28;
    v33 = v44;
    v27 = HampAppFindOrCreate(v24, (struct _HAM_APPLICATION_INFO *)v48, (v44 >> 2) & 1, &v43);
    if ( v27 < 0 )
    {
      v10 = v43;
    }
    else
    {
      v34 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v35 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v34) )
          __int2c();
        *v35 |= 1uLL;
        ++v35[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800DD4E8 = GetCurrentThreadId();
      v41 = v33;
      v10 = v43;
      ActivityHost = RmHamFindOrCreateActivityHost((char *)v24 - 2248, a2, v43, v26, v41, v15, P);
      dword_1800DD4E8 = 0;
      v27 = ActivityHost;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v38 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v39 = *v38;
        if ( (*v38 & 1) == 0 )
          __int2c();
        v22 = v38[1]-- == 1;
        if ( v22 )
          *v38 = v39 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v40 = P[0];
      if ( v27 < 0 )
      {
        if ( v27 == -1058275322 )
        {
          if ( *(_DWORD *)(a2 + 536) == 4 )
            v27 = -1058275325;
          else
            HampAppQueueTerminate(v10, v37, 4864LL);
        }
      }
      else
      {
        v27 = 0;
        *a5 = (__int64)P[0] + 64;
      }
      if ( v40 )
        RmpObjectRelease(v40);
    }
  }
  if ( v26 )
    RmpPartitionRelease(v26);
  if ( v10 )
    CemRcObjectDereference(v10);
  return (unsigned int)v27;
}
