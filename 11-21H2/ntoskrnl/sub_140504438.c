/*
 * XREFs of sub_140504438 @ 0x140504438
 * Callers:
 *     sub_1405127BC @ 0x1405127BC (sub_1405127BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall sub_140504438(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rdx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v1 = (KSPIN_LOCK *)(a1 + 176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  *(_QWORD *)(a1 + 352) = 0LL;
  v4 = (_QWORD *)(a1 + 184);
  v5 = *(__int64 **)(a1 + 184);
  v6 = v3;
  if ( v5 == (__int64 *)(a1 + 184) )
  {
    v5 = 0LL;
    *(_BYTE *)(a1 + 216) = 0;
  }
  else
  {
    v7 = *v5;
    if ( (_QWORD *)v5[1] != v4 || *(__int64 **)(v7 + 8) != v5 )
      __fastfail(3u);
    *v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
  }
  KeReleaseSpinLockFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
