/*
 * XREFs of sub_140350B40 @ 0x140350B40
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_1405F31C0 @ 0x1405F31C0 (sub_1405F31C0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140350FA0 @ 0x140350FA0 (sub_140350FA0.c)
 *     sub_140351450 @ 0x140351450 (sub_140351450.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036808C @ 0x14036808C (sub_14036808C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

char __fastcall sub_140350B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // r12d
  unsigned __int8 CurrentIrql; // si
  int *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rdx
  BOOLEAN v16; // al
  __int64 v17; // rax
  _QWORD *v18; // r14
  unsigned __int8 v19; // si
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rbp
  unsigned int v22; // r8d
  __int64 v23; // rbx
  unsigned int i; // edx
  int v25; // r8d
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rax
  char v30; // cl
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v34; // r8
  int v35; // eax
  int v37; // [rsp+70h] [rbp+18h] BYREF

  v37 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = a4;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v29 = (char *)(a2 + 56);
    a4 = (unsigned int)(v4 - 2);
    do
    {
      v30 = *v29;
      v29 += 32;
      *(v29 - 32) = v30 & 0xFE;
      --a4;
    }
    while ( a4 );
  }
  CurrentIrql = -1;
  if ( (v5 & 1) == 0 )
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
      v9 = (int *)(a1 + 64);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        sub_140461A66(v9, CurrentIrql);
      else
        sub_14030F870(v9, CurrentIrql, a3, a4);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
  }
  v10 = *(_DWORD *)(a2 + 28);
  LOBYTE(v37) = CurrentIrql;
  if ( HIBYTE(v10) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v10;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v11 = sub_140350FA0(a1, a2, v5, 0, (__int64)&v37);
  v12 = *(_BYTE *)(a1 + 13);
  v13 = v11;
  if ( (v12 & 0x10) != 0
    && (LODWORD(v11) = *(unsigned __int8 *)(v11 + 31), (_DWORD)v11 == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v18 = (_QWORD *)(v13 & *(_QWORD *)a1);
    *(_DWORD *)v13 = -857879297;
    if ( v18 )
    {
      v31 = *v18;
      v11 = v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || *(_QWORD **)v11 != v18 )
        __fastfail(3u);
      *(_QWORD *)v11 = v31;
      *(_QWORD *)(v31 + 8) = v11;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v12 & 7) != 0 )
      v14 = sub_140351450(
              a1,
              ((v13 - (v13 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (v13 & *(_QWORD *)a1),
              *(unsigned __int8 *)(v13 + 31) << *(_BYTE *)(a1 + 8));
    else
      v14 = 4;
    *(_BYTE *)(v13 + 30) = v14;
    if ( (*(_QWORD *)(a1 + 104) & 1) == 0 )
    {
      v15 = *(_QWORD *)(a1 + 96);
      goto LABEL_15;
    }
    v20 = *(_QWORD *)(a1 + 96);
    if ( v20 )
    {
      v15 = v20 ^ (a1 + 96);
LABEL_15:
      v16 = 0;
      if ( !v15 )
        goto LABEL_29;
      while ( 1 )
      {
        if ( *(_DWORD *)(v13 + 28) >= *(_DWORD *)(v15 + 28) )
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_26;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_26:
            v16 = 1;
            goto LABEL_29;
          }
        }
        else
        {
          v17 = *(_QWORD *)v15;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_28;
            v17 ^= v15;
          }
          if ( !v17 )
            goto LABEL_28;
        }
        v15 = v17;
      }
    }
    v15 = 0LL;
LABEL_28:
    v16 = 0;
LABEL_29:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v15, v16, (PRTL_BALANCED_NODE)v13);
    v11 = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + a1 + 16), (unsigned __int16)~*(_WORD *)(v13 + 28));
    v18 = 0LL;
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v32 = KeGetCurrentIrql(), v32 <= 0xFu) )
      {
        v19 = v37;
        if ( (unsigned __int8)v37 <= 0xFu && v32 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = v37;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
          v27 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
          *(_DWORD *)(v34 + 20) &= v35;
          if ( v27 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      else
      {
        v19 = v37;
      }
      LOBYTE(v11) = v19;
      __writecr8(v19);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v21 = KeGetCurrentThread();
      if ( (unsigned __int64)(a1 + 64 - qword_140C50630) < 0x8000000000LL )
        v22 = sub_140287F30(*((_QWORD *)v21 + 23));
      else
        v22 = -1;
      _disable();
      v23 = (__int64)v21 + 1696;
      for ( i = 0; i < 6; ++i )
      {
        if ( (*(_QWORD *)v23 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(v23 + 18)
          && (*(_DWORD *)v23 & 1) == 0
          && *(_DWORD *)(v23 + 8) == v22 )
        {
          *(_BYTE *)(v23 + 18) = 0;
          if ( *(__int64 *)v23 < 0 )
          {
            *(_BYTE *)v23 |= 2u;
            _enable();
            sub_14034EE30(v23);
            _disable();
          }
          v25 = *(_DWORD *)(v23 + 88);
          *(_DWORD *)(v23 + 88) = 0;
          *(_BYTE *)(v23 + 17) = 0;
          *(_QWORD *)v23 = 0LL;
          LOBYTE(v11) = *(_BYTE *)(v23 + 16);
          *((_BYTE *)v21 + 792) |= 1 << v11;
          _enable();
          if ( v25 )
            LOBYTE(v11) = sub_14022B568((ULONG_PTR)v21, a1 + 64, v25);
          goto LABEL_52;
        }
        v23 += 96LL;
      }
      LODWORD(v11) = *((_DWORD *)v21 + 30);
      if ( (v11 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, a1 + 64, v22, 0LL);
      _enable();
LABEL_52:
      v26 = KeGetCurrentThread();
      v27 = (*((_WORD *)v26 + 243))++ == 0xFFFF;
      if ( v27 )
      {
        v11 = (__int64)v26 + 152;
        if ( *(_QWORD *)v11 != v11 )
          LOBYTE(v11) = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v18 )
    LOBYTE(v11) = sub_14036808C(a1);
  return v11;
}
