/*
 * XREFs of sub_140395AE0 @ 0x140395AE0
 * Callers:
 *     sub_140804994 @ 0x140804994 (sub_140804994.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140395AE0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rsi
  int *v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  unsigned int i; // r8d
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v6 = (int *)(a1 + 144);
    v7 = 3LL;
    do
    {
      v8 = *v6++;
      *a2 |= v8;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v10 = 0LL;
      v11 = 208LL * i;
      if ( *(_DWORD *)(v11 + a1 + 380) )
      {
        do
        {
          v12 = 3 * v10;
          v10 = (unsigned int)(v10 + 1);
          *a2 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 392) + 8 * v12 + 16);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 380) );
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return 0;
}
