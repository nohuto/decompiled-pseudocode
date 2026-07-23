/*
 * XREFs of sub_1409659F0 @ 0x1409659F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetVersion @ 0x14025B4D0 (PsGetVersion.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

BOOLEAN __fastcall sub_1409659F0(ULONG *a1, ULONG *a2, ULONG *a3, UNICODE_STRING *a4)
{
  BOOLEAN Version; // bp

  Version = PsGetVersion(a1, a2, a3, 0LL);
  if ( a1 )
    *a1 = 6;
  if ( a2 )
    *a2 = 2;
  if ( a3 )
    *a3 = 9200;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return Version;
}
