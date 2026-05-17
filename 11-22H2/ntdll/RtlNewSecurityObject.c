/*
 * XREFs of RtlNewSecurityObject @ 0x1800862A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _BYTE *a2, __int64 *a3, char a4, __int64 a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6);
}
