/*
 * XREFs of CcAdjustBcbDepth @ 0x14042C310
 * Callers:
 *     CcBcbProfiler @ 0x1403EAC70 (CcBcbProfiler.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAdjustBcbDepth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  _mm_lfence();
  return a6(a1);
}
