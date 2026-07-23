/*
 * XREFs of NtCompareSigningLevels @ 0x1407E7540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_140C37A00 )
    v2 = qword_140C37A00(FirstSigningLevel, SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}
