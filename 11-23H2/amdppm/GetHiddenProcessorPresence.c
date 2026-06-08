/*
 * XREFs of GetHiddenProcessorPresence @ 0x1C00251A4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

__int64 GetHiddenProcessorPresence()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v2 = 0;
  v0 = 1;
  if ( (int)HvlQueryStartedProcessors(&v2, 0LL) >= 0 && (int)HvlQueryActiveProcessors(&v3, 0LL) >= 0 )
  {
    dword_1C0012DBC = v2;
    if ( v2 > v3 )
      return 2;
  }
  return v0;
}
