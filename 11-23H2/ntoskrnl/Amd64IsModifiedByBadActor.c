/*
 * XREFs of Amd64IsModifiedByBadActor @ 0x14045F2A0
 * Callers:
 *     <none>
 * Callees:
 *     Amd64IsModifiedByBadActorInternal @ 0x14045F2D2 (Amd64IsModifiedByBadActorInternal.c)
 */

__int64 __fastcall Amd64IsModifiedByBadActor(unsigned int a1, __int64 a2)
{
  return Amd64IsModifiedByBadActorInternal(a1, __readmsr(*((_DWORD *)&Amd64EventSelectRegisters + a1)), a2);
}
