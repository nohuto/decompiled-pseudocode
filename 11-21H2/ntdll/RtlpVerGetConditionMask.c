/*
 * XREFs of RtlpVerGetConditionMask @ 0x1800521F0
 * Callers:
 *     RtlSwitchedVVI @ 0x180051EB0 (RtlSwitchedVVI.c)
 *     RtlVerifyVersionInfo @ 0x180089A50 (RtlVerifyVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVerGetConditionMask(unsigned __int64 a1, unsigned int a2)
{
  int v3; // ecx
  char v4; // r8

  v3 = 0;
  do
  {
    v4 = v3++;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * v4)) & 7;
}
