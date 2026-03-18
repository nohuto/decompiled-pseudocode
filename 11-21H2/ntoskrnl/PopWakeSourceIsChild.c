/*
 * XREFs of PopWakeSourceIsChild @ 0x14098F4D4
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140A6B1E0 (PopProcessWakeSourceWork.c)
 * Callees:
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 */

char __fastcall PopWakeSourceIsChild(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // di

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  while ( (PVOID)v2 != IopRootDeviceNode && v2 )
  {
    if ( *(_WORD *)(v2 + 40) == *(_WORD *)a2
      && !wcsncmp(
            *(const wchar_t **)(v2 + 48),
            *(const wchar_t **)(a2 + 8),
            (unsigned __int64)*(unsigned __int16 *)(v2 + 40) >> 1) )
    {
      return 1;
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  return v4;
}
