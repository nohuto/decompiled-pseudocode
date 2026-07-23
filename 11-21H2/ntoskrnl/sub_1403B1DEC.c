/*
 * XREFs of sub_1403B1DEC @ 0x1403B1DEC
 * Callers:
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 * Callees:
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403B1DEC(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  volatile LONG *v4; // r14
  KIRQL v5; // al
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf
  ULONG_PTR v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = 168LL * a2 + 24512LL * *((unsigned int *)sub_1402C1550(v18) + 2) + *(_QWORD *)(v2 + 16) + 23168LL;
  v4 = (volatile LONG *)(v3 + 16);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v3 + 16));
  v6 = *(_QWORD *)v3;
  v7 = 0;
  v8 = v5;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v3;
    else
      v6 = 0LL;
  }
  v9 = *(_BYTE *)(v3 + 8) & 1;
  while ( v6 )
  {
    v10 = sub_140248F48(&v18, v6);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v6;
    }
    if ( v9 && v11 )
      v6 ^= v11;
    else
      v6 = v11;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  LOBYTE(v7) = v6 != 0;
  return v7;
}
