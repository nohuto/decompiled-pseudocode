/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800309B0
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800022C8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18002D700 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031644 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x1800316F0 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180032A04 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180050158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F7CC (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _RM_ACTIVITY_HOST *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 *a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  struct _HAM_APPLICATION *v8; // rdi
  __int64 v9; // rbp
  char *v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 result; // rax
  DWORD v15; // esi
  _QWORD *Value; // rdi
  __int64 v17; // rax
  int v18; // edi
  __int64 *v19; // rax
  __int64 v20; // rcx
  bool v21; // zf
  const wchar_t *v22; // rbx
  struct _HOST_ACTIVITY_MANAGER *v23; // r15
  wchar_t *v24; // r13
  char *v25; // rbp
  int v26; // ebx
  int v27; // esi
  ULONG v28; // edi
  signed __int64 v29; // r9
  _WORD *v30; // rcx
  __int64 v31; // rdx
  __int16 v32; // ax
  _WORD *v33; // rax
  DWORD v34; // edi
  _QWORD *v35; // rbx
  unsigned __int64 v36; // rdi
  unsigned int v37; // r11d
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r10
  struct _RM_ACTIVITY_HOST *v41; // rbp
  wchar_t *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rcx
  struct _HAM_APPLICATION *v50; // [rsp+48h] [rbp-2C0h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-2B8h]
  struct _RM_ACTIVITY_HOST *v52; // [rsp+58h] [rbp-2B0h] BYREF
  struct _RM_PARTITION *v53; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 *v54; // [rsp+68h] [rbp-2A0h]
  struct _RM_ACTIVITY_HOST *v55; // [rsp+70h] [rbp-298h]
  unsigned __int64 v56; // [rsp+78h] [rbp-290h]
  unsigned __int64 v57; // [rsp+88h] [rbp-280h]
  _BYTE v58[464]; // [rsp+A0h] [rbp-268h] BYREF
  char DestinationSid[68]; // [rsp+270h] [rbp-98h] BYREF
  int v60; // [rsp+2B4h] [rbp-54h]

  v5 = *(_QWORD *)(a2 + 544);
  v6 = 0LL;
  v52 = a1;
  v8 = 0LL;
  v54 = a5;
  v9 = 0LL;
  v10 = (char *)a1 - 2216;
  String1 = (wchar_t *)a2;
  v55 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 - 2216);
  v11 = *((_DWORD *)a1 - 557);
  v56 = v5;
  v12 = -1LL << (v11 & 0x1F);
  v13 = v12 & (HIBYTE(v5)
             + 37
             * (BYTE6(v5)
              + 37
              * (BYTE5(v5)
               + 37
               * (BYTE4(v5)
                + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883LL))))))));
LABEL_2:
  if ( v6 )
    goto LABEL_5;
  if ( v11 >> 5 )
  {
    v6 = *((_QWORD *)v52 - 278)
       + 8LL
       * ((HIBYTE(v13)
         + 37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))) & ((v11 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v6 + 8)) )
      {
        if ( v5 != *(_QWORD *)(v6 + 32) )
          goto LABEL_2;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockShared(v10);
        if ( *(_BYTE *)(v6 + 656) == a4 || a4 == 2 )
        {
          v15 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            Value = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v15) )
              __int2c();
            *Value |= 1uLL;
            ++Value[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DC590 = GetCurrentThreadId();
          v17 = 0LL;
          if ( v6 != -64 )
            v17 = v6;
          if ( *(int *)(v17 + 24) >= 0 )
          {
            ++*(_QWORD *)(v6 + 664);
            v9 = v6 + 64;
            v18 = 0;
          }
          else
          {
            v18 = -1073741275;
          }
          dword_1800DC590 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v20 = *v19;
            if ( (*v19 & 1) == 0 )
              __int2c();
            v21 = v19[1]-- == 1;
            if ( v21 )
              *v19 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v6 )
            RmpObjectRelease((struct _RM_OBJECT_HEADER *)v6);
          if ( v18 >= 0 )
          {
            v22 = (const wchar_t *)88;
            if ( v9 )
              v22 = (const wchar_t *)(v9 + 24);
            if ( !_wcsicmp(String1, v22) && !memcmp_0(String1 + 232, v22 + 232, 0x58uLL) )
            {
              result = 0LL;
              *v54 = v9;
              return result;
            }
            v18 = -1073741584;
          }
          if ( v9 )
          {
            RmpAcquireGlobalLock();
            v21 = (*(_QWORD *)(v9 + 600))-- == 1LL;
            if ( v21 )
              RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v9 - 64));
            RmpReleaseGlobalLock();
          }
          if ( v18 == -1073741275 )
          {
            v8 = v50;
            goto LABEL_46;
          }
          return (unsigned int)v18;
        }
        else
        {
          if ( v6 )
            RmpObjectRelease((struct _RM_OBJECT_HEADER *)v6);
          return 3221225520LL;
        }
      }
    }
  }
  RtlReleaseSRWLockShared(v10);
