/*
 * XREFs of sub_1405CC8E4 @ 0x1405CC8E4
 * Callers:
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405CC8E4(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  char v6; // bp
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned int i; // ebx
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // eax

  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  if ( dword_140C23CB0 < 0 )
  {
    v8 = a1 + 600;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
    if ( ((dword_140C23CB0 & 1) != 0 || !byte_140C23CB4) && *(_BYTE *)(v8 + 8) && v7 - *(_QWORD *)(v8 + 24) >= a2 )
    {
      *a3 = -1;
      v6 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 200));
    if ( ((dword_140C23CB0 & 1) != 0 || !byte_140C23CB4) && *(_BYTE *)(v16 + 208) && v7 - *(_QWORD *)(v16 + 224) >= a2 )
    {
      v6 = 1;
      *a3 = i;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v16 + 200));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v14 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v14 )
            sub_140418E4C((__int64)v19);
        }
      }
    }
    __writecr8(v17);
  }
  return v6;
}
