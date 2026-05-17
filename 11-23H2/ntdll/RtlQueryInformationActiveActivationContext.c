/*
 * XREFs of RtlQueryInformationActiveActivationContext @ 0x180083290
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 */

__int64 __fastcall RtlQueryInformationActiveActivationContext(int a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  return RtlQueryInformationActivationContext(1, 0LL, 0LL, a1, a2, a3, a4);
}