LABEL_46:
  v23 = v52;
  v24 = String1;
  v25 = (char *)v52 - 2248;
  v26 = RmpHamQueryActivityHostPartition(
          (struct _RM_ACTIVITY_HOST *)((char *)v52 - 2248),
          (struct _RM_PSM_HOST_INFO *)String1,
          &v53);
  if ( v26 >= 0 )
  {
    v27 = *((_DWORD *)String1 + 133);
    v28 = RtlLengthSid(String1 + 232);
    memset_0(v58, 0, 0x218uLL);
    if ( (unsigned __int8)PsmIsValidKey(String1) && v28 >= 0xC && RtlValidSid(String1 + 232) )
      RtlLengthSid(String1 + 232);
    v29 = (char *)String1 - v58;
    v30 = v58;
    v31 = 232LL;
    do
    {
      if ( v31 == -2147483414 )
        break;
      v32 = *(_WORD *)((char *)v30 + v29);
      if ( !v32 )
        break;
      *v30++ = v32;
      --v31;
    }
    while ( v31 );
    v33 = v30 - 1;
    if ( v31 )
      v33 = v30;
    *v33 = 0;
    RtlCopySid(0x44u, DestinationSid, v24 + 232);
    v60 = v27;
    v26 = HampAppFindOrCreate(v23, (struct _HAM_APPLICATION_INFO *)v58, (a3 >> 2) & 1, &v50);
    if ( v26 < 0 )
    {
      v8 = v50;
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
      dword_1800DC590 = GetCurrentThreadId();
      v36 = *((_QWORD *)v24 + 68);
      RtlAcquireSRWLockShared(v25 + 32);
      v37 = *((_DWORD *)v25 + 5);
      v38 = 0LL;
      v57 = v36;
      v39 = -1LL << (v37 & 0x1F);
      v40 = v39 & (HIBYTE(v36)
                 + 37
                 * (BYTE6(v36)
                  + 37
                  * (BYTE5(v36)
                   + 37
                   * (BYTE4(v36)
                    + 37
                    * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (37 * ((unsigned __int8)v36 + 11623883LL) + BYTE1(v36))))))));
LABEL_63:
      if ( v38 )
        goto LABEL_66;
      if ( v37 >> 5 )
      {
        v38 = *((_QWORD *)v25 + 3)
            + 8LL
            * ((HIBYTE(v40)
              + 37
              * (BYTE6(v40)
               + 37
               * (BYTE5(v40)
                + 37
                * (BYTE4(v40)
                 + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))) & ((v37 >> 5) - 1));
LABEL_66:
        while ( 1 )
        {
          v38 = *(_QWORD *)v38;
          if ( (v38 & 1) != 0 )
            break;
          if ( v40 == (v39 & *(_QWORD *)(v38 + 8)) )
          {
            if ( v36 != *(_QWORD *)(v38 + 32) )
              goto LABEL_63;
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v38 + 16)) <= 1 )
              __fastfail(0xEu);
            RtlReleaseSRWLockShared(v25 + 32);
            if ( *(_BYTE *)(v38 + 656) != a4 && a4 != 2 )
            {
              RmpObjectRelease((struct _RM_OBJECT_HEADER *)v38);
              goto LABEL_76;
            }
            RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v38 + 64));
            v8 = v50;
            v41 = (struct _RM_ACTIVITY_HOST *)v38;
            v42 = String1;
            v26 = 0;
            goto LABEL_85;
          }
        }
      }
      RtlReleaseSRWLockShared(v25 + 32);
LABEL_76:
      v8 = v50;
      v42 = String1;
      v43 = a3 & 1 | 2;
      if ( (a3 & 2) == 0 )
        v43 = a3 & 1;
      v26 = RmpActivityHostCreateHostPsm(
              (struct _RM_SERVICE_GLOBALS *)v25,
              v53,
              (struct _RM_PSM_HOST_INFO *)String1,
              v50,
              v43,
              &v52);
      if ( v26 < 0 )
      {
        v41 = v55;
      }
      else
      {
        v41 = v52;
        v44 = 24LL;
        if ( v52 != (struct _RM_ACTIVITY_HOST *)-64LL )
          v44 = (__int64)v52 + 24;
        if ( *(int *)v44 >= 0 )
          ++*((_QWORD *)v52 + 83);
        v26 = 0;
      }
LABEL_85:
      dword_1800DC590 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v46 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v47 = *v46;
        if ( (*v46 & 1) == 0 )
          __int2c();
        v21 = v46[1]-- == 1;
        if ( v21 )
          *v46 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( v26 >= 0 )
      {
        v26 = 0;
        *v54 = (__int64)v41 + 64;
      }
      else if ( v26 == -1058275322 )
      {
        if ( *((_DWORD *)v42 + 134) == 4 )
          v26 = -1058275325;
        else
          HampAppQueueTerminate(v8, v45, 4864LL);
      }
      if ( v41 )
        RmpObjectRelease(v41);
    }
  }
  if ( v53 )
    RmpPartitionRelease(v53);
  if ( v8 )
    CemRcObjectDereference(v8);
  return (unsigned int)v26;
}
