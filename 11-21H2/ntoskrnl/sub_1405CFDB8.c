/*
 * XREFs of sub_1405CFDB8 @ 0x1405CFDB8
 * Callers:
 *     sub_1409A07D0 @ 0x1409A07D0 (sub_1409A07D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_1405CFDB8(unsigned __int64 a1)
{
  bool v2; // bl
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C22410);
  if ( qword_140C22438 )
    v2 = MEMORY[0xFFFFF78000000008] - qword_140C22438 >= a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C22410);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
