/*
 * XREFs of sub_1405BE6F4 @ 0x1405BE6F4
 * Callers:
 *     sub_1405B6108 @ 0x1405B6108 (sub_1405B6108.c)
 *     sub_1405BAFB0 @ 0x1405BAFB0 (sub_1405BAFB0.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BDA68 @ 0x1405BDA68 (sub_1405BDA68.c)
 *     sub_1405BF3F0 @ 0x1405BF3F0 (sub_1405BF3F0.c)
 */

__int64 __fastcall sub_1405BE6F4(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // r13
  __int64 v7; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v17; // eax
  __int64 v18; // r8
  bool v19; // zf

  v5 = (volatile LONG *)(a1 + 1344);
  v7 = 32LL * a2;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v10 = *(_QWORD *)(v7 + a1 + 2064);
    v11 = -1073740640;
    if ( v10 != -1 )
      *(_QWORD *)(v7 + a1 + 2064) = v10 + 1;
  }
  else
  {
    v11 = sub_1405BDA68(a1, a2, a4);
    if ( v11 >= 0 && (a3 & 1) != 0 )
    {
      v11 = sub_1405BDA68(v12, a2 + 1, v13);
      if ( v11 < 0 )
        sub_1405BF3F0(v14, (unsigned int)a2);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = (v17 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v17;
        if ( v19 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (unsigned int)v11;
}
