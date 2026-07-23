/*
 * XREFs of sub_1402C6260 @ 0x1402C6260
 * Callers:
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_1402682BC @ 0x1402682BC (sub_1402682BC.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026C4CC @ 0x14026C4CC (sub_14026C4CC.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1402CBAF0 @ 0x1402CBAF0 (sub_1402CBAF0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E80DC @ 0x1402E80DC (sub_1402E80DC.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402C6260(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 *v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // r13
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *v26; // r14
  __int64 j; // r13
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned __int64 OldIrql; // rbx
  ULONG64 v31; // r9
  ULONG64 i; // r8
  unsigned __int64 *v33; // rdx
  __int64 v34; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // r8
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r8
  int v43; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp+8h]
  __int64 *v46; // [rsp+70h] [rbp+8h]
  _QWORD *v47; // [rsp+70h] [rbp+8h]

  v4 = *a1;
  v9 = qword_140015F18[a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    if ( a2 )
    {
      v10 = v4 & 0x1FFFFF;
      v11 = a3 << 12;
      if ( (a3 << 12) + v10 > 0x200000 )
      {
        v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        *a1 = v4;
      }
      else if ( v10 != 0 && (a4 & 2) == 0 )
      {
        *a1 = v11 + v4;
        return v4;
      }
      v13 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v45 = (_QWORD *)v13;
      if ( a2 <= 1 )
      {
        v29 = 2 - a2;
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v29;
        }
        while ( v29 );
        v45 = (_QWORD *)v13;
      }
      if ( (unsigned int)sub_140317A80(v13) && (unsigned int)sub_140229550() )
      {
        *v45 = 0LL;
        sub_1402294F0((__int64)v45, 0LL);
      }
      else
      {
        v14 = (unsigned __int64)v45;
        *v45 = 0LL;
      }
      if ( (a4 & 2) != 0 )
      {
        if ( a2 > 1 )
        {
          v47 = (_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (unsigned int)sub_140317A80(v47) && (unsigned int)sub_140229550() )
          {
            *v47 = 0LL;
            sub_1402294F0((__int64)v47, 0LL);
          }
          else
          {
            *v47 = 0LL;
          }
        }
      }
      else if ( a2 != 1 )
      {
        v15 = (__int64 *)(v14 + 8);
        v46 = v15;
        if ( ((unsigned __int16)v15 & 0xFFF) != 0 )
        {
          v16 = (__int64)((_QWORD)v15 << 25) >> 16 << 25 >> 16;
          v17 = sub_1402CBD10(v15, a1[2], 3087007748LL);
          if ( (unsigned int)sub_140317A80(v46) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
                v17 |= 0x8000000000000000uLL;
              *v46 = v17;
              sub_1402294F0((__int64)v46, v17);
              goto LABEL_15;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v17 & 1) != 0 )
              v17 |= 0x8000000000000000uLL;
          }
          *v46 = v17;
LABEL_15:
          result = v16;
          *a1 = v11 + v16;
          return result;
        }
      }
    }
    v4 -= v9;
  }
  KeAcquireInStackQueuedSpinLock(&qword_140C53080, &LockHandle);
  if ( v4 )
  {
    v18 = (v4 - qword_140C53088) >> 30;
    v19 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    if ( (unsigned int)sub_140317A80(v19) && (unsigned int)sub_140229550() )
    {
      *v19 = 0LL;
      sub_1402294F0((__int64)v19, 0LL);
    }
    else
    {
      *v19 = 0LL;
    }
    _bittestandset64((signed __int64 *)qword_140C530B0, v18);
  }
  v20 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    *a1 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = *((_QWORD *)CurrentPrcb + 4375);
          v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v39 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= v38;
          if ( v39 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v22 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      sub_1402F391C(0LL, 2LL);
      v31 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v31 < i; *v33 |= v34 )
      {
        v33 = &BitMapHeader.Buffer[v31];
        v34 = *((_QWORD *)qword_140C530B0 + v31++);
      }
      memset(qword_140C530B0, 0, 4 * (((qword_140C530A8 & 0x1F) != 0) + ((unsigned __int64)qword_140C530A8 >> 5)));
    }
    HintIndex = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v23 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v39 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v39 )
            sub_140418E4C(v41);
        }
      }
    }
    __writecr8(v23);
    v24 = qword_140C53088 + (v22 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v24 + (a3 << 12);
    if ( a2 )
    {
      v25 = ((v24 >> 27) & 0x1FFFF8) - 0x90482600000LL;
      v26 = a1 + 1;
      LOBYTE(v20) = a2 != 1;
      for ( j = v20 + 1; j; --j )
      {
        v28 = sub_1402CBD10(v25, *v26, 3087007748LL);
        if ( (unsigned int)sub_140317A80(v25) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v28 & 1) != 0 )
              v28 |= 0x8000000000000000uLL;
            *(_QWORD *)v25 = v28;
            sub_1402294F0(v25, v28);
            goto LABEL_33;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
        }
        *(_QWORD *)v25 = v28;
LABEL_33:
        ++v26;
        v25 = v25 << 25 >> 16;
      }
    }
    return v24;
  }
}
