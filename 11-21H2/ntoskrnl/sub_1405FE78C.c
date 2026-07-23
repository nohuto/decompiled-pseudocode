/*
 * XREFs of sub_1405FE78C @ 0x1405FE78C
 * Callers:
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A86EA0 @ 0x140A86EA0 (sub_140A86EA0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405FE78C(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  char v4; // si
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 i; // rax
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a1 + 144);
  v4 = 0;
  v5 = (__int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  for ( i = *v5; ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( v5 == (__int64 *)(v8 + 72) )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v4;
}
