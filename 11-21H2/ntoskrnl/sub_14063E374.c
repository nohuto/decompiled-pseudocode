/*
 * XREFs of sub_14063E374 @ 0x14063E374
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_14063E374()
{
  KIRQL v0; // al
  __int64 *v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  struct _KPRCB *v12; // r9
  __int64 v13; // r8

  word_140C0C604 = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C116D0);
  v1 = (__int64 *)qword_140C116E0;
  v2 = v0;
  while ( v1 != &qword_140C116E0 )
  {
    *((_DWORD *)v1 - 12) = -65536;
    v1 = (__int64 *)*v1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C116D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C116F0);
  v9 = (__int64 *)qword_140C11700;
  v10 = v8;
  while ( v9 != &qword_140C11700 )
  {
    *((_DWORD *)v9 - 12) = -65536;
    v9 = (__int64 *)*v9;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C116F0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v13 = *((_QWORD *)v12 + 4375);
        v7 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C((__int64)v12);
      }
    }
  }
  __writecr8(v10);
  return result;
}
