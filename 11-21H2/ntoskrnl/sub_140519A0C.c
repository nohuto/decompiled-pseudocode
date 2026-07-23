/*
 * XREFs of sub_140519A0C @ 0x140519A0C
 * Callers:
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140519A0C(__int64 a1, __int64 a2)
{
  char v3; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  KSPIN_LOCK *v7; // rsi
  char v8; // di
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+44h] [rbp+Ch]

  v15 = *(_DWORD *)(a2 + 48);
  v3 = 0;
  v16 = *(_DWORD *)(a2 + 16);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v7 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v5 - 2) <= 0xDu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v5 + 1)) - 1) & 0xFFFFFFFC;
    }
    v7 = (KSPIN_LOCK *)(a1 + 168);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
    v3 = 1;
  }
  v8 = sub_14042A5E0(*(_QWORD *)(a1 + 64), &v15);
  if ( v3 )
  {
    KeReleaseSpinLockFromDpcLevel(v7);
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
    __writecr8(CurrentIrql);
  }
  return v8;
}
