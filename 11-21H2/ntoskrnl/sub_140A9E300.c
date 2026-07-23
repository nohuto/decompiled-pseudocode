/*
 * XREFs of sub_140A9E300 @ 0x140A9E300
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

__int64 __fastcall sub_140A9E300(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r9
  int v14; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    if ( *(_BYTE *)(v5 + 8) )
    {
      if ( ++*(_DWORD *)(v4 + 96) == 1 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else
    {
      v7 = (*(_DWORD *)(v4 + 96))-- == 1;
      if ( v7 )
        *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    if ( (BYTE6(xmmword_140D06900[0]) & 1) != 0 )
      sub_14056E8CC((volatile signed __int64 *)(v4 + 88), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 88), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v10;
        if ( !v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = *((_QWORD *)v12 + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v7 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v7 )
            sub_140418E4C((__int64)v12);
        }
      }
    }
    __writecr8(v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
