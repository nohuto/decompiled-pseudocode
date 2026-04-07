/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180093F54
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1800940D0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180096A20 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 184));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 168));
  *(_QWORD *)this = &stdext::exception::`vftable';
}
