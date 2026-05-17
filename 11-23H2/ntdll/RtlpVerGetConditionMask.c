/*
 * XREFs of RtlpVerGetConditionMask @ 0x18004A1F8
 * Callers:
 *     RtlSwitchedVVI @ 0x180049DC0 (RtlSwitchedVVI.c)
 *     RtlVerifyVersionInfo @ 0x1800852D0 (RtlVerifyVersionInfo.c)
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
