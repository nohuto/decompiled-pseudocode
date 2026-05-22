/*
 * XREFs of ?GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ @ 0x1800E8B78
 * Callers:
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 * Callees:
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationData::GetLastPrimitiveEndTime(DirectComposition::CAnimationData *this)
{
  struct DwmAnimationPrimitive *v2; // rax

  v2 = DirectComposition::CAnimationData::PrimitiveAtIndex(this, *((_QWORD *)this + 4) - 1LL);
  if ( *(_DWORD *)v2 == 4 || *(_DWORD *)v2 == 6 )
    return *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(this, *((_QWORD *)this + 4) - 1LL) + 1);
  else
    return 0x7FFFFFFFFFFFFFFFLL;
}
