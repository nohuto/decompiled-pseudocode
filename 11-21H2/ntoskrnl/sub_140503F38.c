/*
 * XREFs of sub_140503F38 @ 0x140503F38
 * Callers:
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14064F634 @ 0x14064F634 (sub_14064F634.c)
 */

__int64 __fastcall sub_140503F38(__int64 a1)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 *v5; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  if ( !a1 )
    return 0LL;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E2F0);
  v5 = (__int64 *)qword_140C4E2E8;
  v6 = v4;
  while ( v5 != &qword_140C4E2E0 )
  {
    v7 = (__int64)(v5 - 57);
    v8 = v5[9];
    if ( v8 && (unsigned __int8)sub_14064F634(v8, a1) )
    {
      if ( ObReferenceObjectSafeWithTag(v7) )
        v3 = v7;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4E2F0);
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
  return v3;
}
