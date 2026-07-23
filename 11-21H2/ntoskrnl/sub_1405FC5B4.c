/*
 * XREFs of sub_1405FC5B4 @ 0x1405FC5B4
 * Callers:
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405FC5B4(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _QWORD *v7; // r9
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(_QWORD **)&SpinLock[2 * v4 + 8];
  v8 = v6;
  while ( 1 )
  {
    if ( !v7 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
      break;
    v7 = (_QWORD *)*v7;
  }
  *((_DWORD *)v7 + 2) &= ~1u;
  --*((_BYTE *)SpinLock + v4 + 80);
  v9 = 1;
  --*((_BYTE *)SpinLock + 86);
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v9;
}
