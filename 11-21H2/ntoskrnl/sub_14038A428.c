/*
 * XREFs of sub_14038A428 @ 0x14038A428
 * Callers:
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14038A790 @ 0x14038A790 (sub_14038A790.c)
 *     sub_14038F3B8 @ 0x14038F3B8 (sub_14038F3B8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14038A428(__int64 *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned int v7; // esi
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v11; // r13
  ULONG_PTR v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned __int8 v15; // si
  __int64 j; // rcx
  unsigned __int8 v17; // di
  volatile LONG *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 result; // rax
  __int64 v22; // r9
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 i; // rcx
  _QWORD *v26; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  _QWORD *v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // r9
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  int v41; // eax
  volatile LONG *v42; // [rsp+28h] [rbp-60h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  unsigned int v44; // [rsp+90h] [rbp+8h]
  unsigned int v46; // [rsp+A0h] [rbp+18h]
  unsigned int v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v43 = *a1;
  v7 = 0;
  v46 = 0;
  v8 = 16LL;
  while ( v5 <= 4 )
  {
    v9 = *(_QWORD *)(v6 + 8 * v5 + 6632);
    v44 = v4;
    if ( v5 <= 1 )
    {
      v9 = *(_QWORD *)(v6 + 8 * v5 + 2432) + 88LL * v7;
    }
    else if ( v5 == 2 )
    {
      v9 = 88LL * v4 + v6 + 2880;
      goto LABEL_9;
    }
    if ( v5 == 3 )
    {
      if ( *(_QWORD *)v9 == *(_QWORD *)(v6 + 17504) )
        goto LABEL_4;
      v9 = 88LL * v4 + v6 + 5120;
    }
LABEL_9:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v11 = (volatile LONG *)(v9 + 32);
    v42 = (volatile LONG *)(v9 + 32);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 32));
    if ( *(_QWORD *)v9 )
    {
      v12 = *(_QWORD *)(v9 + 16);
      do
      {
        v13 = 48 * v12 - 0x220000000000LL;
        if ( !_bittest64((const signed __int64 *)(v13 + 40), 0x35u) )
        {
          if ( v5 == 2 && sub_1402C1520(v12) )
          {
            v24 = *(_QWORD *)(v13 + 16);
            if ( qword_140C50780 && (v24 & 0x10) == 0 )
              v24 &= ~qword_140C50780;
            for ( i = (v24 >> 12) & 0xFFFFFFFFFFLL; i != v12; i = *v26 & 0xFFFFFFFFFFLL )
            {
              v26 = (_QWORD *)(48 * i - 0x220000000000LL);
              sub_14038A790(i, 1LL);
            }
          }
          else
          {
            sub_14038A790(v12, 1LL);
          }
        }
        v12 = *(_QWORD *)v13 & 0xFFFFFFFFFFLL;
      }
      while ( v12 != 0x3FFFFFFFFFLL );
      v4 = v47;
      v6 = a2;
      v11 = v42;
      v7 = v46;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v31 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v5 <= 1 )
    {
      v46 = ++v7;
      if ( v7 >= dword_140C5073C )
      {
        v46 = 0;
        v7 = 0;
        if ( v5 == 1 )
          sub_14038F3B8(v43, v6, 0LL);
      }
      else
      {
        --v5;
      }
      goto LABEL_3;
    }
    if ( v5 == 2 )
    {
      ++v4;
      if ( v44 == 7 )
        v4 = 0;
      else
        v5 = 1LL;
      v47 = v4;
LABEL_3:
      v8 = 16LL;
      goto LABEL_4;
    }
    if ( v5 != 3 )
      goto LABEL_3;
    ++v4;
    v8 = 16LL;
    v47 = v4;
    if ( v4 != 16 )
      v5 = 2LL;
LABEL_4:
    ++v5;
  }
  v14 = v6 + 3728;
  do
  {
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
    {
      v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v22 + 20) |= (-1 << (v15 + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 16));
    for ( j = *(_QWORD *)v14; j != 0x3FFFFFFFFFLL; j = *v32 & 0xFFFFFFFFFFLL )
    {
      v32 = (_QWORD *)(48 * j - 0x220000000000LL);
      sub_14038A790(j, 1LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 16));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && v15 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = *((_QWORD *)v34 + 4375);
          v36 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v31 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v31 )
            sub_140418E4C(v34);
        }
      }
    }
    __writecr8(v15);
    v14 += 88LL;
    --v8;
  }
  while ( v8 );
  v17 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
  {
    v37 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v37 + 20) |= (-1 << (v17 + 1)) & 4;
  }
  v18 = (volatile LONG *)(a2 + 3616);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 3616));
  v19 = *(_QWORD *)(a2 + 3600);
  if ( v19 != 0x3FFFFFFFFFLL )
  {
    do
    {
      v20 = (_QWORD *)(48 * v19 - 0x220000000000LL);
      sub_14038A790(v19, 1LL);
      v19 = *v20 & 0xFFFFFFFFFFLL;
    }
    while ( v19 != 0x3FFFFFFFFFLL );
    v18 = (volatile LONG *)(a2 + 3616);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v18);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && v17 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = *((_QWORD *)v39 + 4375);
        v41 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v31 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v31 )
          sub_140418E4C(v39);
      }
    }
  }
  result = v17;
  __writecr8(v17);
  return result;
}
