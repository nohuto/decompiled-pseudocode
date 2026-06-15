/*
 * XREFs of ?AddRef@CPrivateAPO@@UEAAKXZ @ 0x14002E750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrivateAPO::AddRef(CPrivateAPO *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 3);
}
