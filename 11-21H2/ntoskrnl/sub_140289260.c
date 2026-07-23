/*
 * XREFs of sub_140289260 @ 0x140289260
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 * Callees:
 *     sub_1402368F4 @ 0x1402368F4 (sub_1402368F4.c)
 *     sub_140242ECC @ 0x140242ECC (sub_140242ECC.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_14028AD10 @ 0x14028AD10 (sub_14028AD10.c)
 *     sub_14028B018 @ 0x14028B018 (sub_14028B018.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool __fastcall sub_140289260(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        char a8,
        __int64 *a9)
{
  __int64 *v11; // r12
  int *v12; // rsi
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r13
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // r13
  struct _FAST_MUTEX *v23; // r13
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdi
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  unsigned int v34; // ecx
  signed __int64 v35; // r11
  __int64 v36; // r9
  __int64 v37; // r11
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r11
  unsigned __int64 v44; // rax
  int v45; // r8d
  int v46; // eax
  unsigned int v47; // ebx
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rbx
  int v52; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v54; // rcx
  unsigned int v55; // ecx
  signed __int64 v56; // rax
  __int64 *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v67; // r8
  int v68; // eax
  bool v69; // zf
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-118h]
  signed __int64 v71; // [rsp+58h] [rbp-110h]
  int v72; // [rsp+60h] [rbp-108h]
  __int64 v73; // [rsp+68h] [rbp-100h]
  unsigned __int64 v74; // [rsp+70h] [rbp-F8h]
  __int64 v75; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v76; // [rsp+80h] [rbp-E8h]
  int v77; // [rsp+94h] [rbp-D4h]
  __int64 v78; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-B8h]
  __int64 v80; // [rsp+B8h] [rbp-B0h]
  __int64 v81; // [rsp+C0h] [rbp-A8h]
  unsigned int *v82; // [rsp+C8h] [rbp-A0h]
  __int64 v83; // [rsp+F0h] [rbp-78h]
  __int64 v84; // [rsp+F8h] [rbp-70h]
  __int64 v85; // [rsp+100h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-60h] BYREF

  v82 = a6;
  v80 = a1;
  v75 = 0LL;
  v79 = 0LL;
  v72 = 0;
  v77 = 0;
  v11 = 0LL;
  v74 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v71 = 0LL;
  v83 = 0LL;
  v76 = 0LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v84 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
    sub_1402ACD80(KeGetCurrentThread(), 0LL, 0LL, 0LL);
  v81 = *(_QWORD *)(a1 + 528);
  v85 = v81;
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    sub_14042A5E0(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v15 = a1;
  v16 = *(_QWORD *)(a1 + 160);
  v73 = v16;
  if ( v16 && *(_DWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 4) || a3) )
  {
    if ( a2 )
    {
      v71 = *a2 >> 12;
      v14 = (a3 + *a2 - 1) >> 12;
      v57 = sub_140242ECC(v16, v71);
      v11 = v57;
      v39 = v57[2];
      if ( v14 < v39 + *((unsigned int *)v57 + 6) )
        goto LABEL_6;
      v58 = *((unsigned int *)v57 + 7);
      if ( v37 > (__int64)(v58 + v39) )
        goto LABEL_6;
      v40 = v11[5];
      if ( v14 < (__int64)(v58 + v39) )
        v41 = v40 + 4 * (((unsigned __int64)(v14 - v39) >> 5) & 0x7FFFFFF);
      else
        v41 = v40 + 4 * (v58 >> 5);
    }
    else
    {
      v35 = 0LL;
      if ( !a3 )
        v35 = *(_QWORD *)(v16 + 32);
      if ( a9 )
        v35 = *a9 >> 12;
      v11 = sub_140242ECC(v16, v35);
      v38 = *((unsigned int *)v11 + 7);
      v39 = v11[2];
      if ( v37 > (__int64)(v38 + v39) )
        v37 = v39 + *((unsigned int *)v11 + 6);
      v40 = v11[5];
      v41 = v40 + 4 * (v38 >> 5);
    }
    v74 = v41;
    v42 = v37;
    v43 = v39 + *((unsigned int *)v11 + 6);
    if ( v42 >= v43 )
      v43 = v42;
    v71 = v43;
    v44 = (unsigned int)(v43 - *((_DWORD *)v11 + 4));
    v45 = v43 - *((_DWORD *)v11 + 4);
    v76 = v44;
    v12 = (int *)(v40 + 4 * (v44 >> 5));
    v13 = -1 << (v43 % 32);
    v46 = *v12;
    if ( (*v12 & v13) == 0 )
    {
      v13 = -1;
      v43 &= 0xFFFFFFFFFFFFFFE0uLL;
      v59 = v74;
      do
      {
        ++v12;
        v43 += 32LL;
        v71 = v43;
        if ( (unsigned __int64)v12 > v59 )
        {
          if ( !a3 )
            *((_DWORD *)v11 + 7) = v45 - 1;
          do
          {
            v11 = (__int64 *)*v11;
            if ( v11 == (__int64 *)(v36 + 16) )
            {
              if ( a3 )
                goto LABEL_6;
              v11 = (__int64 *)*v11;
            }
          }
          while ( !*((_DWORD *)v11 + 8) );
          v60 = *((unsigned int *)v11 + 6);
          v61 = v11[2];
          if ( v14 < (__int64)(v61 + v60) )
            goto LABEL_6;
          v62 = *((unsigned int *)v11 + 7);
          if ( v43 > (__int64)(v62 + v61) )
            goto LABEL_6;
          v63 = v11[5];
          v12 = (int *)(v63 + 4 * (v60 >> 5));
          v74 = v63 + 4 * (v62 >> 5);
          v43 = v61 + ((unsigned int)v60 & 0xFFFFFFE0);
          v71 = v43;
          v45 = *((_DWORD *)v11 + 6);
          v76 = (unsigned int)v60;
          v36 = v73;
          v59 = v74;
        }
        v46 = *v12;
      }
      while ( !*v12 );
    }
    v13 = -v13;
    if ( (v13 & v46) == 0 )
    {
      do
      {
        v13 *= 2;
        ++v43;
      }
      while ( (v13 & v46) == 0 );
      v71 = v43;
    }
    if ( !a2 )
      goto LABEL_74;
    if ( v43 < (a3 + *a2 + 4095) >> 12 )
    {
      if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
        goto LABEL_74;
      v72 = 1;
    }
  }
LABEL_6:
  v17 = (__int64 *)(v80 + 200);
  v18 = v79;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v15 + 24) - 16LL;
    v75 = v19;
    if ( (*(_DWORD *)(v15 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v17 = a2;
      if ( *v17 )
      {
        v78 = *v17 + 4096;
        v20 = sub_14028B018(v15, v17, &v78, &v75);
        v15 = a1;
        if ( v20 )
        {
          v19 = v75;
        }
        else
        {
          v19 = *(_QWORD *)(v75 + 24) - 16LL;
          v75 = v19;
        }
      }
    }
    v21 = v15 + 16;
    if ( v19 + 16 != v15 + 16 )
    {
      while ( 1 )
      {
        if ( *(_WORD *)v19 != 765 )
          goto LABEL_15;
        if ( (*(_DWORD *)(v15 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v19 + 48) > *a4 )
        {
          v22 = *(_QWORD *)(v19 + 24);
          ++dword_140C4E860;
          goto LABEL_16;
        }
        if ( a2 && *a2 + a3 <= *(_QWORD *)(v19 + 8) )
          goto LABEL_17;
        v25 = *a6;
        if ( (_DWORD)v25 )
        {
          v24 = a5;
          if ( !*(_BYTE *)(v19 + 2)
            || (v26 = *(_QWORD *)(v19 + 8), v26 != *a5 + v25)
            || *(_DWORD *)(v19 + 64)
            || (v26 & 0x1FFFFFF) == 0 )
          {
            v23 = (struct _FAST_MUTEX *)(a1 + 280);
            goto LABEL_27;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v19 + 2) )
            goto LABEL_15;
          if ( a2 )
          {
            if ( *a2 >= *(_QWORD *)(v19 + 32) )
              goto LABEL_15;
          }
          else if ( *(_QWORD *)(v19 + 8) < *(_QWORD *)(v15 + 200) )
          {
            goto LABEL_15;
          }
          if ( v72 )
          {
            v43 = v71;
            if ( v71 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
              goto LABEL_149;
          }
        }
        ++*(_DWORD *)(v19 + 64);
        KeReleaseGuardedMutex(Mutex);
        if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
          break;
        if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 72), *a6 == 0) )
        {
          sub_14028A370((PVOID)v19);
          v23 = (struct _FAST_MUTEX *)(a1 + 280);
          ExAcquireFastMutex(Mutex);
          goto LABEL_18;
        }
        ExAcquireFastMutex(Mutex);
        if ( *(_BYTE *)(v19 + 2) )
        {
          v15 = a1;
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v19 + 48) <= *a4 )
            goto LABEL_49;
          ++dword_140C4E860;
        }
        KeReleaseGuardedMutex(Mutex);
        sub_14028A370((PVOID)v19);
        v23 = (struct _FAST_MUTEX *)(a1 + 280);
        ExAcquireFastMutex(Mutex);
        if ( *a6 )
          goto LABEL_18;
        v15 = a1;
        v22 = *(_QWORD *)(a1 + 24);
        v21 = a1 + 16;
LABEL_16:
        v19 = v22 - 16;
        v75 = v19;
        if ( v19 + 16 == v21 )
          goto LABEL_17;
      }
      sub_14028A370((PVOID)v19);
      ExAcquireFastMutex(Mutex);
      v15 = a1;
LABEL_49:
      v72 = 0;
      v34 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v19 + 8);
      *a7 = v19;
      *a6 = *(_DWORD *)(v19 + 4) + v34;
      if ( (*(_DWORD *)(v15 + 152) & 0x3000000) != 0 && *(_QWORD *)(v19 + 48) > v18 )
        v18 = *(_QWORD *)(v19 + 48);
      v21 = v15 + 16;
LABEL_15:
      v22 = *(_QWORD *)(v19 + 24);
      goto LABEL_16;
    }
LABEL_17:
    v23 = (struct _FAST_MUTEX *)(a1 + 280);
LABEL_18:
    v24 = a5;
LABEL_27:
    if ( v72 )
      break;
    v27 = *a6;
    if ( *a6 )
    {
      v28 = a1;
      if ( !a2 )
      {
        *(_QWORD *)(a1 + 200) = *v24 + v27;
        v29 = v27 >> 12;
        v30 = *(_DWORD *)(a1 + 192);
        if ( v30 <= v29 )
          *(_DWORD *)(a1 + 192) = 0;
        else
          *(_DWORD *)(a1 + 192) = v30 - v29;
      }
      goto LABEL_32;
    }
    v15 = a1;
    v17 = (__int64 *)(a1 + 200);
    if ( !*(_QWORD *)(a1 + 200) || a2 )
    {
      v28 = a1;
LABEL_32:
      KeReleaseGuardedMutex(v23);
      if ( v18 )
      {
        v32 = *(_QWORD **)(v80 + 240);
        if ( (*(_DWORD *)(v28 + 152) & 0x2000000) == 0 )
          v32 = (_QWORD *)*v32;
        sub_14042A5E0(v32, v18);
      }
      goto LABEL_36;
    }
    *v17 = 0LL;
  }
  v15 = a1;
  v43 = v71;
LABEL_149:
  v36 = v73;
LABEL_74:
  if ( (dword_140D017F4 & 1) != 0 )
  {
    if ( a2 )
      v64 = *a2;
    else
      v64 = 0LL;
    v47 = a3;
    DbgPrintEx(
      0x7Fu,
      0,
      "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
      v64,
      a3,
      (const void *)v15,
      v43,
      v11,
      *((_DWORD *)v11 + 8));
    v43 = v71;
    v36 = v73;
  }
  else
  {
    v47 = a3;
  }
  while ( (v13 & *v12) != 0 )
  {
    if ( a2 && v43 + *a6 >= (unsigned int)((*a2 + 4095 + v47) >> 12) )
      break;
    if ( (unsigned __int64)v12 > v11[5] + 4 * ((unsigned __int64)*((unsigned int *)v11 + 7) >> 5) )
      KeBugCheckEx(0x34u, 0x127EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !a2 && *a6 >= dword_140C097B0 )
      break;
    *v12 -= v13;
    ++*a6;
    v13 *= 2;
    if ( !v13 )
    {
      ++v12;
      v13 = 1;
      if ( (unsigned __int64)v12 > v74 )
        break;
    }
  }
  v48 = *a6;
  v49 = *(_DWORD *)(v36 + 4) - *a6;
  if ( *a6 >= *(_DWORD *)(v36 + 4) )
    v49 = 0;
  *(_DWORD *)(v36 + 4) = v49;
  v50 = *(_DWORD *)(v36 + 8);
  if ( v50 < v48 )
    KeBugCheckEx(0x34u, 0x12ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)(v36 + 8) = v50 - v48;
  *((_DWORD *)v11 + 8) -= v48;
  v51 = v81;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v81 + 704), &LockHandle);
  sub_14028AD10(a1, *a6);
  v52 = *(_DWORD *)(v51 + 912) - *a6;
  if ( *(_DWORD *)(v51 + 912) <= *a6 )
    v52 = 0;
  *(_DWORD *)(v51 + 912) = v52;
  if ( !*(_DWORD *)(a1 + 112) )
    sub_1402368F4(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v67 = *((_QWORD *)CurrentPrcb + 4375);
        v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v69 = (v68 & *(_DWORD *)(v67 + 20)) == 0;
        *(_DWORD *)(v67 + 20) &= v68;
        if ( v69 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( *((_DWORD *)v11 + 8) )
  {
    if ( *((_DWORD *)v11 + 6) == (_DWORD)v76 )
    {
      v55 = *a6;
      *((_DWORD *)v11 + 6) = *a6 + v71 - *((_DWORD *)v11 + 4);
    }
    else
    {
      v55 = *v82;
    }
    if ( a3 )
    {
      v54 = v73;
    }
    else
    {
      v56 = v71 + v55;
      v54 = v73;
      *(_QWORD *)(v73 + 32) = v56;
    }
  }
  else
  {
    *((_DWORD *)v11 + 6) = -1;
    *((_DWORD *)v11 + 7) = 0;
    v54 = v73;
    *(_QWORD *)(v73 + 32) = v11[2] + 0x2000;
  }
  if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(v54 + 4);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  *a6 <<= 12;
  *a5 = v71 << 12;
  *a7 = 0LL;
LABEL_36:
  if ( a8 )
  {
    LOBYTE(v31) = 1;
    sub_1402ACD80(KeGetCurrentThread(), v31, 0LL, 0LL);
  }
  return *a6 != 0;
}
