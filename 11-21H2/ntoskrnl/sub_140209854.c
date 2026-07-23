/*
 * XREFs of sub_140209854 @ 0x140209854
 * Callers:
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140209854(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  volatile LONG *v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  unsigned __int64 v15; // rdi
  int v16; // edx
  int v17; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // edx
  bool v22; // zf

  if ( !*(_QWORD *)(a1 + 1632) )
  {
    v8 = a1 + 1656;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( !v9 )
        return (unsigned int)-1073741275;
      v9 ^= v8;
    }
    if ( !v9 )
      return (unsigned int)-1073741275;
  }
  v12 = (volatile LONG *)(a1 + 1648);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1648));
  v14 = *(_DWORD *)(a1 + 1688);
  v15 = v13;
  if ( v14 )
  {
    v16 = *(_DWORD *)(a1 + 1680);
    *a2 = *(_QWORD *)(a1 + 1672);
    v17 = v16 - *(_DWORD *)(a1 + 1684);
    *(_DWORD *)(a1 + 1684) = v16;
    v10 = 0;
    *a4 = v17;
    *a3 = v14;
  }
  else
  {
    v10 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return v10;
}
