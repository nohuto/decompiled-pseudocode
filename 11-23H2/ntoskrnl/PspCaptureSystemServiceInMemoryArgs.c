/*
 * XREFs of PspCaptureSystemServiceInMemoryArgs @ 0x1409B4970
 * Callers:
 *     PspSyscallProviderServiceDispatch @ 0x140428DA0 (PspSyscallProviderServiceDispatch.c)
 *     PspSyscallProviderServiceDispatchGeneric @ 0x1409B5078 (PspSyscallProviderServiceDispatchGeneric.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureSystemServiceInMemoryArgs(char *Src, void *a2, unsigned __int8 a3)
{
  size_t v3; // r8

  v3 = 8LL * a3;
  if ( v3 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v3] > 0x7FFFFFFF0000LL || &Src[v3] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(a2, Src, v3);
  return 0LL;
}
