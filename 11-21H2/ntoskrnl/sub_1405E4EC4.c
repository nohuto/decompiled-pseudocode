/*
 * XREFs of sub_1405E4EC4 @ 0x1405E4EC4
 * Callers:
 *     sub_1405E4840 @ 0x1405E4840 (sub_1405E4840.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405E4E04 @ 0x1405E4E04 (sub_1405E4E04.c)
 */

KSPIN_LOCK __fastcall sub_1405E4EC4(PKSPIN_LOCK SpinLock, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // r14
  __int64 v6; // rdx
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rbp
  KSPIN_LOCK i; // rbx
  _SLIST_ENTRY *v11; // rax
  __int16 v12; // cx
  __int64 v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *((_DWORD *)SpinLock + 180);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)SpinLock + 44, 1u);
  v9 = &SpinLock[3 * (unsigned int)v6];
  *((_BYTE *)v9 + 744) = KeAcquireSpinLockRaiseToDpc(v9 + 92);
  for ( i = SpinLock[v8 + 91]; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  v11 = sub_1405E4E04((volatile signed __int32 *)SpinLock, *(_WORD *)(a2 + 14));
  i = (KSPIN_LOCK)v11;
  if ( !v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)SpinLock + 50, 1u);
    goto LABEL_11;
  }
  memmove(&v11[1], (const void *)(a2 + 16), v4);
  v12 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v12;
  v13 = 3LL * (a3 % *((_DWORD *)SpinLock + 180));
  *(_QWORD *)i = SpinLock[3 * (a3 % *((_DWORD *)SpinLock + 180)) + 91];
  SpinLock[v13 + 91] = i;
LABEL_8:
  v14 = *(_WORD *)(i + 8);
  if ( (v14 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v14 ^ (v14 ^ (v14 + 1)) & 0x7FF;
LABEL_11:
  v15 = *((unsigned __int8 *)v9 + 744);
  KeReleaseSpinLockFromDpcLevel(v9 + 92);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return i;
}
