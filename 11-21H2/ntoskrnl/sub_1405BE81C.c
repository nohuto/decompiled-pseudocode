/*
 * XREFs of sub_1405BE81C @ 0x1405BE81C
 * Callers:
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_1403CF630 @ 0x1403CF630 (sub_1403CF630.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140419138 @ 0x140419138 (sub_140419138.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058732C @ 0x14058732C (sub_14058732C.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BDB0C @ 0x1405BDB0C (sub_1405BDB0C.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BE588 @ 0x1405BE588 (sub_1405BE588.c)
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_1405BF028 @ 0x1405BF028 (sub_1405BF028.c)
 *     sub_1405BF2A0 @ 0x1405BF2A0 (sub_1405BF2A0.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 *     sub_140982150 @ 0x140982150 (sub_140982150.c)
 */

__int64 __fastcall sub_1405BE81C(__int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  unsigned __int64 *v10; // r13
  int v11; // r14d
  __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r10
  _QWORD *v23; // rcx
  int v24; // ecx
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r12
  __m128i v29; // xmm1
  _QWORD *v30; // rbx
  __m128i v31; // xmm0
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rcx
  unsigned __int64 *v36; // rax
  unsigned __int64 *v37; // rdi
  volatile LONG *v38; // r12
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 *v42; // rcx
  unsigned __int64 *v43; // rdx
  unsigned __int64 v44; // r12
  unsigned __int64 *v45; // r8
  int v46; // r13d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v49; // r9
  int v50; // eax
  bool v51; // zf
  int v52; // r8d
  unsigned int v53; // r8d
  unsigned __int64 *v54; // r12
  _QWORD *v55; // rdx
  bool v56; // r8
  _QWORD *v57; // rax
  struct _KTHREAD *v58; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  __int64 v62; // r8
  int v63; // eax
  _QWORD *v65; // [rsp+30h] [rbp-B1h] BYREF
  unsigned __int64 v66; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int64 *v67; // [rsp+40h] [rbp-A1h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-99h]
  _QWORD *v69; // [rsp+50h] [rbp-91h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-89h] BYREF
  __m128i v71[4]; // [rsp+70h] [rbp-71h] BYREF
  _OWORD v72[8]; // [rsp+B0h] [rbp-31h] BYREF
  int v73; // [rsp+140h] [rbp+5Fh]
  unsigned __int64 *v74; // [rsp+148h] [rbp+67h]
  unsigned __int64 v75; // [rsp+150h] [rbp+6Fh]
  __int64 v76; // [rsp+158h] [rbp+77h]

  v76 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v71, 0, sizeof(v71));
  memset(v72, 0, 0x40uLL);
  v10 = *(unsigned __int64 **)a3;
  v11 = 0;
  v65 = 0LL;
  v12 = 0x3FFFFFFFFFFFFFFFLL;
  v66 = 0LL;
  v71[0].m128i_i64[1] = (__int64)a1;
  v71[0].m128i_i64[0] = a2;
  CurrentThread = KeGetCurrentThread();
  v13 = *(_DWORD *)(a3 + 24) & 0x14;
  v67 = v10;
  if ( v13 == 4 )
  {
    v14 = (_QWORD *)*v10;
    v15 = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      v16 = (_QWORD *)v15[1];
      v17 = v15;
      v18 = v15;
      if ( v16 )
      {
        do
        {
          v15 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v18 )
            break;
          v18 = v15;
        }
      }
      if ( !sub_1405BD66C(&v66, v17[3] & 0x3FFFFFFFFFFFFFFFLL, v17[4], 4) )
        goto LABEL_17;
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
  {
    v19 = (_QWORD *)*v10;
    v20 = 0LL;
    while ( v19 )
    {
      v20 = v19;
      v19 = (_QWORD *)*v19;
    }
    while ( v20 )
    {
      v21 = (_QWORD *)v20[1];
      v22 = (__int64)v20;
      v23 = v20;
      if ( v21 )
      {
        do
        {
          v20 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        while ( 1 )
        {
          v20 = (_QWORD *)(v20[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v20 || (_QWORD *)*v20 == v23 )
            break;
          v23 = v20;
        }
      }
      sub_1405BCBC4(v22, 0xAuLL, 0LL, (__int16 **)v71);
    }
  }
  v24 = *(_DWORD *)(a3 + 24) & 0x20;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
  {
    if ( v24 )
    {
      v11 = sub_140982150(a1, v10, v9, v12);
      if ( v11 < 0 )
        goto LABEL_129;
    }
  }
  else
  {
    if ( v24 )
    {
      if ( !(unsigned int)sub_14058732C() )
      {
LABEL_17:
        v11 = -1073741670;
        goto LABEL_129;
      }
      *(_DWORD *)(a3 + 24) |= 4u;
      v11 = sub_1405BE614((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
      if ( v11 < 0 )
      {
        sub_1405BE614(a1, v10, 1u, 1);
        goto LABEL_129;
      }
      a2 = 0LL;
      v10 = 0LL;
      v67 = 0LL;
    }
    if ( a1 != (__int16 *)&StartContext )
    {
      if ( (*(_DWORD *)(a3 + 24) & 0x20) == 0 )
        sub_1405BDB0C((__int64)a1, (_QWORD **)v10);
      sub_1405B3268(a1, a4, a4);
      sub_14028CE10((__int64)a1, a4);
    }
  }
  if ( (ULONG_PTR *)a2 != &StartContext )
    goto LABEL_65;
  v11 = sub_1405BE614((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
  if ( (*(_DWORD *)(a3 + 24) & 4) != 0 )
    sub_140419138();
  if ( v11 < 0 )
  {
    v25 = *(_DWORD *)(a3 + 24);
    if ( (v25 & 0x20) != 0 )
    {
      v26 = (_QWORD *)*v10;
      v27 = 0LL;
      while ( v26 )
      {
        v27 = v26;
        v26 = (_QWORD *)*v26;
      }
      sub_1405875A0(0LL, (v27[3] >> 18) & 0x3FFFFFLL, 0);
      goto LABEL_129;
    }
    v28 = 0LL;
    v29 = v71[2];
    a2 = (__int64)a1;
    v30 = 0LL;
    *((_QWORD *)&v72[0] + 1) = v71[0].m128i_i64[0];
    v72[1] = v71[1];
    v31 = v71[3];
    *(_QWORD *)&v72[0] = _mm_srli_si128(v71[0], 8).m128i_u64[0];
    *(_DWORD *)(a3 + 24) = v25 & 0xFFFFFFFB;
    v72[2] = v29;
    v72[3] = v31;
    v32 = (_QWORD *)*v10;
    v76 = 0LL;
    while ( v32 )
    {
      v30 = v32;
      v32 = (_QWORD *)*v32;
    }
    if ( v30 )
    {
      do
      {
        v33 = (_QWORD *)v30[1];
        v34 = (__int64)v30;
        v35 = v30;
        if ( v33 )
        {
          do
          {
            v30 = v33;
            v33 = (_QWORD *)*v33;
          }
          while ( v33 );
        }
        else
        {
          while ( 1 )
          {
            v30 = (_QWORD *)(v30[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v30 || (_QWORD *)*v30 == v35 )
              break;
            v35 = v30;
          }
        }
        v28 += RtlNumberOfSetBitsEx(v34 + 32);
        if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
          sub_1405BCBC4(v34, 0xAuLL, 0LL, (__int16 **)v72);
      }
      while ( v30 );
      v76 = v28;
    }
LABEL_65:
    if ( !a2 )
      goto LABEL_129;
    v73 = *(_DWORD *)(a3 + 24) & 0x21;
    if ( !a5 )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(a2 + 192, 0LL);
    }
    v36 = (unsigned __int64 *)*v10;
    v37 = 0LL;
    while ( v36 )
    {
      v37 = v36;
      v36 = (unsigned __int64 *)*v36;
    }
    if ( !v37 )
      goto LABEL_111;
    v38 = (volatile LONG *)(a2 + 200);
    while ( 1 )
    {
      v74 = v37;
      v39 = v37[3];
      v69 = v37 + 3;
      v40 = v39 & 0x3FFFFFFFFFFFFFFFLL;
      v41 = RtlNumberOfSetBitsEx(v37 + 4);
      v42 = (unsigned __int64 *)v37[1];
      v43 = v37;
      v75 = v41;
      if ( v42 )
      {
        do
        {
          v37 = v42;
          v42 = (unsigned __int64 *)*v42;
        }
        while ( v42 );
      }
      else
      {
        while ( 1 )
        {
          v37 = (unsigned __int64 *)(v37[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v37 || (unsigned __int64 *)*v37 == v43 )
            break;
          v43 = v37;
        }
      }
      v44 = ExAcquireSpinLockExclusive(v38);
      RtlAvlRemoveNode(v10, v74);
      if ( v73 == 33 )
        break;
      if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
      {
        v45 = &v66;
        goto LABEL_84;
      }
      v46 = 1;
LABEL_85:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 200));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v49 = *((_QWORD *)CurrentPrcb + 4375);
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            v51 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
            *(_DWORD *)(v49 + 20) &= v50;
            if ( v51 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v44);
      v52 = *(_DWORD *)(a3 + 24);
      if ( (v52 & 0x310) == 0 && v73 != 33 )
      {
        sub_1403CF51C(a2, v75, v75, 1, 0LL);
        v52 = *(_DWORD *)(a3 + 24);
      }
      v53 = v52 | 0x40;
      *(_DWORD *)(a3 + 24) = v53;
      if ( (v53 & 0x100) != 0 )
      {
        v11 = 0;
      }
      else if ( (v53 & 0x800) == 0 )
      {
        v54 = v74;
        v11 = sub_1405BE588((__int16 *)a2, (__int64)v74, v53);
        if ( v11 < 0 )
        {
          sub_1405BF2A0(a2, v40, v76);
          sub_1405875A0(0LL, (v40 >> 18) & 0x3FFFFF, 0);
          goto LABEL_110;
        }
        goto LABEL_98;
      }
      v54 = v74;
LABEL_98:
      if ( !v46 )
        goto LABEL_110;
      v55 = v65;
      v56 = 0;
      if ( !v65 )
        goto LABEL_109;
      while ( (*v69 & 0x3FFFFFFFFFFFFFFFuLL) < (v55[3] & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v57 = (_QWORD *)*v55;
        if ( !*v55 )
        {
          v56 = 0;
          goto LABEL_109;
        }
LABEL_107:
        v55 = v57;
      }
      v57 = (_QWORD *)v55[1];
      if ( v57 )
        goto LABEL_107;
      v56 = 1;
LABEL_109:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v65, (unsigned __int64)v55, v56, v54);
LABEL_110:
      v10 = v67;
      v38 = (volatile LONG *)(a2 + 200);
      if ( !v37 )
      {
LABEL_111:
        if ( v73 == 33 || (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
          sub_140981F58(a2);
        if ( !a5 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a2 + 192);
          sub_1402AFC00(a2 + 192);
          v58 = CurrentThread;
          v51 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v51 && *((struct _KTHREAD **)v58 + 19) != (struct _KTHREAD *)((char *)v58 + 152) )
            KiCheckForKernelApcDelivery();
        }
        if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 16040), &LockHandle);
          sub_1403CF630((_QWORD *)a2);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v60 = KeGetCurrentIrql();
              if ( v60 <= 0xFu && LockHandle.OldIrql <= 0xFu && v60 >= 2u )
              {
                v61 = KeGetCurrentPrcb();
                v62 = *((_QWORD *)v61 + 4375);
                v63 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v51 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
                *(_DWORD *)(v62 + 20) &= v63;
                if ( v51 )
                  sub_140418E4C((__int64)v61);
              }
            }
          }
          __writecr8(OldIrql);
        }
        goto LABEL_129;
      }
    }
    v45 = 0LL;
LABEL_84:
    v46 = sub_1405BF028(a2, v74, v45);
    *(_BYTE *)(a2 + 12) = 1;
    *(_QWORD *)(a2 + 16720) += v75;
    goto LABEL_85;
  }
LABEL_129:
  sub_1405BDF64((unsigned __int64 *)&v65);
  sub_1405BDF64(&v66);
  return (unsigned int)v11;
}
