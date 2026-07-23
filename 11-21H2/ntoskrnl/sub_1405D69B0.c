/*
 * XREFs of sub_1405D69B0 @ 0x1405D69B0
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405D69B0(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v1 = (KSPIN_LOCK *)(a1 + 600);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  if ( *(_BYTE *)(a1 + 608) )
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 624);
  KeReleaseSpinLockFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
