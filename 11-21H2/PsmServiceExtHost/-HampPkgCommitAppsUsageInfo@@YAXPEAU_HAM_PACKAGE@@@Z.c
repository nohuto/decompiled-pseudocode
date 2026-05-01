/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010CE0
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000EE70 (-HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18000F100 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  struct _HAM_PACKAGE *v1; // r15
  int v2; // r14d
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  DWORD v8; // r12d
  unsigned __int64 v9; // r15
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v12; // r12d
  _QWORD *v13; // rbx
  int *v14; // rax
  int *v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  DWORD v20; // esi
  _QWORD *v21; // r12
  unsigned __int64 v22; // r12
  int v23; // r12d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  DWORD v30; // r14d
  __int64 v31; // r15
  _QWORD *v32; // rdi
  DWORD v33; // eax
  DWORD v34; // r14d
  _QWORD *v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r15
  int *v39; // r12
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rcx
  DWORD v44; // r14d
  _QWORD *v45; // rdi
  __int64 *v46; // rax
  __int64 v47; // rcx
  bool v48; // cc
  bool v49; // cc
  struct _HAM_PACKAGE *v50; // rax
  char *v51; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v53; // rax
  _QWORD *v54; // rcx
  signed __int64 v55; // rax
  signed __int64 v56; // rcx
  bool v57; // zf
  signed __int64 v58; // rtt
  DWORD v59; // r14d
  _QWORD *v60; // rdi
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 *v63; // rdx
  struct _HAM_RC_TREE_NODE *v64; // rax
  unsigned __int64 v65; // rcx
  struct _HAM_RC_TREE_NODE *v66; // rcx
  _QWORD **v67; // rax
  unsigned __int64 v68; // rcx
  _QWORD *v69; // rcx
  unsigned __int64 v70; // rdi
  signed __int64 v71; // rax
  signed __int64 v72; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  int v74; // [rsp+20h] [rbp-E0h]
  DWORD dwTlsIndex; // [rsp+24h] [rbp-DCh]
  DWORD dwTlsIndexa; // [rsp+24h] [rbp-DCh]
  struct _HAM_RC_TREE_NODE *Next; // [rsp+28h] [rbp-D8h]
  __int128 v78; // [rsp+30h] [rbp-D0h]
  __m128i v79; // [rsp+30h] [rbp-D0h]
  __int128 v80; // [rsp+40h] [rbp-C0h]
  __m128i v81; // [rsp+40h] [rbp-C0h]
  int v82; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_PACKAGE *v83; // [rsp+58h] [rbp-A8h]
  __m128i si128; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v85; // [rsp+70h] [rbp-90h]
  __int128 v86; // [rsp+80h] [rbp-80h]
  __int128 v87; // [rsp+90h] [rbp-70h]
  wchar_t String1[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v89; // [rsp+B0h] [rbp-50h]
  __int128 v90; // [rsp+C0h] [rbp-40h]
  __int128 v91; // [rsp+D0h] [rbp-30h]
  __int128 v92; // [rsp+E0h] [rbp-20h]
  __int128 v93; // [rsp+F0h] [rbp-10h]
  __int128 v94; // [rsp+100h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+10h]
  __int16 v96; // [rsp+120h] [rbp+20h]
  wchar_t String2[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v98; // [rsp+140h] [rbp+40h]
  __int128 v99; // [rsp+150h] [rbp+50h]
  __int128 v100; // [rsp+160h] [rbp+60h]
  __int128 v101; // [rsp+170h] [rbp+70h]
  __int128 v102; // [rsp+180h] [rbp+80h]
  __int128 v103; // [rsp+190h] [rbp+90h]
  __int128 v104; // [rsp+1A0h] [rbp+A0h]
  __int16 v105; // [rsp+1B0h] [rbp+B0h]

  v1 = a1;
  v83 = a1;
  v74 = 0;
  v2 = 0;
  memset_0(String1, 0, 0x82uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v85 = si128;
  RtlAcquireSRWLockShared((char *)v1 + 56);
  v3 = *((_QWORD *)v1 + 6);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_166;
    v4 = v3 ^ (((unsigned __int64)v1 + 40) | 1);
  }
  else
  {
    v4 = *((_QWORD *)v1 + 6);
  }
  Next = (struct _HAM_RC_TREE_NODE *)v4;
  if ( !v4 )
  {
LABEL_166:
    RtlReleaseSRWLockShared((char *)v1 + 56);
    return;
  }
  while ( !*(_QWORD *)(v4 + 24) )
  {
    v64 = *(struct _HAM_RC_TREE_NODE **)(v4 + 8);
    v65 = v4;
    if ( v64 )
    {
      v66 = *(struct _HAM_RC_TREE_NODE **)v64;
      v4 = *(_QWORD *)(v4 + 8);
      Next = v64;
      if ( *(_QWORD *)v64 )
      {
        do
        {
          v4 = (unsigned __int64)v66;
          Next = v66;
          v66 = *(struct _HAM_RC_TREE_NODE **)v66;
        }
        while ( v66 );
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
          if ( *(_QWORD *)v4 == v65 )
            break;
          v65 = v4;
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        }
        while ( v4 );
        Next = (struct _HAM_RC_TREE_NODE *)v4;
      }
    }
    if ( !v4 )
      goto LABEL_166;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared((char *)v1 + 56);
  while ( 1 )
  {
    while ( 1 )
    {
      v82 = 130;
      PsmGetApplicationNameFromKey(v4 + 96, String2, &v82);
      if ( _wcsicmp(String1, String2) )
      {
        if ( v2 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&si128);
        si128 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
        v85 = (__m128i)0xFFFFFFFFFFFFFFFFuLL;
        v74 = 0;
      }
      v5 = -1LL;
      dwTlsIndex = 0;
      v6 = 0LL;
      v7 = 0LL;
      v8 = HampLockTrackerId;
      v9 = -1LL;
      v86 = 0xFFFFFFFFFFFFFFFFuLL;
      v87 = 0xFFFFFFFFFFFFFFFFuLL;
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
      dword_1800DD4E8 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v13 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v13 |= 0x20uLL;
        ++v13[6];
      }
      RtlAcquireSRWLockShared(v4 + 584);
      v14 = *(int **)(v4 + 600);
      if ( v14 == (int *)(v4 + 600) )
      {
LABEL_167:
        v15 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v15 = v14 - 206;
          if ( *(v14 - 216) >= 0 )
            break;
          v14 = *(int **)v14;
          if ( v14 == (int *)(v4 + 600) )
            goto LABEL_167;
        }
        ++*((_QWORD *)v15 + 75);
      }
      if ( HampLockTrackerId != -1 )
      {
        v16 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v17 = *v16;
        if ( (*v16 & 0x20) == 0 )
          __int2c();
        v57 = v16[6]-- == 1;
        if ( v57 )
          *v16 = v17 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      RtlReleaseSRWLockShared(v4 + 584);
      dword_1800DD4E8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v19 = *v18;
        if ( (*v18 & 1) == 0 )
          __int2c();
        v57 = v18[1]-- == 1;
        if ( v57 )
          *v18 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( v15 )
      {
        v20 = 0;
        while ( 1 )
        {
          dwTlsIndexa = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v21 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(dwTlsIndexa) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v21 |= 2uLL;
            ++v21[2];
          }
          RtlAcquireSRWLockExclusive(v15);
          v15[2] = GetCurrentThreadId();
          v20 |= (*((_QWORD *)v15 + 83) & 0x1000000000000000LL) != 0;
          v22 = (*((_QWORD *)v15 + 83) & 0xEFFFFFFFFFFFFFFFuLL) >> 59;
          *((_QWORD *)v15 + 83) &= 0xE7FFFFFFFFFFFFFFuLL;
          v23 = v22 & 1;
          v24 = *((_QWORD *)v15 + 129);
          v25 = *((_QWORD *)v15 + 128);
          if ( v25 >= v24 )
          {
            if ( v25 <= v24 || v5 >= v6 || v25 <= v6 )
            {
LABEL_42:
              if ( v25 < v5 )
                v5 = *((_QWORD *)v15 + 128);
LABEL_44:
              *(_QWORD *)&v78 = v5;
              goto LABEL_45;
            }
          }
          else if ( v5 < v6 )
          {
            if ( v25 <= v6 && v24 >= v5 )
              goto LABEL_42;
          }
          else if ( v5 <= v6 || v5 <= v24 )
          {
            goto LABEL_42;
          }
          if ( (__int64)v25 <= (__int64)v5 )
            goto LABEL_44;
          *(_QWORD *)&v78 = *((_QWORD *)v15 + 128);
LABEL_45:
          v26 = *((_QWORD *)v15 + 131);
          v27 = *((_QWORD *)v15 + 130);
          if ( v27 < v26 )
          {
            if ( v9 < v7 )
            {
              if ( v27 <= v7 && v26 >= v9 )
              {
LABEL_47:
                if ( v27 < v9 )
                  goto LABEL_140;
                goto LABEL_48;
              }
            }
            else if ( v9 <= v7 || v9 <= v26 )
            {
              goto LABEL_47;
            }
          }
          else if ( v27 <= v26 || v9 >= v7 || v27 <= v7 )
          {
            goto LABEL_47;
          }
          if ( (__int64)v27 > (__int64)v9 )
          {
LABEL_140:
            *(_QWORD *)&v80 = *((_QWORD *)v15 + 130);
            goto LABEL_49;
          }
LABEL_48:
          *(_QWORD *)&v80 = v9;
LABEL_49:
          if ( v24 <= v6 )
            *((_QWORD *)&v78 + 1) = v6;
          else
            *((_QWORD *)&v78 + 1) = *((_QWORD *)v15 + 129);
          if ( v26 <= v7 )
            *((_QWORD *)&v80 + 1) = v7;
          else
            *((_QWORD *)&v80 + 1) = *((_QWORD *)v15 + 131);
          v86 = v78;
          v87 = v80;
          if ( HampLockTrackerId != -1 )
          {
            v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v29 = *v28;
            if ( (*v28 & 2) == 0 )
              __int2c();
            v57 = v28[2]-- == 1;
            if ( v57 )
              *v28 = v29 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          v15[2] = 0;
          RtlReleaseSRWLockExclusive(v15);
          if ( v23 )
          {
            v59 = HampLockTrackerId;
            if ( HampLockTrackerId != -1 )
            {
              v60 = TlsGetValue(HampLockTrackerId);
              if ( *(_QWORD *)TlsGetValue(v59) )
                __int2c();
              *v60 |= 1uLL;
              ++v60[1];
            }
            RtlAcquireSRWLockExclusive(&RmpGlobalLock);
            dword_1800DD4E8 = GetCurrentThreadId();
            v57 = (*((_QWORD *)v15 + 75))-- == 1LL;
            if ( v57 )
              RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v15 - 16));
            dword_1800DD4E8 = 0;
            RtlReleaseSRWLockExclusive(&RmpGlobalLock);
            if ( HampLockTrackerId != -1 )
            {
              v61 = (__int64 *)TlsGetValue(HampLockTrackerId);
              v62 = *v61;
              if ( (*v61 & 1) == 0 )
                __int2c();
              v57 = v61[1]-- == 1;
              if ( v57 )
                *v61 = v62 & 0xFFFFFFFFFFFFFFFEuLL;
            }
          }
          v30 = HampLockTrackerId;
          v31 = *((_QWORD *)v15 + 99);
          if ( HampLockTrackerId != -1 )
          {
            v32 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v30) )
              __int2c();
            *v32 |= 1uLL;
            ++v32[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          v33 = GetCurrentThreadId();
          v34 = HampLockTrackerId;
          dword_1800DD4E8 = v33;
          if ( HampLockTrackerId != -1 )
          {
            v35 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v35 |= 0x20uLL;
            ++v35[6];
          }
          v36 = v31 + 584;
          RtlAcquireSRWLockShared(v31 + 584);
          v37 = *((_QWORD *)v15 + 103);
          v38 = v31 + 600;
          if ( v37 == v38 )
          {
LABEL_68:
            v39 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v39 = (int *)(v37 - 824);
              if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v37 - 824)) )
                break;
              v37 = *v63;
              if ( v37 == v38 )
                goto LABEL_68;
            }
          }
          if ( HampLockTrackerId != -1 )
          {
            v40 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v41 = *v40;
            if ( (*v40 & 0x20) == 0 )
              __int2c();
            v57 = v40[6]-- == 1;
            if ( v57 )
              *v40 = v41 & 0xFFFFFFFFFFFFFFDFuLL;
          }
          RtlReleaseSRWLockShared(v36);
          dword_1800DD4E8 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v42 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v43 = *v42;
            if ( (*v42 & 1) == 0 )
              __int2c();
            v57 = v42[1]-- == 1;
            if ( v57 )
              *v42 = v43 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          v44 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v45 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v44) )
              __int2c();
            *v45 |= 1uLL;
            ++v45[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DD4E8 = GetCurrentThreadId();
          v57 = (*((_QWORD *)v15 + 75))-- == 1LL;
          if ( v57 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v15 - 16));
          dword_1800DD4E8 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v46 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v47 = *v46;
            if ( (*v46 & 1) == 0 )
              __int2c();
            v57 = v46[1]-- == 1;
            if ( v57 )
              *v46 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          v7 = *((_QWORD *)&v87 + 1);
          v15 = v39;
          v9 = v87;
          v6 = *((_QWORD *)&v86 + 1);
          v5 = v86;
          if ( !v39 )
          {
            dwTlsIndex = v20;
            v4 = (unsigned __int64)Next;
            break;
          }
        }
      }
      v48 = v5 <= v6;
      if ( v5 >= v6 )
        goto LABEL_152;
      if ( si128.m128i_i64[0] >= (unsigned __int64)si128.m128i_i64[1] )
      {
        if ( si128.m128i_i64[0] > (unsigned __int64)si128.m128i_i64[1] )
        {
          if ( si128.m128i_i64[0] <= v6 )
            goto LABEL_96;
          goto LABEL_148;
        }
        v48 = v5 <= v6;
LABEL_152:
        if ( v48 || si128.m128i_i64[0] >= (unsigned __int64)si128.m128i_i64[1] || v5 <= si128.m128i_i64[1] )
          goto LABEL_96;
        goto LABEL_148;
      }
      if ( v5 <= si128.m128i_i64[1] && v6 >= si128.m128i_i64[0] )
      {
LABEL_96:
        if ( v5 < si128.m128i_i64[0] )
          goto LABEL_97;
        goto LABEL_149;
      }
