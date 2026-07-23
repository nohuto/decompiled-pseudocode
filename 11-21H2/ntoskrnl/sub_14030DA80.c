/*
 * XREFs of sub_14030DA80 @ 0x14030DA80
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_14097F038 @ 0x14097F038 (sub_14097F038.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030E0A0 @ 0x14030E0A0 (sub_14030E0A0.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14032CB70 @ 0x14032CB70 (sub_14032CB70.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 */

__int64 __fastcall sub_14030DA80(unsigned __int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 j; // rsi
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONG_PTR v13; // r13
  unsigned __int8 v14; // al
  volatile __int32 *v15; // r12
  unsigned __int8 v16; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v18; // rcx
  signed __int32 v19; // ett
  unsigned __int8 CurrentIrql; // r12
  char v21; // dl
  __int64 v22; // rdx
  volatile LONG *v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r13
  unsigned int v26; // ebp
  __int64 v27; // rcx
  __int64 v28; // r14
  int v29; // eax
  __int64 v30; // r12
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rdx
  char *v33; // rbx
  __int64 v34; // r8
  int v35; // r8d
  struct _KTHREAD *v36; // rcx
  bool v37; // zf
  int v38; // eax
  __int64 result; // rax
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r9
  int v43; // eax
  int v44; // eax
  unsigned __int8 v45; // al
  KIRQL v46; // r12
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // [rsp+40h] [rbp-98h]
  int v51; // [rsp+48h] [rbp-90h]
  unsigned __int8 v52; // [rsp+50h] [rbp-88h]
  struct _KPRCB *v53; // [rsp+50h] [rbp-88h]
  int v54; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-78h]
  unsigned __int64 v56; // [rsp+68h] [rbp-70h]
  __int64 v57; // [rsp+70h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v59; // [rsp+80h] [rbp-58h]
  unsigned __int8 v60; // [rsp+E0h] [rbp+8h]
  KIRQL v61; // [rsp+E0h] [rbp+8h]
  int v64; // [rsp+F8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v64 = 0;
  v6 = *((_QWORD *)CurrentThread + 23);
  v59 = CurrentThread;
  v50 = v6;
  v57 = v6 + 1664;
  if ( !a2 )
  {
    v8 = 0LL;
    v56 = 0LL;
    v9 = 0LL;
    v55 = 0LL;
    i = 0LL;
LABEL_19:
    j = 0LL;
    goto LABEL_20;
  }
  i = *(_QWORD *)a1;
  v8 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v9 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v56 = v8;
  v55 = v9;
  if ( i )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == a1 )
        break;
      a1 = i;
    }
  }
  j = *(_QWORD *)(v5 + 8);
  v11 = v5;
  if ( !i )
    i = 0LL;
  if ( j )
  {
    v12 = *(_QWORD **)j;
    if ( *(_QWORD *)j )
    {
      do
      {
        j = (unsigned __int64)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)j == v11 )
        break;
      v11 = j;
    }
  }
  if ( !j )
    goto LABEL_19;
LABEL_20:
  --*(_QWORD *)(v6 + 2024);
  --*((_WORD *)CurrentThread + 243);
  v52 = 17;
  v13 = v6 + 1232;
  BugCheckParameter2 = v6 + 1232;
  ExAcquirePushLockExclusiveEx(v6 + 1232, 0LL);
  if ( a2 )
  {
    v14 = *(_BYTE *)(v57 + 184) & 7;
    if ( v14 > 4u )
    {
      if ( v14 != 5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v52 = CurrentIrql;
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v41 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v41 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        goto LABEL_31;
      }
    }
    else if ( v14 == 2 )
    {
      v15 = (volatile __int32 *)&unk_140C53D00;
      goto LABEL_24;
    }
    v15 = (volatile __int32 *)(v57 + 192);
LABEL_24:
    v16 = KeGetCurrentIrql();
    v60 = v16;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v16 <= 0xFu )
    {
      v42 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v42 + 20) |= (-1 << (v16 + 1)) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_140461B20(v15, v16);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v53 = CurrentPrcb;
      v18 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v18 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v43 = *(_DWORD *)(v18 + 24);
          *(_DWORD *)(v18 + 24) = v43 + 1;
          if ( v43 == -1 )
          {
            sub_140418E4C(CurrentPrcb);
            CurrentPrcb = v53;
            v16 = v60;
          }
        }
      }
      _m_prefetchw((const void *)v15);
      v19 = *v15 & 0x7FFFFFFF;
      if ( v19 == _InterlockedCompareExchange(v15, v19 + 1, v19) )
        goto LABEL_28;
      v40 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v40 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v44 = *(_DWORD *)(v40 + 24) - 1;
          *(_DWORD *)(v40 + 24) = v44;
          if ( !v44 )
          {
            sub_140418E4C(CurrentPrcb);
            v16 = v60;
          }
        }
      }
      sub_140366A20(v15, v16);
    }
    v16 = v60;
LABEL_28:
    if ( *((_DWORD *)v15 + 1) )
      _InterlockedExchange(v15 + 1, 0);
    CurrentIrql = v16;
    v52 = v16;
LABEL_31:
    sub_14032CB70(v8, v9, CurrentIrql, &v64);
    v21 = 3;
    goto LABEL_32;
  }
  v21 = 2;
