/*
 * XREFs of sub_140350070 @ 0x140350070
 * Callers:
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140242028 @ 0x140242028 (sub_140242028.c)
 *     sub_1402472B4 @ 0x1402472B4 (sub_1402472B4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140353A00 @ 0x140353A00 (sub_140353A00.c)
 *     sub_140353B40 @ 0x140353B40 (sub_140353B40.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 *     sub_140365AC8 @ 0x140365AC8 (sub_140365AC8.c)
 *     sub_1403A5774 @ 0x1403A5774 (sub_1403A5774.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

__int64 __fastcall sub_140350070(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r15d
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // r13d
  unsigned int v9; // edi
  int *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // ecx
  unsigned int v19; // edi
  __m128i v20; // xmm0
  ULONG_PTR v21; // rbp
  int v23; // ecx
  char v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int16 v27; // ax
  struct _KTHREAD *v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rbx
  unsigned int j; // edx
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v36; // rcx
  char v37; // dl
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  struct _KTHREAD *v41; // r12
  unsigned int v42; // r8d
  __int64 v43; // rdi
  unsigned int i; // ecx
  int v45; // r8d
  struct _KTHREAD *v46; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  __int64 v52; // r8
  int v53; // eax
  int v54; // [rsp+78h] [rbp+10h]

  v4 = 1;
  v6 = a3;
  CurrentIrql = -1;
  v8 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v9 = v8 << 24;
  v54 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a3 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 20) = a3;
      }
      v10 = (int *)(a1 + 64);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        sub_140461A66(v10, CurrentIrql);
      else
        sub_14030F870(v10, CurrentIrql, a3, a4);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
  }
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(a1 + 96);
  if ( (v11 & 1) == 0 )
  {
LABEL_10:
    v13 = 0LL;
    v14 = v11 & 1;
    if ( !v12 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( v9 < *(_DWORD *)(v12 + 28) )
      {
        v15 = *(_QWORD *)v12;
        v13 = v12;
        if ( v14 && v15 )
        {
          v12 ^= v15;
          goto LABEL_15;
        }
      }
      else
      {
        if ( v9 <= *(_DWORD *)(v12 + 28) )
          goto LABEL_17;
        v15 = *(_QWORD *)(v12 + 8);
        if ( v14 && v15 )
        {
          v12 ^= v15;
          goto LABEL_15;
        }
      }
      v12 = v15;
LABEL_15:
      if ( !v12 )
        goto LABEL_16;
    }
  }
  if ( v12 )
  {
    v12 ^= a1 + 96;
    goto LABEL_10;
  }
  v13 = 0LL;
LABEL_16:
  v12 = v13;
LABEL_17:
  v16 = 0x7FFFFFFFFFFFFFFCLL;
  if ( v12 )
  {
    if ( (v6 & 0x800000) != 0 )
    {
      v12 = sub_1403A5774(a1, v12, v8, 1LL);
    }
    else
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v12);
      *(_OWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      v17 = ~(unsigned __int16)*(_DWORD *)(v12 + 28);
      *(_DWORD *)v12 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v17);
    }
    if ( v12 )
      goto LABEL_21;
    v16 = 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !v54 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v34 = (v49 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v49;
            if ( v34 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(a1 + 64);
        v16 = 0x7FFFFFFFFFFFFFFCLL;
      }
      v41 = KeGetCurrentThread();
      if ( (unsigned __int64)(a1 + 64 - qword_140C50630) < 0x8000000000LL )
      {
        v42 = sub_140287F30(*((_QWORD *)v41 + 23));
        v16 = 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        v42 = -1;
      }
      _disable();
      v43 = (__int64)v41 + 1696;
      for ( i = 0; i < 6; ++i )
      {
        if ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(v43 + 18)
          && (*(_DWORD *)v43 & 1) == 0
          && *(_DWORD *)(v43 + 8) == v42 )
        {
          *(_BYTE *)(v43 + 18) = 0;
          if ( *(__int64 *)v43 < 0 )
          {
            *(_BYTE *)v43 |= 2u;
            _enable();
            sub_14034EE30(v43);
            _disable();
          }
          v45 = *(_DWORD *)(v43 + 88);
          *(_DWORD *)(v43 + 88) = 0;
          *(_BYTE *)(v43 + 17) = 0;
          *(_QWORD *)v43 = 0LL;
          v16 = *(unsigned __int8 *)(v43 + 16);
          *((_BYTE *)v41 + 792) |= 1 << v16;
          _enable();
          if ( v45 )
            sub_14022B568((ULONG_PTR)v41, a1 + 64, v45);
          goto LABEL_80;
        }
        v43 += 96LL;
      }
      if ( (*((_DWORD *)v41 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v41, a1 + 64, v42, 0LL);
      _enable();
LABEL_80:
      v46 = KeGetCurrentThread();
      v34 = (*((_WORD *)v46 + 243))++ == 0xFFFF;
      if ( v34 && *((struct _KTHREAD **)v46 + 19) != (struct _KTHREAD *)((char *)v46 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  v38 = 0LL;
  if ( (v6 & 0x800000) != 0
    || (*(_BYTE *)(a1 + 13) & 7) == 3 && (BYTE1(*(_QWORD *)(a1 + 40)) == 3 || BYTE1(*(_QWORD *)(a1 + 40)) == 2) )
  {
    v38 = 2LL;
  }
  v39 = sub_1403633A0(a1, 0LL, v38, v16);
  v40 = v39;
  if ( !v39 )
    return 0LL;
  sub_140242028(a1, v39, 0);
  v12 = v40 + 32LL * *(unsigned __int8 *)(a1 + 10);
  CurrentIrql = sub_140365AC8(a1, v6);
  sub_1402472B4(a1, v40);
  if ( (v6 & 0x800000) != 0 )
    v12 = sub_1403A5774(a1, v12, v8, 0LL);
LABEL_21:
  v18 = *(unsigned __int8 *)(v12 + 31);
  if ( v18 != v8 )
  {
    v23 = v18 - v8;
    v24 = v23;
    v25 = 32LL * (unsigned int)(v23 - 1);
    v26 = v12 + 32LL * v8;
    *(_BYTE *)(v26 + 24) |= 2u;
    *(_BYTE *)(v25 + v26 + 31) = v24 - 1;
    *(_BYTE *)(v26 + 31) = v24;
    v27 = sub_140353B40(v25, v26);
    *(_DWORD *)v26 = -857879331;
    *(_WORD *)(v26 + 28) = ~v27;
    *(_BYTE *)(32LL * (v8 - 1) + v12 + 31) = v8 - 1;
    *(_BYTE *)(v12 + 31) = v8;
    *(_WORD *)(v12 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v12 + 28) + *(_WORD *)(v26 + 28) + 1);
    sub_140353A00(a1, v26, 0LL);
  }
  v19 = v8 - 1;
  *(_BYTE *)(v12 + 24) |= (unsigned __int8)(4 * ((v6 >> 26) & 3)) | 1;
  *(_BYTE *)(32LL * (v8 - 1) + v12 + 24) |= 1u;
  if ( !v54 )
  {
    v20 = *(__m128i *)(a1 + 40);
    v21 = a1 + 64;
    if ( (_mm_cvtsi128_si32(v20) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v21);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = *((_QWORD *)v51 + 4375);
            v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v34 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
            *(_DWORD *)(v52 + 20) &= v53;
            if ( v34 )
              sub_140418E4C(v51);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      v28 = KeGetCurrentThread();
      if ( v21 - qword_140C50630 < 0x8000000000LL )
        v29 = sub_140287F30(*((_QWORD *)v28 + 23));
      else
        v29 = -1;
      _disable();
      v30 = (__int64)v28 + 1696;
      for ( j = 0; j < 6; ++j )
      {
        if ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(v30 + 18)
          && (*(_DWORD *)v30 & 1) == 0
          && *(_DWORD *)(v30 + 8) == v29 )
        {
          *(_BYTE *)(v30 + 18) = 0;
          if ( *(__int64 *)v30 < 0 )
          {
            *(_BYTE *)v30 |= 2u;
            _enable();
            sub_14034EE30(v30);
            _disable();
          }
          v32 = *(_DWORD *)(v30 + 88);
          *(_DWORD *)(v30 + 88) = 0;
          *(_BYTE *)(v30 + 17) = 0;
          *(_QWORD *)v30 = 0LL;
          *((_BYTE *)v28 + 792) |= 1 << *(_BYTE *)(v30 + 16);
          _enable();
          if ( v32 )
            sub_14022B568((ULONG_PTR)v28, v21, v32);
          goto LABEL_47;
        }
        v30 += 96LL;
      }
      if ( (*((_DWORD *)v28 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v21, v29, 0LL);
      _enable();
LABEL_47:
      v33 = KeGetCurrentThread();
      v34 = (*((_WORD *)v33 + 243))++ == 0xFFFF;
      if ( v34 && *((struct _KTHREAD **)v33 + 19) != (struct _KTHREAD *)((char *)v33 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  if ( v19 > 1 )
  {
    v36 = (char *)(v12 + 56);
    do
    {
      v36[7] = v4++;
      v37 = *v36;
      v36 += 32;
      *(v36 - 32) = v37 | 1;
    }
    while ( v4 < v19 );
  }
  return v12;
}
