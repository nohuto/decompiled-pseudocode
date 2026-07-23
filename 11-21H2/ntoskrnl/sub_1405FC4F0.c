/*
 * XREFs of sub_1405FC4F0 @ 0x1405FC4F0
 * Callers:
 *     sub_1405FC690 @ 0x1405FC690 (sub_1405FC690.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405FC4F0(PEX_SPIN_LOCK SpinLock, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 *v5; // r8
  unsigned __int64 v6; // rsi
  __int64 i; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = a2;
  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = *(__int64 **)&SpinLock[2 * v2 + 8];
  v6 = v4;
  for ( i = v2; (v5[1] & 1) != 0; v5 = (__int64 *)*v5 )
    ;
  v8 = v5[1];
  *((_DWORD *)v5 + 2) |= 1u;
  ++*((_BYTE *)SpinLock + i + 80);
  ++*((_BYTE *)SpinLock + 86);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
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
  return v8;
}
