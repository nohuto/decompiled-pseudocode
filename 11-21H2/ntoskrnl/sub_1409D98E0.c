/*
 * XREFs of sub_1409D98E0 @ 0x1409D98E0
 * Callers:
 *     <none>
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 */

__int64 __fastcall sub_1409D98E0(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a1 & 0xFFF) == 0 && a2 && (a2 & 0xFFF) == 0 )
    return MmSecureVirtualMemoryEx(a1, a2, 1, 14);
  return result;
}
