/*
 * XREFs of sub_140A96A2C @ 0x140A96A2C
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A976F4 @ 0x140A976F4 (sub_140A976F4.c)
 */

__int64 __fastcall sub_140A96A2C(unsigned int a1)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  if ( (dword_140C29FC0 & 4) == 0 )
    return 0LL;
  if ( !dword_140D57600 )
  {
    ++dword_140D5781C;
    return 0LL;
  }
  if ( dword_140D575FC )
  {
    ++dword_140D57844;
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
  v4 = sub_140A976F4(a1);
  KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v4 )
    return (unsigned int)sub_140A96B0C(1LL);
  return v4;
}
