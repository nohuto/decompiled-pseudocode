/*
 * XREFs of sub_140B0A508 @ 0x140B0A508
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 */

__int64 sub_140B0A508()
{
  ULONG_PTR v0; // rdi
  _QWORD *v1; // rcx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_140D051F8 )
    qword_140D051F8 = 0x100000LL;
  if ( !qword_140D051F0 )
    qword_140D051F0 = 0x2000LL;
  if ( !qword_140D051E8 )
    qword_140D051E8 = 0x10000LL;
  if ( !qword_140D051E0 )
    qword_140D051E0 = 4096LL;
  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  *(_QWORD *)(v0 + 1776) = 50LL;
  *(_QWORD *)(v0 + 1784) = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  *v1 = 0LL;
  sub_14036C868((__int64)v1, v0, 0);
  _InterlockedOr((volatile signed __int32 *)(v0 + 1124), 0x40000u);
  _InterlockedOr((volatile signed __int32 *)(v0 + 1124), 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v2 = (_QWORD *)qword_140C50660;
  v3 = (_QWORD *)(v0 + 1984);
  if ( *(__int64 **)qword_140C50660 != &qword_140C50658 )
    __fastfail(3u);
  *(_QWORD *)(v0 + 1992) = qword_140C50660;
  *v3 = &qword_140C50658;
  *v2 = v3;
  qword_140C50660 = v0 + 1984;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v12 = 0;
  return sub_14070A4FC(v0, 0LL, 0LL, &v12, 0);
}
