/*
 * XREFs of sub_1405A7258 @ 0x1405A7258
 * Callers:
 *     sub_1402307A0 @ 0x1402307A0 (sub_1402307A0.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_140279D30 @ 0x140279D30 (sub_140279D30.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_BOOL8 __fastcall sub_1405A7258(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  _QWORD **v2; // rdi
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf

  v1 = *a1;
  if ( (unsigned int)sub_140366FB0(*a1) == 32 )
    return 0LL;
  v2 = (_QWORD **)&unk_140C4F080;
  v3 = ExAcquireSpinLockShared(&dword_140C4F078);
  while ( 1 )
  {
    v4 = *v2;
    while ( v4 )
    {
      if ( v1 <= v4[4] )
      {
        if ( v1 >= v4[3] )
          goto LABEL_14;
        v4 = (_QWORD *)*v4;
      }
      else
      {
        v4 = (_QWORD *)v4[1];
      }
    }
    if ( v2 != (_QWORD **)&unk_140C4F080 )
      break;
    v5 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (*(_DWORD *)(v5 + 1124) & 0x10000) == 0 )
      break;
    v2 = (_QWORD **)(*(_QWORD *)(v5 + 1368) + 840LL);
  }
LABEL_14:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F078);
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
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4 != 0;
}
