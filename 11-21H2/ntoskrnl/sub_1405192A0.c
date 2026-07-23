/*
 * XREFs of sub_1405192A0 @ 0x1405192A0
 * Callers:
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517BAC @ 0x140517BAC (sub_140517BAC.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405192A0(__int64 a1, unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int8 CurrentIrql; // si
  char v5; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf

  BugCheckParameter4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v7 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
    }
    v8 = (KSPIN_LOCK *)(a1 + 168);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
    v5 = 1;
  }
  v9 = *(_QWORD *)(a1 + 56) + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v9 + 6) && *(_QWORD *)(v9 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(a1 + 32), BugCheckParameter4);
  result = sub_14042A5E0(*(_QWORD *)(a1 + 64), (unsigned int)BugCheckParameter4);
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_BYTE *)(v9 + 6) = 0;
  if ( v5 )
  {
    KeReleaseSpinLockFromDpcLevel(v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
