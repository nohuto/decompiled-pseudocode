/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x18007B6A4
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18007B910 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18007F2AC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 192));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 176));
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
