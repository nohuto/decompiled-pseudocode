/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18000C1D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x18000C6F0 (RtlCreateProcessParametersInternal.c)
 */

__int64 __fastcall RtlCreateProcessParametersEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  return RtlCreateProcessParametersInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, a11);
}
