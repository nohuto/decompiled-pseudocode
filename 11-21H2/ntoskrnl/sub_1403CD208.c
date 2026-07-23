/*
 * XREFs of sub_1403CD208 @ 0x1403CD208
 * Callers:
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall sub_1403CD208(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 *i; // rax
  __int64 *v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf

  if ( !a1 )
    return 0LL;
  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E2F0);
  for ( i = (__int64 *)qword_140C4E2E0; i != &qword_140C4E2E0; i = (__int64 *)*i )
  {
    v5 = i - 57;
    if ( i[8] == a1 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 57)) )
        v2 = v5;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4E2F0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
