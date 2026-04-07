/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18009E350
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009DA14 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18009E760 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800158CC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memcpy_s @ 0x180016BE0 (memcpy_s.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18009E284 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

bool __fastcall wil::details::shared_buffer::create(
        volatile signed __int32 **this,
        const void *Source,
        volatile signed __int32 *a3)
{
  HANDLE ProcessHeap; // rax
  int *v7; // rax
  int *v8; // rbx

  if ( !a3 )
  {
    wil::details::shared_buffer::reset(this);
LABEL_7:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  ProcessHeap = GetProcessHeap();
  v7 = (int *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(a3 + 1));
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( Source )
      memcpy_s(v7 + 1, (const rsize_t)a3, Source, (const rsize_t)a3);
    wil::details::shared_buffer::assign(this, v8, a3);
    goto LABEL_7;
  }
  return (char)v7;
}
