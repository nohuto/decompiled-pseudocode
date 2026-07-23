/*
 * XREFs of sub_140246A0C @ 0x140246A0C
 * Callers:
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 * Callees:
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_14026EFD0 @ 0x14026EFD0 (sub_14026EFD0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140246A0C(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // al
  _QWORD *v4; // r14
  KIRQL v5; // bl
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r15
  void *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v4 = (_QWORD *)(a1 + 1736);
  while ( 1 )
  {
    v5 = v3;
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = v6 - 10;
    v8 = *(v6 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      if ( (*((_BYTE *)v7 + 34) & 8) != 0 )
      {
        v9 = (void *)v7[1];
        sub_14026EA80(v7 + 15, 0LL);
        v7[1] = 0LL;
        v10 = v7 + 10;
        v11 = v7[10];
        v12 = (_QWORD *)v7[11];
        if ( *(_QWORD **)(v11 + 8) != v7 + 10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *((_WORD *)v7 + 17) &= ~8u;
        v7[11] = v7 + 10;
        *v10 = v10;
        sub_14026EFD0(v7);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && v5 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = *((_QWORD *)v20 + 4375);
            v22 = ~(unsigned __int16)(-1LL << (v5 + 1));
            v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v18 )
              sub_140418E4C(v20);
          }
        }
      }
      __writecr8(v5);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1424) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && v5 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v18 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v18 )
          sub_140418E4C(v24);
      }
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
