/*
 * XREFs of ?Release@CCachedSTAObject@@UEAAKXZ @ 0x180043460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedSTAObject::Release(CCachedSTAObject *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
