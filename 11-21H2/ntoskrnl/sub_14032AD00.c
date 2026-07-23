/*
 * XREFs of sub_14032AD00 @ 0x14032AD00
 * Callers:
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     CcPinRead @ 0x1406A5510 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140705F90 (CcPreparePinWrite.c)
 *     sub_140706164 @ 0x140706164 (sub_140706164.c)
 *     CcMapData @ 0x1407BDE60 (CcMapData.c)
 *     CcPinMappedData @ 0x1407BEEB0 (CcPinMappedData.c)
 * Callees:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_14028D948 @ 0x14028D948 (sub_14028D948.c)
 *     sub_14028DDD0 @ 0x14028DDD0 (sub_14028DDD0.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140328510 @ 0x140328510 (sub_140328510.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053B060 @ 0x14053B060 (sub_14053B060.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 *     sub_14063CD9C @ 0x14063CD9C (sub_14063CD9C.c)
 */

__int64 __fastcall sub_14032AD00(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        __int64 *a8,
        _QWORD *a9)
{
  char v10; // dl
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int8 CurrentIrql; // si
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  char v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdi
  __int64 v29; // rdi
  __int16 v30; // ax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  ULONG_PTR v33; // rsi
  int v34; // edx
  __int64 v35; // rax
  __int64 *v36; // r12
  ULONG_PTR v37; // rbx
  unsigned __int64 v38; // rsi
  unsigned __int32 v39; // eax
  struct _ERESOURCE *v40; // rdi
  __int16 v41; // cx
  __int64 v42; // rsi
  struct _KTHREAD *v43; // rdi
  NTSTATUS v44; // r8d
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  unsigned int v47; // r15d
  struct _KTHREAD *v48; // rsi
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  unsigned __int8 v53; // si
  unsigned __int32 v54; // eax
  __int64 v55; // rbx
  struct _KEVENT *v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r12
  __int16 v60; // cx
  bool v61; // zf
  ULONG_PTR v62; // rcx
  char v63; // si
  __int16 v64; // cx
  int v65; // edx
  __int64 v66; // rbx
  unsigned int v67; // r8d
  int v68; // r15d
  unsigned int v69; // ebx
  char *v70; // rax
  struct _ERESOURCE *v71; // rcx
  struct _FAST_MUTEX *v72; // rcx
  __int64 v73; // rax
  unsigned __int8 v74; // r8
  struct _KTHREAD *v75; // rdx
  unsigned __int8 v76; // dl
  struct _KTHREAD *v77; // r9
  unsigned __int8 v78; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v80; // r9
  int v81; // edx
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r10
  __int64 v84; // r9
  int v85; // eax
  struct _FAST_MUTEX *v86; // rdi
  __int64 v88; // rbx
  struct _KEVENT *v89; // rcx
  unsigned __int8 v90; // [rsp+30h] [rbp-C8h]
  int v91; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  volatile signed __int32 *v93; // [rsp+40h] [rbp-B8h] BYREF
  int v94; // [rsp+48h] [rbp-B0h]
  __int64 v95; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+58h] [rbp-A0h] BYREF
  int v97; // [rsp+60h] [rbp-98h]
  __int64 v98; // [rsp+68h] [rbp-90h]
  int v99; // [rsp+70h] [rbp-88h]
  int v100; // [rsp+74h] [rbp-84h]
  NTSTATUS v101; // [rsp+78h] [rbp-80h]
  int v102; // [rsp+7Ch] [rbp-7Ch]
  __int64 v103; // [rsp+80h] [rbp-78h]
  unsigned __int64 v104; // [rsp+88h] [rbp-70h]
  __int64 v105; // [rsp+90h] [rbp-68h]
  struct _FAST_MUTEX *v106; // [rsp+98h] [rbp-60h]
  __int64 v107; // [rsp+A0h] [rbp-58h]
  int v108; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v109; // [rsp+B0h] [rbp-48h]
  struct _KTHREAD *v110; // [rsp+B8h] [rbp-40h]
  int v111; // [rsp+100h] [rbp+8h] BYREF
  __int64 *v112; // [rsp+108h] [rbp+10h]
  unsigned int v113; // [rsp+110h] [rbp+18h] BYREF
  char v114; // [rsp+118h] [rbp+20h]

  v114 = a4;
  v113 = a3;
  v112 = a2;
  v10 = a6;
  v11 = 0LL;
  v98 = 0LL;
  v94 = 0;
  v111 = 0;
  v93 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v106 = (struct _FAST_MUTEX *)v12;
  v107 = v12;
  v13 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x146uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v14 = a8;
  *a8 = 0LL;
  if ( (v10 & 4) != 0 )
  {
    v111 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    sub_14053B22C(v12, *a2);
  }
  else
  {
    *v14 = sub_140328180(v12, *a2, (__int64 **)&v93, &v111, (v10 & 0x40) != 0, 0);
  }
  v15 = (volatile signed __int32 *)(v12 + 280);
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  _disable();
  v17 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v17 = sub_14029F6A8(v12 + 280, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v18, v17);
    v99 = v18;
    *((_BYTE *)CurrentThread + 792) = v17 & ~(1 << v18);
    _enable();
    v11 = (__int64)CurrentThread + 96 * v18 + 1696;
    if ( (unsigned __int64)v15 - qword_140C50630 < 0x8000000000LL )
      v19 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v19 = -1;
    *(_DWORD *)(v11 + 8) = v19;
    *(_QWORD *)v11 = (unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v15, 0) )
    sub_14029EF4C(v12 + 280, v11);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  *(_QWORD *)(v12 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v12 + 328) = CurrentIrql;
  v91 = 1;
  v96 = 0LL;
  v95 = 0LL;
  v21 = *a2;
  v22 = HIDWORD(*a2);
  v23 = *a2 + v13;
  v98 = v23;
  v103 = 0LL;
  v24 = 0;
  v25 = v21 + 0x80000;
  v26 = *(_QWORD *)(v12 + 32);
  v27 = HIDWORD(v21);
  if ( v26 <= 0x200000 || (LODWORD(v27) = v22, (*(_DWORD *)(v12 + 152) & 0x200) == 0) )
  {
    LODWORD(v22) = v27;
    goto LABEL_147;
  }
  if ( v26 > 0x2000000 )
  {
    v28 = (_QWORD *)sub_14028DDD0(v12, v21 + 0x80000, 1);
    goto LABEL_18;
  }
  if ( v25 >= v26 )
  {
LABEL_147:
    v28 = (_QWORD *)(v12 + 16);
    goto LABEL_18;
  }
  v28 = (_QWORD *)(*(_QWORD *)(v12 + 88) + 8 * ((unsigned __int64)(unsigned int)v26 >> 18) + 16 * (v25 >> 19));
