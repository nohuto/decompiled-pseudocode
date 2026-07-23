/*
 * XREFs of KdDeregisterPowerHandler @ 0x140565030
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  __int64 v4; // rax
  void *v5; // rsi
  char v6; // di
  __int64 *v7; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 **v14; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140D00AD8);
  v4 = qword_140C404F0;
  v5 = 0LL;
  v6 = 0;
  if ( (__int64 *)qword_140C404F0 != &qword_140C404F0 )
  {
    while ( 1 )
    {
      v7 = *(__int64 **)v4;
      v5 = (void *)v4;
      if ( a1 == v4 )
        break;
      v4 = *(_QWORD *)v4;
      if ( v7 == &qword_140C404F0 )
        goto LABEL_8;
    }
    v14 = *(__int64 ***)(v4 + 8);
    if ( v7[1] != v4 || *v14 != (__int64 *)v4 )
      __fastfail(3u);
    *v14 = v7;
    v6 = 1;
    v7[1] = (__int64)v14;
  }
LABEL_8:
  KeReleaseSpinLockFromDpcLevel(&qword_140D00AD8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v6 )
    return 3221226021LL;
  ExFreePoolWithTag(v5, 0x6F49644Bu);
  return 0LL;
}
