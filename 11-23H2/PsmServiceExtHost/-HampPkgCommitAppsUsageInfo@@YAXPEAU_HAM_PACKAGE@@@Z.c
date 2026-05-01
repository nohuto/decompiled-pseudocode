/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001D810 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18001B490 (-HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18001B700 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x18003F6C0 (CemRcTableGetNext.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  struct _HAM_PACKAGE *v1; // r15
  int v2; // r14d
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  DWORD v8; // r12d
  unsigned __int64 v9; // r13
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v12; // r12d
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  DWORD v21; // esi
  _QWORD *v22; // r12
  unsigned __int64 v23; // r12
  int v24; // r12d
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  bool v27; // cc
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  bool v30; // cc
  __int64 *v31; // rax
  __int64 v32; // rcx
  DWORD v33; // r14d
  __int64 v34; // r15
  _QWORD *v35; // rdi
  DWORD v36; // eax
  DWORD v37; // r14d
  _QWORD *v38; // rdi
  __int64 v39; // rdi
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  _QWORD *v42; // r15
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rcx
  DWORD v47; // r14d
  _QWORD *v48; // rdi
  __int64 *v49; // rax
  __int64 v50; // rcx
  bool v51; // cc
  bool v52; // cc
  struct _HAM_PACKAGE *v53; // rax
  char *v54; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v56; // rax
  _QWORD *v57; // rcx
  signed __int64 v58; // rax
  signed __int64 v59; // rcx
  bool v60; // zf
  signed __int64 v61; // rtt
  DWORD v62; // r14d
  _QWORD *v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rcx
  int *v66; // rdx
  struct _HAM_RC_TREE_NODE *v67; // rax
  unsigned __int64 v68; // rcx
  struct _HAM_RC_TREE_NODE *v69; // rcx
  _QWORD **v70; // rax
  unsigned __int64 v71; // rcx
  _QWORD *v72; // rcx
  unsigned __int64 v73; // rdi
  signed __int64 v74; // rax
  signed __int64 v75; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  int v77; // [rsp+20h] [rbp-E0h]
  DWORD dwTlsIndex; // [rsp+24h] [rbp-DCh]
  DWORD dwTlsIndexa; // [rsp+24h] [rbp-DCh]
  struct _HAM_RC_TREE_NODE *Next; // [rsp+28h] [rbp-D8h]
  __int128 v81; // [rsp+30h] [rbp-D0h]
  __m128i v82; // [rsp+30h] [rbp-D0h]
  __int128 v83; // [rsp+40h] [rbp-C0h]
  __m128i v84; // [rsp+40h] [rbp-C0h]
  int v85; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_PACKAGE *v86; // [rsp+58h] [rbp-A8h]
  __m128i si128; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v88; // [rsp+70h] [rbp-90h]
  __int128 v89; // [rsp+80h] [rbp-80h]
  __int128 v90; // [rsp+90h] [rbp-70h]
  wchar_t String1[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v92; // [rsp+B0h] [rbp-50h]
  __int128 v93; // [rsp+C0h] [rbp-40h]
  __int128 v94; // [rsp+D0h] [rbp-30h]
  __int128 v95; // [rsp+E0h] [rbp-20h]
  __int128 v96; // [rsp+F0h] [rbp-10h]
  __int128 v97; // [rsp+100h] [rbp+0h]
  __int128 v98; // [rsp+110h] [rbp+10h]
  __int16 v99; // [rsp+120h] [rbp+20h]
  wchar_t String2[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v101; // [rsp+140h] [rbp+40h]
  __int128 v102; // [rsp+150h] [rbp+50h]
  __int128 v103; // [rsp+160h] [rbp+60h]
  __int128 v104; // [rsp+170h] [rbp+70h]
  __int128 v105; // [rsp+180h] [rbp+80h]
  __int128 v106; // [rsp+190h] [rbp+90h]
  __int128 v107; // [rsp+1A0h] [rbp+A0h]
  __int16 v108; // [rsp+1B0h] [rbp+B0h]

  v1 = a1;
  v86 = a1;
  v77 = 0;
  v2 = 0;
  memset_0(String1, 0, 0x82uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v88 = si128;
  RtlAcquireSRWLockShared((char *)v1 + 56);
  v3 = *((_QWORD *)v1 + 6);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_120;
    v4 = v3 ^ (((unsigned __int64)v1 + 40) | 1);
  }
  else
  {
    v4 = *((_QWORD *)v1 + 6);
  }
  Next = (struct _HAM_RC_TREE_NODE *)v4;
  if ( !v4 )
  {
LABEL_120:
    RtlReleaseSRWLockShared((char *)v1 + 56);
    return;
  }
  while ( !*(_QWORD *)(v4 + 24) )
  {
    v67 = *(struct _HAM_RC_TREE_NODE **)(v4 + 8);
    v68 = v4;
    if ( v67 )
    {
      v69 = *(struct _HAM_RC_TREE_NODE **)v67;
      v4 = *(_QWORD *)(v4 + 8);
      Next = v67;
      if ( *(_QWORD *)v67 )
      {
        do
        {
          v4 = (unsigned __int64)v69;
          Next = v69;
          v69 = *(struct _HAM_RC_TREE_NODE **)v69;
        }
        while ( v69 );
      }
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      Next = (struct _HAM_RC_TREE_NODE *)v4;
      if ( v4 )
      {
        do
        {
          if ( *(_QWORD *)v4 == v68 )
            break;
          v68 = v4;
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        }
        while ( v4 );
        Next = (struct _HAM_RC_TREE_NODE *)v4;
      }
    }
    if ( !v4 )
      goto LABEL_120;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared((char *)v1 + 56);
  while ( 1 )
  {
    while ( 1 )
    {
      v85 = 130;
      PsmGetApplicationNameFromKey(v4 + 96, String2, &v85);
      if ( _wcsicmp(String1, String2) )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
        si128 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
        v88 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
        v77 = 0;
      }
      v5 = -1LL;
      dwTlsIndex = 0;
      v6 = 0LL;
      v7 = 0LL;
      v8 = HampLockTrackerId;
      v9 = -1LL;
      v89 = 0xFFFFFFFFFFFFFFFFuLL;
      v90 = 0xFFFFFFFFFFFFFFFFuLL;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v8) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      CurrentThreadId = GetCurrentThreadId();
      v12 = HampLockTrackerId;
      dword_1800DC580 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v13 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v13 |= 0x20uLL;
        ++v13[6];
      }
      RtlAcquireSRWLockShared(v4 + 584);
      v14 = *(_QWORD **)(v4 + 600);
      if ( v14 == (_QWORD *)(v4 + 600) )
      {
LABEL_183:
        v15 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v15 = v14 - 103;
          v16 = v14 == (_QWORD *)824 ? (int *)24 : (int *)(v14 - 108);
          if ( *v16 >= 0 )
            break;
          v14 = (_QWORD *)*v14;
          if ( v14 == (_QWORD *)(v4 + 600) )
            goto LABEL_183;
        }
        ++v15[75];
      }
      if ( HampLockTrackerId != -1 )
      {
        v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v18 = *v17;
        if ( (*v17 & 0x20) == 0 )
          __int2c();
        v60 = v17[6]-- == 1;
        if ( v60 )
          *v17 = v18 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v4 + 584);
      dword_1800DC580 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v19 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v20 = *v19;
        if ( (*v19 & 1) == 0 )
          __int2c();
        v60 = v19[1]-- == 1;
        if ( v60 )
          *v19 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( v15 )
      {
        v21 = 0;
        while ( 1 )
        {
          dwTlsIndexa = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v22 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(dwTlsIndexa) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v22 |= 2uLL;
            ++v22[2];
          }
          RtlAcquireSRWLockExclusive(v15);
          *((_DWORD *)v15 + 2) = GetCurrentThreadId();
          v21 |= (v15[83] & 0x1000000000000000LL) != 0;
          v23 = (v15[83] & 0xEFFFFFFFFFFFFFFFuLL) >> 59;
          v15[83] &= 0xE7FFFFFFFFFFFFFFuLL;
          v24 = v23 & 1;
          v25 = v15[129];
          v26 = v15[128];
          v27 = v26 <= v25;
          if ( v26 >= v25 )
            goto LABEL_150;
          if ( v5 >= v6 )
            break;
          if ( v26 <= v6 && v25 >= v5 )
          {
LABEL_44:
            if ( v26 < v5 )
              v5 = v15[128];
LABEL_46:
            *(_QWORD *)&v81 = v5;
            goto LABEL_47;
          }
LABEL_139:
          if ( (__int64)v26 <= (__int64)v5 )
            goto LABEL_46;
          *(_QWORD *)&v81 = v15[128];
LABEL_47:
          v28 = v15[131];
          v29 = v15[130];
          v30 = v29 <= v28;
          if ( v29 >= v28 )
            goto LABEL_48;
          if ( v9 >= v7 )
          {
            if ( v9 > v7 )
            {
              if ( v9 <= v28 )
                goto LABEL_49;
              goto LABEL_159;
            }
            v30 = v29 <= v28;
LABEL_48:
            if ( v30 || v9 >= v7 || v29 <= v7 )
              goto LABEL_49;
            goto LABEL_159;
          }
          if ( v29 <= v7 && v28 >= v9 )
          {
LABEL_49:
            if ( v29 < v9 )
              goto LABEL_160;
            goto LABEL_50;
          }
LABEL_159:
          if ( (__int64)v29 > (__int64)v9 )
          {
LABEL_160:
            *(_QWORD *)&v83 = v15[130];
            goto LABEL_51;
          }
LABEL_50:
          *(_QWORD *)&v83 = v9;
LABEL_51:
          if ( v25 > v6 )
            v6 = v15[129];
          *((_QWORD *)&v81 + 1) = v6;
          if ( v28 > v7 )
            v7 = v15[131];
          *((_QWORD *)&v83 + 1) = v7;
          v89 = v81;
          v90 = v83;
          if ( HampLockTrackerId != -1 )
          {
            v31 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v32 = *v31;
            if ( (*v31 & 2) == 0 )
              __int2c();
            v60 = v31[2]-- == 1;
            if ( v60 )
              *v31 = v32 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *((_DWORD *)v15 + 2) = 0;
          RtlReleaseSRWLockExclusive(v15);
          if ( v24 )
          {
            v62 = HampLockTrackerId;
            if ( HampLockTrackerId != -1 )
            {
              v63 = TlsGetValue(HampLockTrackerId);
              if ( *(_QWORD *)TlsGetValue(v62) )
                __int2c();
              *v63 |= 1uLL;
              ++v63[1];
            }
            RtlAcquireSRWLockExclusive(&RmpGlobalLock);
            dword_1800DC580 = GetCurrentThreadId();
            v60 = v15[75]-- == 1LL;
            if ( v60 )
              RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v15 - 8));
            dword_1800DC580 = 0;
            RtlReleaseSRWLockExclusive(&RmpGlobalLock);
            if ( HampLockTrackerId != -1 )
            {
              v64 = (__int64 *)TlsGetValue(HampLockTrackerId);
              v65 = *v64;
              if ( (*v64 & 1) == 0 )
                __int2c();
              v60 = v64[1]-- == 1;
              if ( v60 )
                *v64 = v65 & 0xFFFFFFFFFFFFFFFEuLL;
            }
          }
          v33 = HampLockTrackerId;
          v34 = v15[99];
          if ( HampLockTrackerId != -1 )
          {
            v35 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v33) )
              __int2c();
            *v35 |= 1uLL;
            ++v35[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          v36 = GetCurrentThreadId();
          v37 = HampLockTrackerId;
          dword_1800DC580 = v36;
          if ( HampLockTrackerId != -1 )
          {
            v38 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v37) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v38 |= 0x20uLL;
            ++v38[6];
          }
          v39 = v34 + 584;
          RtlAcquireSRWLockShared(v34 + 584);
          v40 = (_QWORD *)v15[103];
          v41 = (_QWORD *)(v34 + 600);
          if ( v40 == (_QWORD *)(v34 + 600) )
          {
LABEL_70:
            v42 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v42 = v40 - 103;
              v66 = v40 == (_QWORD *)824 ? (int *)24 : (int *)(v40 - 108);
              if ( *v66 >= 0 )
                break;
              v40 = (_QWORD *)*v40;
              if ( v40 == v41 )
                goto LABEL_70;
            }
            ++v42[75];
          }
          if ( HampLockTrackerId != -1 )
          {
            v43 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v44 = *v43;
            if ( (*v43 & 0x20) == 0 )
              __int2c();
            v60 = v43[6]-- == 1;
            if ( v60 )
              *v43 = v44 & 0xFFFFFFFFFFFFFFDFuLL;
          }
          RtlReleaseSRWLockShared(v39);
          dword_1800DC580 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v45 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v46 = *v45;
            if ( (*v45 & 1) == 0 )
              __int2c();
            v60 = v45[1]-- == 1;
            if ( v60 )
              *v45 = v46 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          v47 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v48 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v47) )
              __int2c();
            *v48 |= 1uLL;
            ++v48[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DC580 = GetCurrentThreadId();
          v60 = v15[75]-- == 1LL;
          if ( v60 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v15 - 8));
          dword_1800DC580 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v49 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v50 = *v49;
            if ( (*v49 & 1) == 0 )
              __int2c();
            v60 = v49[1]-- == 1;
            if ( v60 )
              *v49 = v50 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          v9 = v90;
          v15 = v42;
          v6 = *((_QWORD *)&v89 + 1);
          v60 = v42 == 0LL;
          v7 = *((_QWORD *)&v90 + 1);
          v5 = v89;
          if ( v60 )
          {
            dwTlsIndex = v21;
            v4 = (unsigned __int64)Next;
            goto LABEL_94;
          }
        }
        if ( v5 > v6 )
        {
          if ( v5 <= v25 )
            goto LABEL_44;
          goto LABEL_139;
        }
        v27 = v26 <= v25;
