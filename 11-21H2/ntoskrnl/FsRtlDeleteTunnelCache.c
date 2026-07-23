/*
 * XREFs of FsRtlDeleteTunnelCache @ 0x1407FC310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlDeleteTunnelCache(TUNNEL *Cache)
{
  __int64 v1; // r8
  LIST_ENTRY *p_TimerQueue; // rbx
  TUNNEL *Flink; // rax
  TUNNEL *v4; // rdi
  _SLIST_ENTRY *v5; // rcx

  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
  {
    p_TimerQueue = &Cache->TimerQueue;
    Cache->Cache = 0LL;
    Cache->NumEntries = 0;
    Flink = (TUNNEL *)Cache->TimerQueue.Flink;
    if ( Flink != (TUNNEL *)&Cache->TimerQueue )
    {
      do
      {
        v4 = *(TUNNEL **)&Flink->Mutex.Count;
        v5 = (_SLIST_ENTRY *)&Flink[-1].TimerQueue;
        if ( ((__int64)Flink->Mutex.Event.Header.WaitListHead.Flink & 1) != 0 )
          ExFreePoolWithTag(v5, 0);
        else
          sub_140203D50((__int64)&stru_140CF88C0, v5, v1);
        Flink = v4;
      }
      while ( v4 != (TUNNEL *)p_TimerQueue );
    }
    p_TimerQueue->Blink = p_TimerQueue;
    p_TimerQueue->Flink = p_TimerQueue;
  }
}
