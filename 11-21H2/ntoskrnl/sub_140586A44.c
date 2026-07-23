/*
 * XREFs of sub_140586A44 @ 0x140586A44
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058727C @ 0x14058727C (sub_14058727C.c)
 *     sub_140587900 @ 0x140587900 (sub_140587900.c)
 *     sub_14058938C @ 0x14058938C (sub_14058938C.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     sub_1405B2400 @ 0x1405B2400 (sub_1405B2400.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140586A44(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // r14
  ULONG64 SizeOfBitMap; // rbx
  int v5; // r15d
  ULONG64 v7; // rdi
  signed __int64 *v8; // r12
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  bool v17; // r8
  _QWORD *v18; // r9
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  unsigned __int8 CurrentIrql; // al
  KIRQL v22; // r13
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int64 v27; // rsi
  void *v28; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  __int64 v32; // r9
  int v33; // eax
  PVOID v34; // rsi
  unsigned __int64 *v35; // rax
  ULONG64 SetBitsAndClear; // r14
  const signed __int64 *v37; // rbx
  __int64 v38; // rdi
  unsigned __int8 v39; // bl
  unsigned __int64 v40; // r15
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  __int64 v43; // r9
  int v44; // eax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-48h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+28h] [rbp-40h] BYREF
  __int64 v47; // [rsp+38h] [rbp-30h]
  const signed __int64 *i; // [rsp+40h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  KIRQL v50; // [rsp+B0h] [rbp+48h]
  PVOID P; // [rsp+B8h] [rbp+50h] BYREF
  int v52; // [rsp+C0h] [rbp+58h]
  __int64 v53; // [rsp+C8h] [rbp+60h]

  v52 = a3;
  v3 = BugCheckParameter2;
  SizeOfBitMap = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  BitMapHeader.SizeOfBitMap = SizeOfBitMap;
  v5 = a3;
  P = 0LL;
  v7 = SizeOfBitMap;
  v8 = (signed __int64 *)(qword_140C52968 + 8 * SizeOfBitMap);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v53 = sub_14058727C(v8);
  if ( v9 )
  {
    v10 = v9;
    while ( 1 )
    {
      v11 = sub_1403B7A10(v3, v10);
      v12 = v11 >> 18;
      v13 = v11;
      v14 = sub_1402C1550(v3);
      SpinLock = (volatile LONG *)(*(_QWORD *)(v53 + 16) + 24512LL * *((unsigned int *)v14 + 2) + 22848);
      v50 = ExAcquireSpinLockExclusive(SpinLock);
      sub_14058938C(v53, v7, v12);
      if ( !v12 )
        goto LABEL_15;
      do
      {
        if ( !_bittest64(v8, 0x30u) )
          goto LABEL_14;
        v15 = sub_140587900(v7);
        v16 = P;
        v17 = 0;
        v18 = (_QWORD *)v15;
        if ( !P )
          goto LABEL_13;
        v19 = *(_QWORD *)(v15 + 24) & 0x3FFFFF;
        while ( v19 < (v16[3] & 0x3FFFFFuLL) )
        {
          v20 = (_QWORD *)*v16;
          if ( !*v16 )
          {
            v17 = 0;
            goto LABEL_13;
          }
LABEL_11:
          v16 = v20;
        }
        v20 = (_QWORD *)v16[1];
        if ( v20 )
          goto LABEL_11;
        v17 = 1;
LABEL_13:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v16, v17, v18);
LABEL_14:
        *v8 = *v8 & 0xF001FFFFFFFFFFFFuLL | 0x802000000000000LL;
        ++v8;
        v7 ^= ((unsigned int)v7 ^ ((_DWORD)v7 + 1)) & 0x3FFFFF;
        --v12;
      }
      while ( v12 );
LABEL_15:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v22 = v50;
        if ( v50 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = *((_QWORD *)CurrentPrcb + 4375);
          v25 = ~(unsigned __int16)(-1LL << (v50 + 1));
          v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v26 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      else
      {
        v22 = v50;
      }
      __writecr8(v22);
      if ( v52 )
        sub_1405B2400(v3, v13);
      sub_140591AD0(v3);
      v3 += v13;
      v10 -= v13;
      if ( !v10 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v5 = v52;
        break;
      }
    }
  }
  v27 = a2 >> 18;
  v28 = (void *)(qword_140C52968 + 8 * SizeOfBitMap);
  KeAcquireInStackQueuedSpinLock(&qword_140C52980, &LockHandle);
  RtlClearBitsEx((__int64)&stru_140C52958, SizeOfBitMap, v27);
  if ( v27 )
    memset(v28, 0, 8 * v27);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = *((_QWORD *)v31 + 4375);
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
        *(_DWORD *)(v32 + 20) &= v33;
        if ( v26 )
          sub_140418E4C((__int64)v31);
      }
    }
  }
  __writecr8(OldIrql);
  while ( P )
  {
    v34 = P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    if ( !v5 )
    {
      v35 = (unsigned __int64 *)*((_QWORD *)v34 + 4);
      SetBitsAndClear = 0LL;
      v47 = 0LL;
      BitMapHeader.SizeOfBitMap = 0x40000LL;
      BitMapHeader.Buffer = v35;
      v37 = (const signed __int64 *)(v35 + 4096);
      for ( i = (const signed __int64 *)(v35 + 4096); ; v37 = i )
      {
        SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, SetBitsAndClear);
        if ( SetBitsAndClear == -1LL )
          break;
        v38 = 48 * (SetBitsAndClear + ((unsigned __int64)(*((_DWORD *)v34 + 6) & 0x3FFFFF) << 18)) - 0x220000000000LL;
        v39 = _bittest64(v37, SetBitsAndClear);
        sub_1402828F0(64, 0x20uLL, 0x6C42694Du);
        v40 = (unsigned __int8)sub_1402F2700(v38);
        if ( v39 )
          *(_BYTE *)(v38 + 35) |= 0x80u;
        sub_1405ADDA8(v38, 1LL, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = *((_QWORD *)v42 + 4375);
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
              v26 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
              *(_DWORD *)(v43 + 20) &= v44;
              if ( v26 )
                sub_140418E4C((__int64)v42);
            }
          }
        }
        __writecr8(v40);
      }
      v5 = v52;
    }
    ExFreePoolWithTag(*((PVOID *)v34 + 4), 0);
    ExFreePoolWithTag(v34, 0);
  }
}
