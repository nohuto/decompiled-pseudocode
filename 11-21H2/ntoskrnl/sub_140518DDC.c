/*
 * XREFs of sub_140518DDC @ 0x140518DDC
 * Callers:
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140518DDC(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
  v7 = *(_QWORD **)(a1 + 24);
  v8 = (_QWORD *)(a2 + 456);
  if ( *v7 != a1 + 16 )
    __fastfail(3u);
  *v8 = a1 + 16;
  *(_QWORD *)(a2 + 464) = v7;
  *v7 = v8;
  *(_QWORD *)(a1 + 24) = v8;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 168));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