LABEL_150:
        if ( v27 || v5 >= v6 || v26 <= v6 )
          goto LABEL_44;
        goto LABEL_139;
      }
LABEL_94:
      v51 = v5 <= v6;
      if ( v5 >= v6 )
        goto LABEL_154;
      if ( si128.m128i_i64[0] >= (unsigned __int64)si128.m128i_i64[1] )
      {
        if ( si128.m128i_i64[0] > (unsigned __int64)si128.m128i_i64[1] )
        {
          if ( si128.m128i_i64[0] <= v6 )
            goto LABEL_98;
          goto LABEL_145;
        }
        v51 = v5 <= v6;
LABEL_154:
        if ( v51 || si128.m128i_i64[0] >= (unsigned __int64)si128.m128i_i64[1] || v5 <= si128.m128i_i64[1] )
          goto LABEL_98;
        goto LABEL_145;
      }
      if ( v5 <= si128.m128i_i64[1] && v6 >= si128.m128i_i64[0] )
      {
LABEL_98:
        if ( v5 < si128.m128i_i64[0] )
          goto LABEL_99;
        goto LABEL_146;
      }
LABEL_145:
      if ( (__int64)v5 > si128.m128i_i64[0] )
      {
LABEL_99:
        v82.m128i_i64[0] = v5;
        goto LABEL_100;
      }
