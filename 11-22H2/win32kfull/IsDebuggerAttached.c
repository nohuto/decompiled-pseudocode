/*
 * XREFs of IsDebuggerAttached @ 0x1C005FB64
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FAE4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B6A9C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B6D5C (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 223) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
