/*
 * XREFs of ?AddRef@HamActivityWrapper@@UEAAKXZ @ 0x18001C330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamActivityWrapper::AddRef(HamActivityWrapper *this)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)this + 24) <= 1 )
    __fastfail(0xEu);
  return 2LL;
}
