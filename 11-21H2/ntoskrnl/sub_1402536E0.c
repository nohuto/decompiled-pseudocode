/*
 * XREFs of sub_1402536E0 @ 0x1402536E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025298C @ 0x14025298C (sub_14025298C.c)
 *     sub_14025383C @ 0x14025383C (sub_14025383C.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140683844 @ 0x140683844 (sub_140683844.c)
 */

__int64 __fastcall sub_1402536E0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  KSPIN_LOCK *v5; // r12
  KIRQL v6; // bp
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  KIRQL v16; // [rsp+60h] [rbp+8h]
  unsigned __int64 v17; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 1296);
  if ( (*(_DWORD *)(a1 + 1124) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 1124) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1512) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 1048) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2440);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
    v16 = v6;
    v17 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2448);
    if ( v7 != (_QWORD *)(a1 + 2448) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      do
      {
        v9 = v7 - 36;
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
        {
          sub_14025298C((__int64)(v7 - 36), v8, v17, 0);
        }
        else
        {
          KeAcquireSpinLockAtDpcLevel(v9 + 8);
          sub_14025383C((PKTIMER)(v7 - 36));
          KeReleaseSpinLockFromDpcLevel(v9 + 8);
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 2448) );
      v6 = v16;
      v5 = (KSPIN_LOCK *)(a1 + 2440);
    }
    KeReleaseSpinLockFromDpcLevel(v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  sub_140683844(a1, a2[2], 0LL);
  return 0LL;
}
