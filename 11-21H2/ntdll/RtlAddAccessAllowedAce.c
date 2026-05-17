/*
 * XREFs of RtlAddAccessAllowedAce @ 0x18004A9A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180047FD8 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(char *a1, unsigned int a2, int a3, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 0);
}
