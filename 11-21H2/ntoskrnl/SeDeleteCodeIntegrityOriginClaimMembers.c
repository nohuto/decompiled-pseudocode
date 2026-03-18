/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimMembers @ 0x14070EDE0
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimMembers())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1B970;
  if ( qword_140C1B970 )
    return (__int64 (*)(void))qword_140C1B970();
  return result;
}
