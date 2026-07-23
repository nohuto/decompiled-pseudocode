/*
 * XREFs of sub_1405FE868 @ 0x1405FE868
 * Callers:
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405FE868(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r14
  KSPIN_LOCK *v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 i; // rbx
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf
  __int64 v18; // rdx
  _QWORD *v19; // rcx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 144);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v10 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v12 + 72) )
  {
    v12 = i - 72;
    if ( v10 == v12 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v12 + 96) == a2 || *(_QWORD *)(v12 + 88) == a2)
      || a3 && *(_QWORD *)(v12 + 40) == a3
      || *(_DWORD *)(v12 + 52) <= 1u )
    {
      v18 = *(_QWORD *)(v12 + 72);
      v19 = *(_QWORD **)(v12 + 80);
      if ( *(_QWORD *)(v18 + 8) != v12 + 72 || *v19 != v12 + 72 )
        __fastfail(3u);
      *v19 = v18;
      v6 = 1;
      *(_QWORD *)(v18 + 8) = v19;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v6 != 1 )
    return 0LL;
  return v12;
}
