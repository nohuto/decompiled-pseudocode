/*
 * XREFs of sub_1409F2984 @ 0x1409F2984
 * Callers:
 *     sub_1409F3D68 @ 0x1409F3D68 (sub_1409F3D68.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409EEA10 @ 0x1409EEA10 (sub_1409EEA10.c)
 *     sub_1409EEF94 @ 0x1409EEF94 (sub_1409EEF94.c)
 *     sub_1409EF014 @ 0x1409EF014 (sub_1409EF014.c)
 *     sub_1409F0964 @ 0x1409F0964 (sub_1409F0964.c)
 *     sub_1409F19C8 @ 0x1409F19C8 (sub_1409F19C8.c)
 *     sub_1409F2898 @ 0x1409F2898 (sub_1409F2898.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F2984(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 *v7; // r15
  signed int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ecx
  __int64 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r12d
  struct _KTHREAD *v16; // rax
  __int64 *v17; // r8
  int v18; // r11d
  _OWORD **v19; // r9
  __int64 *v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // esi
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r12d
  __int64 *Pool2; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // r12
  char *v42; // rsi
  char *v43; // rax
  char *v44; // rsi
  _OWORD *v45; // rcx
  __int64 v46; // rdx
  char *v47; // rsi
  char *v48; // r9
  char *v49; // rsi
  __int64 *i; // rdx
  unsigned int v51; // r8d
  _DWORD *v52; // r10
  __int64 v53; // rcx
  char *v54; // r9
  char *v55; // rsi
  void *v56; // r9
  unsigned int v57; // ecx
  unsigned int v58; // esi
  __int128 *v59; // r15
  char *v60; // rdx
  int v61; // edx
  _OWORD *v62; // r15
  __int64 *v63; // rsi
  __int64 *v64; // r15
  __int64 **v65; // rax
  unsigned int j; // ebx
  unsigned int v68; // [rsp+20h] [rbp-168h]
  unsigned int v69; // [rsp+24h] [rbp-164h]
  __int64 *v70; // [rsp+28h] [rbp-160h]
  char *v71; // [rsp+30h] [rbp-158h]
  unsigned int v72; // [rsp+38h] [rbp-150h]
  unsigned int v73; // [rsp+3Ch] [rbp-14Ch]
  int v74; // [rsp+40h] [rbp-148h]
  unsigned int v75; // [rsp+44h] [rbp-144h]
  int v76; // [rsp+48h] [rbp-140h]
  unsigned __int64 v77; // [rsp+50h] [rbp-138h]
  __int64 *v78; // [rsp+58h] [rbp-130h]
  __int128 v79; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 v80; // [rsp+70h] [rbp-118h]
  char *v81; // [rsp+78h] [rbp-110h]
  int v82; // [rsp+80h] [rbp-108h]
  __int64 v83; // [rsp+88h] [rbp-100h]
  __int64 v84; // [rsp+90h] [rbp-F8h] BYREF
  char *v85; // [rsp+98h] [rbp-F0h]
  unsigned __int64 v86; // [rsp+A0h] [rbp-E8h]
  char *v87; // [rsp+A8h] [rbp-E0h]
  unsigned int *v88; // [rsp+B0h] [rbp-D8h]
  ULONG_PTR v89; // [rsp+B8h] [rbp-D0h]
  ULONG_PTR v90; // [rsp+C0h] [rbp-C8h]
  unsigned int v91; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v92; // [rsp+D0h] [rbp-B8h]
  char *v93; // [rsp+D8h] [rbp-B0h]
  char *v94; // [rsp+E0h] [rbp-A8h]
  __int64 *v95; // [rsp+E8h] [rbp-A0h]
  __int64 v96; // [rsp+F0h] [rbp-98h]
  char *v97; // [rsp+F8h] [rbp-90h]
  char *v98; // [rsp+100h] [rbp-88h]
  _DWORD *v99; // [rsp+108h] [rbp-80h]
  struct _KTHREAD *v100; // [rsp+110h] [rbp-78h]
  struct _KTHREAD *v101; // [rsp+118h] [rbp-70h]
  struct _KTHREAD *v102; // [rsp+120h] [rbp-68h]
  __int128 v103; // [rsp+128h] [rbp-60h] BYREF
  __int128 v104; // [rsp+138h] [rbp-50h]

  v88 = a4;
  LODWORD(v77) = a3;
  v80 = a2;
  v90 = BugCheckParameter2;
  v84 = 0LL;
  v5 = qword_140C15D88;
  v83 = qword_140C15D88;
  v6 = BugCheckParameter2 + 16;
  v89 = BugCheckParameter2 + 16;
  v71 = 0LL;
  v86 = 0LL;
  v79 = 0LL;
  v7 = 0LL;
  v78 = 0LL;
  v87 = 0LL;
  v8 = sub_14088394C(&v84);
  if ( v8 < 0 )
    goto LABEL_87;
  if ( v84 != BugCheckParameter2 )
  {
    v8 = -1073741431;
LABEL_87:
    v35 = 0;
    goto LABEL_88;
  }
  sub_1409EEF94(v5);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v10 = 0;
  v11 = *(__int64 **)(BugCheckParameter2 + 1168);
  v70 = v11;
  while ( v11 != (__int64 *)(BugCheckParameter2 + 1168) )
  {
    v10 += *((_DWORD *)v11 + 4);
    v11 = (__int64 *)*v11;
  }
  v70 = v11;
  v75 = v10;
  v12 = 8LL * v10;
  v92 = v12;
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v12;
  v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_87;
  v14 = v13 + 716;
  v15 = -1;
  if ( v13 + 716 >= v13 )
    v15 = v13 + 716;
  v8 = v14 < v13 ? 0xC0000095 : 0;
  if ( v14 < v13 )
    goto LABEL_87;
  v68 = 0;
  v74 = 0;
  v69 = 0;
  v73 = 0;
  v72 = 0;
  *((_QWORD *)&v79 + 1) = &v79;
  *(_QWORD *)&v79 = &v79;
  v16 = KeGetCurrentThread();
  --*((_WORD *)v16 + 242);
  ExAcquirePushLockSharedEx(v6 + 664, 0LL);
  v17 = *(__int64 **)(v6 + 712);
  v70 = v17;
  v18 = 0;
LABEL_14:
  v19 = (_OWORD **)*((_QWORD *)&v79 + 1);
  while ( 1 )
  {
    v20 = v17;
    if ( v17 == (__int64 *)(v6 + 712) )
      break;
    v17 = (__int64 *)*v17;
    v70 = v17;
    if ( *((_DWORD *)v20 + 15) || (v20[6] & 0x100000) != 0 )
    {
      if ( !v20[4] )
      {
        if ( *(v20 - 1) == 1 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
        _InterlockedExchange((volatile __int32 *)v20 + 15, 0);
        v17 = v70;
        goto LABEL_14;
      }
      v74 = ++v68;
      ++v69;
      v21 = 2 * (unsigned __int16)*((_DWORD *)v20 + 12) + 2;
      v22 = v21 + v18;
      v18 = -1;
      if ( v22 >= v21 )
        v18 = v22;
      v73 = v18;
      v8 = v22 < v21 ? 0xC0000095 : 0;
      if ( v22 < v21 )
        goto LABEL_86;
      v23 = *((_DWORD *)v20 - 4) - (((unsigned __int8)*((_DWORD *)v20 - 4) - 1) & 3) + 3;
      v24 = v23 + v72;
      v25 = -1;
      if ( v23 + v72 >= v23 )
        v25 = v23 + v72;
      v72 = v25;
      v8 = v24 < v23 ? 0xC0000095 : 0;
      if ( v24 < v23 )
        goto LABEL_86;
      v26 = v20 + 9;
      if ( *v19 != &v79 )
LABEL_82:
        __fastfail(3u);
      *v26 = &v79;
      v26[1] = v19;
      *v19 = v26;
      v19 = (_OWORD **)v26;
      *((_QWORD *)&v79 + 1) = v26;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
  sub_1402AFC00(v6 + 664);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v27 = 48LL * v69;
  v28 = -1;
  if ( v27 <= 0xFFFFFFFF )
    v28 = 48 * v69;
  v8 = v27 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v27 <= 0xFFFFFFFF )
  {
    v29 = v15 + v28;
    v30 = -1;
    if ( v29 >= v15 )
      v30 = v29;
    v8 = v29 < v15 ? 0xC0000095 : 0;
    if ( v29 >= v15 )
    {
      v31 = v30 + v73;
      v32 = -1;
      if ( v30 + v73 >= v30 )
        v32 = v30 + v73;
      v8 = v31 < v30 ? 0xC0000095 : 0;
      if ( v31 >= v30 )
      {
        v33 = v32 + v72;
        v34 = -1;
        if ( v32 + v72 >= v32 )
          v34 = v32 + v72;
        v91 = v34;
        v8 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 >= v32 )
        {
          v35 = v68;
          if ( (unsigned int)v77 < v34 )
          {
            *v88 = v34;
            v8 = -1073741789;
            goto LABEL_88;
          }
          if ( v68 )
          {
            Pool2 = (__int64 *)ExAllocatePool2(256LL, 8 * v68, 1450669125LL);
            v7 = Pool2;
            v78 = Pool2;
            if ( !Pool2 )
            {
              v8 = -1073741670;
              goto LABEL_88;
            }
            memset(Pool2, 0, 8 * v68);
          }
          v37 = v80;
          if ( (*(_DWORD *)(v80 + 16) & 1) != 0 )
          {
            v38 = v83;
            v39 = *(_QWORD *)(v83 + 1064);
            if ( v39 )
            {
              v96 = *(_QWORD *)(v83 + 1064);
              memset((void *)(v39 + 8), 0, 4LL * *(unsigned int *)(v39 + 4));
            }
            v40 = *(_QWORD *)(v38 + 1072);
            if ( v40 )
            {
              v96 = *(_QWORD *)(v38 + 1072);
              memset((void *)(v40 + 8), 0, 4LL * *(unsigned int *)(v40 + 4));
            }
          }
          v41 = v37 + 20;
          v86 = v41;
          v42 = (char *)(v37 + 64);
          v71 = v42;
          *(_OWORD *)v41 = 0LL;
          *(_OWORD *)(v41 + 16) = 0LL;
          *(_QWORD *)(v41 + 32) = 0LL;
          *(_DWORD *)(v41 + 40) = 0;
          *(_DWORD *)v41 = 44;
          *(_DWORD *)(v41 + 8) = *(_DWORD *)(BugCheckParameter2 + 1212);
          *(_DWORD *)(v41 + 16) = 592;
          *(_DWORD *)(v41 + 12) = (_DWORD)v42 - v41;
          v43 = v42;
          v97 = v42;
          v44 = v42 + 592;
          v71 = v44;
          v45 = (_OWORD *)(v6 + 8);
          v46 = 4LL;
          do
          {
            *(_OWORD *)v43 = *v45;
            *((_OWORD *)v43 + 1) = v45[1];
            *((_OWORD *)v43 + 2) = v45[2];
            *((_OWORD *)v43 + 3) = v45[3];
            *((_OWORD *)v43 + 4) = v45[4];
            *((_OWORD *)v43 + 5) = v45[5];
            *((_OWORD *)v43 + 6) = v45[6];
            v43 += 128;
            *((_OWORD *)v43 - 1) = v45[7];
            v45 += 8;
            --v46;
          }
          while ( v46 );
          *(_OWORD *)v43 = *v45;
          *((_OWORD *)v43 + 1) = v45[1];
          *((_OWORD *)v43 + 2) = v45[2];
          *((_OWORD *)v43 + 3) = v45[3];
          *((_OWORD *)v43 + 4) = v45[4];
          *(_DWORD *)(v41 + 24) = 60;
          *(_DWORD *)(v41 + 20) = (_DWORD)v44 - v41;
          v87 = v44;
          v47 = v44 + 60;
          *(_DWORD *)(v41 + 32) = v75;
          *(_DWORD *)(v41 + 28) = (_DWORD)v47 - v41;
          v48 = v47;
          v93 = v47;
          v49 = &v47[v92];
          v71 = v49;
          v98 = v49;
          for ( i = *(__int64 **)(BugCheckParameter2 + 1168); ; i = (__int64 *)*i )
          {
            v70 = i;
            if ( i == (__int64 *)(BugCheckParameter2 + 1168) )
              break;
            v95 = i;
            v51 = 0;
            v82 = 0;
            while ( v51 < *((_DWORD *)i + 5) )
            {
              v52 = (_DWORD *)(i[3] + 8LL * v51);
              v99 = v52;
              if ( *(_QWORD *)v52 )
              {
                if ( v48 >= v49 )
                  break;
                *(_DWORD *)v48 = *v52;
                *((_DWORD *)v48 + 1) = v52[1];
                v48 += 8;
                v93 = v48;
              }
              v82 = ++v51;
            }
          }
          v53 = v69;
          *(_DWORD *)(v41 + 40) = v69;
          *(_DWORD *)(v41 + 36) = (_DWORD)v49 - v41;
          v54 = v49;
          v85 = v49;
          v55 = &v49[48 * v53];
          memset(v54, 0, v55 - v54);
          v56 = v55;
          v77 = (unsigned __int64)v55;
          v94 = &v55[v72];
          v57 = v72 + (_DWORD)v55;
          v81 = v94;
          v58 = v73 + (_DWORD)v94;
          v71 = &v94[v73];
          v80 = (unsigned __int64)v71;
          v76 = 0;
          v59 = (__int128 *)v79;
          v70 = (__int64 *)v79;
          while ( v59 != &v79 )
          {
            v70 = *(__int64 **)v59;
            v60 = v85;
            *((_DWORD *)v85 + 2) = (_DWORD)v56 - v41;
            *((_DWORD *)v60 + 3) = *((_DWORD *)v59 - 22);
            *(_DWORD *)v60 = v57 - v41;
            *((_DWORD *)v60 + 1) = (unsigned __int16)*((_DWORD *)v59 - 6);
            *((_DWORD *)v60 + 4) = *((_DWORD *)v59 - 27);
            *((_DWORD *)v60 + 5) = *((_DWORD *)v59 - 28);
            *((_DWORD *)v60 + 6) = *((_DWORD *)v59 - 26);
            *((_DWORD *)v60 + 7) = *((_DWORD *)v59 - 5);
            *((_DWORD *)v60 + 8) = *((_DWORD *)v59 - 4);
            *((_DWORD *)v60 + 9) = *((_DWORD *)v59 + 4);
            *((_DWORD *)v60 + 10) = *((_DWORD *)v59 + 5);
            *((_DWORD *)v60 + 11) = *((_DWORD *)v59 + 6);
            v85 = v60 + 48;
            memmove(v56, *((const void **)v59 - 12), *((unsigned int *)v59 - 22));
            v77 = (*((unsigned int *)v59 - 22) + v77 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v77 > (unsigned __int64)v94 )
              break;
            sub_1402D88AC(
              v81,
              (__int64)(v80 - (_QWORD)v81) >> 1,
              *((_QWORD *)v59 - 4),
              (unsigned __int16)*((_DWORD *)v59 - 6));
            v81 += 2 * (unsigned int)(unsigned __int16)*((_DWORD *)v59 - 6) + 2;
            if ( (unsigned __int64)v81 > v80 )
              break;
            v100 = KeGetCurrentThread();
            --*((_WORD *)v100 + 242);
            ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
            v101 = KeGetCurrentThread();
            *(_QWORD *)(v6 + 672) = v101;
            v61 = v76;
            v78[v76] = *((_QWORD *)v59 - 5);
            v76 = v61 + 1;
            *((_QWORD *)v59 - 5) = 0LL;
            *((_QWORD *)v59 - 4) = 0LL;
            *((_DWORD *)v59 - 6) &= 0xFFFF0000;
            *((_DWORD *)v59 - 6) |= 0x80000u;
            *(_QWORD *)(v6 + 672) = 0LL;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v6 + 664);
            sub_1402AFC00(v6 + 664);
            v102 = KeGetCurrentThread();
            sub_1402F9540((__int64)v102);
            --v69;
            if ( *((_QWORD *)v59 - 10) == 1LL )
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
            _InterlockedExchange((volatile __int32 *)v59 - 3, 0);
            v58 = (unsigned int)v71;
            v41 = v86;
            v59 = (__int128 *)v70;
            v57 = (unsigned int)v81;
            v56 = (void *)v77;
          }
          v62 = v87;
          *(_OWORD *)v87 = *(_OWORD *)(v6 + 600);
          v62[1] = *(_OWORD *)(v6 + 616);
          v62[2] = *(_OWORD *)(v6 + 632);
          *((_QWORD *)v62 + 6) = *(_QWORD *)(v6 + 648);
          *((_DWORD *)v62 + 14) = *(_DWORD *)(v6 + 656);
          *(_OWORD *)(v6 + 600) = 0LL;
          *(_OWORD *)(v6 + 616) = 0LL;
          *(_OWORD *)(v6 + 632) = 0LL;
          *(_QWORD *)(v6 + 648) = 0LL;
          *(_DWORD *)(v6 + 656) = 0;
          v103 = 0LL;
          v104 = 0LL;
          sub_1409EF014(v83, &v103);
          *(_OWORD *)((char *)v62 + 28) = v103;
          *(_OWORD *)((char *)v62 + 44) = v104;
          *(_DWORD *)(v41 + 4) = v58 - v41;
          v63 = *(__int64 **)(BugCheckParameter2 + 1168);
          v70 = v63;
          while ( v63 != (__int64 *)(BugCheckParameter2 + 1168) )
          {
            v64 = v63;
            v95 = v63;
            v63 = (__int64 *)*v63;
            v70 = v63;
            if ( v64 == *(__int64 **)(BugCheckParameter2 + 1152) )
            {
              memset((void *)v64[3], 0, 8LL * *((unsigned int *)v64 + 5));
              *((_DWORD *)v64 + 4) = 0;
            }
            else
            {
              v65 = (__int64 **)v64[1];
              if ( (__int64 *)v63[1] != v64 || *v65 != v64 )
                goto LABEL_82;
              *v65 = v63;
              v63[1] = (__int64)v65;
              --*(_DWORD *)(BugCheckParameter2 + 1184);
              sub_1409F2898(v64);
            }
          }
          ++*(_DWORD *)(BugCheckParameter2 + 1212);
          sub_1409EEA10(BugCheckParameter2, v83, 0);
          *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(BugCheckParameter2);
          sub_1402AFC00(BugCheckParameter2);
          sub_1402F9540((__int64)KeGetCurrentThread());
          sub_1409F0964(v6);
          *v88 = v91;
          v8 = 0;
          v7 = v78;
        }
      }
    }
  }
LABEL_86:
  v35 = v68;
LABEL_88:
  if ( *(struct _KTHREAD **)(v6 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 664);
    sub_1402AFC00(v6 + 664);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v7 )
  {
    for ( j = 0; j < v35; ++j )
      sub_1409F19C8(&v7[j]);
    ExFreePoolWithTag(v7, 0x56777445u);
  }
  if ( v84 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v8;
}
