/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x140AE2E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACBAE0 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140C370B0 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvMmFreeContiguousMemory)(a1);
}
