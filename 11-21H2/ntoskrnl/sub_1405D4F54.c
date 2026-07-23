/*
 * XREFs of sub_1405D4F54 @ 0x1405D4F54
 * Callers:
 *     sub_14082473C @ 0x14082473C (sub_14082473C.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405D4F54(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // al
  int v9; // edi
  unsigned __int64 v10; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (volatile LONG *)(a1 + 64);
  v6 = a1 + 208LL * a2;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 172);
  v10 = v8;
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v9 == 2 )
  {
    if ( *(_DWORD *)(v6 + 380) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v7) = *(_DWORD *)(*(_QWORD *)(v6 + 392) + 24 * v7 + 16);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v6 + 380) );
    }
    LOBYTE(v7) = 1;
  }
  return v7;
}
