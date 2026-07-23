/*
 * XREFs of sub_1405DD4C0 @ 0x1405DD4C0
 * Callers:
 *     sub_1405D6B94 @ 0x1405D6B94 (sub_1405D6B94.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C850C @ 0x1405C850C (sub_1405C850C.c)
 */

__int64 __fastcall sub_1405DD4C0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  KSPIN_LOCK *v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C22FC0);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  if ( (unsigned int)v7 < dword_140C1CF34 )
  {
    v8 = *(KSPIN_LOCK **)(qword_140C1CF38 + 336 * v7 + 72);
    if ( v8 )
      sub_1405C850C(v8, a2, a3);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C22FC0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
