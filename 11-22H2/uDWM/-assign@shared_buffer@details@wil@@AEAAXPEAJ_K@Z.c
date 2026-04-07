/*
 * XREFs of ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18009E284
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18009A934 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18009E350 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800158CC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::shared_buffer::assign(
        volatile signed __int32 **this,
        int *a2,
        volatile signed __int32 *a3)
{
  wil::details::shared_buffer::reset(this);
  if ( a2 )
  {
    *this = a2;
    this[1] = a3;
    _InterlockedIncrement(a2);
  }
}
