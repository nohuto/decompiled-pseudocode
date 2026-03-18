/*
 * XREFs of MmQueryBadAddresses @ 0x14058FE88
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiCheckLostBadPageNode @ 0x14058E174 (MiCheckLostBadPageNode.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     MiDeleteTrimViewInfoList @ 0x1406CAD9C (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryBadAddresses(_KPROCESS *a1, _QWORD *a2, unsigned __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r12
  _QWORD *Pool; // rdi
  unsigned int *v7; // r15
  unsigned __int64 v8; // r13
  int v9; // ebx
  unsigned __int64 v10; // r12
  __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  _QWORD *v23; // rdx
  _QWORD *i; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int64 v32; // r12
  unsigned __int64 *v33; // r14
  __m128i *v34; // rsi
  unsigned __int8 v35; // dl
  unsigned __int64 v36; // r8
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  _QWORD *v41; // r12
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r11
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // rdx
  PVOID v48; // rdx
  _QWORD *j; // rcx
  unsigned __int8 v51; // [rsp+20h] [rbp-108h]
  unsigned __int64 v52; // [rsp+28h] [rbp-100h]
  unsigned int *v54; // [rsp+38h] [rbp-F0h]
  int Flink; // [rsp+40h] [rbp-E8h]
  int v56; // [rsp+50h] [rbp-D8h]
  __int64 v57; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+70h] [rbp-B8h]
  _QWORD *v59; // [rsp+88h] [rbp-A0h]
  __int64 v60; // [rsp+98h] [rbp-90h] BYREF
  PVOID P; // [rsp+A0h] [rbp-88h]
  _QWORD *v62; // [rsp+A8h] [rbp-80h]
  _BYTE v63[48]; // [rsp+B8h] [rbp-70h] BYREF

  v4 = a4;
  v62 = a2;
  v60 = 0LL;
  LODWORD(P) = 0;
  memset(v63, 0, sizeof(v63));
  v56 = 0;
  Pool = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( qword_140C51E88 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
    {
      KiStackAttachProcess(a1, 0LL, (__int64)v63, a4);
      v56 = 1;
    }
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v58 = a3 >> 4;
LABEL_5:
    Pool = 0LL;
    v10 = 0LL;
    v52 = 0LL;
    v7 = 0LL;
    if ( !qword_140C51E98 )
    {
      while ( 1 )
      {
        v16 = qword_140C51E88;
        if ( !qword_140C51E88 )
        {
          Pool = 0LL;
          goto LABEL_91;
        }
        Pool = MiAllocatePool(64, 24 * qword_140C51E88, 0x6C42694Du);
        if ( !Pool )
          goto LABEL_23;
        v17 = ExAcquireSpinLockShared(&dword_140C51E90);
        if ( v16 >= qword_140C51E88 )
          break;
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C51E90);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v22 = (v21 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v21;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v17);
        ExFreePoolWithTag(Pool, 0);
      }
      v23 = 0LL;
      for ( i = (_QWORD *)qword_140C51E80; i; i = (_QWORD *)*i )
        v23 = i;
      v25 = Pool + 1;
      while ( v23 )
      {
        *v25 = 0xAAAAAAAAAAAAAAABuLL * ((v23[3] + 0x220000000000LL) >> 4);
        ++v10;
        v25 += 3;
        v26 = v23;
        v27 = (_QWORD *)v23[1];
        if ( v27 )
        {
          do
          {
            v23 = v27;
            v27 = (_QWORD *)*v27;
          }
          while ( v27 );
        }
        else
        {
          while ( 1 )
          {
            v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v23 || (_QWORD *)*v23 == v26 )
              break;
            v26 = v23;
          }
        }
      }
      v52 = v10;
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C51E90);
      v8 = 0LL;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v22 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)v29);
          }
        }
      }
      __writecr8(v17);
      goto LABEL_55;
    }
    v7 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
    v54 = v7;
    if ( v7 )
    {
      v11 = qword_140C51E88;
      if ( !qword_140C51E88 )
      {
LABEL_91:
        v4 = a4;
        goto LABEL_92;
      }
      Pool = MiAllocatePool(64, 24 * qword_140C51E88, 0x6C42694Du);
      if ( Pool )
      {
        v12 = 0;
LABEL_10:
        if ( v12 < *v7 )
        {
          v13 = *(_QWORD *)&v7[4 * v12 + 4];
          v14 = 48 * v13 - 0x220000000000LL;
          v15 = *(_QWORD *)&v54[4 * v12 + 6];
          v59 = &Pool[2 * v52 + 1 + v52];
          while ( 1 )
          {
            v57 = v15;
            if ( !v15 )
            {
              v7 = v54;
              goto LABEL_20;
            }
            if ( (*(_BYTE *)(v14 + 35) & 0x40) != 0 )
            {
              if ( MiCheckLostBadPageNode(v14) == 1 )
              {
                ExFreePoolWithTag(Pool, 0);
                MiDereferencePageRunsEx((__int64)v54, 1);
                goto LABEL_5;
              }
              *v59 = v13;
              ++v52;
              v59 += 3;
              if ( v52 == v11 )
              {
                v7 = v54;
                v12 = *v54 - 1;
LABEL_20:
                ++v12;
                goto LABEL_10;
              }
              v15 = v57;
            }
            --v15;
            ++v13;
            v14 += 48LL;
          }
        }
        v10 = v52;
LABEL_55:
        if ( v10 )
        {
          v32 = 0LL;
          v33 = Pool;
          while ( v32 < v52 )
          {
            v34 = (__m128i *)(48 * v33[1] - 0x220000000000LL);
            v33[1] = 0LL;
            v35 = MiLockPageInline((__int64)v34);
            v51 = v35;
            if ( (v34[2].m128i_i8[3] & 0x40) != 0 )
            {
              MiIdentifyPfn(v34, v33);
              v36 = *v33 | 0x80;
              if ( v34[2].m128i_i8[3] >= 0 )
                v36 = *v33 & 0xFFFFFFFFFFFFFF7FuLL;
              *v33 = v36;
              v35 = v51;
            }
            else
            {
              v33[1] = -1LL;
            }
            _InterlockedAnd64(&v34[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v37 = KeGetCurrentIrql();
                if ( v37 <= 0xFu && v35 <= 0xFu && v37 >= 2u )
                {
                  v38 = KeGetCurrentPrcb();
                  v39 = v38->SchedulerAssist;
                  v40 = ~(unsigned __int16)(-1LL << (v35 + 1));
                  v22 = (v40 & v39[5]) == 0;
                  v39[5] &= v40;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick((__int64)v38);
                }
              }
            }
            __writecr8(v51);
            ++v32;
            v33 += 3;
          }
          v41 = v62;
          v42 = 0LL;
          v9 = 0;
          v8 = 0LL;
          v43 = v52;
          v44 = v58;
          while ( v42 < v43 )
          {
            v45 = Pool[3 * v42 + 1];
            if ( v45 != -1 )
            {
              v46 = (Pool[3 * v42] >> 7) & 1LL;
              v47 = Pool[3 * v42] & 0xFLL;
              if ( (unsigned __int64)(v47 - 1) <= 1 || v47 == 8 )
              {
                LODWORD(v60) = Flink;
                if ( (int)MiLocateSharedPageViews(v45, &v60) < 0 )
                  goto LABEL_23;
                v48 = P;
                for ( j = P; j; j = (_QWORD *)*j )
                {
                  if ( v8 < v58 && v58 )
                  {
                    *v41 = j[2];
                    v41[1] = v46;
                    v41 += 2;
                  }
                  ++v8;
                }
                MiDeleteTrimViewInfoList(v48);
                v43 = v52;
                v44 = v58;
              }
              else if ( Flink == ((Pool[3 * v42] >> 9) & 0xFFFFFFFFFFFFLL) )
              {
                if ( v8 < v44 && v44 )
                {
                  *v41 = Pool[3 * v42 + 2];
                  v41[1] = v46;
                  v41 += 2;
                }
                ++v8;
              }
            }
            ++v42;
          }
        }
        goto LABEL_91;
      }
    }
LABEL_23:
    v9 = -1073741670;
    goto LABEL_91;
  }
LABEL_92:
  if ( v56 )
    KiUnstackDetachProcess((__int64)v63, 0LL);
  if ( v9 >= 0 && v4 )
    *v4 = 16 * v8;
  if ( v7 )
    MiDereferencePageRunsEx((__int64)v7, 1);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v9;
}
