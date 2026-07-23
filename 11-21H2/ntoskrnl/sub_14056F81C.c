/*
 * XREFs of sub_14056F81C @ 0x14056F81C
 * Callers:
 *     sub_1405402EC @ 0x1405402EC (sub_1405402EC.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14056F81C(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r9
  KSPIN_LOCK *v7; // rbx
  __int64 v8; // rbp
  _QWORD *i; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax

  v4 = qword_140D088C0[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v7 = (KSPIN_LOCK *)(v4 + 13136);
  v8 = 2LL;
  do
  {
    KeAcquireSpinLockAtDpcLevel(v7);
    for ( i = (_QWORD *)*(v7 - 2); i; i = (_QWORD *)*i )
      sub_14042A5E0(a3 + 0x4000, i - 1);
    KeReleaseSpinLockFromDpcLevel(v7);
    v7 += 6;
    --v8;
  }
  while ( v8 );
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
