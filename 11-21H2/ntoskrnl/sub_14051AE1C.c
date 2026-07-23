/*
 * XREFs of sub_14051AE1C @ 0x14051AE1C
 * Callers:
 *     sub_14051AEFC @ 0x14051AEFC (sub_14051AEFC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140517FA8 @ 0x140517FA8 (sub_140517FA8.c)
 */

void __fastcall sub_14051AE1C(__int64 a1)
{
  KIRQL v2; // bl
  unsigned __int8 CurrentIrql; // bp
  _QWORD *i; // rdi
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
    sub_140517FA8(i[3], (__int64)(i + 4));
  if ( CurrentIrql != 15 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 32));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && v2 <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (v2 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
