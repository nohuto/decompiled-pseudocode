/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x14004B4D4
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x14004B6E0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x14004ED24 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 192));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 176));
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
