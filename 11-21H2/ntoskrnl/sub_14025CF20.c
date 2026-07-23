/*
 * XREFs of sub_14025CF20 @ 0x14025CF20
 * Callers:
 *     sub_14025CEF0 @ 0x14025CEF0 (sub_14025CEF0.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025CF20(int a1, int a2)
{
  KIRQL v4; // al
  unsigned int v5; // esi
  unsigned __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  v5 = dword_140C54790;
  v6 = v4;
  if ( a2 )
    dword_140C54790 |= a1;
  else
    dword_140C54790 &= ~a1;
  KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