LABEL_146:
      v82.m128i_i64[0] = si128.m128i_i64[0];
LABEL_100:
      v52 = v9 <= v7;
      if ( v9 >= v7 )
        goto LABEL_101;
      if ( v88.m128i_i64[0] >= (unsigned __int64)v88.m128i_i64[1] )
      {
        if ( v88.m128i_i64[0] > (unsigned __int64)v88.m128i_i64[1] )
        {
          if ( v88.m128i_i64[0] <= v7 )
            goto LABEL_102;
          goto LABEL_164;
        }
        v52 = v9 <= v7;
LABEL_101:
        if ( v52 || v88.m128i_i64[0] >= (unsigned __int64)v88.m128i_i64[1] || v9 <= v88.m128i_i64[1] )
          goto LABEL_102;
        goto LABEL_164;
      }
      if ( v9 <= v88.m128i_i64[1] && v7 >= v88.m128i_i64[0] )
      {
LABEL_102:
        if ( v9 >= v88.m128i_i64[0] )
          goto LABEL_103;
        goto LABEL_165;
      }
LABEL_164:
      if ( (__int64)v9 <= v88.m128i_i64[0] )
      {
LABEL_103:
        v84.m128i_i64[0] = v88.m128i_i64[0];
        goto LABEL_104;
      }
