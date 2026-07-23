/*
 * XREFs of sub_1403936D8 @ 0x1403936D8
 * Callers:
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_1403936D8(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&dword_140C53070);
  v4 = (_QWORD *)qword_140C53068;
  while ( v4 )
  {
    if ( a1 > v4[3] )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v4[4] )
      {
        v2 = v4;
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C53070);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
