/*
 * XREFs of LdrpInitializeProcessWrapperFilter @ 0x1800DEA60
 * Callers:
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeProcessWrapperFilter(const void **a1, _DWORD *a2)
{
  int v4; // ebx
  bool v5; // sf
  __int64 result; // rax

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    2658,
    (__int64)"LdrpInitializeProcessWrapperFilter",
    0,
    "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    *(_DWORD *)*a1,
    *a1,
    a1[1]);
  v4 = 0;
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  v5 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) < 0;
  result = 1LL;
  LOBYTE(v4) = !v5;
  *a2 = v4;
  return result;
}
