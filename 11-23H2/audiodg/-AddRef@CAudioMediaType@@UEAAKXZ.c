/*
 * XREFs of ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140029A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::AddRef(CAudioMediaType *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
