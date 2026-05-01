/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1802D6A7C
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1802D6E60 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 24);
  wil::details::shared_buffer::reset(this + 22);
  *this = (volatile signed __int32 *)&std::exception::`vftable';
  o___std_exception_destroy_0();
}
