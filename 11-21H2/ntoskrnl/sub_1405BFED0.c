/*
 * XREFs of sub_1405BFED0 @ 0x1405BFED0
 * Callers:
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 * Callees:
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14081DDB0 @ 0x14081DDB0 (sub_14081DDB0.c)
 */

void __fastcall sub_1405BFED0(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (volatile LONG *)(a1 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = v8;
  v11 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  sub_14081DDB0(a1, a3);
  if ( v10 )
    sub_14023FD0C(v10, 0);
  if ( v9 )
    sub_14023FD0C(v9, 0);
}
