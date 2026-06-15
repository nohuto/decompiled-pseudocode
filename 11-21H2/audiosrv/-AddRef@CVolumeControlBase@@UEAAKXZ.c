/*
 * XREFs of ?AddRef@CVolumeControlBase@@UEAAKXZ @ 0x18003A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeControlBase::AddRef(CVolumeControlBase *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 60);
}
