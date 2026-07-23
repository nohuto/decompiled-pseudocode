/*
 * XREFs of sub_14029CC2C @ 0x14029CC2C
 * Callers:
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 *     CcScheduleReadAheadEx @ 0x14029CC10 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x14053A6A0 (CcScheduleReadAhead.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140275F94 @ 0x140275F94 (sub_140275F94.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_14029D204 @ 0x14029D204 (sub_14029D204.c)
 *     sub_14029D2AC @ 0x14029D2AC (sub_14029D2AC.c)
 *     sub_14029E3A0 @ 0x14029E3A0 (sub_14029E3A0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1403ADB38 @ 0x1403ADB38 (sub_1403ADB38.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14029CC2C(_QWORD *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *CurrentThread, __int64 a5)
{
  __int64 v5; // rbx
  int *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // r14
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // r14d
  unsigned __int64 v20; // r15
  int v21; // eax
  int v22; // r12d
  int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  signed __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // edx
  int v32; // eax
  int v33; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // r9
  int v37; // eax
  bool v38; // zf
  int v39; // edx
  int v40; // r8d
  __int64 v41; // r15
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  KIRQL v49; // al
  unsigned __int64 v50; // rsi
  struct _KPRCB *v51; // r9
  __int64 v52; // r8
  int v53; // ecx
  struct _KPRCB *v54; // r9
  __int64 v55; // r8
  __int64 v57; // [rsp+48h] [rbp-41h]
  __int64 v58; // [rsp+48h] [rbp-41h]
  __int64 v59; // [rsp+48h] [rbp-41h]
  __int64 v60; // [rsp+50h] [rbp-39h] BYREF
  __int64 v61; // [rsp+58h] [rbp-31h]
  int v62; // [rsp+60h] [rbp-29h]
  __int64 v63; // [rsp+68h] [rbp-21h]
  __int64 v64; // [rsp+70h] [rbp-19h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v68; // [rsp+F8h] [rbp+6Fh]
  __int64 v69; // [rsp+100h] [rbp+77h]

  v69 = (__int64)CurrentThread;
  v68 = a3;
  v5 = a5;
  v6 = (int *)Object[6];
  v7 = Object[5];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v60 = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  v63 = 0LL;
  v64 = 0LL;
  v61 = a5;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 528);
    v13 = *(_QWORD *)(v11 + 592);
    v63 = v12;
    v64 = v13;
    if ( !a5 )
    {
      v5 = sub_14029E3A0(v12, v11);
      v61 = v5;
    }
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v69 = (__int64)CurrentThread;
  }
  v14 = sub_14033D760(CurrentThread);
  if ( v6 )
  {
    if ( v11 )
    {
      v17 = *(_DWORD *)(v11 + 152);
      if ( (v17 & 1) == 0 && (v17 & 0x2000) == 0 && (Object[10] & 0x100000) == 0 && v14 >= 2 )
      {
        LOBYTE(v14) = sub_1402844A0(v15, v16, (__int64)Object, 0x1000000u, 0, 4, 0LL);
        if ( (_BYTE)v14 )
        {
          if ( !*(_BYTE *)(v5 + 196) )
          {
            v18 = v9 + *a2;
            v57 = v9;
            v19 = ~v6[1] & (v6[1] + v9);
            v62 = v19;
            SpinLock = (PKSPIN_LOCK)(v6 + 20);
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
            if ( (*v6 & 0x20000) == 0 )
              *v6 |= 0x20000u;
            v21 = sub_14029D204(v6, a2);
            v22 = v21;
            if ( v21 )
            {
              if ( v21 > 0 )
              {
                if ( v21 > 2 )
                {
                  v23 = (int)a2;
                  if ( v21 != 3 || (v58 = 2LL * *a2 - *((_QWORD *)v6 + 4), v58 < 0) )
                  {
                    v53 = 0;
                    goto LABEL_69;
                  }
                  v24 = (v58 & 0xFFF) + v68;
                  LODWORD(v58) = v58 & 0xFFFFF000;
                  v68 = v24;
                  *((_QWORD *)v6 + 7) = v58;
                  v25 = (v24 + 4095) & 0xFFFFF000;
                  goto LABEL_34;
                }
                v26 = *((_QWORD *)v6 + 8);
                if ( v18 + v57 + (unsigned int)(2 * v19) >= v26 )
                {
                  v59 = *((_QWORD *)v6 + 8);
                  *((_QWORD *)v6 + 7) = v18 & 0xFFFFFFFFFFFFF000uLL;
                  if ( (__int64)(v18 & 0xFFFFFFFFFFFFF000uLL) >= v26 )
                    LODWORD(v59) = ~(v19 - 1) & (v19 + v18 - 1);
                  ++v6[12];
                  v27 = v19;
                  v28 = v6[12];
                  if ( v21 == 1 || v28 >= 3 )
                    v27 = 2 * v19;
                  v25 = v59 - v6[14] + v27;
                  if ( v28 >= 3 )
                  {
                    v29 = (unsigned int)v6[23];
                    if ( (_DWORD)v29 )
                    {
                      v30 = v29 * (unsigned __int64)(v68 * v28) / 0x64;
                      if ( v30 > 0xFFFFFFFF )
                        v30 = 0xFFFFFFFFLL;
                      if ( v30 > v25 )
                        v25 = v30;
                    }
                  }
LABEL_34:
                  v6[13] = v25;
                  v31 = *v6;
                  if ( (*v6 & 0x10000) == 0 )
                  {
                    *v6 = v31 | 0x10000;
                    v32 = sub_14033D720(KeGetCurrentThread());
                    *v6 = v33 ^ (v33 ^ (v32 << 18)) & 0x1C0000;
                    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v6 + 10);
                    if ( dword_140D06B08 )
                    {
                      if ( (dword_140D06B08 & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          v36 = *((_QWORD *)CurrentPrcb + 4375);
                          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                          v38 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
                          *(_DWORD *)(v36 + 20) &= v37;
                          if ( v38 )
                            sub_140418E4C(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v20);
                    if ( (int)sub_1402768E4(v63, v64, v61, &v60) < 0 )
                    {
                      v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
                      *v6 &= ~0x10000u;
                      v50 = v49;
                      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v6 + 10);
                      LOBYTE(v14) = dword_140D06B08;
                      if ( dword_140D06B08 )
                      {
                        if ( (dword_140D06B08 & 1) != 0 )
                        {
                          LOBYTE(v14) = KeGetCurrentIrql();
                          if ( (unsigned __int8)v14 <= 0xFu
                            && (unsigned __int8)v50 <= 0xFu
                            && (unsigned __int8)v14 >= 2u )
                          {
                            v51 = KeGetCurrentPrcb();
                            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                            v52 = *((_QWORD *)v51 + 4375);
                            v38 = (v14 & *(_DWORD *)(v52 + 20)) == 0;
                            *(_DWORD *)(v52 + 20) &= v14;
                            if ( v38 )
                              LOBYTE(v14) = sub_140418E4C(v51);
                          }
                        }
                      }
                      __writecr8(v50);
                    }
                    else
                    {
                      v41 = v60;
                      if ( (xmmword_140D06910 & 0x20000) != 0 )
                        sub_1403ADB38(v60, (_DWORD)Object, (_DWORD)a2, v68, v62, v22, 1);
                      if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                        sub_14029D2AC((_DWORD)Object, v39, v40, v22, v69);
                      ObfReferenceObjectWithTag(Object, 0x746C6644u);
                      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v63 + 704), &LockHandle);
                      ++*(_DWORD *)(v11 + 4);
                      ++*(_DWORD *)(v11 + 536);
                      *(_DWORD *)(v11 + 152) |= 0x4000u;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      OldIrql = LockHandle.OldIrql;
                      if ( dword_140D06B08 )
                      {
                        if ( (dword_140D06B08 & 1) != 0 )
                        {
                          v43 = KeGetCurrentIrql();
                          if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
                          {
                            v44 = KeGetCurrentPrcb();
                            v45 = *((_QWORD *)v44 + 4375);
                            v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v38 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
                            *(_DWORD *)(v45 + 20) &= v46;
                            if ( v38 )
                              sub_140418E4C(v44);
                            v41 = v60;
                          }
                        }
                      }
                      __writecr8(OldIrql);
                      *((_QWORD *)v6 + 14) = v41;
                      *(_BYTE *)(v41 + 128) = 1;
                      *(_QWORD *)(v41 + 16) = Object;
                      *(_QWORD *)(v41 + 24) = 0LL;
                      sub_1402F5EA0(v69, v41 + 24);
                      LOBYTE(v14) = sub_140275F94((_QWORD *)v41, v61 + 88, v47, v48);
                    }
                    return v14;
                  }
                  v53 = 1;
                  if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                  {
                    sub_14029D2AC((_DWORD)Object, v31, v25, v22, v69);
                    v53 = 1;
                  }
                  goto LABEL_68;
                }
              }
            }
            else
            {
              v6[12] = 0;
              *((_QWORD *)v6 + 8) = 0LL;
              *((_QWORD *)v6 + 9) = 0LL;
            }
            v53 = 0;
LABEL_68:
            v23 = (int)a2;
LABEL_69:
            if ( (xmmword_140D06910 & 0x20000) != 0 )
              sub_1403ADB38(0, (_DWORD)Object, v23, v68, v19, v22, v53);
            KeReleaseSpinLockFromDpcLevel(SpinLock);
            LOBYTE(v14) = dword_140D06B08;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                LOBYTE(v14) = KeGetCurrentIrql();
                if ( (unsigned __int8)v14 <= 0xFu && (unsigned __int8)v20 <= 0xFu && (unsigned __int8)v14 >= 2u )
                {
                  v54 = KeGetCurrentPrcb();
                  v55 = *((_QWORD *)v54 + 4375);
                  v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                  v38 = (v14 & *(_DWORD *)(v55 + 20)) == 0;
                  *(_DWORD *)(v55 + 20) &= v14;
                  if ( v38 )
                    LOBYTE(v14) = sub_140418E4C(v54);
                }
              }
            }
            __writecr8(v20);
          }
        }
      }
    }
  }
  return v14;
}
