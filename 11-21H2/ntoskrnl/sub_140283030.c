/*
 * XREFs of sub_140283030 @ 0x140283030
 * Callers:
 *     CcFlushCache @ 0x140248B00 (CcFlushCache.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14027EF40 (CcCoherencyFlushAndPurgeCache.c)
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     sub_14029E64C @ 0x14029E64C (sub_14029E64C.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     CcFlushCacheToLsn @ 0x140387830 (CcFlushCacheToLsn.c)
 * Callees:
 *     sub_14023C3B4 @ 0x14023C3B4 (sub_14023C3B4.c)
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_140282258 @ 0x140282258 (sub_140282258.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C5C @ 0x140282C5C (sub_140282C5C.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_14028A258 @ 0x14028A258 (sub_14028A258.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_1403AE0B0 @ 0x1403AE0B0 (sub_1403AE0B0.c)
 *     sub_1403AE198 @ 0x1403AE198 (sub_1403AE198.c)
 *     sub_1404171F4 @ 0x1404171F4 (sub_1404171F4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140539D54 @ 0x140539D54 (sub_140539D54.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_140811AB4 @ 0x140811AB4 (sub_140811AB4.c)
 */

void __fastcall sub_140283030(__int64 a1, void *a2, unsigned int a3, signed __int64 *a4, char a5, int *a6)
{
  char v6; // si
  char v7; // r12
  int v8; // r15d
  __int64 v9; // r14
  int *v10; // r13
  int v11; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  signed __int64 v19; // rdx
  int *v20; // rbx
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // r15d
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rbx
  int v31; // eax
  unsigned int v32; // r12d
  int v33; // r15d
  signed __int64 *v34; // rbx
  unsigned int v35; // esi
  char v36; // al
  unsigned int v37; // r8d
  signed __int64 *v38; // rdx
  signed __int64 v39; // rax
  __int64 v40; // rdx
  _BYTE *v41; // rdi
  unsigned int v42; // r14d
  __int64 v43; // rax
  int v44; // r9d
  unsigned int v45; // ecx
  __int64 v46; // rbx
  struct _KEVENT *v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rdi
  int *v50; // r15
  unsigned int v51; // r8d
  unsigned int v52; // r14d
  int v53; // eax
  int v54; // ecx
  int v55; // edx
  char v56; // al
  signed __int64 v57; // rbx
  unsigned int v58; // esi
  int v59; // r9d
  int v60; // edi
  int v61; // eax
  int v62; // ecx
  int v63; // ecx
  __int64 v64; // rbx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  signed __int64 v68; // rdx
  signed __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // r8
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int *BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int v75; // [rsp+28h] [rbp-D8h]
  int v76; // [rsp+28h] [rbp-D8h]
  char v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+54h] [rbp-ACh] BYREF
  char v79; // [rsp+58h] [rbp-A8h]
  unsigned int v80; // [rsp+5Ch] [rbp-A4h]
  int v81; // [rsp+60h] [rbp-A0h]
  unsigned int v82; // [rsp+64h] [rbp-9Ch]
  int v83; // [rsp+68h] [rbp-98h]
  unsigned int v84; // [rsp+6Ch] [rbp-94h] BYREF
  int v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+74h] [rbp-8Ch]
  __int64 v87; // [rsp+78h] [rbp-88h]
  signed __int64 *v88; // [rsp+80h] [rbp-80h]
  signed __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  unsigned int v91; // [rsp+98h] [rbp-68h]
  int *v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+B0h] [rbp-50h] BYREF
  signed __int64 v95; // [rsp+C8h] [rbp-38h] BYREF
  LARGE_INTEGER v96; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+D8h] [rbp-28h] BYREF
  signed __int64 v98; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v99; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v100; // [rsp+F0h] [rbp-10h]
  signed __int64 v101; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v102; // [rsp+100h] [rbp+0h]
  _BYTE *v103; // [rsp+108h] [rbp+8h]
  __int64 v104; // [rsp+110h] [rbp+10h] BYREF
  __int64 v105; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v106; // [rsp+120h] [rbp+20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp+28h] BYREF
  __int128 v108; // [rsp+140h] [rbp+40h] BYREF
  void *v110; // [rsp+1A8h] [rbp+A8h]

  v110 = a2;
  v89 = 0LL;
  v101 = 0LL;
  v6 = 0;
  v78 = 0;
  v7 = 0;
  v105 = 0LL;
  v84 = 0;
  v83 = 0;
  v8 = 0;
  v91 = 0;
  v9 = 0LL;
  v85 = 0;
  v80 = 0;
  v86 = 0;
  v81 = 0;
  v104 = 0LL;
  v93 = 0LL;
  v87 = 0LL;
  v90 = 0LL;
  v77 = 0;
  v95 = 0LL;
  v106 = 0LL;
  v100 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v96.QuadPart = 0LL;
  v82 = 0;
  v108 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v94, 0, sizeof(v94));
  if ( a4 && a2 && a2 != &unk_140C49AF8 )
    KeBugCheckEx(0x34u, 0x1718uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = (int *)&v108;
  if ( a6 )
    v10 = a6;
  ++qword_140C49900;
  v92 = v10;
  if ( !byte_140C498C1 && byte_140C49880 && !dword_140C499D0 && !dword_140C499D4 )
  {
    sub_140811AB4(stru_140C498A0);
    a2 = v110;
  }
  *v10 = 0;
  v99 = 0LL;
  if ( a2 == &unk_140C49AF8 )
  {
    a2 = 0LL;
    v93 = *((_QWORD *)v10 + 1);
    v110 = 0LL;
    *v10 = -2147483626;
    v80 = 1;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v81 = v11;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = 0LL;
  if ( a2 != &unk_140C49AF0 )
    v12 = (unsigned __int64)a2;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v88 = (signed __int64 *)v12;
  v13 = *(_QWORD *)(a1 + 8);
  if ( !v13 )
  {
    v16 = v80;
    v17 = a3;
    goto LABEL_33;
  }
  v14 = *(_QWORD *)(v13 + 592);
  v87 = *(_QWORD *)(v13 + 528);
  v90 = v14;
  v94.LockQueue.Next = 0LL;
  v94.LockQueue.Lock = (volatile PKSPIN_LOCK)(v87 + 704);
  sub_1403119F0(&v94);
  v15 = *(_DWORD *)(v13 + 152);
  v6 = 1;
  v88 = (signed __int64 *)v12;
  if ( (v15 & 0x2000) != 0 )
  {
    if ( (v12 & 1) == 0 )
      goto LABEL_39;
    v12 ^= 1uLL;
    v88 = (signed __int64 *)v12;
  }
  v16 = v80;
  if ( !v80 )
  {
    if ( !v12 )
      goto LABEL_30;
    v18 = *(_QWORD *)v12;
    v19 = *(_QWORD *)(v13 + 32);
    if ( *(_QWORD *)v12 < v19 )
    {
      v17 = a3;
      if ( v18 + a3 <= v19 )
      {
LABEL_31:
        ++*(_DWORD *)(v13 + 516);
        goto LABEL_33;
      }
      a3 = v19 - v18;
LABEL_30:
      v17 = a3;
      goto LABEL_31;
    }
LABEL_39:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
LABEL_40:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  v17 = a3;
  if ( (v15 & 0x10000) != 0 )
  {
    v86 = 1;
    if ( *(_DWORD *)(v13 + 516) )
      v8 = 1;
  }
LABEL_33:
  if ( v88 && !(_DWORD)v17 )
  {
    if ( v13 )
    {
      if ( !(_DWORD)v16 )
        --*(_DWORD *)(v13 + 516);
    }
    if ( !v6 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( v13 )
  {
    if ( v110 == &unk_140C49AF0 && (*(_DWORD *)(v13 + 516) >= 2u || !(unsigned __int8)sub_1404171F4(v87, v13, v16, v17)) )
    {
      --*(_DWORD *)(v13 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v20 = v92;
      v21 = -1073741740;
      goto LABEL_232;
    }
    ++*(_DWORD *)(v13 + 4);
    ++*(_DWORD *)(v13 + 536);
    v9 = *(_QWORD *)((*(_QWORD *)(v13 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
    v106 = *(unsigned int *)(v13 + 112);
  }
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v13 && (*(_DWORD *)(v13 + 152) & 0x40000000) != 0 )
    v8 = 1;
  v23 = v80;
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    sub_1403AE198(v93, v13, (_DWORD)v88, a3, v80, v86, v8 == 1);
  if ( !v80 )
  {
    if ( !v13 )
      goto LABEL_66;
    if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
      sub_14023C3B4(v87, v13);
LABEL_59:
    if ( ((*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0 || (*(_DWORD *)(v13 + 152) & 0x20000) != 0)
      && !v80 )
    {
      goto LABEL_66;
    }
    goto LABEL_63;
  }
  if ( v13 )
    goto LABEL_59;
LABEL_63:
  if ( !v8 )
  {
    if ( !v13 )
    {
      v20 = v92;
      goto LABEL_217;
    }
    if ( (*(_DWORD *)(v13 + 152) & 0x4000000) == 0 )
    {
      v20 = v92;
      goto LABEL_81;
    }
  }
LABEL_66:
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    sub_1403AE0B0(v93, v13, (_DWORD)v88, a3, v81);
  if ( v13 )
    sub_1402853B0(v13, (_DWORD)v88, a3, 0, 0, 0);
  v20 = v92;
  v24 = sub_140283C50(a1, (_DWORD)v88, a3, v22, (__int64)v92, v81);
  if ( v24 < 0 )
  {
    v25 = *v92;
    if ( v80 )
    {
      if ( v25 != -2147483626 )
        goto LABEL_76;
    }
    else if ( v25 )
    {
      goto LABEL_76;
    }
    *v92 = v24;
  }
LABEL_76:
  v26 = *v20;
  v7 = 1;
  if ( *v20 >= 0 )
    v26 = 0;
  v83 = v26;
  if ( !v13 )
  {
    v27 = 0;
LABEL_218:
    v70 = v90;
    goto LABEL_219;
  }
LABEL_81:
  if ( (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
  {
LABEL_217:
    v27 = v82;
    goto LABEL_218;
  }
  if ( v88 )
    v101 = *v88;
  v28 = v87;
  if ( byte_140C54C58 == 1 )
  {
    v29 = v90;
    v103 = (_BYTE *)(v90 + 1172);
  }
  else
  {
    v103 = (_BYTE *)(v87 + 1228);
    v29 = v87;
  }
  v30 = (_QWORD *)(v29 + 1104);
  v102 = (_QWORD *)(v29 + 1104);
  if ( v23 || v8 || v88 || a3 || a4 != v88 )
  {
    v31 = 1;
    v79 = 0;
    if ( a3 )
      v31 = a3;
    v78 = v31;
    if ( v23 )
    {
      v99 = MEMORY[0xFFFFF78000000320];
      v79 = 0;
    }
  }
  else
  {
    v79 = 1;
    v78 = 1;
  }
  if ( byte_140C54C58 == 1 && v23 && !v7 && (*(_DWORD *)(v13 + 152) & 0x40000200) == 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v32 = v80;
  while ( 1 )
  {
    v33 = v86;
    if ( !*(_DWORD *)(v13 + 192) && v32 && !v86
      || !*(_QWORD *)(v13 + 8) && (*(_DWORD *)(v13 + 152) & 4) == 0 && !*(_DWORD *)(v13 + 112)
      || v85 )
    {
      goto LABEL_209;
    }
    v34 = &v95;
    v35 = 0;
    if ( !v77 )
      v34 = 0LL;
    if ( v32 && sub_140282258(v13) )
    {
      v36 = 1;
    }
    else
    {
      v36 = 0;
      if ( !v32 )
        goto LABEL_118;
    }
    if ( !v33 )
    {
      v37 = 0;
      LODWORD(v38) = 0;
      goto LABEL_123;
    }
LABEL_118:
    v37 = v78;
    if ( !v32 || v33 )
    {
      v38 = &v101;
      if ( !v88 )
        LODWORD(v38) = 0;
    }
    else
    {
      LODWORD(v38) = 0;
    }
LABEL_123:
    if ( !(unsigned __int8)sub_140289260(
                             v13,
                             (_DWORD)v38,
                             v37,
                             (_DWORD)a4,
                             (__int64)&v89,
                             (__int64)&v78,
                             (__int64)&v105,
                             v36,
                             (__int64)v34) )
    {
      v30 = v102;
      goto LABEL_209;
    }
    v39 = v89;
    if ( v79 && !v77 )
    {
      v95 = v89;
      v77 = 1;
    }
    v40 = v78;
    v41 = v103;
    v42 = v78;
    while ( 1 )
    {
      v43 = sub_140282C5C(v13, v39 + v40 - v42, &v104, &v84);
      if ( v43 )
      {
        v45 = v84;
        if ( v84 > v42 )
          v45 = v42;
        v84 = v45;
        if ( !(unsigned __int8)sub_14033D860(v43, v45) && !v35
          || v89 + v78 >= *(_QWORD *)(v13 + 40)
          || (*(_DWORD *)(v13 + 268) & 0xF) == 0
          || !v32
          || v33
          || (*(_DWORD *)(v13 + 152) & 0x200) != 0
          || (v35 = 1, *v41) )
        {
          v35 = 0;
        }
        v46 = *(_QWORD *)(v104 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v104 + 16)) )
        {
          v47 = *(struct _KEVENT **)(v46 + 184);
          if ( v47 )
            KeSetEvent(v47, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v46 + 544));
        }
      }
      else
      {
        v48 = v84;
        if ( v84 > v42 )
          v48 = v42;
        v84 = v48;
      }
      v42 -= v84;
      if ( !v42 )
        break;
      v39 = v89;
      v40 = v78;
    }
    __addgsdword(0x8468u, v35);
    v49 = v99;
    if ( v35 )
    {
      v64 = v87;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v87 + 704), &v94);
      v65 = (unsigned __int64)v78 >> 12;
      if ( byte_140C54C58 == 1 )
        *(_QWORD *)(v90 + 1096) += v65;
      else
        *(_QWORD *)(v64 + 1096) += v65;
      KeReleaseInStackQueuedSpinLock(&v94);
      v50 = v92;
      goto LABEL_191;
    }
    if ( (xmmword_140D06910 & 0x20000) != 0 )
      sub_1403AE0B0(v93, v13, (unsigned int)&v89, v78, v81);
    v50 = v92;
    v51 = v78;
    v75 = v81;
    v52 = v32 != 0 ? 0x80000016 : 0;
    BugCheckParameter4a = v92;
    *v92 = v52;
    v53 = sub_140283C50(a1, (unsigned int)&v89, v51, v44, (__int64)BugCheckParameter4a, v75);
    if ( v53 < 0 )
    {
      v54 = *v50;
      if ( !v32 )
      {
        if ( v54 )
          goto LABEL_159;
LABEL_158:
        *v50 = v53;
        goto LABEL_159;
      }
      if ( v54 == -2147483626 )
        goto LABEL_158;
    }
LABEL_159:
    v55 = *v50;
    if ( *v50 < 0 )
    {
      v57 = v89;
      v58 = v78;
      v98 = v89;
      if ( !sub_140248C10(v13, v55) )
      {
        v85 = 1;
        goto LABEL_191;
      }
      v60 = v83;
      while ( 1 )
      {
        if ( (xmmword_140D06910 & 0x20000) != 0 )
          sub_1403AE0B0(v93, v13, (unsigned int)&v98, 4096, v81);
        v76 = v81;
        *v50 = v52;
        v61 = sub_140283C50(a1, (unsigned int)&v98, 4096, v59, (__int64)v50, v76);
        if ( v61 < 0 )
        {
          v62 = *v50;
          if ( !v32 )
          {
            if ( v62 )
              goto LABEL_176;
LABEL_175:
            *v50 = v61;
            goto LABEL_176;
          }
          if ( v62 == -2147483626 )
            goto LABEL_175;
        }
LABEL_176:
        if ( *v50 < 0 )
        {
          if ( !sub_140248C10(v13, *v50) )
          {
            v63 = 1;
            v85 = 1;
            if ( !v60 )
              v60 = *v50;
            goto LABEL_179;
          }
          if ( !v60 )
            v60 = *v50;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v87 + 704), &v94);
          *(_DWORD *)(v13 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLock(&v94);
        }
        v63 = v85;
LABEL_179:
        v57 += 4096LL;
        v98 = v57;
        v58 -= 4096;
        if ( !v58 )
        {
          v83 = v60;
          v49 = v99;
          if ( !v63 )
          {
            v56 = 0;
            goto LABEL_192;
          }
LABEL_191:
          v56 = 1;
          goto LABEL_192;
        }
      }
    }
    if ( (*(_DWORD *)(v13 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v87 + 704), &v94);
      *(_DWORD *)(v13 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLock(&v94);
    }
    if ( v32 )
    {
      __incgsdword(0x846Cu);
      __addgsdword(0x8470u, (v78 + 4095) >> 12);
    }
    v82 += (v78 + 4095) >> 12;
    v56 = 0;
LABEL_192:
    LOBYTE(BugCheckParameter4) = v56;
    sub_14028A258(v13, &v89, v78, v105, BugCheckParameter4);
    v30 = v102;
    v66 = v78 + v100;
    v28 = v87;
    v91 += v78;
    v100 = v66;
    if ( v91 >= 0x40000 && (_QWORD *)*v102 != v102 )
    {
      sub_14053A100(v87, v90);
      v66 = v100;
      v91 = 0;
    }
    if ( v32 && !v86 )
    {
      v67 = (_QWORD *)*v30 == v30 ? dword_140C49B40 / 0xAu : (unsigned int)dword_140C49B40;
      if ( MEMORY[0xFFFFF78000000320] > v49 + v67 )
        break;
    }
    if ( v88 )
    {
      v68 = *v88;
      v69 = v78 + v89;
      v89 = v69;
      if ( v68 + a3 <= v69 )
        goto LABEL_209;
      v101 = v69;
      v78 = a3 + v68 - v69;
    }
    if ( v77 )
    {
      v95 += v78;
      if ( v66 >> 12 >= v106 )
        goto LABEL_209;
    }
  }
  *((_QWORD *)v50 + 1) = 35422LL;
LABEL_209:
  v27 = v82;
  if ( PerformanceCounter.QuadPart && v82 )
    v96 = KeQueryPerformanceCounter(0LL);
  v70 = v90;
  if ( v91 && (_QWORD *)*v30 != v30 )
    sub_14053A100(v28, v90);
  v20 = v92;
  v23 = v80;
LABEL_219:
  if ( v96.QuadPart )
    sub_140539D54(v70, &PerformanceCounter, &v96, v27);
  if ( v13 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v87 + 704), &v94);
    sub_140282AF4(v13, v71, v72);
    if ( !v23 )
      --*(_DWORD *)(v13 + 516);
    if ( v110 == &unk_140C49AF0 && *v20 >= 0 && v83 >= 0 && (*(_DWORD *)(v13 + 112) || *(_DWORD *)(v13 + 516)) )
      v83 = -1073741740;
    KeReleaseInStackQueuedSpinLock(&v94);
  }
  v21 = v83;
  if ( v83 < 0 )
LABEL_232:
    *v20 = v21;
}
