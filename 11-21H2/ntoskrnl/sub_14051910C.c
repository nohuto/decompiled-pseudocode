/*
 * XREFs of sub_14051910C @ 0x14051910C
 * Callers:
 *     sub_140516D30 @ 0x140516D30 (sub_140516D30.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051910C(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  char v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // r10
  KSPIN_LOCK *v11; // rbp
  __int64 result; // rax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax

  v6 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v11 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v9);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v9 - 2) <= 0xDu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v9 + 1)) - 1) & 0xFFFFFFFC;
    }
    v11 = (KSPIN_LOCK *)(a1 + 168);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
    v8 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = sub_14042A5E0(*(_QWORD *)(a1 + 64), a2);
  if ( (_BYTE)result )
  {
    v13 = *(_QWORD *)(v6 + 8) == 0LL;
    *(_BYTE *)(v6 + 6) = 1;
    *(_DWORD *)(v6 + 32) = 2;
    if ( !v13 )
      result = sub_140345190(v6 + 40, 0LL, 0LL, 0LL, 0);
  }
  if ( v8 )
  {
    KeReleaseSpinLockFromDpcLevel(v11);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
