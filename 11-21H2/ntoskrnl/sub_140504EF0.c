/*
 * XREFs of sub_140504EF0 @ 0x140504EF0
 * Callers:
 *     sub_140517630 @ 0x140517630 (sub_140517630.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140504EF0(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // r14
  unsigned __int64 v7; // rsi
  char v8; // bp
  _QWORD *v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf

  v3 = (KSPIN_LOCK *)(a1 + 176);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  if ( *(_BYTE *)(a1 + 216) )
  {
    v8 = 0;
    if ( !a3 )
    {
      v9 = *(_QWORD **)(a1 + 192);
      if ( *v9 != a1 + 184 )
        __fastfail(3u);
      *a2 = a1 + 184;
      a2[1] = v9;
      *v9 = a2;
      *(_QWORD *)(a1 + 192) = a2;
    }
  }
  else
  {
    v8 = 1;
    *(_BYTE *)(a1 + 216) = 1;
  }
  KeReleaseSpinLockFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v8;
}
