/*
 * XREFs of RtlSetSecurityObjectEx @ 0x18008CEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(unsigned int a1, __int64 a2, __int64 *a3, int a4, __int64 a5, size_t a6)
{
  return RtlpSetSecurityObject(0LL, a1, a2, a3, a4, 0, a5, a6);
}
