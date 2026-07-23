/*
 * XREFs of sub_14063D44C @ 0x14063D44C
 * Callers:
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 */

__int64 __fastcall sub_14063D44C(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( (dword_140C29FC0 & 0x800) != 0 && (dword_140C29FC0 & 0x10) != 0 && (unsigned int)sub_140AA144C((ULONG_PTR)a1, a2)
    || (unsigned int)dword_140D06884 > 1
    || (dword_140C0C864 & 1) == 0 )
  {
    return 0LL;
  }
  v4 = ExAcquireSpinLockShared(&dword_140D310C0);
  v5 = (__int64 *)qword_140C11750;
  v6 = v4;
  while ( v5 != &qword_140C11750 )
  {
    if ( v5 >= a1 && v5 < (__int64 *)((char *)a1 + a2) )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
        a1,
        a2);
      __debugbreak();
    }
    v5 = (__int64 *)*v5;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140D310C0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
