/*
 * XREFs of sub_14037E128 @ 0x14037E128
 * Callers:
 *     sub_14024FDF0 @ 0x14024FDF0 (sub_14024FDF0.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_14037E048 @ 0x14037E048 (sub_14037E048.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059BFB0 @ 0x14059BFB0 (sub_14059BFB0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_DWORD *__fastcall sub_14037E128(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rsi
  volatile LONG *v4; // rbp
  __int64 v5; // rbx
  KIRQL v7; // di
  int v8; // r15d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v3 = *a2;
  v4 = (volatile LONG *)(a1 + 232);
  v5 = 0LL;
  if ( a3 )
    v7 = 0;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v8 = --*v3;
  if ( !a3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  if ( !v8 )
    return v3;
  return (_DWORD *)v5;
}
