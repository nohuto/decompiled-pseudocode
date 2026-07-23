/*
 * XREFs of sub_1406CE3EC @ 0x1406CE3EC
 * Callers:
 *     sub_1406800D0 @ 0x1406800D0 (sub_1406800D0.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_1407174E0 @ 0x1407174E0 (sub_1407174E0.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 */

__int64 __fastcall sub_1406CE3EC(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  WORK_QUEUE_TYPE v4; // r8d

  v1 = (volatile signed __int64 *)(a1 + 1680);
  ExAcquirePushLockExclusiveEx(a1 + 1680, 0LL);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 19;
  if ( **(_QWORD **)(a1 + 2936) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4800), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 21;
      sub_14071BBD8(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4816), v4);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return sub_1402AFC00((ULONG_PTR)v1);
}
