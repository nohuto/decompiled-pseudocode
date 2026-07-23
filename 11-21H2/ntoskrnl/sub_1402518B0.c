/*
 * XREFs of sub_1402518B0 @ 0x1402518B0
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x14027EF40 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402518B0(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // di
  unsigned __int8 v3; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v1 = sub_14028494C(a1, 1LL, &v10);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v3 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      v3 = v10;
      v8 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
      *(_DWORD *)(v7 + 20) &= v8;
      if ( v9 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v3 = v10;
  }
  __writecr8(v3);
  return v2;
}