LABEL_148:
      if ( (__int64)v5 > si128.m128i_i64[0] )
      {
LABEL_97:
        v79.m128i_i64[0] = v5;
        goto LABEL_98;
      }
LABEL_149:
      v79.m128i_i64[0] = si128.m128i_i64[0];
LABEL_98:
      v49 = v9 <= v7;
      if ( v9 >= v7 )
        goto LABEL_99;
      if ( v85.m128i_i64[0] >= (unsigned __int64)v85.m128i_i64[1] )
      {
        if ( v85.m128i_i64[0] > (unsigned __int64)v85.m128i_i64[1] )
        {
          if ( v85.m128i_i64[0] <= v7 )
            goto LABEL_100;
          goto LABEL_144;
        }
        v49 = v9 <= v7;
LABEL_99:
        if ( v49 || v85.m128i_i64[0] >= (unsigned __int64)v85.m128i_i64[1] || v9 <= v85.m128i_i64[1] )
          goto LABEL_100;
        goto LABEL_144;
      }
      if ( v9 <= v85.m128i_i64[1] && v7 >= v85.m128i_i64[0] )
      {
LABEL_100:
        if ( v9 >= v85.m128i_i64[0] )
          goto LABEL_101;
        goto LABEL_145;
      }
LABEL_144:
      if ( (__int64)v9 <= v85.m128i_i64[0] )
      {
LABEL_101:
        v81.m128i_i64[0] = v85.m128i_i64[0];
        goto LABEL_102;
      }
