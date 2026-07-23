/*
 * XREFs of sub_1405344FC @ 0x1405344FC
 * Callers:
 *     sub_140534970 @ 0x140534970 (sub_140534970.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall sub_1405344FC(__int64 *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 **v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v5 = a1[2];
  v6 = *(__int64 **)(v5 + 24);
  if ( a1 == v6 )
    v6 = *(__int64 **)(v5 + 32);
  if ( *((_BYTE *)v6 + 72) || (v7 = *v6, (__int64 *)*v6 == v6) )
  {
    v6 = 0LL;
  }
  else
  {
    v8 = (__int64 **)v6[1];
    if ( *(__int64 **)(v7 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
  }
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v6;
}
