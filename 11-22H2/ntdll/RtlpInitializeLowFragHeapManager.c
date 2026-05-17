/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x1800AF0B0
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180045730 (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 */

int RtlpInitializeLowFragHeapManager()
{
  unsigned int v0; // ebx
  int result; // eax
  char v2; // cl
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v4; // [rsp+58h] [rbp-20h]

  v0 = 1;
  RtlpLFHKey = RtlpHeapGenerateRandomValue64();
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (unsigned int)v4 > 1 )
    {
      do
        ++v2;
      while ( (unsigned int)v4 >> v2 > 1 );
    }
    result = -(1 << v2) & ((1LL << v2) + v4 - 1);
    if ( (unsigned int)result > 0x40 )
      result = 64;
    v0 = result;
  }
  RtlpDefaultHeapDebuggingOptions = 0LL;
  RtlpAffinityState[0] = v0;
  xmmword_1801830B0 = 0LL;
  xmmword_1801830C0 = 0LL;
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
    dword_1801830AC = result;
  }
  return result;
}
