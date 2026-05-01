/*
 * XREFs of ??1ResultException@wil@@UAE@XZ @ 0x10002F10
 * Callers:
 *     ??_EResultException@wil@@UAEPAXI@Z @ 0x10002EE0 (--_EResultException@wil@@UAEPAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QAEXXZ @ 0x100026BA (-reset@shared_buffer@details@wil@@QAEXXZ.c)
 */

void __thiscall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 27);
  wil::details::shared_buffer::reset(this + 25);
  exception::~exception((exception *)this);
}
