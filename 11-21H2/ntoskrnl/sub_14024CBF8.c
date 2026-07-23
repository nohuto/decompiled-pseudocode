/*
 * XREFs of sub_14024CBF8 @ 0x14024CBF8
 * Callers:
 *     sub_140356E00 @ 0x140356E00 (sub_140356E00.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR __fastcall sub_14024CBF8(PVOID *a1, _QWORD *a2, KSPIN_LOCK *a3, unsigned __int8 a4)
{
  KSPIN_LOCK *v4; // rbp
  unsigned __int64 v7; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v14; // r10
  int v15; // eax
  bool v16; // zf

  v4 = (KSPIN_LOCK *)*a1;
  v7 = a4;
  ObfReferenceObjectWithTag(*a1, 0x54567350u);
  KeReleaseSpinLockFromDpcLevel(a3);
  KeAcquireSpinLockAtDpcLevel(v4 + 305);
  KeAcquireSpinLockAtDpcLevel(a3);
  if ( *a1 )
  {
    v9 = *a2;
    v10 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ObfDereferenceObjectWithTag(v4, 0x54567350u);
  }
  KeReleaseSpinLockFromDpcLevel(a3);
  KeReleaseSpinLockFromDpcLevel(v4 + 305);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
