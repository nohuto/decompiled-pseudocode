/*
 * XREFs of sub_1403DADE0 @ 0x1403DADE0
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_140236764 @ 0x140236764 (sub_140236764.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403DADE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v4; // r15d
  _QWORD *v5; // rax
  KIRQL v6; // al
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  _QWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF

  v24[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 16600);
  if ( v2 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)sub_1402828F0(64, 0xA58uLL, 0x64576D4Du);
    v2 = result;
    if ( !result )
      return result;
    *(_WORD *)result = 0;
    v4 = 1;
    *(_BYTE *)(result + 2) = 6;
    *(_DWORD *)(result + 4) = 1;
    v5 = (_QWORD *)(result + 8);
    v5[1] = v5;
    *v5 = v5;
    *(_DWORD *)(v2 + 36) = 256;
    *(_DWORD *)(v2 + 136) = 256;
    *(_BYTE *)(a1 + 17208) = *(_BYTE *)(a1 + 17208) & 0xF8 | 2;
  }
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v7 = *(_QWORD *)(a1 + 16720);
  v8 = v6;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( (ULONG_PTR *)a1 == &StartContext && (v9 = 135168LL, v7 < 0x21000) )
  {
    v7 = 135168LL;
  }
  else
  {
    v9 = v7;
    if ( v7 > 0x200000 )
    {
      v10 = ((v7 - 0x200000) >> 7) + 0x10000;
      goto LABEL_9;
    }
  }
  v10 = v7 >> 5;
LABEL_9:
  v11 = 1152LL;
  if ( v10 >= 0x480 )
  {
    v11 = v10;
    if ( v10 > 0x400000 )
      v11 = 0x400000LL;
  }
  *(_QWORD *)(v2 + 2384) = v11;
  if ( v7 <= 0x80000 )
    v12 = v7 >> 5;
  else
    v12 = ((v7 - 0x80000) >> 8) + 0x4000;
  if ( v12 < 0x121 )
  {
    v12 = 289LL;
  }
  else if ( v12 > 0x100000 )
  {
    v12 = 0x100000LL;
  }
  v13 = v11 >> 2;
  *(_QWORD *)(v2 + 2392) = v12;
  *(_QWORD *)(v2 + 2400) = v12;
  if ( v13 < 0x121 )
    v13 = 289LL;
  *(_QWORD *)(v2 + 2376) = v13;
  if ( v4 )
    *(_QWORD *)(a1 + 16600) = v2;
  sub_140236764(a1, 3);
  if ( v7 < 0x18A88 )
    v14 = 100LL;
  else
    v14 = v7 / 0x3E8;
  if ( v14 > v7 )
  {
    v14 = v7 >> 1;
    if ( !(v7 >> 1) )
      v14 = 1LL;
  }
  *(_QWORD *)(v2 + 56) = v14;
  if ( v4 )
  {
    *(_DWORD *)(v2 + 100) = 0;
    *(_WORD *)(v2 + 96) = 1;
    *(_BYTE *)(v2 + 98) = 6;
    *(_QWORD *)(v2 + 112) = v2 + 104;
    *(_QWORD *)(v2 + 104) = v2 + 104;
    if ( (ULONG_PTR *)a1 != &StartContext )
      goto LABEL_28;
    LOWORD(stru_140C53350.Header.Lock) = 0;
    stru_140C53350.Header.SignalState = 0;
    stru_140C53350.Header.WaitListHead.Blink = &stru_140C53350.Header.WaitListHead;
    stru_140C53350.Header.WaitListHead.Flink = &stru_140C53350.Header.WaitListHead;
    stru_140C53350.Header.Size = 6;
  }
  else if ( (ULONG_PTR *)a1 != &StartContext )
  {
    goto LABEL_28;
  }
  if ( !qword_140D05200 || (v16 = qword_140D05200 << 8) == 0 )
  {
LABEL_28:
    v15 = *(_QWORD *)(v2 + 2384);
    if ( 2 * v15 > v7 )
    {
      if ( v7 && (v7 - v15) >> 1 )
        v16 = ((v7 - v15) >> 1) + v15;
      else
        v16 = 1LL;
    }
    else
    {
      v16 = 2 * v15;
    }
  }
  v24[0] = v16;
  if ( (ULONG_PTR *)a1 != &StartContext || !qword_140D05208 || (v17 = qword_140D05208 << 8) == 0 )
  {
    v17 = v16;
    if ( v16 <= v9 )
    {
      v18 = 2 * v16;
      if ( v18 > v7 )
        v17 += (v9 - v17) >> 1;
      else
        v17 = v18;
    }
  }
  v24[1] = v17;
  v24[2] = a1;
  KeGenericCallDpc((__int64)sub_1403C3DF0, (__int64)v24);
  return 1LL;
}
