/*
 * XREFs of ?AddRef@CChannel@@UEAAKXZ @ 0x180106450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::AddRef(CChannel *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
