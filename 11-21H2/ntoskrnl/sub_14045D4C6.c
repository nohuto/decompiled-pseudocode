/*
 * XREFs of sub_14045D4C6 @ 0x14045D4C6
 * Callers:
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_1405BC2C4 @ 0x1405BC2C4 (sub_1405BC2C4.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BC90C @ 0x1405BC90C (sub_1405BC90C.c)
 */

__int64 __fastcall sub_14045D4C6(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // r14
  KIRQL v9; // al
  unsigned int v10; // r9d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v4 = (volatile LONG *)(a1 + 232);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v10 = 0;
  v11 = v9;
  v12 = *(_QWORD *)(a1 + 216) + (unsigned int)(a2 * dword_140C531CC);
  if ( a3 )
  {
    v13 = a4;
    do
    {
      if ( (*(_BYTE *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
      {
        sub_1405BC90C(v12, a4 + 16LL * v10, v13);
      }
      else
      {
        *(_DWORD *)v13 = 0;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      ++v10;
      v12 += (unsigned int)dword_140C531CC;
      v13 += 16LL;
    }
    while ( v10 < a3 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
