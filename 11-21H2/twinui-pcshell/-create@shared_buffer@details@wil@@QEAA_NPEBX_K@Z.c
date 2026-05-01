/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1802D9E7C
 * Callers:
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1802DA550 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     memcpy_s @ 0x1800F7794 (memcpy_s.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1802D9E38 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
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
