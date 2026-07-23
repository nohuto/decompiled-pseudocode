/*
 * XREFs of sub_140A9B7D4 @ 0x140A9B7D4
 * Callers:
 *     sub_140A83264 @ 0x140A83264 (sub_140A83264.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140A9B7D4(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1AFB0);
  if ( *(_DWORD *)(qword_140C1AFB8 + 24 * v1) )
  {
    v3 = -1073741267;
  }
  else
  {
    *(_DWORD *)(qword_140C1AFB8 + 24 * v1) = 1;
    v3 = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1AFB0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v3;
}
