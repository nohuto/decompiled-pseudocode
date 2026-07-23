/*
 * XREFs of sub_1402DD320 @ 0x1402DD320
 * Callers:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402DD9AC @ 0x1402DD9AC (sub_1402DD9AC.c)
 *     sub_1402DDABC @ 0x1402DDABC (sub_1402DDABC.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     sub_1403DB668 @ 0x1403DB668 (sub_1403DB668.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_1406617B0 @ 0x1406617B0 (sub_1406617B0.c)
 *     sub_140764BE0 @ 0x140764BE0 (sub_140764BE0.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 *     sub_14080E030 @ 0x14080E030 (sub_14080E030.c)
 *     sub_14081BA8C @ 0x14081BA8C (sub_14081BA8C.c)
 *     sub_140863BE8 @ 0x140863BE8 (sub_140863BE8.c)
 *     sub_1409477A4 @ 0x1409477A4 (sub_1409477A4.c)
 *     sub_140947864 @ 0x140947864 (sub_140947864.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 *     sub_140947A8C @ 0x140947A8C (sub_140947A8C.c)
 *     sub_140956608 @ 0x140956608 (sub_140956608.c)
 */

__int64 sub_1402DD320()
{
  char v0; // r14
  char v1; // r15
  int v2; // r13d
  KIRQL v3; // al
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  int v11; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r14
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  int v22; // r12d
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  KIRQL v26; // al
  bool v27; // zf
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  int *v30; // rax
  struct _KEVENT *v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v44; // r9
  int v45; // eax
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  int v54; // ecx
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r10
  __int64 v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  __int64 v69; // r9
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  int v73; // eax
  __int64 v74; // r8
  char v75; // [rsp+48h] [rbp-19h]
  char v76; // [rsp+49h] [rbp-18h]
  char v77; // [rsp+4Ah] [rbp-17h]
  char v78; // [rsp+4Bh] [rbp-16h]
  char v79; // [rsp+4Ch] [rbp-15h]
  __int64 v80; // [rsp+50h] [rbp-11h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v82; // [rsp+78h] [rbp+17h]
  __int128 v83; // [rsp+80h] [rbp+1Fh] BYREF

  v80 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v82 = 0LL;
  v0 = 0;
  v75 = 0;
  v76 = 0;
  v83 = 0LL;
  _InterlockedExchange64((volatile __int64 *)&qword_140CF5F60, (__int64)KeGetCurrentThread());
  v1 = 0;
  v77 = 0;
  sub_14077572C(1LL);
  while ( 1 )
  {
    v79 = 0;
    v2 = 0;
    v78 = 1;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
    v4 = qword_140C44A40;
    v5 = v3;
    if ( (__int64 *)qword_140C44A40 != &qword_140C44A40 )
    {
      v6 = *(_QWORD *)qword_140C44A40;
      if ( *(__int64 **)(qword_140C44A40 + 8) != &qword_140C44A40 || *(_QWORD *)(v6 + 8) != qword_140C44A40 )
LABEL_166:
        __fastfail(3u);
      qword_140C44A40 = *(_QWORD *)qword_140C44A40;
      *(_QWORD *)(v6 + 8) = &qword_140C44A40;
      *(_BYTE *)(v4 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v77 )
      break;
    v4 = 0LL;
LABEL_6:
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = (unsigned int)(v5 + 1);
          v44 = *((_QWORD *)CurrentPrcb + 4375);
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v27 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
          *(_DWORD *)(v44 + 20) &= v45;
          if ( v27 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( v4 )
    {
      v8 = -*(_QWORD *)(v4 + 56);
      if ( !*(_QWORD *)(v4 + 56) )
        v8 = -*(_QWORD *)(v4 + 64);
      if ( v8 )
      {
        v79 = 1;
        v83 = *(_OWORD *)(v4 + 56);
        *((_QWORD *)KeGetCurrentThread() + 190) = &v83;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(v4 + 80, 0LL);
      v10 = *(_BYTE *)(v4 + 88);
      ExReleasePushLockEx(v4 + 80, 0LL);
      KeLeaveCriticalRegion();
      v11 = *(_DWORD *)(v4 + 24);
      v12 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
      KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = *((_QWORD *)v47 + 4375);
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v27 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
            *(_DWORD *)(v48 + 20) &= v49;
            if ( v27 )
              sub_140418E4C(v47);
          }
        }
      }
      __writecr8(v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
      dword_140C1CB9C = v11;
      if ( byte_140C1CC10 )
        qword_140C1CC28 = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = *((_QWORD *)v51 + 4375);
            v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v27 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
            *(_DWORD *)(v52 + 20) &= v53;
            if ( v27 )
              sub_140418E4C(v51);
          }
        }
      }
      __writecr8(v13);
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      if ( stru_140C46280.Header.SignalState )
      {
        v2 = -1073741431;
      }
      else if ( v10 )
      {
        v2 = -1073741536;
      }
      else
      {
        v14 = *(_QWORD **)(v4 + 16);
        if ( v14 )
          v15 = *(_QWORD *)(v14[39] + 40LL);
        else
          v15 = 0LL;
        if ( *(_DWORD *)(v15 + 300) != 790 )
        {
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14[39] + 40LL);
            if ( v16 )
            {
              ObfReferenceObjectWithTag(v14, 0x65706E50u);
              sub_1402DD9AC(v16, *(unsigned int *)(v4 + 24), 1LL, 0LL);
            }
          }
          else
          {
            v16 = 0LL;
          }
          v17 = *(_DWORD *)(v4 + 24);
          if ( v17 <= 13 )
          {
            if ( v17 == 13 )
            {
              v2 = sub_140947934(v4);
              if ( v2 < 0 )
              {
                v75 = 1;
                v2 = 0;
              }
              goto LABEL_32;
            }
            if ( v17 > 5 )
            {
              if ( v17 == 6 )
              {
                v35 = sub_140564C24(v4);
                goto LABEL_69;
              }
              if ( v17 == 7 )
              {
                v76 = 1;
              }
              else
              {
                if ( v17 <= 10 )
                  goto LABEL_30;
                if ( v17 == 11 )
                {
                  v35 = sub_14081BA8C(v4);
                  goto LABEL_69;
                }
LABEL_83:
                v35 = sub_1406617B0(v4);
LABEL_69:
                v2 = v35;
              }
LABEL_32:
              if ( v16 )
              {
                sub_1402DD9AC(v16, *(unsigned int *)(v4 + 24), 2LL, (unsigned int)v2);
                ObfDereferenceObjectWithTag(*(PVOID *)(v4 + 16), 0x65706E50u);
              }
              goto LABEL_34;
            }
            if ( v17 == 5 )
            {
              v33 = *(_QWORD *)(v4 + 16);
              if ( v33 )
                v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                v34 = 0LL;
              v35 = sub_14080DBCC(v34, 0LL);
              goto LABEL_69;
            }
            if ( !v17 )
            {
              v75 = 1;
              goto LABEL_32;
            }
            v36 = v17 - 1;
            if ( v36 )
            {
              v40 = v36 - 1;
              if ( !v40 )
              {
                v35 = sub_1403DB668(v4);
                goto LABEL_69;
              }
              v54 = v40 - 1;
              if ( v54 )
              {
                if ( v54 == 1 )
                {
                  v35 = sub_140947864(v4);
                  goto LABEL_69;
                }
LABEL_121:
                v2 = -1073741823;
                goto LABEL_32;
              }
            }
            goto LABEL_77;
          }
          if ( v17 > 19 )
          {
            if ( v17 != 20 )
            {
              if ( v17 <= 24 )
              {
                v35 = sub_1409477A4(v4);
                goto LABEL_69;
              }
              if ( v17 != 25 )
              {
                if ( v17 == 26 )
                {
                  v35 = sub_140560174(v4);
                  goto LABEL_69;
                }
                if ( v17 == 27 )
                {
                  v35 = sub_140956608(v4);
                  goto LABEL_69;
                }
                goto LABEL_121;
              }
LABEL_77:
              v35 = sub_140660388(v4);
              goto LABEL_69;
            }
          }
          else
          {
            if ( v17 != 19 )
            {
              v37 = v17 - 14;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( !v38 )
                {
                  v35 = sub_140947A8C(v4);
                  goto LABEL_69;
                }
                v39 = v38 - 1;
                if ( !v39 )
                  goto LABEL_83;
                v41 = v39 - 1;
                if ( v41 )
                {
                  if ( v41 == 1 )
                  {
                    v77 = 1;
                    goto LABEL_32;
                  }
                  goto LABEL_121;
                }
                v18 = sub_140863BE8(v4);
              }
              else
              {
LABEL_30:
                v18 = sub_140764BE0(v4);
              }
              v2 = v18;
              v78 = 0;
              goto LABEL_32;
            }
            DWORD1(NotificationStructure[1]) = 0;
            *(_OWORD *)((char *)NotificationStructure + 4) = xmmword_140010D18;
            LODWORD(NotificationStructure[0]) = 2359297;
            *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
            v82 = 0xFFFFFFFFLL;
            IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v4 + 16), NotificationStructure, 0LL, 0LL);
          }
          sub_14080E030(*(_QWORD *)(v4 + 16));
          goto LABEL_32;
        }
        v2 = -1073741823;
      }
