/*
 * XREFs of sub_140223F8C @ 0x140223F8C
 * Callers:
 *     sub_140223F24 @ 0x140223F24 (sub_140223F24.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224080 @ 0x140224080 (sub_140224080.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140223F8C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = (KSPIN_LOCK *)(a1 + 16);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 16));
  v9 = sub_140224080(a1, a2);
  v10 = v9;
  if ( v9 )
    ObfReferenceObjectWithTag(*(PVOID *)(v9 + 24), 0x72507350u);
  KeReleaseSpinLockFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v10 )
    *a3 = *(_QWORD *)(v10 + 24);
  else
    return (unsigned int)-1073741275;
  return v6;
}
