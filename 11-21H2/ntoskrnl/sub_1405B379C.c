/*
 * XREFs of sub_1405B379C @ 0x1405B379C
 * Callers:
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 * Callees:
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405E0B58 @ 0x1405E0B58 (sub_1405E0B58.c)
 */

void __fastcall sub_1405B379C(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _QWORD *v3; // r8
  const void *v4; // r15
  int v5; // r14d
  __int64 v6; // r9
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // r13d
  ULONG v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 *v19; // rdi
  __int64 v20; // r13
  volatile LONG *v21; // rbp
  __int64 v22; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v24; // r9
  __int64 v25; // r14
  ULONG_PTR v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  struct _WORK_QUEUE_ITEM *v34; // rdi
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // r9
  volatile LONG *v40; // [rsp+40h] [rbp-78h]
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-70h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-6Ch]
  __int64 *v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  unsigned __int64 v45; // [rsp+68h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-48h]
  __int64 v47; // [rsp+78h] [rbp-40h]
  int v49; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 704);
  v3 = (_QWORD *)*(unsigned int *)(a1 + 700);
  v4 = *(const void **)(a1 + 17504);
  v5 = *(_DWORD *)(a1 + 700);
  v6 = (unsigned int)v2 >> 31;
  v8 = a2;
  BugCheckParameter2 = (ULONG_PTR)v4;
  if ( v2 >= 0 )
    v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (int)v3 >= 0 )
    v5 = v2;
  v11 = *(_DWORD *)(a1 + 16728);
  v12 = (*(_DWORD *)(a1 + 704) >> 31) | 2u;
  BugCheckParameter3_4 = v5;
  if ( (int)v3 >= 0 )
    v12 = (unsigned int)v6;
  if ( !v11 )
    goto LABEL_13;
  v6 = a1 + 16736;
  v13 = v11;
  do
  {
    v3 = *(_QWORD **)v6;
    if ( (*(_WORD *)(*(_QWORD *)v6 + 204LL) & 0x50) == 0 )
    {
      v9 += v3[1] - *v3;
      v10 += v3[3];
    }
    v6 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v10 < 0x400 )
LABEL_13:
    v12 = (unsigned int)v12 | 4;
  v14 = v12 | 8;
  if ( v9 >= 0x400 )
    v14 = v12;
  BugCheckParameter3 = v14;
  if ( dword_140C529C4 )
  {
    v15 = 243;
  }
  else if ( *(_QWORD *)(a1 + 17408) < *(_QWORD *)(a1 + 17280) >> 2 )
  {
    v15 = *(_QWORD *)(a1 + 17504) < *(_QWORD *)(a1 + 17280) >> 2 ? 235 : 77;
  }
  else
  {
    v4 = *(const void **)(a1 + 17408);
    v15 = 253;
    BugCheckParameter2 = (ULONG_PTR)v4;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
  if ( !*(_QWORD *)(v16 + 1296)
    || (sub_1405E0B58(*(_QWORD *)(v16 + 1296), v12, v3, v6),
        v17 = sub_1402F5718(),
        (unsigned __int64)(v17 - v18) >= 0x29B92700) )
  {
    if ( byte_140C09804 || (_BYTE)KdDebuggerNotPresent )
    {
      v49 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v15,
        *(const void **)(a1 + 17280),
        v4,
        v14,
        v5);
      if ( (dword_140D06880 & 8) != 0 )
        __debugbreak();
      v49 = 1;
    }
    if ( !(unsigned int)sub_140285380(a1, v8)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 15644), 1, 0) )
    {
      v19 = (__int64 *)(a1 + 5136);
      v20 = 0LL;
      v21 = (volatile LONG *)(a1 + 5152);
      v45 = 0LL;
      v22 = 16LL;
      v43 = (__int64 *)(a1 + 5136);
      v40 = (volatile LONG *)(a1 + 5152);
      v44 = 16LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v24 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v21);
        v25 = *v19;
        if ( *v19 != 0x3FFFFFFFFFLL )
        {
          while ( 1 )
          {
            v47 = 48 * v25;
            v26 = 48 * v25 - 0x220000000000LL;
            v25 = *(_QWORD *)v26 & 0xFFFFFFFFFFLL;
            v27 = *(_QWORD *)(v26 + 16);
            if ( qword_140C50780 && (v27 & 0x10) == 0 )
              v27 &= ~qword_140C50780;
            v28 = *(_QWORD *)(v27 >> 16);
            if ( (*(_DWORD *)(v28 + 56) & 0x28) == 0
              && (!v20 || v20 == v28)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
              if ( (*(_DWORD *)(v28 + 56) & 8) == 0 )
              {
                if ( !v20 )
                {
                  v45 = *(_QWORD *)(v28 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
                  if ( v45 )
                    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v28 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x644C6D4Du);
                  v19 = v43;
                  v20 = v28;
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
                sub_140326870(v26, 1);
                v21 = v40;
                ExReleaseSpinLockExclusiveFromDpcLevel(v40);
                *(_QWORD *)(v26 + 24) &= 0xC000000000000000uLL;
                *(_BYTE *)(v26 + 34) &= ~0x10u;
                sub_140338500(v26, 0xAAAAAAAAAAAAAAABuLL * (v47 >> 4));
                _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v35 = KeGetCurrentIrql();
                    if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v37 = *((_QWORD *)CurrentPrcb + 4375);
                      v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v33 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
                      *(_DWORD *)(v37 + 20) &= v38;
                      if ( v33 )
                        sub_140418E4C((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(CurrentIrql);
                ++dword_140C4F3CC;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
                {
                  v39 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                  *(_DWORD *)(v39 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
                }
                ExAcquireSpinLockExclusiveAtDpcLevel(v40);
                v25 = *v19;
                goto LABEL_47;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v21 = v40;
LABEL_47:
            if ( v25 == 0x3FFFFFFFFFLL )
            {
              v22 = v44;
              break;
            }
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v21);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = *((_QWORD *)v30 + 4375);
              v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v33 )
                sub_140418E4C((__int64)v30);
            }
          }
        }
        __writecr8(CurrentIrql);
        v21 += 22;
        v19 += 11;
        --v22;
        v40 = v21;
        v44 = v22;
        v43 = v19;
      }
      while ( v22 );
      v34 = (struct _WORK_QUEUE_ITEM *)(a1 + 15600);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 15632) = v45;
        *(_DWORD *)(a1 + 15640) = -1073741566;
        v34->List.Flink = 0LL;
        *(_QWORD *)(a1 + 15616) = sub_14096C160;
        *(_QWORD *)(a1 + 15624) = a1 + 15600;
        ExQueueWorkItem(v34, DelayedWorkQueue);
        ++dword_140C4F3C8;
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 15644), 0);
        if ( !v49 )
          KeBugCheckEx(v15, *(_QWORD *)(a1 + 17280), BugCheckParameter2, BugCheckParameter3, BugCheckParameter3_4);
      }
    }
  }
}
