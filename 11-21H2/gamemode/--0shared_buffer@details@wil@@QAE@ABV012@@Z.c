/*
 * XREFs of ??0shared_buffer@details@wil@@QAE@ABV012@@Z @ 0x10002681
 * Callers:
 *     ??0ResultException@wil@@QAE@ABV01@@Z @ 0x10002F80 (--0ResultException@wil@@QAE@ABV01@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QAEXXZ @ 0x100026BA (-reset@shared_buffer@details@wil@@QAEXXZ.c)
 */

wil::details::shared_buffer *__thiscall wil::details::shared_buffer::shared_buffer(
        wil::details::shared_buffer *this,
        const struct wil::details::shared_buffer *a2)
{
  int v3; // ebx
  volatile signed __int32 *v4; // edi

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *(volatile signed __int32 **)a2;
  wil::details::shared_buffer::reset(this);
  if ( v4 )
  {
    *(_DWORD *)this = v4;
    *((_DWORD *)this + 1) = v3;
    _InterlockedIncrement(v4);
  }
  return this;
}
