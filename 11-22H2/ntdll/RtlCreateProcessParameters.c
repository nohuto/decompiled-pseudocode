/*
 * XREFs of RtlCreateProcessParameters @ 0x1800E1890
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateProcessParametersInternal @ 0x180057F70 (RtlCreateProcessParametersInternal.c)
 */

__int64 __fastcall RtlCreateProcessParameters(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10)
{
  return RtlCreateProcessParametersInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, 0);
}
