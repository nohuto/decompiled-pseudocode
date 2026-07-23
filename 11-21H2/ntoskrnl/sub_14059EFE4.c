/*
 * XREFs of sub_14059EFE4 @ 0x14059EFE4
 * Callers:
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_14059EFE4(_QWORD *a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v13; // r10
  bool v14; // zf
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r10
  unsigned __int8 v18; // bp
  volatile signed __int32 *v19; // rdi
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  int v26; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_140C56920);
  do
  {
    v5 = qword_140C4F2A0;
    v6 = v3;
    v7 = v2;
    if ( !qword_140C4F2A0 )
      break;
    v8 = *(_QWORD *)qword_140C4F2A0;
    ++v2;
    qword_140C4F2A0 = *(_QWORD *)qword_140C4F2A0;
    v3 = v5;
    if ( v7 )
      v3 = v6;
  }
  while ( v8 == v5 - 48 );
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v14 = ((unsigned int)v9 & *(_DWORD *)(v13 + 20)) == 0;
        v10 = (unsigned int)v9 & *(_DWORD *)(v13 + 20);
        *(_DWORD *)(v13 + 20) = v10;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( !v2 )
    return -1LL;
  v16 = v3 - 48 * v2;
  v17 = v16 + 48;
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v18 <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v9 = (-1 << (v18 + 1)) & 4u | *(_DWORD *)(v10 + 20);
    *(_DWORD *)(v10 + 20) = v9;
  }
  if ( v17 <= v3 )
  {
    v19 = (volatile signed __int32 *)(v16 + 72);
    v20 = (v3 - v17) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v21 = (v3 - v17) / 0x30 + 1;
    do
    {
      v26 = 0;
      while ( _interlockedbittestandset64(v19, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v26, *((__int64 *)&v20 + 1), v9, v10);
        while ( *(__int64 *)v19 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
      v19 += 12;
      --v21;
    }
    while ( v21 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && v18 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (v18 + 1));
        v14 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v14 )
          sub_140418E4C((__int64)v23);
      }
    }
  }
  __writecr8(v18);
  *a1 = v2;
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x220000000030LL) >> 4);
}
