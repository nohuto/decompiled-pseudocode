/*
 * XREFs of ?create@shared_buffer@details@wil@@QAE_NPBXI@Z @ 0x100026F1
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UBEPBDXZ @ 0x10002E40 (-what@ResultException@wil@@UBEPBDXZ.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QAEXXZ @ 0x100026BA (-reset@shared_buffer@details@wil@@QAEXXZ.c)
 */

char __thiscall wil::details::shared_buffer::create(
        volatile signed __int32 **this,
        void *Source,
        volatile signed __int32 *DestinationSize)
{
  HANDLE ProcessHeap; // eax
  volatile signed __int32 *v6; // eax
  volatile signed __int32 *v7; // edi

  if ( DestinationSize )
  {
    ProcessHeap = GetProcessHeap();
    v6 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(DestinationSize + 1));
    v7 = v6;
    if ( v6 )
    {
      *v6 = 0;
      if ( Source )
        _memcpy_s((void *const)(v6 + 1), (const rsize_t)DestinationSize, Source, (const rsize_t)DestinationSize);
      wil::details::shared_buffer::reset(this);
      *this = v7;
      this[1] = DestinationSize;
      _InterlockedIncrement(v7);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    wil::details::shared_buffer::reset(this);
    return 1;
  }
}
