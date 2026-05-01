/*
 * XREFs of ??0ResultException@wil@@QAE@ABV01@@Z @ 0x10002F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0shared_buffer@details@wil@@QAE@ABV012@@Z @ 0x10002681 (--0shared_buffer@details@wil@@QAE@ABV012@@Z.c)
 */

wil::ResultException *__thiscall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  exception::exception(this, a2);
  *(_DWORD *)this = &wil::ResultException::`vftable';
  qmemcpy((char *)this + 12, (char *)a2 + 12, 0x58u);
  wil::details::shared_buffer::shared_buffer(
    (wil::ResultException *)((char *)this + 100),
    (const struct wil::ResultException *)((char *)a2 + 100));
  wil::details::shared_buffer::shared_buffer(
    (wil::ResultException *)((char *)this + 108),
    (const struct wil::ResultException *)((char *)a2 + 108));
  return this;
}
