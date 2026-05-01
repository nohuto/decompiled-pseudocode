/*
 * XREFs of ?reset@shared_buffer@details@wil@@QAEXXZ @ 0x100026BA
 * Callers:
 *     ??0shared_buffer@details@wil@@QAE@ABV012@@Z @ 0x10002681 (--0shared_buffer@details@wil@@QAE@ABV012@@Z.c)
 *     ?create@shared_buffer@details@wil@@QAE_NPBXI@Z @ 0x100026F1 (-create@shared_buffer@details@wil@@QAE_NPBXI@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ??1ResultException@wil@@UAE@XZ @ 0x10002F10 (--1ResultException@wil@@UAE@XZ.c)
 * Callees:
 *     <none>
 */

void __thiscall wil::details::shared_buffer::reset(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // esi
  HANDLE ProcessHeap; // eax

  v2 = *this;
  if ( v2 )
  {
    if ( !_InterlockedExchangeAdd(v2, 0xFFFFFFFF) )
    {
      v3 = *this;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *this = 0;
    this[1] = 0;
  }
}
