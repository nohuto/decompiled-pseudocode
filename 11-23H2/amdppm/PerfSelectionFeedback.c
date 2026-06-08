/*
 * XREFs of PerfSelectionFeedback @ 0x1C0001EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionFeedback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = *(_DWORD *)(a1 + 104);
  return 100LL;
}