LABEL_34:
      v19 = *(unsigned int *)(v4 + 24);
      v20 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
      KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = *((_QWORD *)v56 + 4375);
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v27 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
            *(_DWORD *)(v57 + 20) &= v58;
            if ( v27 )
              sub_140418E4C(v56);
          }
        }
      }
      __writecr8(v20);
      v21 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
      if ( byte_140C1CC10 )
      {
        *(&qword_140C1CB60 + v19 + 26) = (char *)*(&qword_140C1CB60 + v19 + 26)
                                       + MEMORY[0xFFFFF78000000008]
                                       - qword_140C1CC28;
        qword_140C1CC28 = 0LL;
      }
      dword_140C1CB9C = 28;
      KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v59 = KeGetCurrentIrql();
          if ( v59 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v59 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v61 = *((_QWORD *)v60 + 4375);
            v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v27 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
            *(_DWORD *)(v61 + 20) &= v62;
            if ( v27 )
              sub_140418E4C(v60);
          }
        }
      }
      __writecr8(v21);
      v22 = 1;
      do
      {
        v23 = *(__int64 **)v4;
        v24 = **(_QWORD **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *(__int64 **)(v24 + 8) != v23 )
          goto LABEL_166;
        *(_QWORD *)v4 = v24;
        *(_QWORD *)(v24 + 8) = v4;
        v25 = *((unsigned int *)v23 + 6);
        v26 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
        v27 = dword_140C24270-- == 1;
        v28 = v26;
        if ( v27 )
          sub_1402500D4(4);
        KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v63 = KeGetCurrentIrql();
            if ( v63 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = *((_QWORD *)v64 + 4375);
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
              v27 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
              *(_DWORD *)(v65 + 20) &= v66;
              if ( v27 )
                sub_140418E4C(v64);
            }
          }
        }
        __writecr8(v28);
        v29 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
        if ( !--dword_140C1CB98 && byte_140C1CC10 )
        {
          qword_140C1CC18 += MEMORY[0xFFFFF78000000008] - qword_140C1CC20;
          qword_140C1CC20 = 0LL;
        }
        --*((_DWORD *)&qword_140C1CB60 + v25 + 16);
        KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = *((_QWORD *)v68 + 4375);
              v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
              v27 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
              *(_DWORD *)(v69 + 20) &= v70;
              if ( v27 )
                sub_140418E4C(v68);
            }
          }
        }
        __writecr8(v29);
        v30 = (int *)v23[6];
        if ( v30 )
          *v30 = v2;
        v31 = (struct _KEVENT *)v23[5];
        if ( v31 )
          KeSetEvent(v31, 0, 0);
        if ( v23 == (__int64 *)v4 )
        {
          v22 = 0;
          if ( v78 )
            ObfDereferenceObject((PVOID)v23[2]);
        }
        sub_1402DDABC(v23);
      }
      while ( v22 );
      v0 = v75;
      v1 = v76;
      if ( v79 )
        *((_QWORD *)KeGetCurrentThread() + 190) = 0LL;
    }
    else if ( v0 || v1 )
    {
      LODWORD(v80) = 3;
      BYTE4(v80) = byte_140C4629A;
      ObfReferenceObjectWithTag(*((PVOID *)qword_140C46278 + 4), 0x746C6644u);
      sub_140777578((_DWORD)qword_140C46278, 0, (unsigned int)&v80, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v75 = 0;
      v1 = 0;
      v76 = 0;
    }
    else
    {
      sub_1403D2178(v7, 1LL);
      v77 = 0;
    }
  }
  byte_140C44A00 = 0;
  KeSetEvent(&stru_140C44A20, 0, 0);
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v74 = *((_QWORD *)v72 + 4375);
        v27 = (v73 & *(_DWORD *)(v74 + 20)) == 0;
        *(_DWORD *)(v74 + 20) &= v73;
        if ( v27 )
          sub_140418E4C(v72);
      }
    }
  }
  __writecr8(v5);
  _InterlockedExchange64((volatile __int64 *)&qword_140CF5F60, 0LL);
  return sub_140775698(1LL);
}
