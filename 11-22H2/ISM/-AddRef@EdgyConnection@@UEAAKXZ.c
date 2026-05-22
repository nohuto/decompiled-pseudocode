/*
 * XREFs of ?AddRef@EdgyConnection@@UEAAKXZ @ 0x18002BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgyConnection::AddRef(EdgyConnection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
