/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x140A0312C
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A02E2C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140A030B0 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeUnicodeString(P + 1);
  if ( P[2].Buffer )
    RtlFreeUnicodeString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
