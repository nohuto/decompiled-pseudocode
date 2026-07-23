/*
 * XREFs of ExReleaseSpinLockShared @ 0x140222080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

void __stdcall ExReleaseSpinLockShared(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v7; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = OldIrql;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14063D8E0(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v4 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v5 = *(_DWORD *)(v4 + 24) - 1;
      *(_DWORD *)(v4 + 24) = v5;
      if ( !v5 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = *((_QWORD *)v7 + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(v7);
      }
    }
  }
  __writecr8(v2);
}
