/*
 * XREFs of ?Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ @ 0x1800E8890
 * Callers:
 *     ?Reset@CAnimationData@DirectComposition@@QEAAXXZ @ 0x18006409C (-Reset@CAnimationData@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CLegacyAnimationTrigger::Release(
        DirectComposition::CLegacyAnimationTrigger *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DirectComposition::CLegacyAnimationTrigger::`vftable';
    DirectComposition::CDevice::RemoveProxy(this);
  }
  return v1;
}
