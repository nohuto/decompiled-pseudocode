/*
 * XREFs of GetUILanguageFallbackList @ 0x14023A910
 * Callers:
 *     sub_1406B5F74 @ 0x1406B5F74 (sub_1406B5F74.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall GetUILanguageFallbackList(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 **v3; // rbx
  __int64 *i; // rbx
  __int64 *v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  v3 = (__int64 **)(a1 + 16);
  if ( !a1 )
    v3 = (__int64 **)&qword_140C54688;
  for ( i = *v3; i != &qword_140C54680; i = (__int64 *)i[1] )
  {
    v5 = i - 1;
    if ( (unsigned __int8)sub_140347810(i + 44) )
      goto LABEL_6;
  }
  v5 = 0LL;
LABEL_6:
  KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( a1 )
    sub_1402AD030(a1 + 360);
  return v5;
}
