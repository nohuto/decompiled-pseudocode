/*
 * XREFs of sub_14036CB28 @ 0x14036CB28
 * Callers:
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_140228CD0 @ 0x140228CD0 (sub_140228CD0.c)
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 *     sub_14032F0E0 @ 0x14032F0E0 (sub_14032F0E0.c)
 *     sub_1405839A4 @ 0x1405839A4 (sub_1405839A4.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036C9FC @ 0x14036C9FC (sub_14036C9FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036CB28(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rsi
  __int64 *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v12; // rcx
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = sub_1402CFEB0(a1);
  if ( (unsigned int)sub_14027B080(v6) == 1 )
  {
    v7 = *(_QWORD *)(v5 + 1368);
    v8 = (__int64 *)(v7 + 16);
  }
  else
  {
    v7 = 0LL;
    v8 = &qword_140C50658;
  }
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( v7 && (*(_BYTE *)(v7 + 377) & 6) == 2 )
    sub_14036C9FC(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v5 + 1838)) + 176LL) + 104LL),
      v3,
      a2);
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    v12 = (__int64)i + (v7 != 0 ? -1184LL : -1984LL);
    v13 = *(_DWORD *)(v12 + 1124);
    if ( (v13 & 0x800000) == 0 )
    {
      if ( (v13 & 0xC00) != 0 && (v13 & 0x80u) == 0 )
      {
        if ( v12 != v5 )
          sub_14036C9FC(v12, v3, a2);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(v12 + 1124), 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
