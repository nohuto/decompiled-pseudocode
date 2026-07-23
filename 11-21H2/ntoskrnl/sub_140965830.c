/*
 * XREFs of sub_140965830 @ 0x140965830
 * Callers:
 *     <none>
 * Callees:
 *     PsGetVersion @ 0x14025B4D0 (PsGetVersion.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

BOOLEAN __fastcall sub_140965830(ULONG *a1, ULONG *a2, ULONG *a3, UNICODE_STRING *a4)
{
  BOOLEAN Version; // bp

  Version = PsGetVersion(a1, a2, a3, 0LL);
  if ( a1 )
    *a1 = 6;
  if ( a2 )
    *a2 = 1;
  if ( a3 )
    *a3 = 7600;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return Version;
}
