/*
 * XREFs of sub_1C0019DB4 @ 0x1C0019DB4
 * Callers:
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 * Callees:
 *     sub_1C00666BC @ 0x1C00666BC (sub_1C00666BC.c)
 *     sub_1C0066C50 @ 0x1C0066C50 (sub_1C0066C50.c)
 */

__int64 __fastcall sub_1C0019DB4(__int64 a1, char a2)
{
  unsigned int v2; // esi
  char v4; // al
  KSPIN_LOCK *v5; // rcx
  signed __int32 v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 904);
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    v5 = *(KSPIN_LOCK **)(a1 + 896);
    if ( v5 )
    {
      if ( v2 > 1 )
      {
        v4 = sub_1C00666BC(a1);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
        v4 = 1;
      }
    }
  }
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 924), 0xFFFFFFFF);
  if ( v4 )
  {
    if ( v2 > 1 )
      sub_1C0066C50(a1);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return (unsigned int)(v6 - 1);
}
