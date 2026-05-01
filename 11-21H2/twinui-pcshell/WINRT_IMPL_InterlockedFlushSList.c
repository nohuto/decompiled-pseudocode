/*
 * XREFs of WINRT_IMPL_InterlockedFlushSList @ 0x18018F6B5
 * Callers:
 *     DllCanUnloadNow @ 0x1801789B0 (DllCanUnloadNow.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall WINRT_IMPL_InterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return InterlockedFlushSList(ListHead);
}