LABEL_165:
      v84.m128i_i64[0] = v9;
LABEL_104:
      v82.m128i_i64[1] = v6 <= si128.m128i_i64[1] ? si128.m128i_i64[1] : v6;
      v84.m128i_i64[1] = v7 <= v88.m128i_i64[1] ? v88.m128i_i64[1] : v7;
      v2 = dwTlsIndex | v77;
      v1 = v86;
      si128 = v82;
      v99 = v108;
      v88 = v84;
      v77 |= dwTlsIndex;
      *(_OWORD *)String1 = *(_OWORD *)String2;
      v92 = v101;
      v93 = v102;
      v94 = v103;
      v95 = v104;
      v96 = v105;
      v97 = v106;
      v98 = v107;
      v53 = (struct _HAM_PACKAGE *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v53 == (struct _HAM_PACKAGE *)((char *)v86 + 40) )
        break;
      Successor = (struct _HAM_PACKAGE *)((char *)v53 - 40);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v53 - 2) <= 1 )
        __fastfail(0xEu);
      Next = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(v4);
      v4 = (unsigned __int64)Next;
      if ( !Next )
      {
        Successor = HamRcNodeGetSuccessor(v1, Successor);
        if ( !Successor )
          goto LABEL_117;
        while ( 1 )
        {
          Next = HamRcNodeGetFirst(Successor, 1);
          v4 = (unsigned __int64)Next;
          if ( Next )
            break;
          Successor = HamRcNodeGetSuccessor(v1, Successor);
          if ( !Successor )
            goto LABEL_117;
        }
LABEL_238:
        CemRcObjectDereference(Successor);
        goto LABEL_166;
      }
      if ( Successor )
        goto LABEL_238;
