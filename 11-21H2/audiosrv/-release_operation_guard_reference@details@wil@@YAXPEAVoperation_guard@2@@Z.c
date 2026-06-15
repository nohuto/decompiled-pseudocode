/*
 * XREFs of ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x180064E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::release_operation_guard_reference(wil::details *this, struct wil::operation_guard *a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)this = 1;
    WakeByAddressAll(this);
  }
}
