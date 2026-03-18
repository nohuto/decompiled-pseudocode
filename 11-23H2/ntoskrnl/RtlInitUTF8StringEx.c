/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405A7640
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374680 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
