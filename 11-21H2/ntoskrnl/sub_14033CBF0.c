/*
 * XREFs of sub_14033CBF0 @ 0x14033CBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14062E6D0 @ 0x14062E6D0 (sub_14062E6D0.c)
 */

BOOLEAN __fastcall sub_14033CBF0(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *BugCheckParameter4; // rbx
  __int64 *v3; // r13
  unsigned __int16 *v4; // rdi
  char v5; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  int v10; // ecx
  const void *v11; // r14
  const void *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned __int16 v15; // r8
  __int64 v16; // r11
  unsigned int v17; // edx
  unsigned __int16 *v18; // r9
  unsigned __int16 *v19; // r10
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r10
  signed __int32 v26; // eax
  int v27; // edx
  signed __int32 v28; // r8d
  unsigned int v29; // edx
  bool v30; // di
  BOOLEAN result; // al
  __int64 v32; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-1E8h] BYREF
  int v38; // [rsp+30h] [rbp-1B8h]
  unsigned __int16 *v39; // [rsp+38h] [rbp-1B0h]
  __int128 v40; // [rsp+40h] [rbp-1A8h]
  __int64 v41; // [rsp+50h] [rbp-198h] BYREF
  __int64 v42; // [rsp+58h] [rbp-190h]
  struct _KTHREAD *v43; // [rsp+60h] [rbp-188h]
  __int64 v44; // [rsp+68h] [rbp-180h]
  __int128 v45; // [rsp+70h] [rbp-178h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v47[34]; // [rsp+90h] [rbp-158h] BYREF
  unsigned int v48; // [rsp+1E0h] [rbp-8h]

  v1 = a1;
  v44 = a1;
  PreviousAffinity = 0LL;
  memset(v47, 0, 0x108uLL);
  BugCheckParameter4 = KeGetCurrentThread();
  v3 = &v41;
  v4 = *(unsigned __int16 **)(v1 + 696);
  v41 = 0LL;
  v5 = 1;
  v42 = *(_QWORD *)(v1 + 688);
  v6 = *((_DWORD *)BugCheckParameter4 + 345);
  v43 = BugCheckParameter4;
  v39 = v4;
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)BugCheckParameter4 + 345) = v6 | 1;
  _InterlockedOr(v37, 0);
  if ( !byte_140C115B8 )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_4:
    while ( 1 )
    {
      v7 = sub_14033D110(v1, 0LL, 0LL, v3);
      v9 = (_QWORD *)v7;
      if ( !v5 )
        break;
      v5 = 0;
      *(_DWORD *)(v1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(v1 + 712), 0xFFFFBFFF);
      v3 = 0LL;
      if ( v7 != 258 )
      {
LABEL_6:
        if ( v7 == 128 )
          goto LABEL_43;
        v10 = *(_DWORD *)(v1 + 712);
        if ( v10 < (2 * *(_DWORD *)(v1 + 716)) >> 1
          || v10 < *(_DWORD *)(v1 + 720)
          && *(_QWORD *)(v1 + 8) == v1 + 8
          && (*(_DWORD *)(v1 + 4) || *(int *)(v1 + 716) < 0) )
        {
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 8LL * *v4) + 16LL), 0, 0);
        }
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 704));
        v11 = (const void *)v9[2];
        v12 = (const void *)v9[3];
        if ( (DWORD2(xmmword_140D06900) & 0x8000000) != 0 )
        {
          sub_14062E6D0(v9[2], 1344LL);
          sub_14042A5E0(v12, v32);
          sub_14062E6D0(v11, 1345LL);
        }
        else
        {
          sub_14042A5E0(v9[3], v8);
        }
        if ( (KeGetPcr()[5].HalReserved[15] & 0x10000) != 0 )
        {
          _disable();
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = v48 >> 9;
          *((_BYTE *)CurrentPrcb + 1750) &= ~1u;
          if ( (v34 & 1) != 0 )
            _enable();
        }
        if ( *((struct _KTHREAD **)BugCheckParameter4 + 97) != (struct _KTHREAD *)((char *)BugCheckParameter4 + 776) )
          KeBugCheckEx(0x39u, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)v9, 0LL);
        if ( *((_DWORD *)BugCheckParameter4 + 121) )
          KeBugCheckEx(
            1u,
            (ULONG_PTR)v11,
            *((unsigned __int8 *)BugCheckParameter4 + 586),
            *((unsigned int *)BugCheckParameter4 + 121),
            1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v11, KeGetCurrentIrql(), (ULONG_PTR)v12, (ULONG_PTR)v9);
        if ( (*((_DWORD *)BugCheckParameter4 + 344) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)v9, 0LL);
        if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
          KeBugCheckEx(
            5u,
            *((_QWORD *)BugCheckParameter4 + 68),
            *((_QWORD *)BugCheckParameter4 + 23),
            *((unsigned __int8 *)BugCheckParameter4 + 586),
            (ULONG_PTR)BugCheckParameter4);
        if ( *((_QWORD *)BugCheckParameter4 + 203) != -3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v11, (ULONG_PTR)v12, (ULONG_PTR)v9, 0LL);
        if ( (unsigned int)sub_14033D760(BugCheckParameter4) != 2 )
        {
          v36 = sub_14033D760(BugCheckParameter4);
          KeBugCheckEx(0x128u, (ULONG_PTR)v11, v36, (ULONG_PTR)v12, (ULONG_PTR)v9);
        }
        if ( (unsigned int)sub_14033D720(BugCheckParameter4) != 5 )
        {
          v35 = sub_14033D720(BugCheckParameter4);
          KeBugCheckEx(0x129u, (ULONG_PTR)v11, v35, (ULONG_PTR)v12, (ULONG_PTR)v9);
        }
        v13 = *((_DWORD *)BugCheckParameter4 + 346);
        if ( (v13 & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v11, (v13 >> 9) & 7, (ULONG_PTR)v12, (ULONG_PTR)v9);
        if ( (*((_DWORD *)BugCheckParameter4 + 345) & 0x800) != 0 )
          KeBugCheckEx(
            0x1D6u,
            (ULONG_PTR)v11,
            (*((_DWORD *)BugCheckParameter4 + 345) >> 11) & 1,
            (ULONG_PTR)v12,
            (ULONG_PTR)v9);
        if ( (*((_DWORD *)BugCheckParameter4 + 29) & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v11,
            v12,
            v9);
          PreviousAffinity = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        LODWORD(v47[0]) = 2097153;
        memset((char *)v47 + 4, 0, 0x104uLL);
        v14 = *v4;
        v40 = 0LL;
        v45 = 0LL;
        memset(&v47[1], 0, sizeof(_QWORD));
        v15 = 1;
        if ( (unsigned __int16)v14 < (unsigned __int16)word_140D05000 )
        {
          _mm_lfence();
          v16 = qword_140D31700[v14];
          v40 = (unsigned __int64)v16;
          v17 = *(_DWORD *)(v16 + 16);
          DWORD2(v40) = v17;
LABEL_27:
          v15 = v47[0];
          while ( v17 )
          {
            _BitScanForward((unsigned int *)&v21, v17);
            v45 = 0LL;
            v38 = v21;
            v22 = ~(1 << v21);
            v23 = *(_QWORD *)(v16 + 8 * v21 + 24);
            v17 &= v22;
            v24 = *(unsigned __int16 *)(v23 + 136);
            v25 = *(_QWORD *)(v23 + 128);
            *(_QWORD *)&v45 = v25;
            WORD4(v45) = v24;
            if ( LOWORD(v47[0]) > (unsigned __int16)v24 )
              goto LABEL_39;
            if ( WORD1(v47[0]) > (unsigned __int16)v24 )
            {
              LOWORD(v47[0]) = v24 + 1;
LABEL_39:
              v47[v24 + 1] |= v25;
              goto LABEL_27;
            }
          }
          BugCheckParameter4 = v43;
          v1 = v44;
          DWORD2(v40) = 0;
        }
        v18 = (unsigned __int16 *)*((_QWORD *)BugCheckParameter4 + 69);
        if ( v15 < *v18 )
        {
          v19 = (unsigned __int16 *)*((_QWORD *)BugCheckParameter4 + 69);
        }
        else
        {
          v19 = (unsigned __int16 *)v47;
          v15 = *v18;
        }
        v20 = 0;
        if ( v15 )
        {
          while ( v47[v20 + 1] == *(_QWORD *)&v18[4 * v20 + 4] )
          {
            if ( ++v20 >= v15 )
              goto LABEL_35;
          }
          goto LABEL_67;
        }
LABEL_35:
        if ( v20 < *v19 )
        {
          while ( !*(_QWORD *)&v19[4 * v20 + 4] )
          {
            if ( ++v20 >= *v19 )
              goto LABEL_36;
          }
LABEL_67:
          sub_14020E9E8((__int64)BugCheckParameter4, (__int64)v47);
        }
LABEL_36:
        v4 = v39;
        if ( *((_QWORD *)BugCheckParameter4 + 190) )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v11,
            v12,
            v9);
          *((_QWORD *)KeGetCurrentThread() + 190) = 0LL;
        }
      }
    }
    if ( v7 != 258 )
      goto LABEL_6;
LABEL_43:
    ;
  }
  while ( (*(_DWORD *)(v1 + 712) & 0x8000) == 0
       && (*((struct _KTHREAD **)BugCheckParameter4 + 160) != (struct _KTHREAD *)((char *)BugCheckParameter4 + 1280)
        || *(_DWORD *)(v1 + 4)) );
  _m_prefetchw((const void *)(v1 + 712));
  v26 = *(_DWORD *)(v1 + 712);
  do
  {
    v27 = (v26 & 0x3FFF) - 1;
    v28 = v26;
    if ( v27 < (2 * *(_DWORD *)(v1 + 716)) >> 1 && (v26 & 0x8000) == 0 )
      goto LABEL_4;
    v29 = v26 & 0xFFFFC000 | v27;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 712), v29, v26);
  }
  while ( v26 != v28 );
  v30 = v29 == 0x8000;
  if ( *((struct _KTHREAD **)BugCheckParameter4 + 160) != (struct _KTHREAD *)((char *)BugCheckParameter4 + 1280) )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL);
  *((_DWORD *)BugCheckParameter4 + 345) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v30 )
    return KeSetEvent(*(PRKEVENT *)(v1 + 728), 0, 0);
  return result;
}
