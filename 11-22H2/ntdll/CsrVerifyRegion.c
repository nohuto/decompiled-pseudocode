/*
 * XREFs of CsrVerifyRegion @ 0x1800D6630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CsrVerifyRegion(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r8
  void *ReadOnlySharedMemoryBase; // r9
  bool result; // al

  result = !LdrpIsSecureProcess
        && (v2 = a2 + a1 - 1, v2 >= a1)
        && (ReadOnlySharedMemoryBase = NtCurrentPeb()->ReadOnlySharedMemoryBase,
            v2 <= (unsigned __int64)ReadOnlySharedMemoryBase + CsrReadOnlySharedMemorySize - 1)
        && a1 >= (unsigned __int64)ReadOnlySharedMemoryBase;
  return result;
}
