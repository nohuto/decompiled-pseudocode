/*
 * XREFs of ?AddRef@CCachedSTAObject@@UEAAKXZ @ 0x18002FB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedSTAObject::AddRef(CCachedSTAObject *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
