/*
 * XREFs of sub_1402234C0 @ 0x1402234C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D56AC @ 0x1402D56AC (sub_1402D56AC.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402234C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf
  void *v15; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  while ( 1 )
  {
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 )
    {
      *(_DWORD *)(v2 + 16) = v7 - 1;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 20);
      if ( v8 )
      {
        v6 = -1;
        *(_DWORD *)(v2 + 20) = v8 - 1;
      }
      else
      {
        v9 = *(_QWORD *)(v2 + 32);
        a1 = 0LL;
        --*(_DWORD *)(v2 + 12);
        *a2 = v9;
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v3 = 1;
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
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= result;
          if ( v14 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !a1 )
      break;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 1953261124LL) )
    {
      v15 = *(void **)(v2 + 40);
      sub_1402F6750((_DWORD)v15, *(_QWORD *)(v2 + 48), v6, a1, 0);
      result = ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      break;
    }
  }
  if ( v3 )
    return sub_1402D56AC((PVOID)v2);
  return result;
}