LABEL_145:
      v81.m128i_i64[0] = v9;
LABEL_102:
      v79.m128i_i64[1] = v6 <= si128.m128i_i64[1] ? si128.m128i_i64[1] : v6;
      v81.m128i_i64[1] = v7 <= v85.m128i_i64[1] ? v85.m128i_i64[1] : v7;
      v2 = dwTlsIndex | v74;
      v1 = v83;
      si128 = v79;
      v96 = v105;
      v85 = v81;
      v74 |= dwTlsIndex;
      *(_OWORD *)String1 = *(_OWORD *)String2;
      v89 = v98;
      v90 = v99;
      v91 = v100;
      v92 = v101;
      v93 = v102;
      v94 = v103;
      v95 = v104;
      v50 = (struct _HAM_PACKAGE *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v50 == (struct _HAM_PACKAGE *)((char *)v83 + 40) )
        break;
      Successor = (struct _HAM_PACKAGE *)((char *)v50 - 40);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v50 - 2) <= 1 )
        __fastfail(0xEu);
      Next = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(v4);
      v4 = (unsigned __int64)Next;
      if ( Next )
      {
        if ( Successor )
          goto LABEL_234;
      }
      else
      {
        Successor = HamRcNodeGetSuccessor(v1, Successor);
        if ( !Successor )
          goto LABEL_115;
        while ( 1 )
        {
          Next = HamRcNodeGetFirst(Successor, 1);
          v4 = (unsigned __int64)Next;
          if ( Next )
            break;
          Successor = HamRcNodeGetSuccessor(v1, Successor);
          if ( !Successor )
            goto LABEL_115;
        }
LABEL_234:
        CemRcObjectDereference(Successor);
      }
    }
    v51 = (char *)v50 + 16;
    RtlAcquireSRWLockShared((char *)v50 + 16);
    i = *(_QWORD *)(v4 + 8);
    v53 = v4;
    if ( i )
    {
      v54 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v54;
          v54 = (_QWORD *)*v54;
        }
        while ( v54 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v53 )
          break;
        v53 = i;
      }
    }
    if ( i )
    {
      while ( !*(_QWORD *)(i + 24) )
      {
        v67 = *(_QWORD ***)(i + 8);
        v68 = i;
        if ( v67 )
        {
          v69 = *v67;
          for ( i = *(_QWORD *)(i + 8); v69; v69 = (_QWORD *)*v69 )
            i = (unsigned __int64)v69;
        }
        else
        {
          for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v68 )
              break;
            v68 = i;
          }
        }
        if ( !i )
          goto LABEL_111;
      }
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
LABEL_111:
      i = 0LL;
    }
    RtlReleaseSRWLockShared(v51);
    _m_prefetchw((const void *)(v4 + 24));
    v55 = *(_QWORD *)(v4 + 24);
    v56 = v55 - 1;
    v57 = v55 == 1;
    if ( v55 - 1 <= 0 )
    {
LABEL_218:
      if ( !v57 )
        __fastfail(0xEu);
      v70 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(v4 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(v4 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(unsigned __int64))(v70 + 24))(v4);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v70 + 16);
        v71 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v48 = v71 <= 1;
        v72 = v71 - 1;
        if ( v48 )
        {
          if ( v72 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v70 + 16);
          (*(void (__fastcall **)(unsigned __int64))(v70 + 24))(v4);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v70 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v58 = v55;
        v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), v56, v55);
        if ( v58 == v55 )
          break;
        v56 = v55 - 1;
        v57 = v55 == 1;
        if ( v55 - 1 <= 0 )
          goto LABEL_218;
      }
    }
    if ( !i )
      break;
    v4 = i;
    Next = (struct _HAM_RC_TREE_NODE *)i;
  }
LABEL_115:
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
