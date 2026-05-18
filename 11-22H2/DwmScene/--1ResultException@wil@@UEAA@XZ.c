/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x18000D5E4
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18000D670 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18000FDB4 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 184));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 168));
  *(_QWORD *)this = &stdext::exception::`vftable';
}