LABEL_166:
      if ( !v4 )
        goto LABEL_117;
    }
    v54 = (char *)v53 + 16;
    RtlAcquireSRWLockShared((char *)v53 + 16);
    i = *(_QWORD *)(v4 + 8);
    v56 = v4;
    if ( i )
    {
      v57 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v57;
          v57 = (_QWORD *)*v57;
        }
        while ( v57 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v56 )
          break;
        v56 = i;
      }
    }
    if ( i )
    {
      while ( !*(_QWORD *)(i + 24) )
      {
        v70 = *(_QWORD ***)(i + 8);
        v71 = i;
        if ( v70 )
        {
          v72 = *v70;
          for ( i = *(_QWORD *)(i + 8); v72; v72 = (_QWORD *)*v72 )
            i = (unsigned __int64)v72;
        }
        else
        {
          for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v71 )
              break;
            v71 = i;
          }
        }
        if ( !i )
          goto LABEL_113;
      }
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
LABEL_113:
      i = 0LL;
    }
    RtlReleaseSRWLockShared(v54);
    _m_prefetchw((const void *)(v4 + 24));
    v58 = *(_QWORD *)(v4 + 24);
    v59 = v58 - 1;
    v60 = v58 == 1;
    if ( v58 - 1 <= 0 )
    {
LABEL_222:
      if ( !v60 )
        __fastfail(0xEu);
      v73 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(v4 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(v4 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(unsigned __int64))(v73 + 24))(v4);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v73 + 16);
        v74 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v27 = v74 <= 1;
        v75 = v74 - 1;
        if ( v27 )
        {
          if ( v75 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v73 + 16);
          (*(void (__fastcall **)(unsigned __int64))(v73 + 24))(v4);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v73 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v61 = v58;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), v59, v58);
        if ( v61 == v58 )
          break;
        v59 = v58 - 1;
        v60 = v58 == 1;
        if ( v58 - 1 <= 0 )
          goto LABEL_222;
      }
    }
    if ( !i )
      break;
    v4 = i;
    Next = (struct _HAM_RC_TREE_NODE *)i;
  }
LABEL_117:
  if ( v2 )
  {
    HampUsageInfoRegistrySaveForApp(
      (const unsigned __int16 *)v1 + 48,
      (char *)v1 + 228,
      String1,
      (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
    if ( si128.m128i_i64[0] != -1 )
      HampUsageInfoRegistrySaveAppLaunched((const WCHAR *)v1);
  }
}
