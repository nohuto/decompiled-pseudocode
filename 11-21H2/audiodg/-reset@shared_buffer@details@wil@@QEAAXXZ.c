/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x14004F5C4
 * Callers:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x14004D684 (--1ResultException@wil@@UEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x14004EDF4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x14004F480 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x14004F4C4 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *this;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}