LABEL_18:
  v29 = *v28 - 16LL;
  v103 = v29;
  if ( (_DWORD)v22 || (v30 = *(_WORD *)v29, *(_WORD *)v29 != 765) || *(_DWORD *)(v29 + 36) )
  {
    while ( *(_WORD *)v29 == 765 && v21 < *(_QWORD *)(v29 + 32) )
    {
      v73 = *(_QWORD *)(v29 + 8);
      if ( v21 >= v73 )
      {
LABEL_28:
        v24 = 1;
        break;
      }
      if ( v23 >= v73 )
        v23 = *(_QWORD *)(v29 + 8);
      v98 = v23;
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v103 = v29;
    }
  }
  else
  {
    v31 = v98;
    while ( v30 == 765 && (unsigned int)v21 < *(_DWORD *)(v29 + 32) )
    {
      v32 = *(_DWORD *)(v29 + 8);
      if ( (unsigned int)v21 >= v32 )
        goto LABEL_28;
      if ( v31 >= v32 )
      {
        v31 = *(_DWORD *)(v29 + 8);
        LODWORD(v98) = v31;
        v23 = v98;
      }
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v103 = v29;
      v30 = *(_WORD *)v29;
    }
  }
  v33 = v29;
  P = (_QWORD *)v29;
  if ( !v24 )
  {
    v63 = a6;
    if ( (a6 & 8) != 0 )
    {
      v33 = 0LL;
      P = 0LL;
      v90 = 0;
      v36 = a8;
      goto LABEL_62;
    }
    v64 = v21;
    v96 = v21;
    v66 = v23 - v21;
    v65 = v21 & 0xFFF;
    LODWORD(v66) = v65 + v66;
    v95 = v66;
    v67 = v65 + v111;
    v111 += v65;
    if ( (v114 || (*(_DWORD *)(v12 + 152) & 4) != 0) && !a5 )
    {
      v68 = v94;
    }
    else
    {
      v68 = 2;
      v94 = 2;
      if ( (v21 & 0xFFF) == 0 )
      {
        if ( v113 >= 0x1000 )
          v68 = 3;
        v94 = v68;
      }
      v64 = v21;
      if ( (v66 & 0xFFF) == 0 )
      {
        v68 |= 4u;
        v94 = v68;
      }
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
      v114 = 1;
    v69 = (v66 + 4095) & 0xFFFFF000;
    LODWORD(v95) = v69;
    v36 = a8;
    *a8 -= v64 & 0xFFF;
    LODWORD(v96) = v96 & 0xFFFFF000;
    if ( v69 > v67 )
    {
      v69 = v67;
      LODWORD(v95) = v67;
    }
    v70 = sub_14028D948(v12, v29, &v96, &v95);
    v61 = (v63 & 1) == 0;
    v33 = (ULONG_PTR)v70;
    P = v70;
    if ( v61 )
    {
      if ( !v70 )
      {
        v90 = 0;
        goto LABEL_62;
      }
      if ( !v114 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v70 + 72), 0) )
        KeBugCheckEx(0x34u, 0x2027BuLL, v33, 0LL, 0LL);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v91 = 0;
      if ( !(unsigned __int8)sub_140328510(v69, v68, 0, *v36) )
      {
        v90 = 0;
        goto LABEL_62;
      }
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
      if ( !*(_QWORD *)(v33 + 184) )
      {
        *(_QWORD *)(v33 + 184) = *v36;
        *(_QWORD *)(v33 + 56) = v93;
        v93 = 0LL;
      }
      v72 = (struct _FAST_MUTEX *)(v12 + 280);
    }
    else
    {
      if ( !v70 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v114 )
      {
        v71 = (struct _ERESOURCE *)(v70 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v71, 0) )
            KeBugCheckEx(0x34u, 0x20214uLL, v33, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v71, 0) )
        {
          KeBugCheckEx(0x34u, 0x2021BuLL, v33, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v91 = 0;
      if ( (a6 & 4) != 0 )
        goto LABEL_81;
      sub_140328510(v69, v68, 1, *v36);
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
      if ( !*(_QWORD *)(v33 + 184) )
      {
        *(_QWORD *)(v33 + 184) = *v36;
        *(_QWORD *)(v33 + 56) = v93;
        v93 = 0LL;
      }
      v72 = (struct _FAST_MUTEX *)(v12 + 280);
    }
    KeReleaseGuardedMutex(v72);
    *v36 = *(_QWORD *)(v33 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v33 + 8));
    v90 = 1;
    goto LABEL_62;
  }
  if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
    v114 = 1;
  v34 = a6 & 1;
  if ( *(_QWORD *)(v29 + 184) )
  {
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v91 = 0;
      if ( !v114 )
      {
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 72), 1u);
        }
        else
        {
          if ( (*(_WORD *)(v29 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v29 + 72, 0LL, 0LL);
          v60 = *(_WORD *)(v29 + 98) & 1;
          if ( v60 )
          {
            v76 = KeGetCurrentIrql();
            v77 = KeGetCurrentThread();
            if ( v76 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, v76, 1uLL, 0LL);
            if ( (*((_BYTE *)v77 + 192) & 2) != 0 )
              goto LABEL_181;
            if ( !v76 && (*((_DWORD *)v77 + 29) & 0x400) == 0 && !*((_DWORD *)v77 + 121) )
              goto LABEL_119;
            v33 = v29;
          }
          v61 = v60 == 0;
          v62 = v29 + 72;
          if ( v61 )
            sub_14032BD70(v62);
          else
            sub_14063CD9C(v62);
        }
      }
    }
    else
    {
      if ( !v114 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
      {
        v33 = 0LL;
        P = 0LL;
        v90 = 0;
        v36 = a8;
        goto LABEL_62;
      }
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v91 = 0;
    }
    v36 = a8;
    *a8 = *(_QWORD *)(v29 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
LABEL_81:
    v90 = 1;
    goto LABEL_62;
  }
  v35 = (unsigned int)(v21 - *(_DWORD *)(v29 + 8));
  v36 = a8;
  *a8 -= v35;
  v96 = *(_QWORD *)(v29 + 8);
  v95 = *(unsigned int *)(v29 + 4);
  if ( v34 )
  {
    ++*(_DWORD *)(v29 + 64);
    v37 = v12 + 280;
    *(_QWORD *)(v12 + 288) = 0LL;
    v38 = *(unsigned __int8 *)(v12 + 328);
    v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 280), 1, 0);
    if ( v39 )
      sub_140359548(v12 + 280, v39);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v78 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v80 = *((_QWORD *)CurrentPrcb + 4375);
          v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
          v61 = (v81 & *(_DWORD *)(v80 + 20)) == 0;
          *(_DWORD *)(v80 + 20) &= v81;
          if ( v61 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v38);
    sub_1402AFC00(v37);
    v91 = 0;
    if ( v114 )
      goto LABEL_43;
    v40 = (struct _ERESOURCE *)(v29 + 72);
    if ( (a6 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v40, 1u);
LABEL_43:
      if ( (a6 & 4) != 0 )
      {
        v33 = (ULONG_PTR)P;
      }
      else
      {
        v42 = *v36;
        v43 = KeGetCurrentThread();
        v109 = v43;
        v100 = 0;
        v108 = 0;
        v44 = 0;
        v101 = 0;
        LOBYTE(v113) = 1;
        v45 = ((v42 & 0xFFF) + (unsigned __int64)(unsigned int)v95 + 4095) >> 12;
        v97 = v45;
        v46 = v42 & 0xFFFFFFFFFFFFF000uLL;
        v104 = v46;
        v47 = *((unsigned __int8 *)v43 + 1388) + 2 * *((_DWORD *)v43 + 342);
        while ( (_DWORD)v45 )
        {
          *((_BYTE *)v43 + 1388) = 1;
          v57 = v45 - 1;
          if ( (unsigned int)(v45 - 1) > *((_DWORD *)v43 + 342) )
          {
            if ( v57 > 0xF )
              v57 = 15;
            *((_DWORD *)v43 + 342) = v57;
          }
          v100 = 0;
          v58 = (unsigned int)((_DWORD)v45 << 12);
          v59 = (unsigned int)v58;
          v44 = sub_140328690(v46, v58, 0, (char *)&v113);
          v101 = v44;
          if ( v44 < 0 )
            break;
          v46 += v59;
          v104 = v46;
          LODWORD(v45) = 0;
          v97 = 0;
        }
        *((_BYTE *)v43 + 1388) = v47 & 1;
        *((_DWORD *)v43 + 342) = v47 >> 1;
        if ( v44 < 0 )
          RtlRaiseStatus(v44);
        v102 = 0;
        v48 = KeGetCurrentThread();
        v49 = 0LL;
        v105 = 0LL;
        _disable();
        v50 = *((unsigned __int8 *)v48 + 792);
        if ( *((_BYTE *)v48 + 792) || (v50 = sub_14029F6A8(v37, (__int64)v48)) != 0 )
        {
          _BitScanForward((unsigned int *)&v51, v50);
          v102 = v51;
          *((_BYTE *)v48 + 792) = v50 & ~(unsigned __int8)(1 << v51);
          _enable();
          v49 = (__int64)v48 + 96 * v51 + 1696;
          v105 = v49;
          if ( v37 - qword_140C50630 < 0x8000000000LL )
            v52 = sub_140287F30(*((_QWORD *)v48 + 23));
          else
            v52 = -1;
          *(_DWORD *)(v49 + 8) = v52;
          *(_QWORD *)v49 = v37 & 0x7FFFFFFFFFFFFFFCLL;
        }
        v53 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v37, 0) )
          sub_14029EF4C(v37, v49);
        if ( v49 )
          *(_BYTE *)(v49 + 18) = 1;
        v110 = KeGetCurrentThread();
        *(_QWORD *)(v12 + 288) = v110;
        *(_DWORD *)(v12 + 328) = v53;
        v36 = a8;
        if ( !P[23] )
        {
          P[23] = *a8;
          P[7] = v93;
          v93 = 0LL;
          v53 = *(_BYTE *)(v12 + 328);
        }
        *(_QWORD *)(v12 + 288) = 0LL;
        v54 = _InterlockedCompareExchange((volatile signed __int32 *)v37, 1, 0);
        if ( v54 )
          sub_140359548(v37, v54);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v82 = KeGetCurrentIrql();
            if ( v82 <= 0xFu && v53 <= 0xFu && v82 >= 2u )
            {
              v83 = KeGetCurrentPrcb();
              v84 = *((_QWORD *)v83 + 4375);
              v85 = ~(unsigned __int16)(-1LL << (v53 + 1));
              v61 = (v85 & *(_DWORD *)(v84 + 20)) == 0;
              *(_DWORD *)(v84 + 20) &= v85;
              if ( v61 )
                sub_140418E4C(v83);
            }
          }
        }
        __writecr8(v53);
        sub_1402AFC00(v37);
        v33 = (ULONG_PTR)P;
        *v36 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
      }
      v90 = 1;
      goto LABEL_62;
    }
    if ( (v40->Flag & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v40, 0LL, 0LL);
    v41 = v40->Flag & 1;
    if ( !v41 )
    {
LABEL_41:
      if ( v41 )
        sub_14063CD9C((ULONG_PTR)v40);
      else
        sub_14032BD70(v40);
      goto LABEL_43;
    }
    v74 = KeGetCurrentIrql();
    v75 = KeGetCurrentThread();
    if ( v74 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v74, 1uLL, 0LL);
    if ( (*((_BYTE *)v75 + 192) & 2) == 0 )
    {
      if ( v74 || (*((_DWORD *)v75 + 29) & 0x400) != 0 || *((_DWORD *)v75 + 121) )
        goto LABEL_41;
LABEL_119:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_181:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  }
  if ( v114 || ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
  {
    ++*(_DWORD *)(v29 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v91 = 0;
    if ( (unsigned __int8)sub_140328510(*(_DWORD *)(v29 + 4), 0, 0, *v36) )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
      if ( !*(_QWORD *)(v29 + 184) )
      {
        *(_QWORD *)(v29 + 184) = *v36;
        *(_QWORD *)(v29 + 56) = v93;
        v93 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      *v36 = *(_QWORD *)(v29 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
      v90 = 1;
    }
    else
    {
      v90 = 0;
    }
  }
  else
  {
    v33 = 0LL;
    P = 0LL;
    v90 = 0;
  }
LABEL_62:
  if ( (a6 & 6) == 6 && v33 && *(_QWORD *)(v33 + 184) )
  {
    v55 = *(_QWORD *)(*(_QWORD *)(v33 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v33 + 56) + 16LL)) )
    {
      v56 = *(struct _KEVENT **)(v55 + 184);
      if ( v56 )
        KeSetEvent(v56, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v55 + 544));
    }
    *(_QWORD *)(v33 + 184) = 0LL;
    *(_QWORD *)(v33 + 56) = 0LL;
    v33 = (ULONG_PTR)P;
  }
  v86 = v106;
  if ( v91 )
    KeReleaseGuardedMutex(v106 + 5);
  if ( v93 )
  {
    v88 = *((_QWORD *)v93 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v93 + 4) )
    {
      v89 = *(struct _KEVENT **)(v88 + 184);
      if ( v89 )
        KeSetEvent(v89, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v88 + 544));
    }
    v33 = (ULONG_PTR)P;
  }
  if ( (a6 & 4) != 0 )
    sub_14053B060(v86, *a2);
  if ( v90 )
  {
    *a7 = v33;
    *a9 = *(_QWORD *)(v33 + 32);
  }
  else
  {
    *v36 = 0LL;
    if ( v33 )
      sub_14028A370((char *)v33, v114, 0);
  }
  return v90;
}