LABEL_32:
  v22 = v21 & 1;
  v51 = v22;
  v23 = (volatile LONG *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 284LL);
  if ( (_DWORD)v22 )
  {
    LOBYTE(v22) = -1;
    v61 = 17;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v23, v22);
    else
      sub_14030F870(v23, v22);
  }
  else
  {
    v61 = ExAcquireSpinLockExclusive(v23);
  }
  RtlAvlRemoveNode((unsigned __int64 *)(v50 + 2008), (unsigned __int64 *)v5);
  if ( *(_QWORD *)(v50 + 2016) == v5 )
    *(_QWORD *)(v50 + 2016) = *(_QWORD *)(v50 + 2008);
  *(_QWORD *)(v5 + 16) = -2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                       + 284LL));
  if ( !v51 )
  {
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v45 = KeGetCurrentIrql(), v45 <= 0xFu) )
    {
      v46 = v61;
      if ( v61 <= 0xFu && v45 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = *((_QWORD *)v47 + 4375);
        v49 = ~(unsigned __int16)(-1LL << (v61 + 1));
        v37 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
        *(_DWORD *)(v48 + 20) &= v49;
        if ( v37 )
          sub_140418E4C(v47);
      }
    }
    else
    {
      v46 = v61;
    }
    __writecr8(v46);
  }
  if ( !a2 )
  {
    v30 = v50;
    goto LABEL_49;
  }
  sub_1402B0CE0(v57, v52);
  if ( !a3 )
  {
    v24 = v8 >> 16;
    v25 = v9 >> 16;
    if ( i
      && ((v8 ^ ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      LODWORD(v24) = v24 + 1;
    }
    if ( j
      && ((v9 ^ ((*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( !v25 )
      {
LABEL_111:
        v30 = v50;
        sub_1407B92D0(v8, v9, v50, i, j, v5, (__int64)&v64);
        v13 = BugCheckParameter2;
        goto LABEL_49;
      }
      LODWORD(v25) = v25 - 1;
    }
    v26 = 0;
    v54 = 0;
    v27 = *((_QWORD *)KeGetCurrentThread() + 23);
    v28 = *(_QWORD *)(v27 + 1680) + 48LL;
    if ( *(_QWORD *)(*(_QWORD *)(v27 + 1680) + 264LL) )
    {
      v29 = 0;
      do
      {
        sub_14030E0A0(v28 + 72 * v29, v24, v25, i, j, (__int64)&v54);
        v29 = ++v26;
      }
      while ( (unsigned __int64)v26 < *(_QWORD *)(v28 + 216) );
      v30 = v50;
      sub_1407B92D0(v56, v55, v50, i, j, v5, (__int64)&v64);
      v13 = BugCheckParameter2;
      goto LABEL_49;
    }
    LODWORD(v9) = v55;
    LODWORD(v8) = v56;
    goto LABEL_111;
  }
  v30 = v50;
  sub_1407B92D0(v8, v9, v50, i, j, v5, (__int64)&v64);
  sub_14030E390(a3, v50, 2LL);
LABEL_49:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  v31 = KeGetCurrentThread();
  if ( v13 - qword_140C50630 < 0x8000000000LL )
    v32 = (unsigned int)sub_140287F30(*((_QWORD *)v31 + 23));
  else
    v32 = 0xFFFFFFFFLL;
  _disable();
  v33 = (char *)v31 + 1696;
  v34 = 0LL;
  do
  {
    if ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && v33[18]
      && (*(_DWORD *)v33 & 1) == 0
      && *((_DWORD *)v33 + 2) == (_DWORD)v32 )
    {
      v33[18] = 0;
      if ( *(__int64 *)v33 < 0 )
      {
        *v33 |= 2u;
        _enable();
        sub_14034EE30(v33, v32, v34);
        _disable();
      }
      v35 = *((_DWORD *)v33 + 22);
      *((_DWORD *)v33 + 22) = 0;
      v33[17] = 0;
      *(_QWORD *)v33 = 0LL;
      *((_BYTE *)v31 + 792) |= 1 << v33[16];
      _enable();
      if ( v35 )
        sub_14022B568((ULONG_PTR)v31, v13, v35);
      goto LABEL_62;
    }
    v34 = (unsigned int)(v34 + 1);
    v33 += 96;
  }
  while ( (unsigned int)v34 < 6 );
  if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v31, v13, (unsigned int)v32, 0LL);
  _enable();
LABEL_62:
  v36 = v59;
  v37 = (*((_WORD *)v59 + 243))++ == 0xFFFF;
  if ( v37 && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152) )
    KiCheckForKernelApcDelivery();
  v38 = *(_DWORD *)(v5 + 48);
  if ( (v38 & 0x200000) != 0 && ((v38 & 0x800000) != 0 || (v38 & 0x180000u) >= 0x100000)
    || (result = sub_14030EC40(v5), (_DWORD)result) )
  {
    result = (*(_DWORD *)(v5 + 48) >> 19) & 3;
    if ( (unsigned __int64)qword_1400161D0[result] >= 0x200 )
      --*(_DWORD *)(v30 + 2140);
  }
  return result;
}
