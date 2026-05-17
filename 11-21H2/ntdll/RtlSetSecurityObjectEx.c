/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180092070
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(unsigned int a1, __int64 a2, __int64 *a3, char a4, __int64 a5, __int64 a6)
{
  return RtlpSetSecurityObject(0LL, a1, a2, a3, a4, 0, a5, a6);
}
