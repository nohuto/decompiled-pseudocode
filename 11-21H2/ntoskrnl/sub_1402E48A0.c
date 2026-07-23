/*
 * XREFs of sub_1402E48A0 @ 0x1402E48A0
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY sub_1402E48A0()
{
  PSLIST_ENTRY v0; // rdi
  unsigned int v1; // r9d
  unsigned __int64 v2; // rcx
  unsigned int v3; // r10d
  ULONG *v4; // r8
  char *v5; // rbx
  __int64 i; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  ULONG_PTR v13; // r8
  unsigned __int16 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int8 v17; // bl
  __int64 v19; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // rax
  __int64 v27; // r9
  int v28; // edx
  int v29; // [rsp+68h] [rbp+10h] BYREF

  do
  {
    v0 = ExpInterlockedPopEntrySList(&stru_140C52CF0);
    if ( v0 )
    {
      v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v0[0x22000000000LL] >> 4);
    }
    else
    {
      if ( ((__int64)stru_140C52D08.Buffer & 4) != 0 )
      {
        v2 = 4LL;
        v1 = 32;
      }
      else
      {
        v1 = 0;
        v2 = 0LL;
      }
      v3 = v1 + stru_140C52D08.SizeOfBitMap - 1;
      v4 = &stru_140C52D08.Buffer[v2 / 0xFFFFFFFFFFFFFFFCuLL];
      if ( !stru_140C52D08.SizeOfBitMap )
        return 0LL;
      v5 = (char *)&v4[2 * ((unsigned __int64)v1 >> 6)];
      for ( i = ((1LL << v1) - 1) | ~*(_QWORD *)v5; i == -1; i = ~*(_QWORD *)v5 )
      {
        v5 += 8;
        if ( v5 > (char *)&v4[2 * ((unsigned __int64)v3 >> 6)] )
          return 0LL;
      }
      _BitScanForward64(&v7, ~i);
      v8 = v7 + ((unsigned int)((v5 - (char *)v4) >> 3) << 6);
      if ( v8 > v3 )
        return 0LL;
      if ( v8 == -1 )
        return 0LL;
      v9 = v8 - v1;
      if ( v9 == -1 )
        return 0LL;
      v10 = qword_140C52CE0 + v9;
      v0 = (PSLIST_ENTRY)(48 * v10 - 0x220000000000LL);
      v11 = (unsigned __int8)sub_1402F2700(v0);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
      if ( _bittest((const signed __int32 *)stru_140C52D08.Buffer, v9) )
      {
        _bittestandreset((signed __int32 *)stru_140C52D08.Buffer, v9);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
        if ( v10 != -1LL )
        {
          v12 = sub_1402E4D28(v10, 4LL);
          *(_QWORD *)(v13 + 16) = v12;
          *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ v10) & 0xFFFFFFFFFFLL;
          sub_140326870(v13);
        }
      }
      else
      {
        v10 = -1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      }
      _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
  }
  while ( v10 == -1LL );
  v14 = *(unsigned __int16 **)(qword_140C51F48
                             + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
  v15 = sub_1402E4D28(v10, 4LL);
  v16 = (*((_QWORD *)&v0[2].Next + 1) ^ v10) & 0xFFFFFFFFFFLL;
  v0[1].Next = (_SLIST_ENTRY *)v15;
  *((_QWORD *)&v0[2].Next + 1) ^= v16;
  v17 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= (-1 << (v17 + 1)) & 4;
  }
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v29);
    while ( *((__int64 *)&v0[1].Next + 1) < 0 );
  }
  BYTE3(v0[2].Next) |= 8u;
  *((_QWORD *)&v0[2].Next + 1) ^= (*((_QWORD *)&v0[2].Next + 1) ^ ((unsigned __int64)*v14 << 43)) & 0x1FF80000000000LL;
  BYTE3(v0[2].Next) = BYTE3(v0[2].Next) & 0xF8 | 5;
  sub_1402BF9C0((ULONG_PTR)v0, 4u);
  _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && v17 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        v28 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v28;
        if ( v24 )
          sub_140418E4C(v26);
      }
    }
  }
  __writecr8(v17);
  return v0;
}
