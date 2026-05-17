/*
 * XREFs of RtlNewSecurityObject @ 0x18000E5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0, 0, a4, 0, a5, a6);
}
