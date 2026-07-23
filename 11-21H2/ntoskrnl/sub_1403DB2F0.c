/*
 * XREFs of sub_1403DB2F0 @ 0x1403DB2F0
 * Callers:
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403DB3E0 @ 0x1403DB3E0 (sub_1403DB3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1403DB2F0()
{
  __int64 v0; // rcx
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  if ( !byte_140D068BE )
  {
    LOBYTE(v0) = 1;
    qword_140C2B888 = (__int64)&qword_140C2B880;
    qword_140C2B880 = (__int64)&qword_140C2B880;
    sub_1403DB3E0(v0);
    qword_140C2BD08 = MEMORY[0xFFFFF78000000320] + (unsigned int)dword_140D06B90;
    if ( (_DWORD)dword_140D06884 )
    {
      v1 = qword_140D088C0;
      v2 = (unsigned int)dword_140D06884;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 34192) = v3 + 34184;
        *(_QWORD *)(v3 + 34184) = v3 + 34184;
        *(_DWORD *)(v3 + 216) = 424 * *(_DWORD *)(v3 + 36) + 128;
        *(_QWORD *)(v3 + 34520) = qword_140C2BD08;
        --v2;
      }
      while ( v2 );
    }
    byte_140D068BE = 1;
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
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
